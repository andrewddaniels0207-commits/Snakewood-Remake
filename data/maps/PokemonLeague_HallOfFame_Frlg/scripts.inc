PokemonLeague_HallOfFame_Frlg_MapScripts::
# 5 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_OnWarp
# 2 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_EnterRoom
	.2byte 0


# 8 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"

# 9 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_OnWarp:
# 10 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth
# 11 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.2byte 0

PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth::
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_HallOfFame_EventScript_EnterRoom::
# 21 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	lockall
# 22 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 23 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_Movement_EnterRoom
# 24 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterLeft
# 26 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 27 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 28 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 18
# 29 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations
# 30 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	closemessage
# 31 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 32 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 33 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 20
# 35 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD_FRLG
# 36 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD_FRLG
# 37 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 40
# 38 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 40 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 41 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 42 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	special EnterHallOfFame
# 43 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitstate
# 44 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	releaseall
	end


# 48 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_Movement_EnterRoom:
# 49 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 51 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 52 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 53 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 54 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 55 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 56 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	step_end

PokemonLeague_HallOfFame_Text_OakCongratulations::
# 60 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "OAK: Er-hem!\n"
	.string "Congratulations, {PLAYER}!\p"
	.string "This floor is the POKéMON HALL OF\n"
	.string "FAME.\p"
	.string "POKéMON LEAGUE CHAMPIONS are\n"
	.string "honored for their exploits here.\p"
	.string "Their POKéMON are also recorded in\n"
	.string "the HALL OF FAME.\p"
	.string "{PLAYER}!\p"
	.string "You have worked hard to become\n"
	.string "the new LEAGUE CHAMPION.\p"
	.string "Congratulations, {PLAYER}, you and\n"
	.string "your POKéMON are HALL OF FAMERS!$"
