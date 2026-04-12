# 1 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerElevator_OnWarp
# 5 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerElevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator
# 12 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_EnterElevator::
# 16 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	applymovement LOCALID_TOWER_ELEVATOR_ATTENDANT, BattleFrontier_BattleTowerElevator_Movement_AttendantEnter
# 20 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerElevator_Movement_PlayerEnter
# 22 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 12 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitmovement 0
# 24 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	special BufferBattleTowerElevatorFloors
# 26 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 14 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitse
# 28 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	special MoveElevator
# 30 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitstate
# 32 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	delay 48
# 34 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 18 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	applymovement LOCALID_TOWER_ELEVATOR_ATTENDANT, BattleFrontier_BattleTowerElevator_Movement_AttendantExit
# 36 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerElevator_Movement_PlayerExit
# 38 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitmovement 0
# 40 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	call BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom
# 42 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	end
# 43 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 45 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom::
# 46 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 48 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_2
# 49 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_1:
# 50 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 51 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 52 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_5
# 53 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_4:
# 54 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 56 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_8
# 57 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_7:
# 58 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 60 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_11
# 61 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_10:
# 62 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	return
# 63 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 64 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_2:
# 65 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	call BattleFrontier_BattleTowerElevator_EventScript_WarpToCorridor
# 67 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_1
# 68 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 69 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_5:
# 70 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	call BattleFrontier_BattleTowerElevator_EventScript_WarpToCorridor
# 72 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_4
# 73 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 74 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_8:
# 75 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	call BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoomMulti
# 77 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_7
# 78 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 79 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_11:
# 80 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	call BattleFrontier_BattleTowerElevator_EventScript_WarpToCorridorMulti
# 82 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoom_10
# 83 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 84 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 85 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToCorridor::
# 86 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_CORRIDOR, 8, 1
# 88 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitstate
# 90 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	return
# 91 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 92 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoomMulti::
# 94 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto_if_unset FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoomMulti_2
# 96 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoomMulti_1:
# 97 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 51 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR, 7, 2
# 99 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitstate
# 101 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	return
# 102 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 103 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoomMulti_2:
# 104 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto BattleFrontier_BattleTowerElevator_EventScript_WarpToPartnerRoom
# 106 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto BattleFrontier_BattleTowerElevator_EventScript_WarpToNextRoomMulti_1
# 107 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 108 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 109 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToCorridorMulti::
# 110 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR, 7, 2
# 112 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitstate
# 114 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	return
# 115 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 116 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 117 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_WarpToPartnerRoom::
# 118 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 10, 1
# 120 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitstate
# 122 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	return
# 123 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 124 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 125 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_Movement_AttendantEnter:
# 127 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_up
# 129 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_right
# 131 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	face_down
# 133 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	step_end
# 135 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 136 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_Movement_PlayerEnter:
# 138 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_up
# 140 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_up
# 142 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	face_down
# 144 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	step_end
# 146 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_Movement_AttendantExit:
# 149 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_down
# 151 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_down
# 153 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	set_invisible
# 155 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	step_end
# 157 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 158 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_Movement_PlayerExit:
# 160 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_right
# 162 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_down
# 164 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_down
# 166 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	step_end
# 168 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 169 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 171 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_OnWarp:
# 173 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerElevator_EventScript_TurnPlayerNorth
# 175 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	.2byte 0
# 177 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"

# 178 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_TurnPlayerNorth::
# 179 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	setvar VAR_TEMP_1, 1
# 181 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 183 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	end
