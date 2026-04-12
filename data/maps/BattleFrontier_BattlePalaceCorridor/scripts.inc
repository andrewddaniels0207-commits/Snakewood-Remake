# 1 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 7 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 9 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor
# 10 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.2byte 0
# 11 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 12 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 13 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor::
# 14 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	delay 16
# 16 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 9 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_Movement_EnterCorridor
# 18 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 10 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceCorridor_Movement_EnterCorridor
# 20 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 22 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	lockall
# 24 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	palace_getcomment
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	compare VAR_RESULT, 0
# 28 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_2
# 29 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_1:
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	compare VAR_RESULT, 1
# 32 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_5
# 33 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_4:
# 34 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 20 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	compare VAR_RESULT, 2
# 36 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_8
# 37 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_7:
# 38 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	compare VAR_RESULT, 3
# 40 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_11
# 41 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_10:
# 42 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	compare VAR_RESULT, 4
# 44 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_14
# 45 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_13:
# 46 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 47 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	closemessage
# 48 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 50 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
# 52 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_17
# 53 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_16:
# 54 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 55 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_Movement_AttendantWalkTo50BattleRoom
# 56 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceCorridor_Movement_PlayerWalkTo50BattleRoom
# 58 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 59 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 60 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	opendoor 6, 3
# 62 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitdooranim
# 64 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_Movement_AttendantEnterBattleRoom
# 66 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceCorridor_Movement_PlayerEnterBattleRoom
# 68 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 69 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 70 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	closedoor 6, 3
# 72 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 73 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitdooranim
# 74 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 75 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WarpToBattleRoom
# 76 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	return
# 77 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 78 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_2:
# 79 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	call BattleFrontier_BattlePalaceCorridor_EventScript_RandomComment1
# 81 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_1
# 82 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 83 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_5:
# 84 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 18 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 85 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	call BattleFrontier_BattlePalaceCorridor_EventScript_RandomComment2
# 86 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_4
# 87 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 88 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_8:
# 89 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 90 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	call BattleFrontier_BattlePalaceCorridor_EventScript_RandomComment3
# 91 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_7
# 92 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 93 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_11:
# 94 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	call BattleFrontier_BattlePalaceCorridor_EventScript_StreakComment
# 96 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_10
# 97 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 98 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_14:
# 99 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 100 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	call BattleFrontier_BattlePalaceCorridor_EventScript_LongStreakComment
# 101 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_13
# 102 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 103 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_17:
# 104 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkToOpenBattleRoom
# 106 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_16
# 107 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 108 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 109 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkToOpenBattleRoom::
# 110 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_Movement_AttendantWalkToOpenBattleRoom
# 112 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceCorridor_Movement_PlayerWalkToOpenBattleRoom
# 114 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 116 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	opendoor 10, 3
# 118 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitdooranim
# 120 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 53 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_Movement_AttendantEnterBattleRoom
# 122 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 54 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceCorridor_Movement_PlayerEnterBattleRoom
# 124 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 55 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 126 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	closedoor 10, 3
# 128 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitdooranim
# 130 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	return
# 131 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 132 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 133 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WarpToBattleRoom::
# 134 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM, 7, 4
# 136 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitstate
# 138 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	end
# 139 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 140 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 141 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_RandomComment1::
# 142 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_PeopleAndMonAreSame, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	return
# 145 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 146 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 147 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_RandomComment2::
# 148 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_LetMonDoWhatItLikes, MSGBOX_DEFAULT
# 150 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	return
# 151 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 152 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 153 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_RandomComment3::
# 154 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 77 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_MonDifferentWhenCornered, MSGBOX_DEFAULT
# 156 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	return
# 157 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 158 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 159 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_StreakComment::
# 160 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 161 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_BeginningToUnderstandNature, MSGBOX_DEFAULT
# 162 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	return
# 163 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 164 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 165 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_LongStreakComment::
# 166 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 87 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 167 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_HeartfeltBondBetweenYouAndMons, MSGBOX_DEFAULT
# 168 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	return
# 169 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 170 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 171 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 172 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Movement_EnterCorridor:
# 173 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 177 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 94 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 179 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 180 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 181 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 96 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 182 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	step_end
# 183 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 184 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Movement_AttendantWalkTo50BattleRoom:
# 186 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 100 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 188 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 190 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 102 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_left
# 192 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_left
# 194 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 104 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 195 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 196 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 197 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 198 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 106 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	step_end
# 200 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 201 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Movement_PlayerWalkTo50BattleRoom:
# 203 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 110 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 205 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 207 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 112 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 208 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 209 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 210 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_left
# 211 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 114 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 212 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_left
# 213 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 214 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 215 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 116 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	step_end
# 217 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 218 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 219 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Movement_AttendantWalkToOpenBattleRoom:
# 220 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 120 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 222 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_right
# 224 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 122 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 225 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_right
# 226 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 227 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 228 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 124 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 229 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 230 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 232 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 126 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 233 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	step_end
# 234 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 235 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 236 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Movement_PlayerWalkToOpenBattleRoom:
# 237 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 130 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 238 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 239 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 240 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 241 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 132 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 242 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_right
# 243 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 244 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_right
# 245 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 246 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 247 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 248 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 249 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 136 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 250 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	step_end
# 251 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 252 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Movement_PlayerEnterBattleRoom::
# 253 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 140 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 254 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 255 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	return
# 256 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 257 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 258 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 259 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Movement_AttendantEnterBattleRoom:
# 260 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 144 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 261 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	set_invisible
# 264 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 146 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	step_end
# 266 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 267 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Text_PeopleAndMonAreSame::
# 268 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 269 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "People and POKéMON, they are but\n"
# 270 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "the same…\p"
# 271 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Their individual nature makes them\n"
# 272 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "good at certain things, and not good\l"
# 273 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "at others.$"
# 274 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 275 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Text_LetMonDoWhatItLikes::
# 276 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 277 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Rather than trying to make a POKéMON\n"
# 278 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "do what it dislikes, try to let it do\l"
# 279 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "what it likes and is good at doing.\p"
# 280 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Put yourself in the POKéMON's position\n"
# 281 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "and consider what moves it would like.$"
# 282 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 283 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Text_MonDifferentWhenCornered::
# 284 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 285 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "A POKéMON's nature is a remarkable\n"
# 286 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "thing…\p"
# 287 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Some POKéMON behave in a completely\n"
# 288 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "different way when they are cornered.$"
# 289 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 290 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Text_BeginningToUnderstandNature::
# 291 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 172 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 292 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Are you beginning to understand how\n"
# 293 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "a POKéMON's nature makes it behave?$"
# 294 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"

# 295 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_Text_HeartfeltBondBetweenYouAndMons::
# 296 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
# 297 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Ah… I see a strong, heartfelt bond\n"
# 298 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "between you and your POKéMON…$"
