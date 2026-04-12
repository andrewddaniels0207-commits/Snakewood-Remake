BattleFrontier_BattlePikeRoomFinal_MapScripts::
# 5 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoomFinal_OnWarp
# 2 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomFinal_EventScript_EnterRoom
	.2byte 0


BattleFrontier_BattlePikeRoomFinal_EventScript_EnterRoom::
# 9 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	delay 16
# 10 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	applymovement LOCALID_PIKE_FINAL_ROOM_ATTENDANT, BattleFrontier_BattlePikeRoomFinal_Movement_AttendantApproachPlayer
# 11 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	waitmovement 0
# 12 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 13 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	lockall
# 14 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomFinal_Text_CongratsThisWayPlease, MSGBOX_DEFAULT
# 15 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	closemessage
# 16 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	releaseall
# 17 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 18 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	waitstate
	end


# 22 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_Movement_AttendantApproachPlayer:
# 23 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	walk_down
# 24 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	walk_down
# 25 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	step_end

# 28 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"

# 29 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_OnWarp:
# 30 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeRoomFinal_EventScript_TurnPlayerNorth
# 31 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	.2byte 0

BattleFrontier_BattlePikeRoomFinal_EventScript_TurnPlayerNorth::
# 36 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	setvar VAR_TEMP_4, 1
# 37 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattlePikeRoomFinal_Text_CongratsThisWayPlease::
# 41 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	.string "Congratulations…\n"
	.string "Now, this way, please…$"
