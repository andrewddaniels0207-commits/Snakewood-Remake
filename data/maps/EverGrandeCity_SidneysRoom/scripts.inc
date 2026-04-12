# 1 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 2 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 4 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_SidneysRoom_OnLoad
# 5 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 3 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 6 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 7 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 4 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 8 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_SidneysRoom_OnTransition
# 9 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 5 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 10 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.byte 0
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 6 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 15 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
# 16 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 19 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnTransition::
# 20 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 21 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 22 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 23 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 24 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 26 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad::
# 28 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 29 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_OnLoad_2
# 30 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad_1:
# 31 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 20 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 32 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	compare VAR_ELITE_4_STATE, 1
# 33 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_eq EverGrandeCity_SidneysRoom_OnLoad_5
# 34 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad_4:
# 35 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad_2:
# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom
# 40 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_OnLoad_1
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad_5:
# 43 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 21 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call EverGrandeCity_SidneysRoom_EventScript_CloseDoor
# 45 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_OnLoad_4
# 46 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 47 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 48 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom::
# 49 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 51 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 53 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 54 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_CloseDoor::
# 55 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 32 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 56 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 58 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 59 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 60 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 61 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 62 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 63 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnWarp:
# 64 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 65 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
# 66 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 67 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 68 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 69 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth::
# 70 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 71 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 72 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 73 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 74 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 75 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor::
# 76 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 49 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 77 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lockall
# 78 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 79 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 80 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 51 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 81 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 1
# 82 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 83 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
# 84 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 85 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 86 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 87 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 88 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 89 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 90 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 58 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 91 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 92 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 59 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 93 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_Sidney_2
# 94 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Sidney_1:
# 95 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 62 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 96 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 97 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 63 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 98 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 99 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 64 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 100 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
# 101 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 65 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 102 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
# 103 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 104 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 105 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Sidney_2:
# 106 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 60 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 107 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
# 108 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_1
# 109 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 110 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 111 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech::
# 112 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 70 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 113 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 114 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 71 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 115 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 116 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 117 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 118 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 119 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Defeated::
# 120 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 76 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 121 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 122 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 77 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 123 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 124 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 78 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 125 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 126 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 79 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 127 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 128 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 129 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 130 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 131 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_IntroSpeech::
# 132 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 83 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 133 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Welcome, challenger!\n"
# 134 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I'm SIDNEY of the ELITE FOUR.\p"
# 135 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I like that look you're giving me.\n"
# 136 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I guess you'll give me a good match.\l"
# 137 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "That's good! Looking real good!\p"
# 138 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "All right! You and me, let's enjoy\n"
# 139 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "a battle that can only be staged\l"
# 140 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "here in the POKéMON LEAGUE!$"
# 141 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 142 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_Defeat::
# 143 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 94 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 144 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, how do you like that? I lost!\n"
# 145 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Eh, it was fun, so it doesn't matter.$"
# 146 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 147 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_PostBattleSpeech::
# 148 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 99 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
# 149 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, listen to what this loser has\n"
# 150 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "to say.\p"
# 151 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You've got what it takes to go far.\n"
# 152 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Now, go on to the next room and enjoy\l"
# 153 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "your next battle!$"
