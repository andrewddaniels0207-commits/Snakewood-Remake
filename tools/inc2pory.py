#!/usr/bin/env python3
"""
inc2pory.py - Convert pokeemerald-expansion scripts.inc files to poryscript format.

Usage:
    python3 tools/inc2pory.py [--dry-run] [--map MAPNAME] [--all]

By default, converts all maps that have scripts.inc but no scripts.pory.
"""

import os
import re
import sys
import argparse
from pathlib import Path

# Maps that already have .pory files - skip these
SKIP_MAPS = {'LittlerootTown', 'OldaleTown', 'Route101', 'Route102', 'Route103'}

# Movement step commands
MOVEMENT_CMDS = {
    'walk_up', 'walk_down', 'walk_left', 'walk_right',
    'walk_in_place_up', 'walk_in_place_down', 'walk_in_place_left', 'walk_in_place_right',
    'walk_in_place_faster_up', 'walk_in_place_faster_down', 'walk_in_place_faster_left', 'walk_in_place_faster_right',
    'walk_in_place_fastest_up', 'walk_in_place_fastest_down', 'walk_in_place_fastest_left', 'walk_in_place_fastest_right',
    'walk_fast_up', 'walk_fast_down', 'walk_fast_left', 'walk_fast_right',
    'walk_faster_up', 'walk_faster_down', 'walk_faster_left', 'walk_faster_right',
    'walk_slow_up', 'walk_slow_down', 'walk_slow_left', 'walk_slow_right',
    'run_up', 'run_down', 'run_left', 'run_right',
    'jump_up', 'jump_down', 'jump_left', 'jump_right',
    'jump_in_place_up', 'jump_in_place_down', 'jump_in_place_left', 'jump_in_place_right',
    'jump_in_place_up_down', 'jump_in_place_down_up', 'jump_in_place_left_right', 'jump_in_place_right_left',
    'face_up', 'face_down', 'face_left', 'face_right',
    'face_player',
    'delay_1', 'delay_2', 'delay_4', 'delay_8', 'delay_16', 'delay_32',
    'slide_up', 'slide_down', 'slide_left', 'slide_right',
    'slide_fast_up', 'slide_fast_down', 'slide_fast_left', 'slide_fast_right',
    'slide_fastest_up', 'slide_fastest_down', 'slide_fastest_left', 'slide_fastest_right',
    'set_invisible', 'set_visible',
    'emote_question_mark', 'emote_exclamation_mark', 'emote_happy', 'emote_sad',
    'emote_heart', 'emote_stagger', 'emote_z', 'emote_double_excl_mark',
    'emote_sweat_drop', 'emote_music', 'emote_flower', 'emote_anger',
    'step_end',
    # Some movement scripts use these
    'walk_normal_right', 'walk_normal_left', 'walk_normal_up', 'walk_normal_down',
    'walk_normal_diagonal_up_right', 'walk_normal_diagonal_up_left',
    'walk_normal_diagonal_down_right', 'walk_normal_diagonal_down_left',
}

# Commands that get no-paren treatment in script blocks
NO_PAREN_CMDS = {
    'end', 'return', 'lock', 'release', 'lockall', 'releaseall',
    'closemessage', 'faceplayer', 'waitstate', 'nop', 'nop1',
}

# Conditional goto/call command patterns
GOTO_IF_SET = re.compile(r'^goto_if_set\s+(\S+),\s+(\S+)$')
GOTO_IF_UNSET = re.compile(r'^goto_if_unset\s+(\S+),\s+(\S+)$')
CALL_IF_SET = re.compile(r'^call_if_set\s+(\S+),\s+(\S+)$')
CALL_IF_UNSET = re.compile(r'^call_if_unset\s+(\S+),\s+(\S+)$')

GOTO_IF_CMP = re.compile(r'^(goto|call)_if_(eq|ne|lt|gt|le|ge)\s+(\S+),\s+(\S+),\s+(\S+)$')

CMP_MAP = {'eq': '==', 'ne': '!=', 'lt': '<', 'gt': '>', 'le': '<=', 'ge': '>='}


