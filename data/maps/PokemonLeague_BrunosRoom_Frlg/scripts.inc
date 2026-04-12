PokemonLeague_BrunosRoom_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
# 3 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
# 4 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_OnWarp
# 5 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_EventScript_EnterRoom
	.2byte 0


PokemonLeague_BrunosRoom_OnResume::
# 11 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 12 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end


PokemonLeague_BrunosRoom_OnLoad::
# 17 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_OnLoad_2
PokemonLeague_BrunosRoom_OnLoad_1:
# 20 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 2
	goto_if_eq PokemonLeague_BrunosRoom_OnLoad_5
PokemonLeague_BrunosRoom_OnLoad_4:
	end

PokemonLeague_BrunosRoom_OnLoad_2:
# 18 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
	goto PokemonLeague_BrunosRoom_OnLoad_1

PokemonLeague_BrunosRoom_OnLoad_5:
# 21 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_CloseEntry
	goto PokemonLeague_BrunosRoom_OnLoad_4


PokemonLeague_BrunosRoom_EventScript_CloseEntry::
# 27 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	return


PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
# 32 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	return


# 36 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"

# 37 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
PokemonLeague_BrunosRoom_OnWarp:
# 38 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
# 39 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.2byte 0

PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
# 44 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_BrunosRoom_EventScript_EnterRoom::
# 49 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	lockall
# 50 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 51 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 52 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	releaseall
	end


PokemonLeague_BrunosRoom_EventScript_Bruno::
# 57 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	lock
# 58 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	faceplayer
# 59 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 60 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_Bruno_2
PokemonLeague_BrunosRoom_EventScript_Bruno_1:
# 63 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 0
# 64 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 1
# 65 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Bruno_5
PokemonLeague_BrunosRoom_EventScript_Bruno_4:
# 68 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Bruno_8
PokemonLeague_BrunosRoom_EventScript_Bruno_7:
# 71 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 72 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 73 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Bruno_11
PokemonLeague_BrunosRoom_EventScript_Bruno_10:
# 76 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Bruno_14
PokemonLeague_BrunosRoom_EventScript_Bruno_13:
# 79 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 80 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
	end

PokemonLeague_BrunosRoom_EventScript_Bruno_2:
# 61 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_1

PokemonLeague_BrunosRoom_EventScript_Bruno_5:
# 66 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Intro
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_4

PokemonLeague_BrunosRoom_EventScript_Bruno_8:
# 69 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_RematchIntro
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_7

PokemonLeague_BrunosRoom_EventScript_Bruno_11:
# 74 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Battle
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_10

PokemonLeague_BrunosRoom_EventScript_Bruno_14:
# 77 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Rematch
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_13


PokemonLeague_BrunosRoom_EventScript_Intro::
# 85 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_Intro
	return


PokemonLeague_BrunosRoom_EventScript_RematchIntro::
# 90 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
	return


PokemonLeague_BrunosRoom_EventScript_Battle::
# 95 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
	return


PokemonLeague_BrunosRoom_EventScript_Rematch::
# 100 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat
	return


PokemonLeague_BrunosRoom_EventScript_PostBattle::
# 105 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 106 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	closemessage
# 107 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_PostBattle_2
PokemonLeague_BrunosRoom_EventScript_PostBattle_1:
# 110 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_PostBattle_5
PokemonLeague_BrunosRoom_EventScript_PostBattle_4:
# 113 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_PostBattle_8
PokemonLeague_BrunosRoom_EventScript_PostBattle_7:
# 116 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_PostBattle_11
PokemonLeague_BrunosRoom_EventScript_PostBattle_10:
# 119 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	release
	end

PokemonLeague_BrunosRoom_EventScript_PostBattle_2:
# 108 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle_1

PokemonLeague_BrunosRoom_EventScript_PostBattle_5:
# 111 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle_4

PokemonLeague_BrunosRoom_EventScript_PostBattle_8:
# 114 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle_7

PokemonLeague_BrunosRoom_EventScript_PostBattle_11:
# 117 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
	goto PokemonLeague_BrunosRoom_EventScript_PostBattle_10


PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
# 124 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 125 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 126 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 127 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	closemessage
# 128 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_2
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_1:
# 131 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_5
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_4:
# 134 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_8
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_7:
# 137 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_11
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_10:
# 140 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	release
	end

PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_2:
# 129 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_1

PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_5:
# 132 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_4

PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_8:
# 135 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_7

PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_11:
# 138 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno_10


PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft::
# 145 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterLeft
# 146 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
	return


PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight::
# 151 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterRight
# 152 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
	return


PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown::
# 157 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterDown
# 158 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
	return


PokemonLeague_BrunosRoom_Text_Intro::
# 162 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I am BRUNO of the ELITE FOUR!\p"
	.string "Through rigorous training, people\n"
	.string "and POKéMON can become stronger\l"
	.string "without limit.\p"
	.string "I've lived and trained with my\n"
	.string "fighting POKéMON!\l"
	.string "And that will never change!\p"
	.string "{PLAYER}!\p"
	.string "We will grind you down with our\n"
	.string "superior power!\p"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_BrunosRoom_Text_RematchIntro::
# 176 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I am BRUNO of the ELITE FOUR!\p"
	.string "Through rigorous training, people\n"
	.string "and POKéMON can become stronger\l"
	.string "without limit.\p"
	.string "I've lived and trained with my\n"
	.string "fighting POKéMON!\l"
	.string "And that will never change!\p"
	.string "{PLAYER}!\p"
	.string "We will grind you down with our\n"
	.string "superior power!\p"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_BrunosRoom_Text_Defeat::
# 190 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Why?\n"
	.string "How could I lose?$"

PokemonLeague_BrunosRoom_Text_PostBattle::
# 195 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "My job is done.\n"
	.string "Go face your next challenge.$"
