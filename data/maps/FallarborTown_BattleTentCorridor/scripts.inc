# 1 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 2 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_MapScripts::
# 3 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 2 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 4 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.byte 0
# 6 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 7 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 3 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 9 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, FallarborTown_BattleTentCorridor_EventScript_EnterCorridor
# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.2byte 0
# 11 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 12 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 13 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_EventScript_EnterCorridor::
# 14 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 8 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 15 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	lockall
# 16 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 9 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 17 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 19 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_CORRIDOR_ATTENDANT, FallarborTown_BattleTentCorridor_Movement_WalkToDoor
# 20 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 11 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 21 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentCorridor_Movement_WalkToDoor
# 22 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 12 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 23 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 24 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 13 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 25 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 26 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 14 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 27 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 28 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 15 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 29 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_CORRIDOR_ATTENDANT, FallarborTown_BattleTentCorridor_Movement_AttendantEnterDoor
# 30 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 16 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 31 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentCorridor_Movement_PlayerEnterDoor
# 32 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 17 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 33 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 34 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 18 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 35 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 36 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 19 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 37 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 38 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 20 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 39 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 40 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 21 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 41 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM, 4, 4
# 42 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 22 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 43 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitstate
# 44 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 23 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 45 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	releaseall
# 46 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	end
# 47 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 48 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 49 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 27 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 50 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_Movement_WalkToDoor:
# 51 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 28 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 52 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 53 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 29 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 54 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 55 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 30 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 56 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 57 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 31 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 58 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 59 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 32 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 60 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	step_end
# 61 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 62 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_Movement_PlayerEnterDoor::
# 63 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 36 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 64 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 65 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	return
# 66 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 67 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 68 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 39 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 69 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_Movement_AttendantEnterDoor:
# 70 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 40 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 71 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 72 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 41 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 73 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	set_invisible
# 74 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 42 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 75 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	step_end
# 76 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 77 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_ContestHall_Text_DoAllRightInPreliminary::
# 78 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 45 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 79 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "We do all right in the preliminary round,\n"
# 80 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "but we can never win the appeals…\p"
# 81 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "Maybe it means I have to watch what\n"
# 82 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "other contestants are doing…$"
# 83 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 84 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_ContestHall_Text_MonAllTheseRibbons::
# 85 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 52 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 86 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "See!\n"
# 87 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "My POKéMON won all these RIBBONS!\p"
# 88 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "Have your POKéMON earned any RIBBONS?\n"
# 89 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "You can check them on your POKéNAV.$"
# 90 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 91 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_ContestHall_Text_CantWinEverywhere::
# 92 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 59 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 93 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "I can't beat GYM LEADERS…\p"
# 94 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "I can't win any CONTESTS…\p"
# 95 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "I've been here, there, and everywhere,\n"
# 96 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "and it's all for naught…$"
# 97 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"

# 98 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_ContestHall_Text_SuperRankStage::
# 99 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 66 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
# 100 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "POKéMON CONTESTS\n"
# 101 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "SUPER RANK STAGE!$"
