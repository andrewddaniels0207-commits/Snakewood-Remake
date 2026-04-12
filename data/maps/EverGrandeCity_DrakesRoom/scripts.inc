# 1 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 5 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 4 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
# 5 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 6 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 6 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 7 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 2 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 8 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 3 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 13 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
# 14 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 9 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 18 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 10 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 20 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnWarp:
# 21 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 11 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 22 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
# 23 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 12 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 24 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.2byte 0
# 25 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
# 27 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 17 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 28 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 29 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 30 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 31 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
# 33 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 22 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 34 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lockall
# 35 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 23 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 36 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 37 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 24 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 38 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 4
# 39 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 25 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 40 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	releaseall
# 41 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 42 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 43 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 44 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad::
# 45 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 30 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 46 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_OnLoad_2
# 47 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad_1:
# 48 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 33 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 49 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	compare VAR_ELITE_4_STATE, 4
# 50 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_eq EverGrandeCity_DrakesRoom_OnLoad_5
# 51 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad_4:
# 52 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 53 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 54 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad_2:
# 55 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 31 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
# 57 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_OnLoad_1
# 58 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_OnLoad_5:
# 60 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 34 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 61 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call EverGrandeCity_DrakesRoom_EventScript_CloseDoor
# 62 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_OnLoad_4
# 63 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 64 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 65 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
# 66 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 40 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 67 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 68 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 69 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 70 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 71 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
# 72 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 45 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 73 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 74 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	return
# 75 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 76 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 77 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Drake::
# 78 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 50 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 79 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	lock
# 80 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 51 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 81 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	faceplayer
# 82 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 52 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 83 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_Drake_2
# 84 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Drake_1:
# 85 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 55 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 86 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 87 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 88 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 57 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 90 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
# 91 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 58 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 92 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
# 93 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 94 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 95 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Drake_2:
# 96 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 53 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 97 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
# 98 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	goto EverGrandeCity_DrakesRoom_EventScript_Drake_1
# 99 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 100 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 101 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
# 102 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 63 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 103 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 104 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 64 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 105 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 106 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 107 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 108 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 109 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_EventScript_Defeated::
# 110 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 69 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 111 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
# 112 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 70 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 113 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 114 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 71 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 115 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
# 116 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 72 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 117 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 118 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 73 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 119 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 120 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 74 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 121 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	release
# 122 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	end
# 123 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 124 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 125 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_IntroSpeech::
# 126 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 78 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 127 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "I am the last of the POKéMON LEAGUE\n"
# 128 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "ELITE FOUR, DRAKE the DRAGON master!\p"
# 129 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "In their natural state, POKéMON are\n"
# 130 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "wild living things. They are free.\p"
# 131 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "At times, they hinder us.\n"
# 132 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "At times, they help us.\p"
# 133 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "For us to battle with POKéMON as\n"
# 134 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "partners, do you know what it takes?\p"
# 135 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Do you know what is needed?\p"
# 136 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "If you don't, then you will never\n"
# 137 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "prevail over me!$"
# 138 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 139 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_Defeat::
# 140 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 92 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 141 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Superb, it should be said.$"
# 142 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"

# 143 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
EverGrandeCity_DrakesRoom_Text_PostBattleSpeech::
# 144 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 96 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
# 145 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You deserve every credit for coming\n"
# 146 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "this far as a TRAINER of POKéMON.\p"
# 147 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "You do seem to know what is needed.\p"
# 148 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Yes, what a TRAINER needs is a\n"
# 149 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "virtuous heart.\p"
# 150 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "POKéMON touch the good hearts of\n"
# 151 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "TRAINERS and learn good from wrong.\p"
# 152 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "They touch the good hearts of\n"
# 153 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "TRAINERS and grow strong.\p"
# 154 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "Go! Go onwards!\n"
# 155 "data/maps/EverGrandeCity_DrakesRoom/scripts.pory"
	.string "The CHAMPION is waiting!$"
