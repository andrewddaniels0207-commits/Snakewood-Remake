# 1 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 2 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
# 5 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 3 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
# 7 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 8 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_OnWarp
# 9 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 5 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 10 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.byte 0
# 12 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 13 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 15 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_EventScript_EnterRoom
# 16 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.2byte 0
# 17 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 18 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 19 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnResume::
# 20 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 11 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 22 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 12 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 23 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 24 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 25 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 26 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 27 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad::
# 28 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 17 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 29 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_OnLoad_2
# 30 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad_1:
# 31 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 20 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 32 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 33 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_OnLoad_5
# 34 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad_4:
# 35 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 36 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 37 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad_2:
# 38 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 18 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 39 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
# 40 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_OnLoad_1
# 41 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 42 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad_5:
# 43 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_CloseEntry
# 45 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_OnLoad_4
# 46 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 47 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 48 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_CloseEntry::
# 49 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 27 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 51 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 52 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 53 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 54 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
# 55 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 32 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 56 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 57 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 58 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 59 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 60 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 36 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 61 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 62 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 37 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 63 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnWarp:
# 64 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 38 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 65 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
# 66 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 39 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 67 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.2byte 0
# 68 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 69 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
# 70 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 71 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 72 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 73 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 74 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 75 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_EnterRoom::
# 76 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 49 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 77 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	lockall
# 78 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 79 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 80 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 51 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 81 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 82 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 52 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 83 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	releaseall
# 84 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 85 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 86 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 87 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno::
# 88 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 57 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 89 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	lock
# 90 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 58 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	faceplayer
# 92 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 59 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 93 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 94 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 60 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 95 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_Bruno_2
# 96 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_1:
# 97 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 63 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 98 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 0
# 99 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 64 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 100 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 1
# 101 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 65 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 102 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Bruno_5
# 103 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_4:
# 104 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 68 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 105 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Bruno_8
# 106 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_7:
# 107 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 71 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 108 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 109 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 72 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 110 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 111 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 73 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 112 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Bruno_11
# 113 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_10:
# 114 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 76 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 115 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Bruno_14
# 116 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_13:
# 117 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 79 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 118 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 119 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 80 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 120 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
# 121 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 122 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 123 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_2:
# 124 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 61 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 125 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle
# 126 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_1
# 127 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 128 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_5:
# 129 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 66 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 130 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Intro
# 131 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_4
# 132 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 133 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_8:
# 134 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 69 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 135 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_RematchIntro
# 136 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_7
# 137 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 138 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_11:
# 139 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 74 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 140 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Battle
# 141 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_10
# 142 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 143 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno_14:
# 144 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 77 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 145 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Rematch
# 146 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_13
# 147 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 148 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 149 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Intro::
# 150 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 85 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 151 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_Intro
# 152 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 153 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 154 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 155 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_RematchIntro::
# 156 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 90 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 157 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
# 158 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 159 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 160 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 161 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Battle::
# 162 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 95 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 163 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
# 164 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 165 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 166 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 167 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Rematch::
# 168 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 100 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 169 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat
# 170 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 171 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 172 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 173 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle::
# 174 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 105 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 175 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 176 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 106 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 177 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	closemessage
# 178 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 107 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 179 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 180 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_PostBattle_2
# 181 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle_1:
# 182 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 110 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 183 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 184 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_PostBattle_5
# 185 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle_4:
# 186 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 113 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 187 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 188 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_PostBattle_8
# 189 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle_7:
# 190 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 116 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 191 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 192 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_PostBattle_11
# 193 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle_10:
# 194 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 119 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 195 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	release
# 196 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 197 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 198 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle_2:
# 199 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 108 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 200 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 201 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle_1
# 202 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 203 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle_5:
# 204 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 111 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 205 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 206 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle_4
# 207 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 208 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle_8:
# 209 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 114 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 210 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 211 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle_7
# 212 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 213 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle_11:
# 214 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 117 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 215 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 216 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle_10
# 217 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 218 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 219 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
# 220 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 124 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 221 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 222 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 125 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 223 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 224 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 126 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 225 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 226 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 127 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 227 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	closemessage
# 228 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 128 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 229 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 230 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_2
# 231 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_1:
# 232 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 131 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 233 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 234 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_5
# 235 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_4:
# 236 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 134 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 237 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 238 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_8
# 239 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_7:
# 240 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 137 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 241 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 242 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_11
# 243 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_10:
# 244 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 140 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 245 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	release
# 246 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	end
# 247 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 248 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_2:
# 249 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 129 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 250 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 251 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_1
# 252 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 253 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_5:
# 254 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 132 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 255 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 256 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_4
# 257 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 258 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_8:
# 259 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 135 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 260 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 261 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_7
# 262 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 263 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_11:
# 264 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 138 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 265 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 266 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_10
# 267 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 268 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 269 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft::
# 270 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 145 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 271 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterLeft
# 272 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 146 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 273 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
# 274 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 275 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 276 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 277 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight::
# 278 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 151 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 279 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterRight
# 280 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 152 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 281 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
# 282 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 283 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 284 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 285 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown::
# 286 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 157 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 287 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterDown
# 288 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 158 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 289 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
# 290 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	return
# 291 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 292 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 293 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Text_Intro::
# 294 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 162 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 295 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I am BRUNO of the ELITE FOUR!\p"
# 296 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Through rigorous training, people\n"
# 297 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "and POKéMON can become stronger\l"
# 298 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "without limit.\p"
# 299 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I've lived and trained with my\n"
# 300 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "fighting POKéMON!\l"
# 301 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "And that will never change!\p"
# 302 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 303 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "We will grind you down with our\n"
# 304 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "superior power!\p"
# 305 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 306 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 307 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Text_RematchIntro::
# 308 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 176 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 309 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I am BRUNO of the ELITE FOUR!\p"
# 310 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Through rigorous training, people\n"
# 311 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "and POKéMON can become stronger\l"
# 312 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "without limit.\p"
# 313 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I've lived and trained with my\n"
# 314 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "fighting POKéMON!\l"
# 315 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "And that will never change!\p"
# 316 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 317 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "We will grind you down with our\n"
# 318 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "superior power!\p"
# 319 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 320 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 321 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Text_Defeat::
# 322 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 190 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 323 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Why?\n"
# 324 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "How could I lose?$"
# 325 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 326 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_Text_PostBattle::
# 327 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 195 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
# 328 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "My job is done.\n"
# 329 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Go face your next challenge.$"
