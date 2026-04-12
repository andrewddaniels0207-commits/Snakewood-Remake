# 1 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeCorridor_OnWarp
# 5 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor
# 12 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 15 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor::
# 16 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 9 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	delay 16
# 18 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 10 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, 1
# 20 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	pike_cleartrainerids
# 22 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	pike_nohealing TRUE
# 24 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeCorridor_Movement_PlayerEnterCorridor
# 26 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	applymovement LOCALID_PIKE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePikeCorridor_Movement_AttendantEnterCorridor
# 28 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	waitmovement 0
# 30 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 16 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	lockall
# 32 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePikeCorridor_Text_YourChallengeHasBegun, MSGBOX_DEFAULT
# 34 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 18 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	closemessage
# 36 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	releaseall
# 38 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 20 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeCorridor_Movement_PlayerExitCorridor
# 40 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	waitmovement 0
# 42 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 22 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 99
# 44 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 45 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
# 46 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 47 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_THREE_PATH_ROOM, 6, 10
# 48 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	waitstate
# 50 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	end
# 51 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 52 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 53 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 54 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 55 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_OnWarp:
# 57 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeCorridor_EventScript_TurnPlayerNorth
# 59 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	.2byte 0
# 61 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 62 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_EventScript_TurnPlayerNorth::
# 63 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 65 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 66 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 67 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 69 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 70 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_Movement_PlayerEnterCorridor:
# 72 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 73 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 74 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 75 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 76 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 45 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 77 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	step_end
# 78 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 79 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_Movement_PlayerExitCorridor:
# 81 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 83 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 85 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	set_invisible
# 87 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 88 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	step_end
# 89 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 90 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 55 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_Movement_AttendantEnterCorridor:
# 92 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 94 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 96 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_left
# 98 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 59 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	face_down
# 100 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	step_end
# 102 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"

# 103 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_Text_YourChallengeHasBegun::
# 104 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	.string "Your Battle Choice challenge\n"
# 106 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	.string "has now begun…$"
