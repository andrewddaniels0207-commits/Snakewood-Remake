# 1 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 2 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_AgathasRoom_OnResume
# 5 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 3 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AgathasRoom_OnLoad
# 7 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 8 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AgathasRoom_OnWarp
# 9 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 5 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 10 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.byte 0
# 12 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 13 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 15 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_AgathasRoom_EventScript_EnterRoom
# 16 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.2byte 0
# 17 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 18 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 19 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnResume::
# 20 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 11 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 22 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 12 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 23 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 24 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 25 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 26 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 27 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnLoad::
# 28 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 17 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 29 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_OnLoad_2
# 30 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnLoad_1:
# 31 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 20 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 32 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 3
# 33 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_eq PokemonLeague_AgathasRoom_OnLoad_5
# 34 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnLoad_4:
# 35 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 36 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 37 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnLoad_2:
# 38 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 18 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 39 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_SetDoorOpen
# 40 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_OnLoad_1
# 41 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 42 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnLoad_5:
# 43 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_CloseEntry
# 45 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_OnLoad_4
# 46 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 47 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 48 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_CloseEntry::
# 49 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 27 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 51 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 52 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 53 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 54 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_SetDoorOpen::
# 55 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 32 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 56 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 57 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 58 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 59 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 60 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 36 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 61 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 62 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 37 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 63 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnWarp:
# 64 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 38 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 65 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth
# 66 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 39 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 67 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.2byte 0
# 68 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 69 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth::
# 70 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 71 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 72 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 73 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 74 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 75 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_EnterRoom::
# 76 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 49 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 77 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	lockall
# 78 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 79 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 80 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 51 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 81 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 3
# 82 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 52 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 83 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	releaseall
# 84 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 85 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 86 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 87 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha::
# 88 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 57 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 89 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	lock
# 90 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 58 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	faceplayer
# 92 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 59 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 93 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 94 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 60 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 95 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_Agatha_2
# 96 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_1:
# 97 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 63 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 98 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 0
# 99 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 64 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 100 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 4
# 101 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 65 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 102 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 4
# 103 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 66 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 104 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Agatha_5
# 105 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_4:
# 106 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 69 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 107 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Agatha_8
# 108 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_7:
# 109 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 72 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 110 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 111 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 73 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 112 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 113 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 74 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 114 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Agatha_11
# 115 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_10:
# 116 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 77 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 117 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Agatha_14
# 118 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_13:
# 119 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 80 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 120 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 121 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 81 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 122 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha
# 123 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 124 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 125 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_2:
# 126 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 61 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 127 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_PostBattle
# 128 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_1
# 129 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 130 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_5:
# 131 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 67 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 132 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_Intro
# 133 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_4
# 134 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 135 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_8:
# 136 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 70 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 137 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_RematchIntro
# 138 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_7
# 139 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 140 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_11:
# 141 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 75 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 142 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_Battle
# 143 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_10
# 144 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 145 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha_14:
# 146 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 78 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 147 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_Rematch
# 148 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_13
# 149 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 150 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 151 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Intro::
# 152 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 86 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 153 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_Intro
# 154 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 155 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 156 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 157 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_RematchIntro::
# 158 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 159 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_RematchIntro
# 160 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 161 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 162 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 163 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Battle::
# 164 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 96 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 165 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA, PokemonLeague_AgathasRoom_Text_Defeat
# 166 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 167 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 168 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 169 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Rematch::
# 170 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 101 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 171 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA_2, PokemonLeague_AgathasRoom_Text_Defeat
# 172 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	return
# 173 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 174 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 175 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_PostBattle::
# 176 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 106 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 177 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 178 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 107 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 179 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	release
# 180 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 181 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 182 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 183 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha::
# 184 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 112 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 185 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_AGATHA
# 186 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 113 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 187 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 188 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 114 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 189 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 190 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 115 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 191 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	release
# 192 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	end
# 193 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 194 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 195 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Text_Intro::
# 196 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 119 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 197 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I am AGATHA of the ELITE FOUR.\p"
# 198 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I hear OAK's taken a lot of\n"
# 199 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "interest in you, child.\p"
# 200 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "That old duff was once tough and\n"
# 201 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "handsome.\p"
# 202 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "But that was decades ago.\n"
# 203 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "He's a shadow of his former self.\p"
# 204 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Now he just wants to fiddle with\n"
# 205 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "his POKéDEX.\p"
# 206 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "He's wrong.\n"
# 207 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "POKéMON are for battling!\p"
# 208 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "{PLAYER}! I'll show you how a real\n"
# 209 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 210 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 211 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Text_RematchIntro::
# 212 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 135 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 213 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I am AGATHA of the ELITE FOUR.\p"
# 214 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "You're the child that OAK's taken\n"
# 215 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "under his wing, aren't you?\p"
# 216 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "That old duff was once tough and\n"
# 217 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "handsome.\p"
# 218 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "But that was decades ago.\n"
# 219 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "He's a shadow of his former self.\p"
# 220 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Now he just wants to fiddle with\n"
# 221 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "his POKéDEX.\p"
# 222 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "He's wrong.\n"
# 223 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "POKéMON are for battling!\p"
# 224 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "{PLAYER}! I'll show you how a real\n"
# 225 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 226 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 227 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Text_Defeat::
# 228 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 151 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 229 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Oh, my!\n"
# 230 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "You're something special, child!$"
# 231 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 232 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_Text_PostBattle::
# 233 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 156 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
# 234 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "You win!\p"
# 235 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I see what the old duff sees in\n"
# 236 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "you now.\p"
# 237 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I have nothing else to say.\n"
# 238 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Run along now, child!$"
