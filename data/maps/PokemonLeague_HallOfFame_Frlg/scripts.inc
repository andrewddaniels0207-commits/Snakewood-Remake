# 1 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 2 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_Frlg_MapScripts::
# 3 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 5 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 4 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_OnWarp
# 5 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 2 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 6 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 9 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 3 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 11 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_EnterRoom
# 12 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 14 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 15 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 8 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 17 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 9 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 18 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_OnWarp:
# 19 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 10 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 20 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth
# 21 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 11 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 22 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.2byte 0
# 23 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 24 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth::
# 25 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 26 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 27 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	end
# 28 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 29 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 30 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_EventScript_EnterRoom::
# 31 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 21 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 32 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	lockall
# 33 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 22 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 34 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 35 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 23 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 36 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_Movement_EnterRoom
# 37 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 24 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 38 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 25 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 40 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterLeft
# 41 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 26 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 42 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 43 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 27 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 28 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 46 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 18
# 47 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 29 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 48 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations
# 49 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 30 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	closemessage
# 51 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 31 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 52 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 53 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 32 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 54 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 33 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 56 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 34 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 58 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 20
# 59 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 35 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 60 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD_FRLG
# 61 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 36 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 62 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD_FRLG
# 63 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 37 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 64 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 40
# 65 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 38 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 66 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 67 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 39 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 68 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 69 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 40 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 70 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 71 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 41 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 72 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 73 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 42 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 74 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	special EnterHallOfFame
# 75 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 43 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 76 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitstate
# 77 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 44 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 78 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	releaseall
# 79 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	end
# 80 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 81 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 82 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 48 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 83 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_Movement_EnterRoom:
# 84 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 49 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 85 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 86 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 50 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 87 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 51 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 89 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 90 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 52 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 91 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 92 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 53 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 93 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 94 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 54 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 95 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 96 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 55 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 97 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 98 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 56 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 99 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 100 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 57 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 101 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	step_end
# 102 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 103 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_Text_OakCongratulations::
# 104 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 60 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
# 105 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "OAK: Er-hem!\n"
# 106 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "Congratulations, {PLAYER}!\p"
# 107 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "This floor is the POKéMON HALL OF\n"
# 108 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "FAME.\p"
# 109 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "POKéMON LEAGUE CHAMPIONS are\n"
# 110 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "honored for their exploits here.\p"
# 111 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "Their POKéMON are also recorded in\n"
# 112 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "the HALL OF FAME.\p"
# 113 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "{PLAYER}!\p"
# 114 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "You have worked hard to become\n"
# 115 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "the new LEAGUE CHAMPION.\p"
# 116 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "Congratulations, {PLAYER}, you and\n"
# 117 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "your POKéMON are HALL OF FAMERS!$"
