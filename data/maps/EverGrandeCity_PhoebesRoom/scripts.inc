EverGrandeCity_PhoebesRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EverGrandeCity_PhoebesRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
	.2byte 0


# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0

EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lockall
# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 2
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
	end


EverGrandeCity_PhoebesRoom_OnLoad::
# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_OnLoad_2
EverGrandeCity_PhoebesRoom_OnLoad_1:
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_ELITE_4_STATE, 2
	goto_if_eq EverGrandeCity_PhoebesRoom_OnLoad_5
EverGrandeCity_PhoebesRoom_OnLoad_4:
	end

EverGrandeCity_PhoebesRoom_OnLoad_2:
# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
	goto EverGrandeCity_PhoebesRoom_OnLoad_1

EverGrandeCity_PhoebesRoom_OnLoad_5:
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
	goto EverGrandeCity_PhoebesRoom_OnLoad_4


EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return


EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return


EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_Phoebe_2
EverGrandeCity_PhoebesRoom_EventScript_Phoebe_1:
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
	end

EverGrandeCity_PhoebesRoom_EventScript_Phoebe_2:
# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
	goto EverGrandeCity_PhoebesRoom_EventScript_Phoebe_1


EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
	end


EverGrandeCity_PhoebesRoom_Text_IntroSpeech::
# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Ahahaha!\p"
	.string "I'm PHOEBE of the ELITE FOUR.\n"
	.string "I did my training on MT. PYRE.\p"
	.string "While I trained, I gained the ability\n"
	.string "to commune with GHOST-type POKéMON.\p"
	.string "Yes, the bond I developed with POKéMON\n"
	.string "is extremely tight.\p"
	.string "So, come on, just try and see if you can\n"
	.string "even inflict damage on my POKéMON!$"

EverGrandeCity_PhoebesRoom_Text_Defeat::
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh, darn.\n"
	.string "I've gone and lost.$"

EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech::
# 93 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "There's a definite bond between you\n"
	.string "and your POKéMON, too.\p"
	.string "I didn't recognize it, so it's only\n"
	.string "natural that I lost.\p"
	.string "Yup, I'd like to see how far your bond\n"
	.string "will carry you.\p"
	.string "Go ahead, move on to the next room.$"
