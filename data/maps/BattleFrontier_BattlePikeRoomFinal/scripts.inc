# 1 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoomFinal_OnWarp
# 5 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomFinal_EventScript_EnterRoom
# 12 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 15 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_EventScript_EnterRoom::
# 16 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 9 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	delay 16
# 18 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 10 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	applymovement LOCALID_PIKE_FINAL_ROOM_ATTENDANT, BattleFrontier_BattlePikeRoomFinal_Movement_AttendantApproachPlayer
# 20 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	waitmovement 0
# 22 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 24 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	lockall
# 26 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomFinal_Text_CongratsThisWayPlease, MSGBOX_DEFAULT
# 28 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	closemessage
# 30 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 16 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	releaseall
# 32 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 34 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 18 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	waitstate
# 36 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	end
# 37 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 38 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 39 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 22 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_Movement_AttendantApproachPlayer:
# 41 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	walk_down
# 43 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	walk_down
# 45 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 46 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	step_end
# 47 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 48 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 28 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 50 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_OnWarp:
# 52 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 53 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeRoomFinal_EventScript_TurnPlayerNorth
# 54 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 55 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	.2byte 0
# 56 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 57 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_EventScript_TurnPlayerNorth::
# 58 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 59 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	setvar VAR_TEMP_4, 1
# 60 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 62 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 64 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 65 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_Text_CongratsThisWayPlease::
# 66 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 41 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	.string "Congratulations…\n"
# 68 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	.string "Now, this way, please…$"
