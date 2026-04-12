# 1 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 4 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
# 7 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 8 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 13 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
# 14 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 9 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 18 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 10 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 20 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnWarp:
# 21 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
# 23 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 24 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.2byte 0
# 25 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
# 27 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 17 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 28 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 29 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lockall
# 35 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 23 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 36 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 37 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 24 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 38 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 3
# 39 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 25 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 40 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
# 41 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 42 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 43 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 44 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad::
# 45 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 46 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_OnLoad_2
# 47 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad_1:
# 48 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 49 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	compare VAR_ELITE_4_STATE, 3
# 50 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_eq EverGrandeCity_GlaciasRoom_OnLoad_5
# 51 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad_4:
# 52 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 53 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 54 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad_2:
# 55 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
# 57 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_OnLoad_1
# 58 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_OnLoad_5:
# 60 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 61 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
# 62 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_OnLoad_4
# 63 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 64 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 65 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
# 66 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 40 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 67 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 68 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 69 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 70 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 71 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
# 72 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 45 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 73 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 74 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	return
# 75 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 76 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 77 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 78 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 50 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 79 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock
# 80 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 51 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 81 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	faceplayer
# 82 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 52 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 83 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_Glacia_2
# 84 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Glacia_1:
# 85 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 55 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 86 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 87 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 88 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 57 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 90 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 91 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 58 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 92 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
# 93 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 94 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 95 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Glacia_2:
# 96 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 53 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 97 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
# 98 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto EverGrandeCity_GlaciasRoom_EventScript_Glacia_1
# 99 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 100 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 101 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
# 102 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 63 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 103 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 104 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 64 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 105 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 106 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 107 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 108 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 109 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_EventScript_Defeated::
# 110 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 69 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 111 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 112 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 70 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 113 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 114 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 71 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 115 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 116 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 72 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 117 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	release
# 118 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	end
# 119 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 120 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 121 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_IntroSpeech::
# 122 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 76 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 123 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Welcome, my name is GLACIA\n"
# 124 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "of the ELITE FOUR.\p"
# 125 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "I've traveled from afar to HOENN\n"
# 126 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "so that I may hone my ice skills.\p"
# 127 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "But all I have seen are challenges by\n"
# 128 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "weak TRAINERS and their POKéMON.\p"
# 129 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "What about you?\p"
# 130 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "It would please me to no end if I could\n"
# 131 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "go all out against you!$"
# 132 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 133 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_Defeat::
# 134 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 88 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 135 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "You and your POKéMON…\n"
# 136 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "How hot your spirits burn!\p"
# 137 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "The all-consuming heat overwhelms.\p"
# 138 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "It's no surprise that my icy skills\n"
# 139 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "failed to harm you.$"
# 140 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"

# 141 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech::
# 142 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 96 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
# 143 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Advance to the next room.\p"
# 144 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "And there, confirm the truly fearsome\n"
# 145 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "side of the POKéMON LEAGUE.$"