def strip_comment(line):
    """Remove @ comment from a line."""
    # Handle @ comments but not within strings
    idx = line.find('@')
    if idx >= 0:
        return line[:idx].rstrip()
    return line


def is_movement_line(line):
    """Check if a line is a movement command."""
    line = strip_comment(line).strip()
    if not line:
        return False
    # Get just the command name (first token)
    parts = line.split()
    if not parts:
        return False
    cmd = parts[0]
    return cmd in MOVEMENT_CMDS


def classify_block(label, lines):
    """
    Classify a block by its label and content.
    Returns one of: 'mapscripts', 'frametable', 'warptable', 'text', 'movement', 'script', 'raw'
    """
    content = '\n'.join(lines)

    # MapScripts block
    if label.endswith('_MapScripts') or 'map_script MAP_SCRIPT_' in content:
        return 'mapscripts'

    # Frame table (has map_script_2 entries)
    if 'map_script_2' in content:
        return 'frametable'

    # Warp table
    if 'warp_table_entry' in content:
        return 'warptable'

    # Text block
    if '.string' in content:
        return 'text'

    # Movement block - all non-empty, non-comment lines are movement commands
    non_empty = [l.strip() for l in lines if strip_comment(l).strip()]
    if non_empty and all(is_movement_line(l) or l.startswith('@') for l in lines if l.strip()):
        # Double-check: must have step_end
        if any('step_end' in l for l in lines):
            return 'movement'

    # Default to script
    return 'script'


def convert_command(cmd_line):
    """Convert a single script command line to poryscript format."""
    line = strip_comment(cmd_line).strip()
    if not line:
        return None

    # Skip assembly directives and C preprocessor line-number markers (# N "file")
    if line.startswith('.') or line.startswith('#'):
        return None

    # Check for conditional flag goto/call
    # Poryscript requires braces around if-bodies: if (cond) { action }
    m = GOTO_IF_SET.match(line)
    if m:
        flag, label = m.group(1), m.group(2)
        return f'if (flag({flag})) {{\n        goto({label})\n    }}'

    m = GOTO_IF_UNSET.match(line)
    if m:
        flag, label = m.group(1), m.group(2)
        return f'if (!flag({flag})) {{\n        goto({label})\n    }}'

    m = CALL_IF_SET.match(line)
    if m:
        flag, label = m.group(1), m.group(2)
        return f'if (flag({flag})) {{\n        call({label})\n    }}'

    m = CALL_IF_UNSET.match(line)
    if m:
        flag, label = m.group(1), m.group(2)
        return f'if (!flag({flag})) {{\n        call({label})\n    }}'

    # Check for var comparison goto/call
    m = GOTO_IF_CMP.match(line)
    if m:
        action, cmp, var, val, label = m.group(1), m.group(2), m.group(3), m.group(4), m.group(5)
        op = CMP_MAP[cmp]
        if action == 'goto':
            return f'if (var({var}) {op} {val}) {{\n        goto({label})\n    }}'
        else:
            return f'if (var({var}) {op} {val}) {{\n        call({label})\n    }}'

    # Split into command and args
    parts = line.split(None, 1)
    if not parts:
        return None

    cmd = parts[0]
    args = parts[1] if len(parts) > 1 else ''

    # No-paren commands
    if cmd in NO_PAREN_CMDS:
        return cmd

    # goto and call get special treatment
    if cmd == 'goto' and args:
        return f'goto({args.strip()})'
    if cmd == 'call' and args:
        return f'call({args.strip()})'

    # Everything else gets parens
    if args:
        return f'{cmd}({args.strip()})'
    else:
        return f'{cmd}()'


