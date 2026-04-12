# 1 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomePreBattleRoom_OnWarp
# 5 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomePreBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom
# 12 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 18 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_OnWarp:
# 19 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_TurnPlayerNorth
# 21 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TurnPlayerNorth::
# 25 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 29 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 31 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom::
# 33 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_0x8006, 1
# 35 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_2
# 36 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_1:
# 37 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	delay 1
# 39 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 41 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 43 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 44 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnter
# 45 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 47 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	lockall
# 49 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 50 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 51 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_2:
# 52 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle
# 54 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_1
# 55 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 56 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 57 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound::
# 58 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage
# 60 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 62 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 64 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 66 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_2
# 67 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1:
# 68 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoice 16, 0, MULTI_TOURNEY_WITH_RECORD, TRUE
# 70 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 72 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_5
# 74 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 44 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_6
# 76 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_7
# 78 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_8
# 80 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_9
# 82 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10
# 84 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_11
# 86 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 87 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 88 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_2:
# 89 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord
# 91 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1
# 92 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_5:
# 94 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
# 96 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 97 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 98 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_6:
# 99 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
# 101 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 102 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 103 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_7:
# 104 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge
# 106 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 107 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 108 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_8:
# 109 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle
# 111 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 112 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 113 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_9:
# 114 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 51 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
# 116 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 117 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 118 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10:
# 119 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge
# 121 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 122 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 123 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_11:
# 124 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 126 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 127 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 128 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 129 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord::
# 130 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoice 16, 2, MULTI_TOURNEY_NO_RECORD, TRUE
# 132 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_2
# 136 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_3
# 138 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_4
# 140 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_5
# 142 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_6
# 144 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_7
# 146 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 147 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 148 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_2:
# 149 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
# 151 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 152 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 153 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_3:
# 154 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
# 156 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 157 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 158 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_4:
# 159 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge
# 161 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 162 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 163 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_5:
# 164 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
# 166 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 167 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 168 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_6:
# 169 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge
# 171 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 172 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 173 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_7:
# 174 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 176 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 177 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 178 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 179 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle::
# 180 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch
# 182 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 184 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 186 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_2
# 190 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_3
# 192 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_4
# 194 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 195 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 196 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_2:
# 197 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 198 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 199 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 200 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 201 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_3:
# 202 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_RecordBattle
# 204 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 205 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 206 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_4:
# 207 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 209 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 210 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 211 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 212 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RecordBattle::
# 213 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 215 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 217 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 218 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 219 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge::
# 221 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 223 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_2
# 227 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_3
# 229 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_4
# 231 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 232 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 233 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_2:
# 234 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 235 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 236 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 237 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_3:
# 239 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_PauseChallenge
# 241 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 242 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 243 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_4:
# 244 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 246 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 247 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 248 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 249 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge::
# 250 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 251 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge
# 252 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 254 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 256 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_2
# 260 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_3
# 262 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_4
# 264 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 265 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 266 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_2:
# 267 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 269 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 270 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 271 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_3:
# 272 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 273 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_RetireChallenge
# 274 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 275 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 276 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_4:
# 277 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 279 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 281 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 282 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RetireChallenge::
# 283 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_RETIRED
# 285 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 286 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost
# 287 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 290 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_PauseChallenge::
# 291 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait
# 293 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 295 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_save CHALLENGE_STATUS_PAUSED
# 297 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	playse SE_SAVE
# 299 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitse
# 301 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 303 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_reset
# 305 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	end
# 306 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 307 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 308 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo::
# 309 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer, MSGBOX_DEFAULT
# 311 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 312 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 313 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showopponentinfo
# 315 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 317 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 319 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 321 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree::
# 323 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage
# 325 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 327 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showtourneytree
# 329 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 331 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 332 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 333 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 334 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 335 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 336 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage::
# 337 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 338 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 339 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 341 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_3
# 343 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_4
# 345 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_5
# 347 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_6
# 349 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1:
# 350 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 351 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 352 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_3:
# 353 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 354 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound1
# 355 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1
# 356 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 357 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_4:
# 358 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 359 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound2
# 360 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1
# 361 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 362 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_5:
# 363 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals
# 365 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1
# 366 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 367 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_6:
# 368 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 369 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInFinals
# 370 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1
# 371 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 372 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 373 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound1::
# 374 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 375 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1, MSGBOX_DEFAULT
# 376 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 377 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 378 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 379 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound2::
# 380 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2, MSGBOX_DEFAULT
# 382 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 383 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 385 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals::
# 386 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 387 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals, MSGBOX_DEFAULT
# 388 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 389 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 390 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 391 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInFinals::
# 392 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals, MSGBOX_DEFAULT
# 394 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 395 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 396 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 397 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge::
# 398 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 399 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons
# 400 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 402 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 403 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitbuttonpress
# 404 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 405 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 406 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 408 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 410 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_0x8005, DOME_BATTLE_PARTY_SIZE
# 412 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 197 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special ChoosePartyForBattleFrontier
# 414 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 198 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 416 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_resetsketch
# 418 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 420 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_2
# 421 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_1:
# 422 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_set DOME_DATA_SELECTED_MONS
# 424 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_reduceparty
# 426 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_setopponent
# 428 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
# 430 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	closemessage
# 432 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleDomePreBattleRoom_Movement_AttendantMoveAside
# 434 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 435 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 436 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 437 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerWalkToDoor
# 438 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 439 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 440 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 441 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	opendoor 5, 1
# 442 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 443 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitdooranim
# 444 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnterDoor
# 446 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 215 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 447 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 448 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	closedoor 5, 1
# 450 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 451 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitdooranim
# 452 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 453 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM, 9, 5
# 454 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
# 456 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 457 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 458 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	end
# 459 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 460 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_2:
# 461 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 463 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_1
# 464 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 465 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage::
# 467 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 469 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 471 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 227 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 472 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_3
# 473 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 229 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 474 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_4
# 475 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_5
# 477 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 233 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 478 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_6
# 479 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1:
# 480 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 481 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 482 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_3:
# 483 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound1
# 485 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1
# 486 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 487 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_4:
# 488 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound2
# 490 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1
# 491 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_5:
# 493 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals
# 495 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1
# 496 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_6:
# 498 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 499 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals
# 500 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1
# 501 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 502 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 503 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound1::
# 504 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 505 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1
# 506 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 507 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 508 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 509 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound2::
# 510 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 511 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2
# 512 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 513 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 514 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 515 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals::
# 516 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 517 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals
# 518 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 519 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 520 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 521 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals::
# 522 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 523 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 524 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 525 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 526 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 527 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_3
# 528 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_4
# 530 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 531 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_5
# 532 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 533 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_6
# 534 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1:
# 535 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals
# 537 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 538 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 539 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_3:
# 540 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 541 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver
# 542 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1
# 543 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 544 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_4:
# 545 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 546 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold
# 547 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1
# 548 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 549 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_5:
# 550 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 551 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver
# 552 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1
# 553 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_6:
# 555 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 556 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold
# 557 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1
# 558 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 559 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver::
# 561 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver_2
# 563 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver_1:
# 564 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 565 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver, MSGBOX_DEFAULT
# 566 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 567 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 568 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 569 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 570 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver_2:
# 571 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 272 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilverShort
# 573 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver_1
# 574 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 575 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 576 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold::
# 577 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold_2
# 579 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold_1:
# 580 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 581 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGold, MSGBOX_DEFAULT
# 582 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 583 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 584 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 585 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 586 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold_2:
# 587 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGoldShort
# 589 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold_1
# 590 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 591 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 592 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilverShort::
# 593 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort, MSGBOX_DEFAULT
# 595 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 596 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 597 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 598 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGoldShort::
# 599 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGoldShort, MSGBOX_DEFAULT
# 601 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 602 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 603 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 604 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle::
# 605 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 606 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 607 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
# 609 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 610 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special LoadPlayerParty
# 611 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 612 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 613 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 614 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 615 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 616 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitfanfare
# 617 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 305 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 618 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special HealPlayerParty
# 619 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 306 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 620 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage
# 621 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 623 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 624 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showstatictourneytree
# 625 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 626 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 627 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 628 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 629 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 630 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 631 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 632 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage::
# 633 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 634 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 635 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 636 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 637 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 638 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_3
# 639 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 640 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_4
# 641 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 642 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_5
# 643 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_1:
# 644 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 645 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 646 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_3:
# 647 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 317 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_Round1Complete
# 649 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_1
# 650 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 651 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_4:
# 652 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 653 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_Round2Complete
# 654 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_1
# 655 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 656 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_5:
# 657 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_SemifinalsComplete
# 659 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_1
# 660 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 661 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 662 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_Round1Complete::
# 663 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 664 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete, MSGBOX_DEFAULT
# 665 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 666 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 667 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 668 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_Round2Complete::
# 669 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 332 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 670 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete, MSGBOX_DEFAULT
# 671 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 672 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 673 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 674 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_SemifinalsComplete::
# 675 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 676 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete, MSGBOX_DEFAULT
# 677 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 678 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 679 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 680 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 341 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Movement_AttendantMoveAside:
# 682 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 683 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_right
# 684 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 343 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 685 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	face_left
# 686 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 687 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	step_end
# 688 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 689 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 347 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnter:
# 691 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 693 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 349 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 694 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 695 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 696 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 697 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 351 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 698 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 699 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 352 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 700 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	step_end
# 701 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 702 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerWalkToDoor:
# 704 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 705 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 706 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 707 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	step_end
# 708 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 709 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 360 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 710 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnterDoor:
# 711 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 712 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 713 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	set_invisible
# 715 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 363 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	step_end
# 717 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 718 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1::
# 719 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 366 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 720 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your 1st-round match is next.\n"
# 721 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 722 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 723 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2::
# 724 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 371 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 725 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your 2nd-round match is next.\n"
# 726 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 727 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 728 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals::
# 729 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 376 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 730 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your semifinal match is next.\n"
# 731 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 732 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 733 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals::
# 734 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 735 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your final match is next.\n"
# 736 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 737 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 738 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons::
# 739 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 740 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Please choose the two POKéMON\n"
# 741 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "that are to appear in battle.$"
# 742 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 743 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay::
# 744 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 391 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 745 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Right this way, please.$"
# 746 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 747 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth::
# 748 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 749 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Thank you for competing!\p"
# 750 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "I'll restore your POKéMON to\n"
# 751 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "full health.$"
# 752 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 753 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete::
# 754 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 755 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "All 1st-round matches have been\n"
# 756 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "completed.\p"
# 757 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "These are the teams that advanced!$"
# 758 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 759 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete::
# 760 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 761 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "All 2nd-round matches have been\n"
# 762 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "completed.\p"
# 763 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "These are the teams that advanced!$"
# 764 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 765 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete::
# 766 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 767 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "All semifinal matches have been\n"
# 768 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "completed.\p"
# 769 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "These are the teams that advanced!$"
# 770 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 771 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2::
# 772 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 773 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for getting through\n"
# 774 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "the 1st round.\p"
# 775 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The 2nd round is next.\n"
# 776 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 777 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 778 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals::
# 779 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 426 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 780 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for advancing\n"
# 781 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "to the semifinals.\p"
# 782 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The best four teams meet in this round.\n"
# 783 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 784 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 785 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals::
# 786 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 787 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for advancing\n"
# 788 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "to the final match.\p"
# 789 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "You're one win from the championship.\n"
# 790 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 791 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 792 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer::
# 793 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "{PLAYER}'s next opponent\n"
# 795 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "is this TRAINER.$"
# 796 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 797 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1::
# 798 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 799 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The tournament is in the 1st round.$"
# 800 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 801 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2::
# 802 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 803 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The tournament is in the 2nd round.$"
# 804 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 805 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals::
# 806 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 453 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 807 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The tournament is in the semifinals.$"
# 808 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 809 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals::
# 810 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 457 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 811 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The tournament is up to the final.$"
# 812 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 813 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame::
# 814 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 815 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Would you like to save and\n"
# 816 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "quit the game?$"
# 817 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 818 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge::
# 819 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 466 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 820 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Would you like to retire from your\n"
# 821 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Battle Tournament challenge?$"
# 822 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 823 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait::
# 824 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 825 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "I am saving your data.\n"
# 826 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Please wait.$"
# 827 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 828 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch::
# 829 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 830 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Should I record your last match\n"
# 831 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "on your FRONTIER PASS?$"
# 832 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 833 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver::
# 834 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 835 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for advancing\n"
# 836 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "to the final match.\p"
# 837 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "For the final match, you will challenge\n"
# 838 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "the DOME ACE TUCKER.\p"
# 839 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 840 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 841 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGold::
# 842 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 843 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for advancing\n"
# 844 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "to the final match.\p"
# 845 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "For the final match, you will challenge\n"
# 846 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "the DOME ACE TUCKER.\p"
# 847 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 848 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 849 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort::
# 850 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 497 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 851 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your final battle against TUCKER is\n"
# 852 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "next. Are you ready?$"
# 853 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 854 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGoldShort::
# 855 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your final battle against TUCKER is\n"
# 857 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "next. Are you ready?$"
