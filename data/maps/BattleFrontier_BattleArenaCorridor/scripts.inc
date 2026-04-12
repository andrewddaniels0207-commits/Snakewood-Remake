# 1 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_MapScripts::
# 3 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.2byte 0
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 12 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom::
# 14 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	delay 16
# 16 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 18 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantWalkToDoor
# 20 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaCorridor_Movement_PlayerWalkToDoor
# 22 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 24 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantFacePlayer
# 26 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 28 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	msgbox BattleFrontier_BattleArenaCorridor_Text_PleaseStepIn, MSGBOX_SIGN
# 30 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_Movement_AttendantMoveOutOfWay
# 32 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 34 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaCorridor_Movement_PlayerEnterDoor
# 36 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 38 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 40 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM, 7, 5
# 42 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitstate
# 44 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 46 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 47 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_PlayerWalkToDoor::
# 48 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 44 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 50 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 51 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 52 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 54 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 56 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 58 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 60 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 62 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 64 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 66 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 68 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 70 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 72 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 74 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 76 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 78 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 80 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 82 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 84 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 86 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 88 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 90 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	return
# 91 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 92 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_PlayerEnterDoor::
# 94 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 96 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	set_invisible
# 98 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 100 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	return
# 101 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 103 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_AttendantWalkToDoor::
# 104 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 106 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 108 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 110 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 112 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 114 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 116 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 118 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 120 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 122 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 124 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 126 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 128 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 130 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 132 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 134 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 136 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 138 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 140 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 142 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 144 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 146 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	return
# 147 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 148 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_AttendantFacePlayer::
# 150 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_in_place_faster_left
# 152 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 154 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	return
# 155 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 156 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 157 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Movement_AttendantMoveOutOfWay::
# 158 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 160 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_in_place_faster_down
# 162 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_end
# 164 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	return
# 165 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 166 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"

# 167 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_Text_PleaseStepIn::
# 168 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.string "Your battles shall be waged in\n"
# 170 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.string "the next room. Please step in!$"
