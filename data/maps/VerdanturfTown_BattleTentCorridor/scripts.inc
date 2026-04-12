# 1 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 2 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_MapScripts::
# 3 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 2 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 4 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.byte 0
# 6 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 7 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 3 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 9 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor
# 10 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.2byte 0
# 11 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 12 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 13 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor::
# 14 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 8 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 15 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	lockall
# 16 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 9 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 17 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 10 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 19 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_CORRIDOR_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
# 20 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 11 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 21 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
# 22 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 12 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 23 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 24 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 13 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 25 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 26 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 14 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 27 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 28 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 15 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 29 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_CORRIDOR_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor
# 30 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 16 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 31 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor
# 32 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 17 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 33 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 34 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 18 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 35 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 36 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 19 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 37 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 38 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 20 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 39 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 40 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 21 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 41 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 6, 5
# 42 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 22 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 43 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	waitstate
# 44 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 23 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 45 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	releaseall
# 46 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	end
# 47 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 48 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 49 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 27 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 50 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor:
# 51 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 28 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 52 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 53 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 29 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 54 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 55 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 30 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 56 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 57 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 31 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 58 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 59 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 32 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 60 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	step_end
# 61 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 62 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor::
# 63 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 36 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 64 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 65 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	return
# 66 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 67 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 68 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 39 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 69 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor:
# 70 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 40 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 71 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	walk_up
# 72 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 41 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 73 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	set_invisible
# 74 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 42 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 75 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	step_end
# 76 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 77 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_ContestHall_Text_WhichContestYouEntering::
# 78 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 45 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 79 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "Which CONTEST are you entering?\n"
# 80 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "Want a piece of advice?\p"
# 81 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "In any CONTEST, for example, a CUTE\n"
# 82 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "CONTEST, I don't think they judge you\l"
# 83 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "only on cuteness in the first round.\p"
# 84 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "You need to work out ways for raising\n"
# 85 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "POKéMON better.$"
# 86 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 87 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_ContestHall_Text_RaisedMonToBeCute::
# 88 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 55 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 89 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "I raised my POKéMON to be cute.\p"
# 90 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "I found out you can put POKéMON in\n"
# 91 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "a CONTEST for cuteness!\p"
# 92 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "I'm so glad I raised my POKéMON with\n"
# 93 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "loving care…$"
# 94 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 95 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_ContestHall_Text_MyMonRules::
# 96 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 63 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 97 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "My POKéMON rules!\p"
# 98 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "It's cool, tough yet beautiful, cute,\n"
# 99 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "and smart. It's complete!\p"
# 100 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "I may as well go for wins in every\n"
# 101 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "single CONTEST.$"
# 102 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"

# 103 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
VerdanturfTown_ContestHall_Text_NormalRankStage::
# 104 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 71 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
# 105 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "POKéMON CONTESTS\n"
# 106 "data/maps/VerdanturfTown_BattleTentCorridor/scripts.pory"
	.string "NORMAL RANK STAGE!$"
