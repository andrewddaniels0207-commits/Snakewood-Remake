# 1 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 2 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LancesRoom_OnResume
# 5 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 3 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LancesRoom_OnLoad
# 7 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 8 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LancesRoom_OnWarp
# 9 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 5 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 10 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.byte 0
# 12 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 13 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 15 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_LancesRoom_EventScript_EnterRoom
# 16 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.2byte 0
# 17 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 18 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 19 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnResume::
# 20 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 11 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 22 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 12 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 23 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 24 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 25 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 26 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 27 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnLoad::
# 28 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 17 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 29 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 4
# 30 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_LancesRoom_OnLoad_2
# 31 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnLoad_1:
# 32 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 20 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 33 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LANCE, PokemonLeague_LancesRoom_OnLoad_5
# 34 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnLoad_4:
# 35 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 36 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 37 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnLoad_2:
# 38 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 18 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 39 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_CloseEntry
# 40 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_OnLoad_1
# 41 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 42 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnLoad_5:
# 43 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_SetDoorOpen
# 45 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_OnLoad_4
# 46 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 47 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 48 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_CloseEntry::
# 49 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 27 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_SetEntryClosed
# 51 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 52 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 53 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_SetDoorOpen::
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 32 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpenLance
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 58 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 59 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 60 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 36 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 61 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 62 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 37 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 63 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_OnWarp:
# 64 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 38 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 65 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LancesRoom_EventScript_TurnPlayerNorth
# 66 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 39 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 67 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.2byte 0
# 68 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 69 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_TurnPlayerNorth::
# 70 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 71 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 72 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 73 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 74 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 75 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_EnterRoom::
# 76 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 49 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 77 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	lockall
# 78 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 79 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_LancesRoom_Movement_WalkThroughCorridor
# 80 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 51 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 81 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
# 82 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 52 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 83 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 84 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 53 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 85 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_SetEntryClosed
# 86 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 87 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	playse SE_UNLOCK
# 88 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 89 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	special DrawWholeMapView
# 90 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitse
# 92 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 93 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 4
# 94 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 58 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 95 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	releaseall
# 96 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 97 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 98 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 99 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_SetEntryClosed::
# 100 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 63 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 101 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 5, 14, METATILE_PokemonLeague_Entry_TopLeft_Closed, 1
# 102 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 64 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 103 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 14, METATILE_PokemonLeague_Entry_TopMid_Closed, 1
# 104 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 65 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 105 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 14, METATILE_PokemonLeague_Entry_TopRight_Closed, 1
# 106 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 66 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 107 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 5, 15, METATILE_PokemonLeague_Entry_BottomLeft_Closed, 1
# 108 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 67 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 109 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 15, METATILE_PokemonLeague_Entry_BottomMid_Closed, 1
# 110 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 68 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 111 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 15, METATILE_PokemonLeague_Entry_BottomRight_Closed, 1
# 112 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 69 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 113 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 16, METATILE_PokemonLeague_Floor_ShadeFull_Lance, 0
# 114 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 70 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 115 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 16, METATILE_PokemonLeague_Floor_ShadeFull_Lance, 0
# 116 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 117 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 118 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 119 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 74 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 120 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Movement_WalkThroughCorridor:
# 121 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 75 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 122 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 123 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 76 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 124 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 125 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 77 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 126 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 127 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 78 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 128 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 129 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 79 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 130 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 131 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 80 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 132 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 133 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 81 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 134 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 135 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 82 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 136 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 137 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 83 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 138 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 139 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 84 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 140 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 141 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 85 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 142 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 143 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 86 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 144 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 145 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 87 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 146 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 147 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 88 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 148 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 149 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 89 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 150 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 151 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 90 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 152 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 153 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 154 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 155 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 92 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 156 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 93 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 158 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 94 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 160 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 161 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 95 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 162 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 163 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 96 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 164 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 165 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 97 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 166 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 167 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 98 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 168 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 99 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 170 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 100 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 172 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 173 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 101 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 174 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 175 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 102 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 176 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 177 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 103 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 178 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 179 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 104 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 180 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 181 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 105 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 182 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 183 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 106 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 184 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 185 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 107 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 186 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 187 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 108 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 188 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 189 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 109 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 190 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	step_end
# 191 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 192 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance::
# 193 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 113 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 194 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	lock
# 195 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 114 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 196 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	faceplayer
# 197 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 115 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 198 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 199 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 116 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 200 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LANCE, PokemonLeague_LancesRoom_EventScript_Lance_2
# 201 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_1:
# 202 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 119 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 203 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, 0
# 204 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 120 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 205 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, 1
# 206 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 121 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 207 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_LancesRoom_EventScript_Lance_5
# 208 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_4:
# 209 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 124 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 210 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LancesRoom_EventScript_Lance_8
# 211 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_7:
# 212 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 127 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 213 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 214 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 128 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 215 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 216 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 129 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 217 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_LancesRoom_EventScript_Lance_11
# 218 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_10:
# 219 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 132 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 220 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_LancesRoom_EventScript_Lance_14
# 221 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_13:
# 222 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 135 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 223 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 224 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 136 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 225 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_EventScript_DefeatedLance
# 226 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 227 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 228 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_2:
# 229 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 117 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 230 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_EventScript_PostBattle
# 231 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_EventScript_Lance_1
# 232 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 233 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_5:
# 234 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 122 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 235 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_Intro
# 236 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_EventScript_Lance_4
# 237 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 238 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_8:
# 239 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 125 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 240 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_RematchIntro
# 241 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_EventScript_Lance_7
# 242 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 243 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_11:
# 244 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 130 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 245 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_Battle
# 246 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_EventScript_Lance_10
# 247 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 248 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Lance_14:
# 249 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 133 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 250 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_Rematch
# 251 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto PokemonLeague_LancesRoom_EventScript_Lance_13
# 252 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 253 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 254 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Intro::
# 255 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 141 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 256 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_Intro
# 257 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 258 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 259 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 260 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_RematchIntro::
# 261 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 146 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 262 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_RematchIntro
# 263 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 264 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 265 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 266 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Battle::
# 267 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 151 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 268 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LANCE, PokemonLeague_LancesRoom_Text_Defeat
# 269 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 270 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 271 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 272 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_Rematch::
# 273 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 156 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 274 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LANCE_2, PokemonLeague_LancesRoom_Text_Defeat
# 275 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 276 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 277 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 278 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_PostBattle::
# 279 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 161 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 280 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_PostBattle
# 281 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 162 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 282 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	release
# 283 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 284 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 285 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 286 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_DefeatedLance::
# 287 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 167 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 288 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 289 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 168 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 290 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	special Script_TryGainNewFanFromCounterFrlg
# 291 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 169 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 292 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LANCE
# 293 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 170 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 294 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoorLance
# 295 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 171 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 296 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_PostBattle
# 297 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 172 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 298 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	closemessage
# 299 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 173 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 300 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	release
# 301 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	end
# 302 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 303 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 304 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayLeft::
# 305 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 178 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 306 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_LANCE, PokemonLeague_LancesRoom_Movement_LanceMoveOutOfWayLeft
# 307 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 179 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 308 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
# 309 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 310 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 311 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 312 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayRight::
# 313 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 184 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 314 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_LANCE, PokemonLeague_LancesRoom_Movement_LanceMoveOutOfWayRight
# 315 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 185 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 316 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
# 317 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	return
# 318 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 319 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 320 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 189 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 321 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Movement_LanceMoveOutOfWayLeft:
# 322 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 190 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 323 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 324 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 191 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 325 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_in_place_faster_right
# 326 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 192 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 327 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	step_end
# 328 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 329 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 195 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 330 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Movement_LanceMoveOutOfWayRight:
# 331 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 196 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 332 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_right
# 333 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 197 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 334 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_in_place_faster_left
# 335 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 198 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 336 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	step_end
# 337 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 338 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Text_Intro::
# 339 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 201 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 340 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Ah! I've heard about you,\n"
# 341 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 342 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I lead the ELITE FOUR.\p"
# 343 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You can call me LANCE the dragon\n"
# 344 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "TRAINER.\p"
# 345 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You know that dragons are\n"
# 346 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "mythical POKéMON.\p"
# 347 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "They're hard to catch and raise,\n"
# 348 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "but their powers are superior.\p"
# 349 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "They're virtually indestructible.\n"
# 350 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "There's no being clever with them.\p"
# 351 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Well, are you ready to lose?\p"
# 352 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Your LEAGUE challenge ends with\n"
# 353 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "me, {PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 354 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 355 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Text_RematchIntro::
# 356 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 218 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 357 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Ah!\n"
# 358 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "So, you've returned, {PLAYER}!\p"
# 359 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I lead the ELITE FOUR.\p"
# 360 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You can call me LANCE the dragon\n"
# 361 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "TRAINER.\p"
# 362 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You know that dragons are\n"
# 363 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "mythical POKéMON.\p"
# 364 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "They're hard to catch and raise,\n"
# 365 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "but their powers are superior.\p"
# 366 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "They're virtually indestructible.\n"
# 367 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "There's no being clever with them.\p"
# 368 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Well, are you ready to lose?\p"
# 369 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Your LEAGUE challenge ends with\n"
# 370 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "me, {PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 371 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 372 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Text_Defeat::
# 373 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 235 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 374 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "That's it!\p"
# 375 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I hate to admit it, but you are a\n"
# 376 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "POKéMON master!$"
# 377 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"

# 378 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Text_PostBattle::
# 379 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 241 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
# 380 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I still can't believe my dragons\n"
# 381 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "lost to you, {PLAYER}.\p"
# 382 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "You are now the POKéMON LEAGUE\n"
# 383 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "CHAMPION!\p"
# 384 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "…Or, you would have been, but\n"
# 385 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "you have one more challenge left.\p"
# 386 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "There is one more TRAINER to face!\n"
# 387 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "His name is…\p"
# 388 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "{RIVAL}!\p"
# 389 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "He beat the ELITE FOUR before\n"
# 390 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "you.\p"
# 391 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "He is the real POKéMON LEAGUE\n"
# 392 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "CHAMPION.$"
