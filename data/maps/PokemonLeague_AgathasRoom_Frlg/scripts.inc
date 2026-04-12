PokemonLeague_AgathasRoom_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_AgathasRoom_OnResume
# 3 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AgathasRoom_OnLoad
# 4 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AgathasRoom_OnWarp
# 5 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_AgathasRoom_EventScript_EnterRoom
	.2byte 0


PokemonLeague_AgathasRoom_OnResume::
# 11 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 12 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end


PokemonLeague_AgathasRoom_OnLoad::
# 17 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_OnLoad_2
PokemonLeague_AgathasRoom_OnLoad_1:
# 20 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 3
	goto_if_eq PokemonLeague_AgathasRoom_OnLoad_5
PokemonLeague_AgathasRoom_OnLoad_4:
	end

PokemonLeague_AgathasRoom_OnLoad_2:
# 18 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_SetDoorOpen
	goto PokemonLeague_AgathasRoom_OnLoad_1

PokemonLeague_AgathasRoom_OnLoad_5:
# 21 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_CloseEntry
	goto PokemonLeague_AgathasRoom_OnLoad_4


PokemonLeague_AgathasRoom_EventScript_CloseEntry::
# 27 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	return


PokemonLeague_AgathasRoom_EventScript_SetDoorOpen::
# 32 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	return


# 36 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"

# 37 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
PokemonLeague_AgathasRoom_OnWarp:
# 38 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth
# 39 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.2byte 0

PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth::
# 44 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_AgathasRoom_EventScript_EnterRoom::
# 49 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	lockall
# 50 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 51 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 3
# 52 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	releaseall
	end


PokemonLeague_AgathasRoom_EventScript_Agatha::
# 57 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	lock
# 58 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	faceplayer
# 59 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 60 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_Agatha_2
PokemonLeague_AgathasRoom_EventScript_Agatha_1:
# 63 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 0
# 64 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 4
# 65 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 4
# 66 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Agatha_5
PokemonLeague_AgathasRoom_EventScript_Agatha_4:
# 69 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Agatha_8
PokemonLeague_AgathasRoom_EventScript_Agatha_7:
# 72 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 73 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 74 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Agatha_11
PokemonLeague_AgathasRoom_EventScript_Agatha_10:
# 77 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Agatha_14
PokemonLeague_AgathasRoom_EventScript_Agatha_13:
# 80 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 81 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha
	end

PokemonLeague_AgathasRoom_EventScript_Agatha_2:
# 61 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto PokemonLeague_AgathasRoom_EventScript_PostBattle
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_1

PokemonLeague_AgathasRoom_EventScript_Agatha_5:
# 67 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_Intro
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_4

PokemonLeague_AgathasRoom_EventScript_Agatha_8:
# 70 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_RematchIntro
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_7

PokemonLeague_AgathasRoom_EventScript_Agatha_11:
# 75 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_Battle
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_10

PokemonLeague_AgathasRoom_EventScript_Agatha_14:
# 78 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_AgathasRoom_EventScript_Rematch
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_13


PokemonLeague_AgathasRoom_EventScript_Intro::
# 86 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_Intro
	return


PokemonLeague_AgathasRoom_EventScript_RematchIntro::
# 91 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_RematchIntro
	return


PokemonLeague_AgathasRoom_EventScript_Battle::
# 96 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA, PokemonLeague_AgathasRoom_Text_Defeat
	return


PokemonLeague_AgathasRoom_EventScript_Rematch::
# 101 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA_2, PokemonLeague_AgathasRoom_Text_Defeat
	return


PokemonLeague_AgathasRoom_EventScript_PostBattle::
# 106 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 107 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	release
	end


PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha::
# 112 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_AGATHA
# 113 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 114 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 115 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	release
	end


PokemonLeague_AgathasRoom_Text_Intro::
# 119 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I am AGATHA of the ELITE FOUR.\p"
	.string "I hear OAK's taken a lot of\n"
	.string "interest in you, child.\p"
	.string "That old duff was once tough and\n"
	.string "handsome.\p"
	.string "But that was decades ago.\n"
	.string "He's a shadow of his former self.\p"
	.string "Now he just wants to fiddle with\n"
	.string "his POKéDEX.\p"
	.string "He's wrong.\n"
	.string "POKéMON are for battling!\p"
	.string "{PLAYER}! I'll show you how a real\n"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_AgathasRoom_Text_RematchIntro::
# 135 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I am AGATHA of the ELITE FOUR.\p"
	.string "You're the child that OAK's taken\n"
	.string "under his wing, aren't you?\p"
	.string "That old duff was once tough and\n"
	.string "handsome.\p"
	.string "But that was decades ago.\n"
	.string "He's a shadow of his former self.\p"
	.string "Now he just wants to fiddle with\n"
	.string "his POKéDEX.\p"
	.string "He's wrong.\n"
	.string "POKéMON are for battling!\p"
	.string "{PLAYER}! I'll show you how a real\n"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_AgathasRoom_Text_Defeat::
# 151 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Oh, my!\n"
	.string "You're something special, child!$"

PokemonLeague_AgathasRoom_Text_PostBattle::
# 156 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "You win!\p"
	.string "I see what the old duff sees in\n"
	.string "you now.\p"
	.string "I have nothing else to say.\n"
	.string "Run along now, child!$"
