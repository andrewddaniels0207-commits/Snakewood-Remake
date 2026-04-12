BattleFrontier_BattleFactoryLobby_MapScripts::
# 9 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_OnWarp
# 2 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
# 4 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
# 5 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
# 6 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
# 7 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
	.2byte 0


# 12 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnWarp:
# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0

BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth::
# 20 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus::
# 26 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_getstatus
	end


BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
# 31 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 32 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 34 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_setswapped
# 35 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
# 36 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, 0
# 37 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 38 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 39 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 40 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
# 45 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 46 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_isbrain
# 47 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_2
BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_1:
# 50 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 52 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints
	return

BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_2:
# 48 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead
	goto BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_1


BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead::
# 56 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
# 57 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
# 61 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
# 62 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_givepoints
# 63 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 64 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
# 65 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 66 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 67 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 68 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 69 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 70 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 71 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 72 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle
	end


BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
# 77 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 78 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
# 79 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 80 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 81 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 82 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 83 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 84 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 85 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 86 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle::
# 90 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 91 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_2
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_1:
# 94 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
# 95 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 96 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 97 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_5
# 100 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_6
# 102 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_7
	return

BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_2:
# 92 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_1

BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_5:
# 99 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	return

BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_6:
# 101 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle
	return

BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_7:
# 103 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	return


BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle::
# 108 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	return


BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle::
# 112 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 113 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 114 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 115 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
# 120 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 121 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
# 122 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 123 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save CHALLENGE_STATUS_SAVING
# 124 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 125 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 126 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 127 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 128 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 129 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
# 133 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 134 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	faceplayer
# 135 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 136 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end


BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
# 142 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 143 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 144 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end


BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
# 149 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 150 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_Attendant_2
BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1:
# 153 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_Attendant_4
	return

BattleFrontier_BattleFactoryLobby_EventScript_Attendant_2:
# 151 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1

BattleFrontier_BattleFactoryLobby_EventScript_Attendant_4:
# 154 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
# 159 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_2
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1:
# 162 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_4:
# 165 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 166 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 167 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_8
# 170 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_9
# 172 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_10
# 174 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_11
	return

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_2:
# 160 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5:
# 163 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_4

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_8:
# 169 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_9:
# 171 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_10:
# 173 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_11:
# 175 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
# 180 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
# 181 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 182 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 183 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_3
# 186 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_4
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1:
# 189 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 190 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 191 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 192 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case NO, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_6
# 194 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case YES, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_7
# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_8
	return

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_3:
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_4:
# 187 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_6:
# 193 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_7:
# 195 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_8:
# 197 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge::
# 202 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 203 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_init
# 204 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 205 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
# 206 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 207 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 208 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	delay 2
# 209 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 210 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 211 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_2
BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_1:
# 214 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 0
	return

BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_2:
# 212 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed
	goto BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_1


BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
# 218 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 219 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 220 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 221 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_2
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1:
# 224 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_5
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_4:
# 227 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor
# 228 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor
# 229 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmovement 0
# 230 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
# 231 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 232 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_2:
# 222 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_5:
# 225 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_4


BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant::
# 237 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_SINGLES
	return


BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant::
# 242 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_DOUBLES
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
# 247 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_2
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1:
# 250 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_5
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_4:
# 253 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge
	return

BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_2:
# 248 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_5:
# 251 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_4


BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed::
# 257 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 258 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge::
# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 263 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
	return


BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
# 267 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 268 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
	end


# 272 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor:
# 273 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 274 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 275 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 276 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	set_invisible
# 277 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end

# 280 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor:
# 281 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 282 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 283 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 284 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 285 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end

BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle::
# 289 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
	return


BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle::
# 294 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
	return


BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge::
# 299 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge::
# 304 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge::
# 309 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge::
# 314 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
	return


BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
# 319 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 320 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
# 321 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 322 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 323 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
# 328 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 329 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
# 330 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 331 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 332 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_Woman::
# 337 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_Camper::
# 342 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
# 347 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 348 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
# 349 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
	end


BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
# 354 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
# 359 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 360 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 361 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
# 366 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 367 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 368 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
# 369 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 370 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_3
# 372 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_4
# 374 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_5
# 376 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 3, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_6
# 378 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 4, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_7
# 380 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 5, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_8
# 382 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_9
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1:
	end

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_3:
# 371 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_4:
# 373 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_5:
# 375 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_6:
# 377 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_7:
# 379 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_8:
# 381 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_9:
# 383 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1


BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics::
# 389 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 390 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner::
# 395 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 396 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber::
# 401 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 402 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes::
# 407 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
# 408 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv::
# 413 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
# 414 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_ExitRules::
# 419 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle::
# 423 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of TRAINERS\n"
	.string "is put to the test!\p"
	.string "Welcome to the BATTLE FACTORY!\p"
	.string "I am your guide to the Battle Swap\n"
	.string "Single Tournament.$"

BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge::
# 431 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
	.string "Swap Single challenge?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge::
# 436 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap Single Tournament\n"
	.string "is a SINGLE BATTLE competition using\l"
	.string "only rental POKéMON.\p"
	.string "First, you will be loaned three\n"
	.string "POKéMON specifically for this event.\p"
	.string "Using the supplied rental POKéMON,\n"
	.string "you must conduct a SINGLE BATTLE.\p"
	.string "If you win, you are permitted to trade\n"
	.string "one of your rental POKéMON.\p"
	.string "Repeat this cycle of battling and\n"
	.string "trading--if you win seven times in\l"
	.string "a row, you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save, you will be\n"
	.string "disqualified from your challenge.$"

BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit::
# 455 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We look forward to your next visit.$"

BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode::
# 459 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which level do you wish to challenge?\n"
	.string "Level 50 or Open Level?$"

BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge::
# 464 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Before you begin your challenge,\n"
	.string "I need to save the game. Is that okay?$"

BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping::
# 469 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Okay, I will hold your POKéMON for\n"
	.string "safekeeping while you compete.$"

BattleFrontier_BattleFactoryLobby_Text_StepThisWay::
# 474 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please step this way.$"

BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults::
# 478 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Thank you for participating!\p"
	.string "I will return your POKéMON in exchange\n"
	.string "for our rental POKéMON.\p"
	.string "I must also save the event results.\n"
	.string "Please wait.$"

BattleFrontier_BattleFactoryLobby_Text_ReturnMons::
# 486 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I will return your POKéMON in exchange\n"
	.string "for our rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins::
# 491 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations! You've won seven\n"
	.string "straight Battle Swap matches!$"

BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak::
# 496 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your 7-win streak,\n"
	.string "we award you these Battle Point(s).$"

BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints::
# 501 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Oh, oh, oh!\p"
	.string "Your Battle Points are maxed.\p"
	.string "Please come back after using\n"
	.string "some Battle Points.$"

BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume::
# 508 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We've been waiting for you!\p"
	.string "Before we resume your challenge,\n"
	.string "I must save the game.$"

BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting::
# 514 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I'm sorry to say this, but you didn't\n"
	.string "save before you quit playing last time.\p"
	.string "As a result, you have been disqualified\n"
	.string "from your challenge.$"

BattleFrontier_BattleFactoryLobby_Text_WellReturnMons::
# 521 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We'll return your personal POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_ReceivedPrizeItem::
# 525 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle::
# 530 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of TRAINERS\n"
	.string "is put to the test!\p"
	.string "Welcome to the BATTLE FACTORY!\p"
	.string "I am your guide to the Battle Swap\n"
	.string "Double Tournament.$"

BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge::
# 538 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
	.string "Swap Double challenge?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge::
# 543 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap Double Tournament\n"
	.string "is a DOUBLE BATTLE competition using\l"
	.string "only rental POKéMON.\p"
	.string "First, you will be loaned three\n"
	.string "POKéMON specifically for this event.\p"
	.string "Using the supplied rental POKéMON,\n"
	.string "you must conduct a DOUBLE BATTLE.\p"
	.string "If you win, you are permitted to trade\n"
	.string "one of your rental POKéMON.\p"
	.string "Repeat this cycle of battling and\n"
	.string "trading--if you win seven times in\l"
	.string "a row, you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead::
# 562 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations for defeating\n"
	.string "the FACTORY HEAD and winning\l"
	.string "seven matches in a row!$"

BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints::
# 568 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your wealth of\n"
	.string "knowledge and keen intelligence,\l"
	.string "we award you these Battle Point(s).$"

BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave::
# 574 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Let me exchange your POKéMON\n"
	.string "for our rental POKéMON.\p"
	.string "I need to save the battle data,\n"
	.string "so please wait.$"

BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch::
# 581 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to record your last\n"
	.string "BATTLE FACTORY match on your\l"
	.string "FRONTIER PASS?$"

BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves::
# 587 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Hi!\n"
	.string "You, there!\p"
	.string "Are you thinking that the events here\n"
	.string "are easy since you don't need to have\l"
	.string "a raised team of POKéMON?\p"
	.string "I wouldn't be too sure about winning\n"
	.string "that easily.\p"
	.string "If you don't have thorough knowledge\n"
	.string "about POKéMON and their moves,\l"
	.string "it will be tough to keep winning.$"

BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon::
# 600 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I swapped for a weak POKéMON…\n"
	.string "I thought it was a good kind to have…\p"
	.string "They wiped the floor with us…$"

BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons::
# 606 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Things haven't been going my way\n"
	.string "at all.\p"
	.string "You need to check your opponent's\n"
	.string "POKéMON during battle to see if\l"
	.string "they're any good.$"

BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints::
# 614 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You know how the staff here give you\n"
	.string "a few hints about your next opponent?\p"
	.string "Well, I'm a full-grown man, but I have\n"
	.string "trouble figuring out their hints.$"

BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried::
# 621 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Like, I'm really tough, but I get bored\n"
	.string "really easily, so I just kept swapping\l"
	.string "and battling over and over.\p"
	.string "So anyway, when I kept entering\n"
	.string "Battle Swap events, I noticed they\l"
	.string "varied the rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_RulesAreListed::
# 630 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap rules are listed.$"

BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading::
# 634 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules::
# 638 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In a Battle Swap event, you may use\n"
	.string "only three POKéMON.\p"
	.string "Whether you are renting or swapping,\n"
	.string "your team may not have two or more\l"
	.string "of the same POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules::
# 646 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You may swap POKéMON only with\n"
	.string "the TRAINER you have just defeated.\p"
	.string "You may swap for only those POKéMON\n"
	.string "used by the beaten TRAINER.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules::
# 653 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "After every battle you win, you may\n"
	.string "swap for one of your defeated\l"
	.string "opponent's POKéMON.\p"
	.string "You will not be able to swap POKéMON\n"
	.string "with the seventh TRAINER in the event.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules::
# 661 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "There are two key points to be aware\n"
	.string "of when swapping POKéMON.\p"
	.string "First, when swapping, you can't check\n"
	.string "the stats of the POKéMON you are\l"
	.string "about to receive.\p"
	.string "Second, the POKéMON on your team\n"
	.string "are lined up in sequence, depending on\l"
	.string "the order in which you rented them.\p"
	.string "This sequence remains unchanged\n"
	.string "even when swaps are made.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules::
# 674 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In the Open Level, the rental POKéMON\n"
	.string "and the opposing TRAINERS' POKéMON\l"
	.string "are all Level 100.$"