def parse_inc_file(inc_path):
    """
    Parse an .inc file into a list of (label, is_double_colon, lines) tuples.
    Also returns the order of labels.
    """
    with open(inc_path, 'r', encoding='utf-8', errors='replace') as f:
        raw_lines = f.readlines()

    blocks = []  # list of [label, is_double, lines]
    current_label = None
    current_double = False
    current_lines = []
    preamble = []  # lines before any label

    label_re = re.compile(r'^([A-Za-z_][A-Za-z0-9_]*)(::?)\s*(?:@.*)?$')

    for line in raw_lines:
        stripped = line.rstrip('\n')

        m = label_re.match(stripped)
        if m and not stripped.startswith('\t') and not stripped.startswith(' '):
            # This is a new label
            if current_label is not None:
                blocks.append([current_label, current_double, current_lines])
            elif current_lines:
                preamble = current_lines
            current_label = m.group(1)
            current_double = m.group(2) == '::'
            current_lines = []
        else:
            current_lines.append(stripped)

    # Last block
    if current_label is not None:
        blocks.append([current_label, current_double, current_lines])

    return blocks, preamble


def format_mapscripts(label, lines, all_blocks_dict, consumed):
    """Format a MapScripts block."""
    map_name_match = re.match(r'^(.+)_MapScripts$', label)
    map_name = map_name_match.group(1) if map_name_match else label

    # Check if it's just .byte 0 (no scripts)
    non_empty = [l.strip() for l in lines if strip_comment(l).strip() and not l.strip().startswith('@')]
    if not non_empty or all(l == '.byte 0' or l == '.byte 0\t' for l in non_empty):
        return [f'mapscripts {label} {{}}']

    result = [f'mapscripts {label} {{']

    # Parse map_script entries
    frame_table_label = None
    for line in lines:
        stripped = strip_comment(line).strip()
        if not stripped or stripped == '.byte 0':
            continue
        if stripped.startswith('@'):
            continue

        m = re.match(r'^map_script\s+(MAP_SCRIPT_\w+),\s+(\S+)$', stripped)
        if m:
            script_type = m.group(1)
            target_label = m.group(2)

            if script_type == 'MAP_SCRIPT_ON_FRAME_TABLE':
                frame_table_label = target_label
                # Inline the frame table
                if target_label in all_blocks_dict:
                    consumed.add(target_label)
                    ft_lines = all_blocks_dict[target_label][2]
                    result.append(f'    {script_type} [')
                    for ft_line in ft_lines:
                        ft_stripped = strip_comment(ft_line).strip()
                        if not ft_stripped or ft_stripped == '.2byte 0':
                            continue
                        ft_m = re.match(r'^map_script_2\s+(\S+),\s+(\S+),\s+(\S+)$', ft_stripped)
                        if ft_m:
                            var, val, tgt = ft_m.group(1), ft_m.group(2), ft_m.group(3)
                            result.append(f'        {var}, {val}: {tgt}')
                    result.append('    ]')
                else:
                    result.append(f'    {script_type}: {target_label}')
            else:
                result.append(f'    {script_type}: {target_label}')

    result.append('}')
    return result


def format_text(label, lines):
    """Format a text block."""
    result = [f'text {label} {{']
    for line in lines:
        stripped = strip_comment(line).strip()
        if not stripped or stripped.startswith('@'):
            continue
        m = re.match(r'^\.string\s+(".*")$', stripped)
        if m:
            result.append(f'    {m.group(1)}')
        elif stripped.startswith('.string'):
            # Handle edge case
            content = stripped[7:].strip()
            result.append(f'    {content}')
    result.append('}')
    return result


def format_movement(label, lines):
    """Format a movement block."""
    result = [f'movement {label} {{']
    for line in lines:
        stripped = strip_comment(line).strip()
        if not stripped or stripped.startswith('@'):
            continue
        if stripped.startswith('.'):
            continue
        result.append(f'    {stripped}')
    result.append('}')
    return result


SWITCH_RE = re.compile(r'^switch\s+(\S+)$')
CASE_RE = re.compile(r'^case\s+(\S+),\s+(\S+)$')


