# 1 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 2 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_OnResume
# 5 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 3 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_OnLoad
# 7 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 8 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LoreleisRoom_OnTransition
# 9 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 5 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 10 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_OnWarp
# 11 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 12 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.byte 0
# 14 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 15 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 7 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 17 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, PokemonLeague_LoreleisRoom_EventScript_EnterRoom
# 18 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.2byte 0
# 19 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 20 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 21 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnResume::
# 22 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 12 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 23 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 24 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 13 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 25 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 26 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 27 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 28 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 29 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad::
# 30 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 18 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 31 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_OnLoad_2
# 32 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad_1:
# 33 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 34 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 35 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_LoreleisRoom_OnLoad_5
# 36 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad_4:
# 37 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 38 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 39 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad_2:
# 40 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 19 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 41 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen
# 42 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_OnLoad_1
# 43 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 44 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad_5:
# 45 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 22 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 46 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_CloseEntry
# 47 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_OnLoad_4
# 48 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 49 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 50 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_CloseEntry::
# 51 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 28 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 52 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 53 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 54 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 55 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 56 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen::
# 57 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 33 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 58 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 59 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 60 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 61 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 62 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnTransition::
# 63 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 38 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 64 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
# 65 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 66 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 67 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 68 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 42 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 69 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 70 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 43 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 71 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnWarp:
# 72 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 73 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth
# 74 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 45 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 75 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.2byte 0
# 76 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 77 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth::
# 78 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 79 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 80 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 81 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 82 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 83 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_EnterRoom::
# 84 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 55 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 85 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	lockall
# 86 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 56 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 87 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 88 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 57 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 89 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 90 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 58 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	releaseall
# 92 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 93 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 94 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 95 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei::
# 96 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 63 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 97 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	lock
# 98 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 64 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 99 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	faceplayer
# 100 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 65 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 101 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 102 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 66 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 103 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_Lorelei_2
# 104 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_1:
# 105 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 69 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 106 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 0
# 107 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 70 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 108 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 1
# 109 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 71 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 110 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_5
# 111 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_4:
# 112 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 74 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 113 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_8
# 114 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_7:
# 115 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 77 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 116 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 117 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 78 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 118 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 119 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 79 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 120 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_11
# 121 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_10:
# 122 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 82 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 123 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_14
# 124 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_13:
# 125 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 85 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 126 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 127 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 86 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 128 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei
# 129 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 130 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 131 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_2:
# 132 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 67 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 133 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_PostBattle
# 134 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_1
# 135 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 136 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_5:
# 137 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 72 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 138 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_Intro
# 139 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_4
# 140 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 141 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_8:
# 142 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 75 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 143 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_RematchIntro
# 144 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_7
# 145 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 146 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_11:
# 147 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 80 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 148 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_Battle
# 149 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_10
# 150 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 151 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei_14:
# 152 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 83 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 153 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_Rematch
# 154 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_13
# 155 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 156 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 157 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Intro::
# 158 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 159 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_Intro
# 160 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 161 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 162 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 163 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_RematchIntro::
# 164 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 96 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 165 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_RematchIntro
# 166 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 167 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 168 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 169 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Battle::
# 170 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 101 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 171 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI, PokemonLeague_LoreleisRoom_Text_Defeat
# 172 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 173 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 174 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 175 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Rematch::
# 176 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 106 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 177 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI_2, PokemonLeague_LoreleisRoom_Text_Defeat
# 178 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	return
# 179 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 180 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 181 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_PostBattle::
# 182 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 111 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 183 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 184 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 112 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 185 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	release
# 186 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 187 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 188 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 189 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei::
# 190 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 117 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 191 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LORELEI
# 192 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 118 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 193 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 194 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 119 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 195 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 196 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 120 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 197 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	release
# 198 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	end
# 199 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 200 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 201 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Text_Intro::
# 202 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 124 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 203 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE.\p"
# 204 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "I am LORELEI of the ELITE FOUR.\p"
# 205 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "No one can best me when it comes\n"
# 206 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "to icy POKéMON.\p"
# 207 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Freezing moves are powerful.\p"
# 208 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Your POKéMON will be at my mercy\n"
# 209 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "when they are frozen solid.\p"
# 210 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Hahaha!\n"
# 211 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Are you ready?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 212 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 213 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Text_RematchIntro::
# 214 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 136 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 215 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE.\p"
# 216 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "I, LORELEI of the ELITE FOUR,\n"
# 217 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "have returned!\p"
# 218 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "You know how it goes.\n"
# 219 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "No one can best me when it comes\l"
# 220 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "to icy POKéMON.\p"
# 221 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Freezing moves are powerful.\p"
# 222 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Your POKéMON will be at my mercy\n"
# 223 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "when they are frozen solid.\p"
# 224 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Hahaha!\n"
# 225 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Are you ready?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 226 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 227 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Text_Defeat::
# 228 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 150 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 229 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "…Things shouldn't be this way!$"
# 230 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 231 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_Text_PostBattle::
# 232 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 154 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
# 233 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "You're better than I thought.\n"
# 234 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Go on ahead.\p"
# 235 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "You only got a taste of the\n"
# 236 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "POKéMON LEAGUE's power.$"
