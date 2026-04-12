BattleFrontier_BattleArenaCorridor_MapScripts::
# 2 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleArenaCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom
	.2byte 0


BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom::
# 9 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	delay 16
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 13 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantWalkToDoor
# 15 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaCorridor_Movement_PlayerWalkToDoor
# 17 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 19 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantFacePlayer
# 21 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 23 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	msgbox BattleFrontier_BattleArenaCorridor_Text_PleaseStepIn, MSGBOX_SIGN
# 25 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantMoveOutOfWay
# 27 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 29 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaCorridor_Movement_PlayerEnterDoor
# 31 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 33 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 35 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM, 7, 5
# 37 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitstate
	end


BattleFrontier_BattleArenaCorridor_Movement_PlayerWalkToDoor::
# 44 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 46 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 48 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 50 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 52 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 54 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 56 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 58 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 60 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 62 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 64 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 66 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 68 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 70 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 72 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 74 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 76 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 78 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 80 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 82 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 84 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
	return


BattleFrontier_BattleArenaCorridor_Movement_PlayerEnterDoor::
# 90 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 92 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	set_invisible
# 94 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
	return


BattleFrontier_BattleArenaCorridor_Movement_AttendantWalkToDoor::
# 100 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 102 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 104 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 106 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 108 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 110 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 112 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 114 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 116 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 118 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 120 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 122 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 124 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 126 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 128 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 130 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 132 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 134 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 136 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 138 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 140 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
	return


BattleFrontier_BattleArenaCorridor_Movement_AttendantFacePlayer::
# 146 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_in_place_faster_left
# 148 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
	return


BattleFrontier_BattleArenaCorridor_Movement_AttendantMoveOutOfWay::
# 154 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 156 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_in_place_faster_down
# 158 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
	return


BattleFrontier_BattleArenaCorridor_Text_PleaseStepIn::
# 161 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.string "Your battles shall be waged in\n"
	.string "the next room. Please step in!$"
