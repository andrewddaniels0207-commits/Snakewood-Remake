# 1 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerBattleRoom_OnWarp
# 5 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerBattleRoom_EventScript_EnterRoom
# 12 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 18 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_OnWarp:
# 19 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerBattleRoom_EventScript_SetUpObjects
# 21 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_SetUpObjects::
# 25 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerBattleRoom_Movement_SetInvisible
# 29 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 31 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_EnterRoom::
# 33 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 35 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerEnter
# 37 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 24 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 39 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 41 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 43 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_EnterRoom_2
# 44 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_EnterRoom_1:
# 45 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantApproachPlayer
# 47 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 49 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceAttendant
# 51 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 53 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 55 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 57 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 59 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 60 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 61 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_EnterRoom_2:
# 62 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter
# 64 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_EnterRoom_1
# 65 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 66 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 67 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter::
# 68 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_setopponent
# 70 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	addobject LOCALID_TOWER_BATTLE_OPPONENT
# 72 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_OPPONENT, BattleFrontier_BattleTowerBattleRoom_Movement_OpponentEnter
# 74 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 76 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 78 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 44 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 80 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 82 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 84 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case B_OUTCOME_WON, BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter_2
# 88 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 89 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 90 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter_2:
# 91 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent
# 93 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 94 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 95 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTower_EventScript_WarpToLobbyLost::
# 97 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 99 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 101 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 103 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 105 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 107 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 108 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 109 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 110 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent::
# 111 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 113 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_setbattlewon
# 115 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent_3
# 119 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent_1:
# 120 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_OPPONENT, BattleFrontier_BattleTowerBattleRoom_Movement_OpponentExit
# 122 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 124 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	removeobject LOCALID_TOWER_BATTLE_OPPONENT
# 126 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 128 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 130 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent_5
# 131 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent_4:
# 132 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantApproachPlayer
# 134 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 136 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceAttendant
# 138 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 140 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
# 142 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 144 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitfanfare
# 146 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special HealPlayerParty
# 148 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 149 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 150 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent_3:
# 151 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 153 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent_1
# 154 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 155 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent_5:
# 156 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_SecondAttendantEnter
# 158 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedOpponent_4
# 159 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 160 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 161 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent::
# 162 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 164 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 166 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 168 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_2
# 169 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_1:
# 170 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 172 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent
# 174 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 176 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 177 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 178 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_5
# 179 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_4:
# 180 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 182 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_8
# 186 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_9
# 188 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_10
# 190 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_11
# 192 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_12
# 194 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 195 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 196 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_2:
# 197 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 198 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_MaidenUpNext
# 199 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_1
# 200 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 201 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_5:
# 202 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 204 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_4
# 205 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 206 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_8:
# 207 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_ContinueChallenge
# 209 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 210 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 211 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_9:
# 212 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle
# 214 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 215 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_10:
# 217 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge
# 219 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 220 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 221 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_11:
# 222 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge
# 224 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 225 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 226 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent_12:
# 227 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 229 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 230 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 231 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 233 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 235 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 237 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord_2
# 239 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord_3
# 241 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord_4
# 243 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord_5
# 245 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 246 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 247 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord_2:
# 248 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_ContinueChallenge
# 250 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 251 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 252 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord_3:
# 253 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge
# 255 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 256 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 257 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord_4:
# 258 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge
# 260 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 261 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 262 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponentNoRecord_5:
# 263 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 265 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 266 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 267 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 268 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle::
# 269 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle
# 271 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 272 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 273 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 275 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 277 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle_2
# 279 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle_3
# 281 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle_4
# 283 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle_2:
# 286 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 287 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 288 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 289 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 290 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle_3:
# 291 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_RecordBattle
# 293 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 294 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 295 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle_4:
# 296 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 297 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 298 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 299 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 300 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_RecordBattle::
# 302 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 304 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 305 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 306 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 307 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 308 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge::
# 310 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 311 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 312 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 314 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge_2
# 316 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 317 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge_3
# 318 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge_4
# 320 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 321 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge_2:
# 323 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 325 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 326 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 327 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge_3:
# 328 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 329 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_PauseChallenge
# 330 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 331 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge_4:
# 333 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 335 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 337 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 338 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge::
# 339 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
# 341 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 343 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 345 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 347 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge_2
# 349 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge_3
# 351 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 352 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge_4
# 353 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 354 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge_2:
# 356 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 358 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 359 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge_3:
# 361 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_RetireChallenge
# 363 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 364 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge_4:
# 366 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 367 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForOpponent
# 368 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 369 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 370 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 371 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ContinueChallenge::
# 372 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 373 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	closemessage
# 374 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 375 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceBattle
# 376 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 377 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 378 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 379 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantReturnToPos
# 380 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 382 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 177 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_OpponentEnter
# 384 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 385 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 386 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 387 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon::
# 388 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 389 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 390 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 391 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 392 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 394 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 396 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 397 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 398 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 399 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 400 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 401 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_PauseChallenge::
# 402 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 403 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait
# 404 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 405 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 406 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_save CHALLENGE_STATUS_PAUSED
# 408 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playse SE_SAVE
# 410 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitse
# 412 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 414 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_reset
# 416 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 417 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 418 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 419 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent::
# 420 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 421 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 422 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 424 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_2
# 426 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_3
# 428 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_4
# 430 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_5
# 432 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_6
# 434 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 435 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 6, BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_7
# 436 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 437 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_2:
# 439 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor2ndOpponent
# 441 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 442 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 443 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_3:
# 444 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor3rdOpponent
# 446 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 447 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_4:
# 449 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor4thOpponent
# 451 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 452 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_5:
# 454 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor5thOpponent
# 456 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 457 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 458 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_6:
# 459 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 460 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor6thOpponent
# 461 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 462 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 463 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyForOpponent_7:
# 464 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 465 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor7thOpponent
# 466 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 467 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 468 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 469 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor2ndOpponent::
# 470 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent
# 472 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 474 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 475 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 476 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor3rdOpponent::
# 478 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 479 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent
# 480 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 482 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 483 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 484 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor4thOpponent::
# 486 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 487 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent
# 488 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 490 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 491 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor5thOpponent::
# 494 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent
# 496 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 497 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 498 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 499 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 500 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 501 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor6thOpponent::
# 502 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 503 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent
# 504 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 505 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 506 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 507 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 508 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 509 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_ReadyFor7thOpponent::
# 510 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 511 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent
# 512 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 514 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 515 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 516 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_EventScript_IncrementWinStreak::
# 518 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 519 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_incrementstreak
# 520 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 521 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 522 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 523 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_SecondAttendantEnter::
# 524 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 525 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantEnter
# 526 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 527 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 528 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_2, Common_Movement_WalkInPlaceLeft
# 530 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 531 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 532 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 533 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playse SE_PIN
# 534 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 535 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_1, Common_Movement_ExclamationMark
# 536 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 537 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 538 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 539 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_1, Common_Movement_Delay48
# 540 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 541 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 542 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 543 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantDelay
# 544 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 545 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantFaceSecondAttendant
# 546 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 547 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 548 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 549 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantExit
# 550 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 272 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 551 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 552 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 553 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 555 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_MaidenUpNext::
# 556 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 277 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 557 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_TEMP_2, 1
# 558 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_MaidenUpNext_2
# 559 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_MaidenUpNext_1:
# 560 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 561 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay, MSGBOX_DEFAULT
# 562 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 563 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 564 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 565 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 566 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_MaidenUpNext_2:
# 567 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden
# 569 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_MaidenUpNext_1
# 570 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 571 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 572 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden::
# 573 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 285 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden
# 575 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 286 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 577 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 287 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 579 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 581 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_2
# 582 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_1:
# 583 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 585 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 587 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_5
# 589 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_6
# 591 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 297 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_7
# 593 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_8
# 595 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_9
# 597 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 598 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 599 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_2:
# 600 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 601 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord
# 602 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_1
# 603 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 604 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_5:
# 605 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 606 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel
# 607 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 608 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 609 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_6:
# 610 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 611 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskRecordBattle
# 612 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 613 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 614 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_7:
# 615 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 616 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge
# 617 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 618 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 619 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_8:
# 620 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 621 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge
# 622 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 623 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 624 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden_9:
# 625 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 626 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden
# 627 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 628 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 629 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 630 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord::
# 631 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 632 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 633 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 634 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_RESULT
# 635 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 636 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord_2
# 637 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 311 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 638 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord_3
# 639 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 640 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord_4
# 641 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 642 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord_5
# 643 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 644 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 645 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord_2:
# 646 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 647 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel
# 648 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 649 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 650 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord_3:
# 651 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 312 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskPauseChallenge
# 653 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 654 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 655 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord_4:
# 656 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 657 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskRetireChallenge
# 658 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 659 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 660 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaidenNoRecord_5:
# 661 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 662 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AskReadyForMaiden
# 663 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 664 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 665 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 666 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel::
# 667 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 668 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 669 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 670 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	closemessage
# 671 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 323 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceBattle
# 673 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 674 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 675 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 325 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 676 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerBattleRoom_Movement_AttendantReturnToPos
# 677 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 678 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 679 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 680 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	addobject LOCALID_TOWER_BATTLE_OPPONENT
# 681 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 682 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_BATTLE_OPPONENT, BattleFrontier_BattleTowerBattleRoom_Movement_AnabelEnter
# 683 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 329 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 684 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmovement 0
# 685 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 686 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 687 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 331 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 688 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_3
# 689 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_4
# 691 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 335 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_5
# 693 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_1:
# 694 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 338 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 695 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 696 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 339 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 698 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_7
# 699 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_6:
# 700 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 701 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel, MSGBOX_DEFAULT
# 702 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 343 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 704 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 705 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 706 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_3:
# 707 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 332 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 708 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AnabelGoldIntro
# 709 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_1
# 710 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 711 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_4:
# 712 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 713 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver
# 714 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_1
# 715 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 716 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_5:
# 717 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 336 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 718 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold
# 719 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_1
# 720 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 721 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_7:
# 722 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 723 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver
# 724 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabel_6
# 725 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 726 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 727 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver::
# 728 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 347 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 729 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent, MSGBOX_DEFAULT
# 730 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 731 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 732 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 349 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 733 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 734 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver_2
# 735 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver_1:
# 736 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 352 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 737 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 738 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 739 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 740 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver_2:
# 741 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 742 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelSilver
# 743 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelSilver_1
# 744 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 745 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 746 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelSilver::
# 747 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 748 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 749 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 750 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_getsymbols
# 751 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 358 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 753 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelSilver_2
# 754 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelSilver_1:
# 755 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 756 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized, MSGBOX_DEFAULT
# 757 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 758 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 759 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 363 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 760 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol
# 761 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 763 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 365 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 764 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitfanfare
# 765 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 366 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 766 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_givesymbol
# 767 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 367 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 768 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime, MSGBOX_DEFAULT
# 769 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 368 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 770 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 771 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 772 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 773 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelSilver_2:
# 774 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 359 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 775 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 776 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelSilver_1
# 777 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 778 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 779 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AnabelGoldIntro::
# 780 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 372 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 781 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 782 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 373 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 783 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 784 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerBattleRoom_EventScript_AnabelGoldIntro_2
# 785 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AnabelGoldIntro_1:
# 786 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 376 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 787 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack, MSGBOX_DEFAULT
# 788 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 377 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 789 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 790 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 791 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 792 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_AnabelGoldIntro_2:
# 793 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 374 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold
# 795 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_AnabelGoldIntro_1
# 796 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 797 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 798 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold::
# 799 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 800 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe, MSGBOX_DEFAULT
# 801 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 382 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 802 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 803 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 804 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 805 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold_2
# 806 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold_1:
# 807 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 808 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 809 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 810 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 811 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold_2:
# 812 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 813 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelGold
# 814 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_BattleAnabelGold_1
# 815 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 816 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 817 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelGold::
# 818 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 390 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 819 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 820 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 391 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 821 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_getsymbols
# 822 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 392 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 823 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 824 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelGold_2
# 825 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelGold_1:
# 826 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 827 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease, MSGBOX_DEFAULT
# 828 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 829 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 830 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 397 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 831 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine
# 832 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 833 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitmessage
# 834 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 399 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 835 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitfanfare
# 836 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 400 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 837 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_givesymbol
# 838 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 839 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain, MSGBOX_DEFAULT
# 840 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 402 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 841 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 842 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 843 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 844 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelGold_2:
# 845 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyWon
# 847 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_DefeatedAnabelGold_1
# 848 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 849 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 850 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle::
# 851 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 406 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 852 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	closemessage
# 853 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 854 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 855 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 408 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 857 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 858 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special HealPlayerParty
# 859 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 410 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_TOWER
# 861 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 863 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 412 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 864 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	copyvar VAR_0x8004, VAR_FRONTIER_BATTLE_MODE
# 865 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 866 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_0x8004, FRONTIER_MODE_LINK_MULTIS
# 867 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle_2
# 868 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle_1:
# 869 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 416 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 870 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_restorehelditems
# 871 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 872 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	special HealPlayerParty
# 873 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 418 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 874 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_resetsketch
# 875 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 876 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 877 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle_2:
# 878 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 414 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 879 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_EndTowerBattle
# 880 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle_1
# 881 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 882 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 883 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_EndTowerBattle::
# 884 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 422 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 885 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_setinterviewdata
# 886 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 887 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 888 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 889 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 890 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 891 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_EventScript_SetBrainObjectGfx::
# 892 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 428 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 893 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	frontier_setbrainobj
# 894 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	return
# 895 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 896 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 897 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 898 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_PlayerEnter:
# 899 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 900 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 901 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 902 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 903 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 435 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 905 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 436 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 906 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_right
# 907 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 437 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 908 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 909 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 910 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 911 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceAttendant:
# 912 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 441 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 913 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_down
# 914 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 915 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 916 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 917 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 918 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_PlayerFaceBattle:
# 919 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 446 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 920 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_right
# 921 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 447 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 922 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 923 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 924 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 925 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_OpponentEnter:
# 926 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 451 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 927 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 928 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 452 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 929 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 930 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 453 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 931 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 932 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 454 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 933 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 934 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 935 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_left
# 936 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 937 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 938 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 939 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 459 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_OpponentExit:
# 941 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 460 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 942 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 943 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 944 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 945 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 946 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 947 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 463 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 948 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 949 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 464 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 950 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 951 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 952 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 467 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 953 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_AttendantApproachPlayer:
# 954 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 955 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 956 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 469 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 957 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 958 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 959 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 960 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 961 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 962 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 472 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 963 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 964 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 965 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 475 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 966 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_AttendantReturnToPos:
# 967 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 968 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 969 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 477 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 970 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 971 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 478 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 972 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 973 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 479 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 974 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 975 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 976 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_right
# 977 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 978 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 979 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 980 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 981 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_SetInvisible:
# 982 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 485 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 983 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	set_invisible
# 984 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 486 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 985 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 986 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 987 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 988 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantEnter:
# 989 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 490 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 990 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	set_visible
# 991 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 491 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 992 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 993 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 492 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 994 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_up
# 995 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 493 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 996 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 997 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 998 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_left
# 999 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_8
# 1001 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 496 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1002 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 1003 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1004 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 499 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantExit:
# 1006 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 500 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1007 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 1008 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1009 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_right
# 1010 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1011 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_down
# 1012 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 503 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1013 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	set_invisible
# 1014 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1015 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 1016 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1017 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1018 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_SecondAttendantDelay:
# 1019 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 508 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1020 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 1021 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 509 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1022 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 1023 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1024 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 1025 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 511 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1026 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 1027 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1028 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 1029 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1030 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_AttendantFaceSecondAttendant:
# 1032 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 516 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1033 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_right
# 1034 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 517 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1035 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 1036 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 518 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 1038 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 519 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 1040 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1041 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	delay_16
# 1042 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 521 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_in_place_right
# 1044 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 522 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 1046 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1047 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 525 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1048 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Movement_AnabelEnter:
# 1049 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1050 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_slow_down
# 1051 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 527 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1052 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_slow_down
# 1053 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1054 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_slow_down
# 1055 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1056 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	walk_slow_down
# 1057 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 530 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1058 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	face_left
# 1059 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 531 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1060 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	step_end
# 1061 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1062 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby::
# 1063 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 535 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1064 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 1065 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1066 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
# 1067 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_2
# 1068 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_1:
# 1069 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 539 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1070 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_MULTIS
# 1071 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_5
# 1072 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_4:
# 1073 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1074 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_LINK_MULTIS
# 1075 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_8
# 1076 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_7:
# 1077 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 545 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1078 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, 6, 6
# 1079 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 546 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1080 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 1081 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 1082 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1083 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_2:
# 1084 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 537 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1085 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyDoubles
# 1086 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_1
# 1087 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1088 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_5:
# 1089 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 540 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1090 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyMultis
# 1091 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_4
# 1092 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1093 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_8:
# 1094 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 543 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyLinkMultis
# 1096 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby_7
# 1097 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1098 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1099 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyDoubles::
# 1100 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 551 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1101 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, 10, 6
# 1102 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1103 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 1104 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 1105 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1106 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1107 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyMultis::
# 1108 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 557 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, 14, 6
# 1110 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1111 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 1112 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 1113 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1114 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1115 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobbyLinkMultis::
# 1116 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 563 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1117 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	tower_closelink
# 1118 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1119 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY, 18, 6
# 1120 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 565 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1121 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	waitstate
# 1122 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 1123 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1124 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1125 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_EventScript_RetireChallenge::
# 1126 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1127 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	setflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 1128 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 571 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1129 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 1130 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	end
# 1131 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1132 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1133 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth::
# 1134 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 575 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1135 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "We will restore your POKéMON to\n"
# 1136 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "full health.$"
# 1137 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1138 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyForOpponent::
# 1139 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1140 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. {STR_VAR_1}.\n"
# 1141 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1142 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1143 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor2ndOpponent::
# 1144 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 585 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1145 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 2.\n"
# 1146 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1147 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1148 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor3rdOpponent::
# 1149 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1150 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 3.\n"
# 1151 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1152 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1153 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor4thOpponent::
# 1154 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 595 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1155 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 4.\n"
# 1156 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1157 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1158 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor5thOpponent::
# 1159 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1160 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 5.\n"
# 1161 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1162 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1163 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor6thOpponent::
# 1164 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 605 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1165 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 6.\n"
# 1166 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1167 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1168 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyFor7thOpponent::
# 1169 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 610 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1170 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing opponent no. 7.\n"
# 1171 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1172 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1173 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle::
# 1174 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1175 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Record your battle on your\n"
# 1176 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "FRONTIER PASS?$"
# 1177 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1178 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass::
# 1179 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 620 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1180 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "{PLAYER}'s battle was recorded\n"
# 1181 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "on the FRONTIER PASS.$"
# 1182 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1183 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_SaveAndQuitGame::
# 1184 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 625 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1185 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Would you like to save and\n"
# 1186 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "quit the game?$"
# 1187 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1188 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait::
# 1189 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 630 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1190 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Saving your battle data.\n"
# 1191 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Please wait.$"
# 1192 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1193 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge::
# 1194 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 635 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1195 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Would you like to cancel your BATTLE\n"
# 1196 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "ROOM challenge?$"
# 1197 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1198 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved::
# 1199 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 640 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1200 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "There was an error of some sort.\n"
# 1201 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your record could not be saved.$"
# 1202 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1203 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay::
# 1204 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 645 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1205 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Excuse me, but…\p"
# 1206 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Our leader, the SALON MAIDEN, is on\n"
# 1207 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "her way here in hopes of battling you.\p"
# 1208 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "She should be arriving very shortly.$"
# 1209 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1210 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden::
# 1211 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1212 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You will be facing the SALON MAIDEN.\n"
# 1213 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 1214 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1215 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel::
# 1216 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 657 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1217 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Greetings…\n"
# 1218 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "My name is ANABEL.\p"
# 1219 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I am the SALON MAIDEN, and I am in\n"
# 1220 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "charge of running the BATTLE TOWER…\p"
# 1221 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I have heard several rumors\n"
# 1222 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "about you…\p"
# 1223 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "In all honesty, what I have heard does\n"
# 1224 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "not seem attractive in any way…\p"
# 1225 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "The reason I've come to see you…\n"
# 1226 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Well, there is but one reason…$"
# 1227 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1228 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent::
# 1229 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 670 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1230 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Let me see your talent in\n"
# 1231 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "its entirety…$"
# 1232 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1233 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized::
# 1234 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 675 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1235 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "ANABEL: Fufufu, nicely done…\p"
# 1236 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your FRONTIER PASS, please…\n"
# 1237 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your talent shall be recognized.$"
# 1238 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1239 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol::
# 1240 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1241 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "The Ability Symbol was embossed on\n"
# 1242 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 1243 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1244 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime::
# 1245 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 686 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1246 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "… … … … … …\p"
# 1247 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You have confidence in your POKéMON\n"
# 1248 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "battling talent, don't you?\p"
# 1249 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I urge you to keep battling and\n"
# 1250 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "keep on winning.\p"
# 1251 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I will be waiting for you.\n"
# 1252 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Until the next time we meet…$"
# 1253 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1254 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack::
# 1255 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 696 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1256 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "ANABEL: You really did come back to\n"
# 1257 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "see me…\p"
# 1258 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "… … … … … …\p"
# 1259 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "You've won straight matches to see me…\n"
# 1260 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I won't have to hold back against you…\p"
# 1261 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "It's been too long now…\p"
# 1262 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Too long since I've been able to battle\n"
# 1263 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "without thinking about anything…$"
# 1264 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1265 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe::
# 1266 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 707 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1267 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Let's begin, shall we?$"
# 1268 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1269 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease::
# 1270 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 711 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1271 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "ANABEL: Fufu, congratulations…\n"
# 1272 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "Your FRONTIER PASS, please…$"
# 1273 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1274 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine::
# 1275 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1276 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "The Ability Symbol took on\n"
# 1277 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 1278 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"

# 1279 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain::
# 1280 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 721 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
# 1281 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "That was fun…\p"
# 1282 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I have never had a POKéMON battle\n"
# 1283 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "so enjoyable before…\p"
# 1284 "data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.pory"
	.string "I wish I could battle with you again…$"
