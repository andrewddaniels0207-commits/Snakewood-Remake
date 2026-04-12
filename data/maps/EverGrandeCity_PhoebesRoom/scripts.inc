# 1 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 6 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 7 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 8 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 13 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
# 14 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 18 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 20 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 21 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 27 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 28 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 29 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lockall
# 35 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 36 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 37 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 38 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 2
# 39 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
# 41 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 42 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 43 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 44 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad::
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 46 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_OnLoad_2
# 47 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad_1:
# 48 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 49 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	compare VAR_ELITE_4_STATE, 2
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_eq EverGrandeCity_PhoebesRoom_OnLoad_5
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad_4:
# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 54 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad_2:
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_OnLoad_1
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad_5:
# 60 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 61 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
# 62 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_OnLoad_4
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 65 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
# 66 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 67 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 68 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 73 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 74 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 75 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 77 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 78 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 79 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 80 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 81 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 82 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 83 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_Phoebe_2
# 84 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe_1:
# 85 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 86 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 87 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 90 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 91 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 92 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 93 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 94 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 95 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe_2:
# 96 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 97 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 98 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Phoebe_1
# 99 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 100 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 101 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 102 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 103 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 104 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 105 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 106 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 107 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 108 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 109 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 110 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 111 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 112 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 113 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 114 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 115 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 116 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 117 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 118 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 119 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 120 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 121 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech::
# 122 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 123 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Ahahaha!\p"
# 124 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I'm PHOEBE of the ELITE FOUR.\n"
# 125 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I did my training on MT. PYRE.\p"
# 126 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "While I trained, I gained the ability\n"
# 127 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "to commune with GHOST-type POKéMON.\p"
# 128 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes, the bond I developed with POKéMON\n"
# 129 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "is extremely tight.\p"
# 130 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "So, come on, just try and see if you can\n"
# 131 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "even inflict damage on my POKéMON!$"
# 132 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 133 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat::
# 134 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 135 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh, darn.\n"
# 136 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I've gone and lost.$"
# 137 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 138 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech::
# 139 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 93 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
# 140 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "There's a definite bond between you\n"
# 141 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "and your POKéMON, too.\p"
# 142 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I didn't recognize it, so it's only\n"
# 143 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "natural that I lost.\p"
# 144 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yup, I'd like to see how far your bond\n"
# 145 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "will carry you.\p"
# 146 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Go ahead, move on to the next room.$"
