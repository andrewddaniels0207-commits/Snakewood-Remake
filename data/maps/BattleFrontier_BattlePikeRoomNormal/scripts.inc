# 1 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoom_OnResume
# 5 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePikeRoom_OnTransition
# 7 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 7 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoom_OnWarp
# 9 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 10 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomNormal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 13 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom
# 16 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.2byte 0
# 17 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 18 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 19 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom::
# 20 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_TEMP_0, 1
# 22 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getroomtype
# 24 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 26 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_SINGLE_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_3
# 28 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 16 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HEAL_FULL, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_4
# 30 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 18 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_STATUS, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_5
# 32 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 20 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HARD_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_6
# 34 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 22 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_DOUBLE_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_7
# 36 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_BRAIN, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_8
# 38 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1:
# 39 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 41 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_3:
# 42 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom
# 44 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1
# 45 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_4:
# 47 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterFullHealRoom
# 49 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1
# 50 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 51 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_5:
# 52 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 53 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom
# 54 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1
# 55 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 56 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_6:
# 57 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom
# 59 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1
# 60 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 61 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_7:
# 62 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom
# 64 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1
# 65 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 66 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_8:
# 67 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom
# 69 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 71 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 72 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom::
# 73 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 75 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 77 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 79 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 81 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 83 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 85 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 87 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 88 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 89 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 90 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 91 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_SINGLE
# 93 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 41 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 94 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 95 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 96 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 98 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_2
# 99 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 100 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 101 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_2:
# 102 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WonSingleBattle
# 104 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 105 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 106 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 107 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost::
# 108 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 110 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 112 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 116 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 117 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonSingleBattle::
# 118 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 120 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 122 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 123 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 124 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 125 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom::
# 126 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 128 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 130 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer, MSGBOX_DEFAULT
# 132 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 66 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 136 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 138 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 140 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 69 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 142 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 146 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 148 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 73 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 150 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_SINGLE
# 152 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 75 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 154 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 77 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom_3
# 158 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom_1:
# 159 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 160 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 161 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 162 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 163 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom_3:
# 164 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WonHardBattle
# 166 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom_1
# 167 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 168 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 169 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonHardBattle::
# 170 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 85 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 171 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 172 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 174 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 87 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCApproachPlayer
# 176 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 88 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 178 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 89 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 179 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 180 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 90 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 181 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 182 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 183 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 186 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 188 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 94 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special HealPlayerParty
# 190 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge2, MSGBOX_DEFAULT
# 192 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 96 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 194 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 195 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 196 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 98 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 197 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 198 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 200 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 201 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom::
# 204 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 104 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 22
# 206 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 207 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 208 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 106 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 209 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_PreQueenHealNPCApproachPlayer
# 210 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 211 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 212 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 108 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_prequeenheal
# 214 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 215 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 110 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 217 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 0, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_2
# 218 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 112 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 219 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_3
# 220 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 2, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_4
# 222 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 223 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 224 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_2:
# 225 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 226 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenNoHeal
# 227 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 228 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_3:
# 230 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealOneMon
# 232 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 233 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 234 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_4:
# 235 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 236 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealTwoMons
# 237 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 238 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 239 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 240 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter::
# 241 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 120 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 242 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster, MSGBOX_DEFAULT
# 243 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 244 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 245 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 122 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 246 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special SpawnCameraObject
# 247 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 248 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanUp
# 249 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 124 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 250 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExitForLucy
# 251 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 252 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 253 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 126 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 254 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 255 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 256 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed
# 257 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 128 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 258 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 259 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed
# 261 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 130 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 263 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 264 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesClosed
# 265 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 132 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 267 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 268 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 269 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 270 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 60
# 271 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playse SE_PIKE_CURTAIN_OPEN
# 273 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 136 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 274 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 65
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 276 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed
# 277 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 138 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 278 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	showobjectat LOCALID_PIKE_ROOM_NPC_1, MAP_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_NORMAL
# 279 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 280 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 281 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 140 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 282 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed
# 283 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 284 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 285 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 142 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 286 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesOpen
# 287 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 288 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 289 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 144 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 290 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_LucyEnter
# 291 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 292 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 293 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 146 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 294 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getbrainstatus
# 295 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 296 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 297 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 148 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 298 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_3
# 299 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 150 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 300 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_4
# 301 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 152 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 302 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_5
# 303 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_1:
# 304 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 305 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 306 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 156 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 307 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, FALSE
# 308 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_7
# 309 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_6:
# 310 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 159 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 311 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen, MSGBOX_DEFAULT
# 312 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 160 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 314 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 315 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_3:
# 317 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 318 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold
# 319 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_1
# 320 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_4:
# 322 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 323 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver
# 324 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_1
# 325 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 326 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_5:
# 327 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 328 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold
# 329 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_1
# 330 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 331 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_7:
# 332 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 333 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver
# 334 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_6
# 335 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 336 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 337 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver::
# 338 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 164 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck, MSGBOX_DEFAULT
# 340 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 341 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle
# 342 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 166 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 1
# 344 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_2
# 345 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_1:
# 346 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 169 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 347 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 348 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 349 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 350 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_2:
# 351 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 167 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 352 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver
# 353 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_1
# 354 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 355 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 356 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver::
# 357 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 358 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_getsymbols
# 359 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 360 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 0
# 361 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver_2
# 362 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver_1:
# 363 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 364 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass, MSGBOX_DEFAULT
# 365 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 366 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 367 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 179 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 368 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 369 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 180 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 370 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol
# 371 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 181 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 372 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 373 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 182 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 374 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 375 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 183 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 376 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_givesymbol
# 377 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 184 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 378 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear, MSGBOX_DEFAULT
# 379 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 380 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 381 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 382 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 383 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 384 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 385 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver_2:
# 386 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 387 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 388 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver_1
# 389 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 390 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 391 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold::
# 392 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 190 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 393 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 394 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 395 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, FALSE
# 396 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold_2
# 397 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold_1:
# 398 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 194 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain, MSGBOX_DEFAULT
# 400 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 195 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 401 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 402 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 403 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 404 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold_2:
# 405 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 192 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 406 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold
# 407 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold_1
# 408 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 409 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 410 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold::
# 411 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 412 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn, MSGBOX_DEFAULT
# 413 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 414 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle
# 415 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 416 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 1
# 417 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_2
# 418 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_1:
# 419 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 420 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 421 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 422 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 423 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_2:
# 424 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 425 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold
# 426 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_1
# 427 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 428 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 429 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold::
# 430 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 208 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 431 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_getsymbols
# 432 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 209 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 433 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 2
# 434 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold_2
# 435 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold_1:
# 436 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 212 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 437 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass, MSGBOX_DEFAULT
# 438 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 439 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 440 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 214 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 441 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 442 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 215 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 443 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine
# 444 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 445 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 446 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 217 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 447 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 448 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 218 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 449 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_givesymbol
# 450 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 219 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 451 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_IWontForget, MSGBOX_DEFAULT
# 452 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 220 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 453 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 454 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 455 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 456 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 457 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 458 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold_2:
# 459 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 210 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 460 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 461 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold_1
# 462 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 463 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 464 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy::
# 465 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 226 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 466 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_LucyMoveAside
# 467 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 227 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 468 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 469 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 470 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2
# 471 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 229 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 472 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 473 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 230 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 474 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_get PIKE_DATA_WIN_STREAK
# 475 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 476 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	addvar VAR_RESULT, 1
# 477 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 232 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 478 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, VAR_RESULT
# 479 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 233 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 480 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoom_EventScript_WarpToFinalRoom
# 481 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 234 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 482 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 483 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 484 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 486 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenNoHeal::
# 487 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 239 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 488 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal, MSGBOX_DEFAULT
# 489 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 240 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 490 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 491 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 492 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 493 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 494 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealOneMon::
# 495 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 245 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 496 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne, MSGBOX_DEFAULT
# 497 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 246 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 498 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 499 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 247 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 500 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 501 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 248 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 502 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 503 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 504 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 505 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 506 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealTwoMons::
# 507 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 253 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 508 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo, MSGBOX_DEFAULT
# 509 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 254 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 510 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 511 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 255 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 512 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 513 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 256 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 514 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 515 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 516 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 517 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 518 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterFullHealRoom::
# 519 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 261 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 520 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 521 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 522 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 523 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 524 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 525 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 264 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 526 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 527 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 528 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth
# 529 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 530 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 531 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 267 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 532 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 533 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 268 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 534 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 535 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 269 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 536 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special HealPlayerParty
# 537 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 270 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 538 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge, MSGBOX_DEFAULT
# 539 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 540 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 541 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 542 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 543 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 544 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 545 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 274 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 546 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 547 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 548 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 549 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 550 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom::
# 551 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 279 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 552 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 553 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 280 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 554 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 555 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 556 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1WalkRight
# 557 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 282 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 558 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2WalkLeft
# 559 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 283 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 560 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 561 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 284 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 562 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown
# 563 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 285 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 564 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown
# 565 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 286 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 566 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 567 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 287 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 568 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1FacePlayer
# 569 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 288 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 570 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2FacePlayer
# 571 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 289 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 572 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 573 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 290 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 574 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer1
# 575 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 291 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 576 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 577 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 292 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 578 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 579 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 293 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 580 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 581 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 294 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 582 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 583 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 584 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 585 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 296 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 586 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2
# 587 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 297 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 588 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 589 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 298 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 590 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 1
# 591 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 299 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 592 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 593 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 300 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 594 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 595 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 301 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 596 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_DOUBLE
# 597 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 302 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 598 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 599 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 303 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 600 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 601 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 304 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 602 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_3
# 603 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_1:
# 604 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 307 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 605 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 606 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 607 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 608 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_3:
# 609 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 305 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 610 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WonDoubleBattle
# 611 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_1
# 612 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 613 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 614 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonDoubleBattle::
# 615 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 312 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 616 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2
# 617 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 618 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 619 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 314 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 620 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1Exit
# 621 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 315 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 622 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 623 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 316 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 624 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2Exit
# 625 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 317 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 626 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 627 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 318 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 628 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceUp
# 629 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 319 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 630 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 631 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 632 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 633 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 634 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom::
# 635 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 324 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 636 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 637 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 325 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 638 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_WatchOut
# 639 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 326 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 640 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonApproachPlayer
# 641 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 327 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 642 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 643 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 328 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 644 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatusmon
# 645 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 329 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 646 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 647 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 330 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 648 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_0x8004, PIKE_STATUSMON_KIRLIA
# 649 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_2
# 650 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_1:
# 651 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 333 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 652 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_0x8004, PIKE_STATUSMON_DUSCLOPS
# 653 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_5
# 654 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_4:
# 655 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 336 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 656 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled, MSGBOX_DEFAULT
# 657 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 658 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 659 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 338 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 660 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 661 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 662 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 663 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_2:
# 664 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 331 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 665 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack
# 666 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_1
# 667 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 668 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_5:
# 669 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 334 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 670 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack
# 671 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_4
# 672 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 673 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 674 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack::
# 675 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 676 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop, MSGBOX_DEFAULT
# 677 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 344 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 678 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 679 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 345 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 680 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 681 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 346 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 682 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 683 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 347 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 684 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 685 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 348 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 686 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatus
# 687 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 349 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 688 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, PIKE_STATUS_TOXIC
# 689 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_2
# 690 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_1:
# 691 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 352 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 692 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, PIKE_STATUS_BURN
# 693 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_5
# 694 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_4:
# 695 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 355 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 696 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, PIKE_STATUS_PARALYSIS
# 697 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_8
# 698 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_7:
# 699 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 358 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 700 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, PIKE_STATUS_SLEEP
# 701 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_11
# 702 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_10:
# 703 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 361 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 704 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_flashscreen
# 705 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 362 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 706 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 707 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 363 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 708 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon
# 709 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 364 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 710 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 711 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 365 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 712 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC
# 713 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 366 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 714 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 715 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 367 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 716 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 717 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 368 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 718 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 719 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 369 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 720 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 721 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 370 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 722 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough, MSGBOX_DEFAULT
# 723 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 371 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 724 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 725 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 372 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 726 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 727 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 373 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 728 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 729 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 374 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 730 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 731 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 375 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 732 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside
# 733 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 376 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 734 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer
# 735 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 377 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 736 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 737 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 378 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 738 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia, MSGBOX_DEFAULT
# 739 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 740 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 741 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_2:
# 742 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 350 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 743 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedToxic
# 744 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_1
# 745 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 746 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_5:
# 747 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 353 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 748 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedWillOWisp
# 749 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_4
# 750 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 751 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_8:
# 752 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 356 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 753 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedThunderWave
# 754 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_7
# 755 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 756 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_11:
# 757 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 359 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 758 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedHypnosis
# 759 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_10
# 760 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 761 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 762 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack::
# 763 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 383 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 764 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop, MSGBOX_DEFAULT
# 765 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 384 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 766 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 767 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 385 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 768 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 769 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 386 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 770 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 771 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 387 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 772 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 773 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 388 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 774 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatus
# 775 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 389 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 776 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, PIKE_STATUS_FREEZE
# 777 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_2
# 778 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_1:
# 779 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 392 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 780 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, PIKE_STATUS_BURN
# 781 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_5
# 782 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_4:
# 783 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 395 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 784 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_flashscreen
# 785 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 396 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 786 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 787 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 397 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 788 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon
# 789 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 398 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 790 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 791 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 792 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC
# 793 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 400 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 794 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 795 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 401 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 796 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 797 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 402 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 798 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 799 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 403 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 800 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 801 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 404 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 802 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough, MSGBOX_DEFAULT
# 803 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 405 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 804 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 805 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 406 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 806 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 807 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 407 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 808 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 809 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 408 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 810 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 811 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 409 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 812 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside
# 813 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 410 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 814 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer
# 815 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 411 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 816 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 817 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 412 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 818 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops, MSGBOX_DEFAULT
# 819 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 820 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 821 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_2:
# 822 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 390 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 823 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedIceBeam
# 824 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_1
# 825 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 826 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_5:
# 827 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 393 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 828 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedWillOWisp
# 829 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_4
# 830 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 831 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 832 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedToxic::
# 833 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 417 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 834 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic
# 835 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 418 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 836 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 837 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 838 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 839 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 840 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedWillOWisp::
# 841 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 423 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 842 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
# 843 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 424 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 844 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 845 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 846 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 847 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 848 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedThunderWave::
# 849 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 429 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 850 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave
# 851 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 430 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 852 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 853 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 854 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 855 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 856 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedHypnosis::
# 857 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 435 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 858 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis
# 859 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 436 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 860 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 861 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 862 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 863 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 864 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedIceBeam::
# 865 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 441 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 866 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam
# 867 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 442 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 868 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 869 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 870 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 871 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 872 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedWillOWisp::
# 873 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 447 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 874 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
# 875 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 448 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 876 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 877 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 878 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 879 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 880 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle::
# 881 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 453 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 882 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 883 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 454 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 884 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2
# 885 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 455 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 886 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 887 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 456 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 888 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_SINGLE
# 889 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 457 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 890 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 891 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 892 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 893 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 894 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 461 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 895 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer:
# 896 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 462 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 897 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 898 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 463 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 899 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 900 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 464 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 901 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 902 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 903 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 467 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 904 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit:
# 905 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 468 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 906 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 907 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 469 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 908 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 909 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 470 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 910 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 911 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 471 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 912 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 913 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 472 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 914 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 915 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 473 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 916 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 917 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 918 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 476 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 919 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExit:
# 920 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 477 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 921 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 922 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 478 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 923 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 924 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 479 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 925 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 926 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 480 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 927 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 928 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 929 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 483 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 930 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon:
# 931 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 484 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 932 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 933 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 485 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 934 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 935 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 936 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 488 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 937 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer:
# 938 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 489 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 939 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 940 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 490 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 941 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 942 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 491 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 943 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay_16
# 944 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 492 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 945 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay_16
# 946 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 493 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 947 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 948 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 494 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 949 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 950 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 951 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 497 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 952 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonApproachPlayer:
# 953 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 498 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 954 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_down
# 955 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 499 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 956 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_right
# 957 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 500 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 958 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_right
# 959 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 501 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 960 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_down
# 961 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 502 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 962 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_left
# 963 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 503 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 964 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 965 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 504 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 966 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 967 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 968 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 507 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 969 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC:
# 970 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 508 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 971 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_up
# 972 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 509 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 973 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 974 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 975 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside::
# 976 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 513 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 977 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 978 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 979 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 980 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 981 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 516 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 982 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceRight:
# 983 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 517 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 984 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 985 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 518 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 986 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 987 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 988 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 521 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 989 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCApproachPlayer:
# 990 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 522 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 991 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 992 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 523 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 993 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 994 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 524 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 995 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 996 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 525 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 997 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 998 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 526 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 999 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1000 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1001 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 529 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1002 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer1:
# 1003 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 530 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1004 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 1005 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 531 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1006 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1007 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1008 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 534 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1009 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2:
# 1010 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 535 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1011 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 1012 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 536 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1013 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1014 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1015 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 539 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceUp:
# 1017 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 540 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1018 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_up
# 1019 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 541 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1020 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1021 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1022 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 544 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1023 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1WalkRight:
# 1024 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 545 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 1026 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 546 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1027 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1028 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1029 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 549 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1030 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2WalkLeft:
# 1031 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 550 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1032 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 1033 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 551 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1034 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1035 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1036 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 554 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown:
# 1038 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 555 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 1040 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 556 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1041 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 1042 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 557 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1044 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1045 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 560 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1046 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1FacePlayer:
# 1047 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 561 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1048 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 1049 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 562 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1050 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1051 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1052 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 565 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1053 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2FacePlayer:
# 1054 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 566 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 1056 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 567 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1058 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1059 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 570 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1060 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1Exit:
# 1061 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 571 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1062 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1063 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 572 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1064 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1065 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 573 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1066 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1067 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 574 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1068 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 1069 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 575 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1070 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1071 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 576 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1072 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 1073 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 577 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1074 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1075 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 578 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1076 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1077 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1078 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 581 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1079 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2Exit:
# 1080 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 582 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1081 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1082 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 583 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1083 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1084 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 584 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1085 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1086 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 585 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1087 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 1088 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 586 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1089 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1090 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 587 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1091 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 1092 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 588 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1093 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1094 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 589 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1096 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1097 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 592 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1098 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2:
# 1099 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 593 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1100 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1101 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 594 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1102 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1103 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 595 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1105 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1106 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 598 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PreQueenHealNPCApproachPlayer:
# 1108 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 599 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 1110 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 600 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1111 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 1112 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 601 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1115 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 604 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1116 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExitForLucy:
# 1117 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 605 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1118 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1119 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 606 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1120 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1121 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 607 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1122 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1123 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 608 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1124 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 1125 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 609 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1126 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1127 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1128 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 612 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1129 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_LucyEnter:
# 1130 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 613 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1131 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_visible
# 1132 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 614 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1133 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 1134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 615 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1135 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1136 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1137 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 618 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1138 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_LucyMoveAside:
# 1139 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 619 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1140 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 1141 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 620 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1142 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 1143 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 621 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1144 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1145 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1146 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NPC::
# 1147 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 625 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1148 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getroomtype
# 1149 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 626 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1150 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 1151 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 627 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1152 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_NPC, BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_2
# 1153 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 629 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1154 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_STATUS, BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_3
# 1155 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 631 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1156 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HEAL_PART, BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_4
# 1157 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1158 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1159 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_2:
# 1160 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 628 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1161 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC
# 1162 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1163 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1164 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_3:
# 1165 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 630 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1166 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_StatusNPC
# 1167 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1168 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1169 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_4:
# 1170 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 632 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1171 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC
# 1172 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1173 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1174 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1175 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC::
# 1176 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 637 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1177 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 1178 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 638 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1179 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 1180 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 639 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1181 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getnpcmsg
# 1182 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 640 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1183 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 1184 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 641 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1185 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 1186 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 642 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1187 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 1188 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 643 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1189 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 1190 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 1191 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1192 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1193 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_StatusNPC::
# 1194 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 648 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1195 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 1196 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 649 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1197 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 1198 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 650 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1199 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine, MSGBOX_DEFAULT
# 1200 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 651 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 1202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 652 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1203 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 1204 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 1205 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1206 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1207 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC::
# 1208 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 657 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1209 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_healonetwomons
# 1210 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 658 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1211 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 2
# 1212 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_2
# 1213 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_1:
# 1214 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 661 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1215 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 1
# 1216 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_5
# 1217 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_4:
# 1218 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 664 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 1220 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 665 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1221 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 1222 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 666 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1223 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell, MSGBOX_DEFAULT
# 1224 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 667 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1225 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 1226 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 668 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1227 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 1228 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 669 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1229 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExit
# 1230 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 670 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1231 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 1232 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 1233 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1234 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_2:
# 1235 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 659 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1236 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreTwoMons
# 1237 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_1
# 1238 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1239 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_5:
# 1240 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 662 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1241 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreOneMon
# 1242 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_4
# 1243 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1244 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1245 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreOneMon::
# 1246 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 675 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1247 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 1248 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 676 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1249 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 1250 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 677 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1251 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon, MSGBOX_DEFAULT
# 1252 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 678 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1253 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 1254 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1255 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1256 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1257 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreTwoMons::
# 1258 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 683 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1259 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 1260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 684 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1261 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 1262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 685 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1263 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons, MSGBOX_DEFAULT
# 1264 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 686 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1265 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 1266 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1267 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1268 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1269 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMon::
# 1270 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 691 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1271 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 1272 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 692 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1273 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 1274 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 693 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_Silence, MSGBOX_DEFAULT
# 1276 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 694 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1277 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 1278 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 695 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1279 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 1280 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 696 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1281 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceRight
# 1282 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 697 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1283 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 1284 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 1285 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1286 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1287 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed::
# 1288 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 702 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1289 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage1_Tile0, TRUE
# 1290 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 703 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1291 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage1_Tile1, TRUE
# 1292 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 704 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1293 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage1_Tile2, TRUE
# 1294 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 705 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1295 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage1_Tile3, TRUE
# 1296 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 706 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1297 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage1_Tile4, TRUE
# 1298 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 707 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1299 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage1_Tile5, FALSE
# 1300 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 708 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1301 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage1_Tile6, TRUE
# 1302 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 709 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1303 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 1304 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1305 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1306 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1307 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed::
# 1308 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 714 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1309 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage2_Tile0, TRUE
# 1310 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 715 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1311 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage2_Tile1, TRUE
# 1312 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 716 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1313 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage2_Tile2, TRUE
# 1314 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 717 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1315 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage2_Tile3, TRUE
# 1316 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 718 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1317 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage2_Tile4, TRUE
# 1318 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 719 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1319 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage2_Tile5, FALSE
# 1320 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 720 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1321 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage2_Tile6, TRUE
# 1322 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 721 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1323 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 1324 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1325 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1326 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1327 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesOpen::
# 1328 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 726 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1329 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage3_Tile0, TRUE
# 1330 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 727 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1331 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage3_Tile1, TRUE
# 1332 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 728 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1333 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage3_Tile2, TRUE
# 1334 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 729 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1335 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage3_Tile3, TRUE
# 1336 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 730 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1337 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage3_Tile4, TRUE
# 1338 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 731 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage3_Tile5, FALSE
# 1340 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 732 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1341 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage3_Tile6, TRUE
# 1342 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 733 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1343 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 1344 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1345 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1346 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesClosed::
# 1348 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 738 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1349 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage0_Tile0, TRUE
# 1350 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 739 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1351 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage0_Tile1, TRUE
# 1352 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 740 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1353 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage0_Tile2, TRUE
# 1354 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 741 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1355 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage0_Tile3, TRUE
# 1356 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 742 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1357 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage0_Tile4, TRUE
# 1358 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 743 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1359 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage0_Tile5, FALSE
# 1360 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 744 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1361 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage0_Tile6, TRUE
# 1362 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 745 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1363 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 1364 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 1365 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1367 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 749 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1368 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanUp:
# 1369 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 750 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1370 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1371 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 751 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1372 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 1373 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 752 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1374 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1375 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1376 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 755 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1377 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanDown:
# 1378 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 756 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1379 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 1380 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 757 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1381 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 1382 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 758 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1383 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 1384 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1385 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth::
# 1386 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 761 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1387 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Welcome…\n"
# 1388 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You must be commended for your luck…\p"
# 1389 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Your POKéMON shall be restored\n"
# 1390 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health…$"
# 1391 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1392 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge::
# 1393 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 768 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1394 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I urge you to enjoy the rest of your\n"
# 1395 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Battle Choice challenge…$"
# 1396 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1397 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon::
# 1398 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 773 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Ah, you're a lucky one.\n"
# 1400 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'm in somewhat-good spirits now.\p"
# 1401 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I will restore one of your POKéMON\n"
# 1402 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health.$"
# 1403 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1404 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell::
# 1405 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 780 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1406 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The best of luck to you.\n"
# 1407 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Farewell.$"
# 1408 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1409 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons::
# 1410 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 785 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1411 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Excuse me…\p"
# 1412 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Would you care for a battle?\n"
# 1413 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'll restore your POKéMON if you win.$"
# 1414 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1415 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe::
# 1416 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 791 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1417 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Very well…\n"
# 1418 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, shall we?$"
# 1419 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1420 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou::
# 1421 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 796 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1422 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I see…\n"
# 1423 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "How unsporting of you…$"
# 1424 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1425 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised::
# 1426 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 801 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1427 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Magnificent…\p"
# 1428 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "As promised, I shall restore your\n"
# 1429 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "POKéMON to full health.$"
# 1430 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1431 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell2::
# 1432 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 807 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1433 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The best of luck to you.\n"
# 1434 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Farewell.$"
# 1435 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1436 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WatchOut::
# 1437 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 812 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1438 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Oh, my!\p"
# 1439 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Watch out!$"
# 1440 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1441 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop::
# 1442 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 817 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1443 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, now!\n"
# 1444 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA, stop that!$"
# 1445 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1446 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop::
# 1447 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 822 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1448 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, now!\n"
# 1449 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS, stop that!$"
# 1450 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1451 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic::
# 1452 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 827 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1453 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used TOXIC!$"
# 1454 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1455 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis::
# 1456 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 831 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1457 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used HYPNOSIS!$"
# 1458 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1459 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave::
# 1460 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 835 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1461 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used THUNDER WAVE!$"
# 1462 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1463 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp::
# 1464 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 839 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1465 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used WILL-O-WISP!$"
# 1466 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1467 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp::
# 1468 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 843 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1469 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS used WILL-O-WISP!$"
# 1470 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1471 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam::
# 1472 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 847 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1473 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS used ICE BEAM!$"
# 1474 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1475 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough::
# 1476 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 851 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1477 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Look here!\n"
# 1478 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "That's quite enough!$"
# 1479 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1480 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia::
# 1481 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 856 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1482 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I must apologize to you…\p"
# 1483 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "My KIRLIA has a TIMID nature…$"
# 1484 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1485 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops::
# 1486 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 861 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1487 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I must apologize to you…\p"
# 1488 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "My DUSCLOPS has a TIMID nature…$"
# 1489 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1490 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled::
# 1491 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 866 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1492 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "It attacks without warning if it is\n"
# 1493 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "startled by another person…\p"
# 1494 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Are you and your POKéMON all right?$"
# 1495 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1496 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine::
# 1497 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 872 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1498 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I do apologize for what happened…\n"
# 1499 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I do hope your POKéMON are fine.$"
# 1500 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1501 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_Silence::
# 1502 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 877 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1503 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\n"
# 1504 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …$"
# 1505 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1506 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer::
# 1507 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 882 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1508 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Welcome…\p"
# 1509 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Here, we will have you battle\n"
# 1510 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "a somewhat-tough TRAINER…$"
# 1511 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1512 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth::
# 1513 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 888 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1514 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "How wonderful…\p"
# 1515 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "To honor your victory, your POKéMON\n"
# 1516 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "shall be restored to full health…$"
# 1517 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1518 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge2::
# 1519 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 894 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1520 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I urge you to enjoy the rest of your\n"
# 1521 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Battle Choice challenge…$"
# 1522 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1523 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen::
# 1524 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 899 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1525 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I am LUCY…\n"
# 1526 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I am the law here…\l"
# 1527 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "For I am the PIKE QUEEN…\p"
# 1528 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You already know it, but to advance,\n"
# 1529 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "you must defeat me…\p"
# 1530 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…I'm not one for idle chatter.\n"
# 1531 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Hurry. Come on…$"
# 1532 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1533 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck::
# 1534 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 909 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1535 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Your luck…\n"
# 1536 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I hope you didn't use it all up here…$"
# 1537 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1538 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass::
# 1539 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 914 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1540 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: … … … … … …\n"
# 1541 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Show me your FRONTIER PASS…$"
# 1542 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1543 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol::
# 1544 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 919 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1545 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The Luck Symbol was embossed on\n"
# 1546 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "the FRONTIER PASS!$"
# 1547 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1548 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear::
# 1549 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 924 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1550 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…That's all there is…\n"
# 1551 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Disappear already…$"
# 1552 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1553 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain::
# 1554 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 929 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1555 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: …You again…\p"
# 1556 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\p"
# 1557 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…I've trampled flowers and braved\n"
# 1558 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "storms to get to where I am…\p"
# 1559 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I don't feel any compulsion to keep\n"
# 1560 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "losing to the same opponent…\p"
# 1561 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\n"
# 1562 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Fine… I'll do it…$"
# 1563 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1564 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn::
# 1565 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 940 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1566 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now!\n"
# 1567 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Come on!$"
# 1568 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1569 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass::
# 1570 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 945 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1571 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: … … … … … …\p"
# 1572 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…FRONTIER PASS…$"
# 1573 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1574 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine::
# 1575 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 950 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1576 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The Luck Symbol took on\n"
# 1577 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "a golden shine!$"
# 1578 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1579 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_IWontForget::
# 1580 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 955 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1581 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…You, I won't forget…\n"
# 1582 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…Ever…$"
# 1583 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1584 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal::
# 1585 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 960 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1586 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 1587 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Giggle…\n"
# 1588 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You seem to be bereft of luck…\p"
# 1589 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "If only you hadn't chosen this room,\n"
# 1590 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "your POKéMON could have been healed…$"
# 1591 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1592 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne::
# 1593 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 968 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1594 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 1595 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room, I will\n"
# 1596 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "restore one POKéMON to full health…$"
# 1597 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1598 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo::
# 1599 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 974 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1600 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 1601 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room, I will\n"
# 1602 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "restore two POKéMON to full health…$"
# 1603 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1604 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons::
# 1605 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 980 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1606 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 1607 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Giggle…\n"
# 1608 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You should thank your lucky stars…\p"
# 1609 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room,\n"
# 1610 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "all your POKéMON will be restored…$"
# 1611 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1612 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster::
# 1613 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 988 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1614 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I shall go fetch our master…$"
# 1615 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 1616 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons::
# 1617 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 992 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
# 1618 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Ah, you're a lucky one!\n"
# 1619 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'm in good spirits now.\p"
# 1620 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I will restore two of your POKéMON\n"
# 1621 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health!$"