def format_script(label, lines):
    """Format a script block.

    Handles the .inc switch/case jump-table pattern:
        switch VAR_FOO
        case 1, Label1
        case 2, Label2
    →
        switch (var(VAR_FOO)) {
            case 1:
                goto(Label1)
            case 2:
                goto(Label2)
        }
    """
    result = [f'script {label} {{']

    # Pre-filter to only the meaningful lines so we can do lookahead
    filtered = []
    for line in lines:
        stripped = strip_comment(line).strip()
        if not stripped or stripped.startswith('@') or stripped.startswith('.'):
            continue
        filtered.append(stripped)

    i = 0
    while i < len(filtered):
        s = filtered[i]

        # Detect switch VAR — collect following case entries into a block
        sm = SWITCH_RE.match(s)
        if sm:
            var_name = sm.group(1)
            i += 1
            cases = []
            while i < len(filtered):
                cm = CASE_RE.match(filtered[i])
                if cm:
                    cases.append((cm.group(1), cm.group(2)))
                    i += 1
                else:
                    break
            # Only emit if there are cases — an empty switch is a poryscript error
            if cases:
                result.append(f'    switch (var({var_name})) {{')
                for val, lbl in cases:
                    result.append(f'        case {val}:')
                    result.append(f'            goto({lbl})')
                result.append('    }')
            # else: no-op switch, skip silently
            continue

        # Bare case outside a switch (shouldn't normally occur, but be safe)
        cm = CASE_RE.match(s)
        if cm:
            val, lbl = cm.group(1), cm.group(2)
            result.append(f'    # orphan case {val} -> goto({lbl})')
            i += 1
            continue

        converted = convert_command(s)
        if converted is not None:
            result.append(f'    {converted}')
        i += 1

    result.append('}')
    return result


def format_raw(label, lines):
    """Format an unknown block as raw."""
    result = ['raw `']
    result.append(f'{label}:')
    for line in lines:
        # Keep original content
        result.append(f'\t{line.strip()}' if line.strip() else '')
    result.append('`')
    return result


COMPILED_PORY_RE = re.compile(r'^# \d+\s+"[^"]*\.pory"', re.MULTILINE)


def is_compiled_pory(raw_content):
    """Return True if the .inc was compiled by poryscript (has # N "file.pory" line directives)."""
    return bool(COMPILED_PORY_RE.search(raw_content))


def convert_inc_to_pory(inc_path, dry_run=False):
    """Convert a single .inc file to .pory format.

    If the .inc was compiled by poryscript (detected by # N "file.pory" line directives)
    we cannot safely reverse-engineer it — internal labels, poryscript constants, and
    assembly macros would all be lost or conflict. In that case we emit a verbatim raw
    passthrough so the file compiles identically to the original.

    For hand-written .inc files we do a full structural conversion.
    """
    pory_path = inc_path.with_suffix('.pory')

    with open(inc_path, 'r', encoding='utf-8', errors='replace') as f:
        raw_content = f.read()

    # --- Passthrough for poryscript-compiled .inc files ---
    if is_compiled_pory(raw_content):
        # Wrap verbatim in a raw block. This is a safe no-op conversion;
        # the generated .inc will be byte-for-byte identical to the original.
        # Individual scripts can be replaced with proper poryscript blocks later.
        output = f'raw `\n{raw_content}\n`\n'
        if dry_run:
            print(f'--- {pory_path} (passthrough raw) ---')
            print(output[:300])
            print()
        else:
            pory_path.write_text(output, encoding='utf-8')
        return True

    # --- Full conversion for hand-written .inc files ---
    blocks, preamble = parse_inc_file(inc_path)

    if not blocks:
        # Empty file
        if not dry_run:
            pory_path.write_text('', encoding='utf-8')
        return True

    # Build a dict of all blocks for cross-referencing (first occurrence wins)
    all_blocks_dict = {}
    seen_labels = set()
    for block in blocks:
        label, is_double, lines = block
        if label not in all_blocks_dict:
            all_blocks_dict[label] = block

    consumed = set()  # labels already inlined into mapscripts

    output_lines = []

    for block in blocks:
        label, is_double, lines = block

        # Skip duplicate labels (second+ occurrences of the same label)
        if label in seen_labels:
            continue
        seen_labels.add(label)

        if label in consumed:
            continue

        block_type = classify_block(label, lines)

        # Single-colon labels are internal jump targets (local scope in assembly).
        # Emit them as raw to avoid conflicts with poryscript's auto-generated
        # if-branch labels (which also use _1, _2 suffixes).
        if not is_double and block_type not in ('text', 'movement', 'mapscripts'):
            section = format_raw(label, lines)
        elif block_type == 'mapscripts':
            section = format_mapscripts(label, lines, all_blocks_dict, consumed)
        elif block_type == 'frametable':
            section = format_raw(label, lines)
        elif block_type == 'warptable':
            section = format_raw(label, lines)
        elif block_type == 'text':
            section = format_text(label, lines)
        elif block_type == 'movement':
            section = format_movement(label, lines)
        else:
            section = format_script(label, lines)

        output_lines.extend(section)
        output_lines.append('')  # blank line between blocks

    output = '\n'.join(output_lines)

    if dry_run:
        print(f'--- {pory_path} ---')
        print(output[:2000])
        print()
    else:
        pory_path.write_text(output, encoding='utf-8')

    return True


