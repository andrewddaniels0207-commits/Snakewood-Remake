PokemonLeague_LoreleisRoom_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_OnResume
# 3 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_OnLoad
# 4 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LoreleisRoom_OnTransition
# 5 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_OnWarp
# 6 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, PokemonLeague_LoreleisRoom_EventScript_EnterRoom
	.2byte 0


PokemonLeague_LoreleisRoom_OnResume::
# 12 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 13 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end


PokemonLeague_LoreleisRoom_OnLoad::
# 18 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_OnLoad_2
PokemonLeague_LoreleisRoom_OnLoad_1:
# 21 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 1
	goto_if_eq PokemonLeague_LoreleisRoom_OnLoad_5
PokemonLeague_LoreleisRoom_OnLoad_4:
	end

PokemonLeague_LoreleisRoom_OnLoad_2:
# 19 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen
	goto PokemonLeague_LoreleisRoom_OnLoad_1

PokemonLeague_LoreleisRoom_OnLoad_5:
# 22 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_CloseEntry
	goto PokemonLeague_LoreleisRoom_OnLoad_4


PokemonLeague_LoreleisRoom_EventScript_CloseEntry::
# 28 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	return


PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen::
# 33 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	return


PokemonLeague_LoreleisRoom_OnTransition::
# 38 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	end


# 42 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"

# 43 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
PokemonLeague_LoreleisRoom_OnWarp:
# 44 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth
# 45 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.2byte 0

PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth::
# 50 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_LoreleisRoom_EventScript_EnterRoom::
# 55 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	lockall
# 56 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 57 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 58 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	releaseall
	end


PokemonLeague_LoreleisRoom_EventScript_Lorelei::
# 63 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	lock
# 64 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	faceplayer
# 65 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 66 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_Lorelei_2
PokemonLeague_LoreleisRoom_EventScript_Lorelei_1:
# 69 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 0
# 70 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 1
# 71 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_5
PokemonLeague_LoreleisRoom_EventScript_Lorelei_4:
# 74 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_8
PokemonLeague_LoreleisRoom_EventScript_Lorelei_7:
# 77 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 78 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 79 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_11
PokemonLeague_LoreleisRoom_EventScript_Lorelei_10:
# 82 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_14
PokemonLeague_LoreleisRoom_EventScript_Lorelei_13:
# 85 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 86 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei
	end

PokemonLeague_LoreleisRoom_EventScript_Lorelei_2:
# 67 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_PostBattle
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_1

PokemonLeague_LoreleisRoom_EventScript_Lorelei_5:
# 72 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_Intro
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_4

PokemonLeague_LoreleisRoom_EventScript_Lorelei_8:
# 75 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_RematchIntro
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_7

PokemonLeague_LoreleisRoom_EventScript_Lorelei_11:
# 80 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_Battle
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_10

PokemonLeague_LoreleisRoom_EventScript_Lorelei_14:
# 83 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_LoreleisRoom_EventScript_Rematch
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_13


PokemonLeague_LoreleisRoom_EventScript_Intro::
# 91 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_Intro
	return


PokemonLeague_LoreleisRoom_EventScript_RematchIntro::
# 96 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_RematchIntro
	return


PokemonLeague_LoreleisRoom_EventScript_Battle::
# 101 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI, PokemonLeague_LoreleisRoom_Text_Defeat
	return


PokemonLeague_LoreleisRoom_EventScript_Rematch::
# 106 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI_2, PokemonLeague_LoreleisRoom_Text_Defeat
	return


PokemonLeague_LoreleisRoom_EventScript_PostBattle::
# 111 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 112 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	release
	end


PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei::
# 117 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LORELEI
# 118 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 119 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 120 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	release
	end


PokemonLeague_LoreleisRoom_Text_Intro::
# 124 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE.\p"
	.string "I am LORELEI of the ELITE FOUR.\p"
	.string "No one can best me when it comes\n"
	.string "to icy POKéMON.\p"
	.string "Freezing moves are powerful.\p"
	.string "Your POKéMON will be at my mercy\n"
	.string "when they are frozen solid.\p"
	.string "Hahaha!\n"
	.string "Are you ready?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_LoreleisRoom_Text_RematchIntro::
# 136 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE.\p"
	.string "I, LORELEI of the ELITE FOUR,\n"
	.string "have returned!\p"
	.string "You know how it goes.\n"
	.string "No one can best me when it comes\l"
	.string "to icy POKéMON.\p"
	.string "Freezing moves are powerful.\p"
	.string "Your POKéMON will be at my mercy\n"
	.string "when they are frozen solid.\p"
	.string "Hahaha!\n"
	.string "Are you ready?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_LoreleisRoom_Text_Defeat::
# 150 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "…Things shouldn't be this way!$"

PokemonLeague_LoreleisRoom_Text_PostBattle::
# 154 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "You're better than I thought.\n"
	.string "Go on ahead.\p"
	.string "You only got a taste of the\n"
	.string "POKéMON LEAGUE's power.$"
