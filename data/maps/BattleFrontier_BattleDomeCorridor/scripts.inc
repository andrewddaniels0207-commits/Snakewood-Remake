# 1 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_MapScripts::
# 3 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor
# 10 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	.2byte 0
# 11 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 12 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor::
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	delay 16
# 16 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 20 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
# 22 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_2
# 24 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 25 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 27 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_1::
# 28 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_DOME_CORRIDOR_ATTENDANT, BattleFrontier_BattleDomeCorridor_Movement_AttendantWalkToDoorLv50
# 30 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeCorridor_Movement_PlayerWalkToDoorLv50
# 32 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 34 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	opendoor 13, 3
# 36 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitdooranim
# 38 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_DOME_CORRIDOR_ATTENDANT, BattleFrontier_BattleDomeCorridor_Movement_AttendantEnterDoorLv50
# 40 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeCorridor_Movement_PlayerEnterDoorLv50
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 44 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	closedoor 13, 3
# 46 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitdooranim
# 48 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	goto BattleFrontier_BattleDomeCorridor_EventScript_WarpToPreBattleRoom
# 50 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 51 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 53 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_2::
# 54 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	goto BattleFrontier_BattleDomeCorridor_EventScript_WalkToBattleRoomLvOpen
# 56 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	goto BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_1
# 58 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 59 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 60 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 61 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_WalkToBattleRoomLvOpen::
# 62 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_DOME_CORRIDOR_ATTENDANT, BattleFrontier_BattleDomeCorridor_Movement_AttendantWalkToDoorLvOpen
# 64 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeCorridor_Movement_PlayerWalkToDoorLvOpen
# 66 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 68 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	opendoor 37, 3
# 70 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitdooranim
# 72 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_DOME_CORRIDOR_ATTENDANT, BattleFrontier_BattleDomeCorridor_Movement_AttendantEnterDoorLvOpen
# 74 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeCorridor_Movement_PlayerEnterDoorLvOpen
# 76 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 78 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	closedoor 37, 3
# 80 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitdooranim
# 82 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 83 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 84 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 85 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_WarpToPreBattleRoom::
# 86 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 88 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 90 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 5, 7
# 92 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitstate
# 94 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	end
# 95 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 97 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_PlayerWalkToDoorLv50::
# 98 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 100 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 102 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 104 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 106 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 108 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 110 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 112 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 114 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 116 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 118 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 120 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_in_place_faster_up
# 122 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 124 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 125 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 126 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 127 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_PlayerEnterDoorLv50::
# 128 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 130 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 132 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	set_invisible
# 134 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 136 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 137 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 138 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 139 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_AttendantWalkToDoorLv50::
# 140 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 142 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 144 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 146 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 148 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 150 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 152 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 154 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 156 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 158 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 160 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 162 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 164 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 165 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 166 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 167 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_AttendantEnterDoorLv50::
# 168 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 170 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	set_invisible
# 172 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 174 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 175 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 176 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 177 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_PlayerWalkToDoorLvOpen::
# 178 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 180 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 182 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 184 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 186 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 188 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 190 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 192 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 194 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 196 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 197 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 198 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 200 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 202 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 204 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 206 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 198 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 208 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_in_place_faster_up
# 210 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 202 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 212 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 213 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 214 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_PlayerEnterDoorLvOpen::
# 216 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 218 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 220 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 221 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	set_invisible
# 222 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 224 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 225 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 226 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 227 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_AttendantWalkToDoorLvOpen::
# 228 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 229 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 230 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 232 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 233 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 234 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 235 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 236 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 238 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 239 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 240 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 242 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 244 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 246 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 248 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 250 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 251 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 252 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 254 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 256 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 258 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 260 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 261 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 262 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 263 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_AttendantEnterDoorLvOpen::
# 264 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 266 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	set_invisible
# 268 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 270 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
# 271 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 272 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_WalkToBattleRoomMidRight::
# 274 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 276 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 277 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 278 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 279 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 280 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 272 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 282 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 284 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 285 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 286 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 287 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 288 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 290 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 292 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 294 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 286 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 296 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 297 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 298 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 300 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 302 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	set_invisible
# 304 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
# 305 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_end
# 306 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	return