def find_maps_needing_conversion(maps_dir):
    """Find all maps that have scripts.inc but no scripts.pory."""
    maps_dir = Path(maps_dir)
    result = []

    for map_dir in sorted(maps_dir.iterdir()):
        if not map_dir.is_dir():
            continue
        map_name = map_dir.name
        if map_name in SKIP_MAPS:
            continue

        inc_file = map_dir / 'scripts.inc'
        pory_file = map_dir / 'scripts.pory'

        if inc_file.exists() and not pory_file.exists():
            result.append((map_name, inc_file))

    return result


def main():
    parser = argparse.ArgumentParser(description='Convert scripts.inc to scripts.pory')
    parser.add_argument('--dry-run', action='store_true', help='Print output instead of writing files')
    parser.add_argument('--map', help='Convert a specific map by name')
    parser.add_argument('--all', action='store_true', help='Convert all maps (default behavior)')
    parser.add_argument('--maps-dir', default='data/maps', help='Path to maps directory')
    args = parser.parse_args()

    maps_dir = Path(args.maps_dir)
    if not maps_dir.exists():
        # Try relative to script location
        script_dir = Path(__file__).parent.parent
        maps_dir = script_dir / 'data' / 'maps'

    if not maps_dir.exists():
        print(f'Error: maps directory not found at {maps_dir}', file=sys.stderr)
        sys.exit(1)

    if args.map:
        # Convert specific map
        map_dir = maps_dir / args.map
        if not map_dir.exists():
            print(f'Error: map directory not found: {map_dir}', file=sys.stderr)
            sys.exit(1)
        inc_file = map_dir / 'scripts.inc'
        if not inc_file.exists():
            print(f'Error: scripts.inc not found: {inc_file}', file=sys.stderr)
            sys.exit(1)
        pory_file = map_dir / 'scripts.pory'
        if pory_file.exists() and not args.dry_run:
            print(f'Skipping {args.map} - scripts.pory already exists')
            return
        print(f'Converting {args.map}...')
        convert_inc_to_pory(inc_file, dry_run=args.dry_run)
        if not args.dry_run:
            print(f'  -> {pory_file}')
    else:
        # Convert all maps
        maps_to_convert = find_maps_needing_conversion(maps_dir)
        print(f'Found {len(maps_to_convert)} maps to convert')

        errors = []
        for i, (map_name, inc_file) in enumerate(maps_to_convert):
            try:
                convert_inc_to_pory(inc_file, dry_run=args.dry_run)
                if (i + 1) % 100 == 0:
                    print(f'  Converted {i + 1}/{len(maps_to_convert)}...')
            except Exception as e:
                errors.append((map_name, str(e)))
                print(f'  ERROR converting {map_name}: {e}', file=sys.stderr)

        if not args.dry_run:
            print(f'Done! Converted {len(maps_to_convert) - len(errors)} maps.')
        if errors:
            print(f'Errors ({len(errors)}):')
            for name, err in errors:
                print(f'  {name}: {err}')


if __name__ == '__main__':
    main()
