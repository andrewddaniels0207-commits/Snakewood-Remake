BattleFrontier_BattleArenaLobby_MapScripts::
# 9 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
# 5 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
# 6 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
	.2byte 0


# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnWarp:
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0

BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth::
# 20 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus::
# 26 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_getstatus
	end


BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
# 31 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 32 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 34 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, 0
# 35 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 36 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 38 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
# 43 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 44 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_isbrain
# 45 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_2
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_1:
# 48 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints
	return

BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_2:
# 46 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
	goto BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_1


BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon::
# 53 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
	return


BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
# 58 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_givepoints
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 60 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
# 61 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 62 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 63 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 65 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 66 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
# 71 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 72 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
# 73 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 74 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 78 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 79 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
# 84 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkairshow
# 85 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 86 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special HealPlayerParty
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 88 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save 0
# 89 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 90 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 91 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 92 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_2
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_1:
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
# 96 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 98 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_5
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_6
# 103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_7
	return

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_2:
# 93 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_5:
# 100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
	return

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_6:
# 102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
	return

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_7:
# 104 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
	return


BattleFrontier_BattleArenaLobby_EventScript_RecordMatch::
# 109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	return


BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge::
	return


BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save CHALLENGE_STATUS_SAVING
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 124 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
	return


BattleFrontier_BattleArenaLobby_EventScript_Attendant::
# 129 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock
# 130 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	faceplayer
# 131 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 132 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 134 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
	return


BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
# 138 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 140 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_2
# 144 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_3
# 146 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_4
# 148 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_5
	return

BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_2:
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
	return

BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_3:
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
	return

BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_4:
# 147 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	return

BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_5:
# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
# 154 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 156 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 158 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_3
# 160 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_4
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_1:
# 163 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkineligible
# 164 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_6
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_5:
# 167 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 168 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 170 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 171 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 174 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 175 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 176 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_9
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_8:
# 179 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 180 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case NO, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_12
# 183 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case YES, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_13
# 185 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_14
	return

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_3:
# 159 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_4:
# 161 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_6:
# 165 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_5

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_9:
# 177 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_8

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_12:
# 182 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	return

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_13:
# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
	return

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_14:
# 186 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	return


BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
# 191 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 192 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 193 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_init
# 194 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
# 195 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 197 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	delay 2
# 200 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 201 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 202 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_1
	return

BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_1:
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
	return


BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
# 211 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_50
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_2
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_1:
# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_5
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_4:
# 219 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
# 220 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 221 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_2:
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_5:
# 217 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_4


BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge::
# 226 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
# 227 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
	return


BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons::
# 231 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 232 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_2
# 234 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_3
	return

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_2:
# 233 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
	return

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_3:
# 235 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen
	return


BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50::
# 240 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 241 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 242 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 243 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
	return


BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen::
# 247 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 248 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 249 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 250 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
	return


BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed::
# 254 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 255 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
# 259 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 260 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
	return


BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
# 264 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
	return


BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge::
# 268 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	release
	end


BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50::
# 273 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
# 274 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 2, 2
# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 280 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 2, 2
# 282 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
	return


# 286 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor:
# 287 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 288 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 290 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 291 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 292 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 293 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 294 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 295 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 296 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end

# 299 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor:
# 300 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 301 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 302 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end

# 305 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor:
# 306 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 307 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 308 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 309 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 310 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 311 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 312 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 313 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 314 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 315 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 316 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end

# 319 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor:
# 320 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 321 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 322 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 323 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end

BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen::
# 327 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
# 328 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
# 329 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 330 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 11, 2
# 331 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 332 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 333 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 334 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 335 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 11, 2
# 336 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
	return


# 340 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor:
# 341 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 342 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 343 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 344 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 345 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 346 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 347 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 348 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 349 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end

# 352 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor:
# 353 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 354 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 355 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 356 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 357 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 358 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 359 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 360 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 361 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 362 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end

BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
# 366 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 367 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_ARENA
# 368 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitbuttonpress
# 369 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special RemoveRecordsWindow
# 370 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleArenaLobby_EventScript_Youngster::
# 375 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
	end


BattleFrontier_BattleArenaLobby_EventScript_Man::
# 380 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
	end


BattleFrontier_BattleArenaLobby_EventScript_Camper::
# 385 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
	end


BattleFrontier_BattleArenaLobby_EventScript_Woman::
# 390 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
	end


BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
# 395 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 396 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 397 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
# 402 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 403 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 404 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
# 405 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 406 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_3
# 408 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_4
# 410 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_5
# 412 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 3, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_6
# 414 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_7
# 416 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_8
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1:
	end

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_3:
# 407 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_BattleRules
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_4:
# 409 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_MindRules
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_5:
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_SkillRules
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_6:
# 413 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_BodyRules
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_7:
# 415 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ExitRules
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_8:
# 417 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ExitRules
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1


BattleFrontier_BattleArenaLobby_EventScript_BattleRules::
# 423 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 424 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleArenaLobby_EventScript_MindRules::
# 429 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 430 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleArenaLobby_EventScript_SkillRules::
# 435 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 436 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleArenaLobby_EventScript_BodyRules::
# 441 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 442 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleArenaLobby_EventScript_ExitRules::
# 447 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena::
# 451 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Where the battling spirit of TRAINERS\n"
	.string "is put to the test!\p"
	.string "I welcome you to the BATTLE ARENA!\p"
	.string "I am your guide to the Set KO Tourney!$"

BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge::
# 458 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Now, do you wish to take\n"
	.string "the BATTLE ARENA challenge?$"

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge::
# 463 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
	.string "another occasion!$"

BattleFrontier_BattleArenaLobby_Text_ExplainChallenge::
# 468 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the BATTLE ARENA, we undertake\n"
	.string "the Set KO Tourney.\p"
	.string "All participants enter with a team of\n"
	.string "three POKéMON.\p"
	.string "The three POKéMON must be lined up in\n"
	.string "the order in which they are to appear.\p"
	.string "During battle, the POKéMON will appear\n"
	.string "one at a time in the preset order.\p"
	.string "Once a POKéMON enters battle, it must\n"
	.string "remain out until the match is decided.\p"
	.string "If a match remains undecided in\n"
	.string "three turns, it goes to judging.\p"
	.string "If you wish to interrupt your challenge,\n"
	.string "please save the game.\p"
	.string "If you don't save, you will not be able\n"
	.string "to continue with your challenge.\p"
	.string "If you pull off the feat of beating\n"
	.string "seven TRAINERS in succession,\l"
	.string "we will present you with Battle Points.$"

BattleFrontier_BattleArenaLobby_Text_OkayToSave::
# 490 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Before showing you to the BATTLE\n"
	.string "ARENA, you must save. Is that okay?$"

BattleFrontier_BattleArenaLobby_Text_WhichLevelMode::
# 495 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The BATTLE ARENA offers two levels\n"
	.string "of challenge, Level 50 and Open Level.\l"
	.string "Which is your choice?$"

BattleFrontier_BattleArenaLobby_Text_SelectThreeMons::
# 501 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Very well, now select your\n"
	.string "three POKéMON, please.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen::
# 506 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
	.string "You do not have the three POKéMON\n"
	.string "required for entry.\p"
	.string "To qualify, you must bring three\n"
	.string "different kinds of POKéMON.\p"
	.string "They also must not hold the same\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd::
# 517 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When you have made your preparations,\n"
	.string "please do return.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50::
# 522 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
	.string "You do not have the three POKéMON\n"
	.string "required for entry.\p"
	.string "To qualify, you must bring three\n"
	.string "different kinds of POKéMON.\p"
	.string "The three different POKéMON\n"
	.string "must all be Level 50 or lower.\p"
	.string "They also must not hold the same\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleArenaLobby_Text_GuideYouToArena::
# 535 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I shall now guide you to\n"
	.string "the BATTLE ARENA.$"

BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown::
# 540 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
	.string "You did not save the game before\n"
	.string "shutting down, did you?\p"
	.string "It is unfortunate, but that has\n"
	.string "resulted in your disqualification\l"
	.string "from your challenge.\p"
	.string "You may, of course, start with a fresh\n"
	.string "challenge.$"

BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins::
# 551 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We congratulate you for your splendid\n"
	.string "string of wins over seven TRAINERS!$"

BattleFrontier_BattleArenaLobby_Text_RecordAchievement::
# 556 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your achievement will be recorded.\n"
	.string "Please wait while I save the game.$"

BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize::
# 561 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In commemoration of your 7-win streak,\n"
	.string "we present you with this prize.$"

BattleFrontier_BattleArenaLobby_Text_ReceivedPrize::
# 566 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize::
# 571 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Oh?\n"
	.string "Your BAG seems to be full.\p"
	.string "I urge you to clear space and\n"
	.string "return for your prize.$"

BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave::
# 578 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Thank you so much for participating!\p"
	.string "Please wait while I save the game.$"

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2::
# 583 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
	.string "another occasion!$"

BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame::
# 588 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We have been looking forward to\n"
	.string "your arrival.\p"
	.string "Before I show you to the BATTLE\n"
	.string "ARENA, I must save the game.\l"
	.string "Please wait.$"

BattleFrontier_BattleArenaLobby_Text_RecordLastMatch::
# 596 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Shall I record your last BATTLE ARENA\n"
	.string "match on your FRONTIER PASS?$"

BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack::
# 601 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I lost on the REFEREE's decision…\p"
	.string "I don't think it was a good idea to only\n"
	.string "use defensive moves and not attack…$"

BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked::
# 607 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I won in judging!\p"
	.string "Landing hits consistently on\n"
	.string "the opponent's POKéMON worked!$"

BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw::
# 613 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Our match was declared a draw.\p"
	.string "When we ran out of time, both my\n"
	.string "POKéMON and the opponent's had about\l"
	.string "the same amount of HP left.$"

BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant::
# 620 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the BATTLE ARENA, the order of\n"
	.string "POKéMON is totally important.\p"
	.string "For example, if your first POKéMON\n"
	.string "has certain type disadvantages,\l"
	.string "try making your second POKéMON one\l"
	.string "with moves that are super effective\l"
	.string "against the first one.\p"
	.string "I think that will be a good way of\n"
	.string "making an effective team.$"

BattleFrontier_BattleArenaLobby_Text_RulesAreListed::
# 632 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney's rules are listed.$"

BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading::
# 636 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules::
# 640 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney has special rules,\n"
	.string "unlike standard battles.\p"
	.string "First, one battle lasts only\n"
	.string "three turns.\p"
	.string "If the outcome is not decided after\n"
	.string "three turns, it goes to judging.\p"
	.string "The REFEREE will choose the winner\n"
	.string "based on how the POKéMON battled.\p"
	.string "Also, a POKéMON cannot be switched out\n"
	.string "until its battle's outcome is decided.$"

BattleFrontier_BattleArenaLobby_Text_ExplainMindRules::
# 653 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The first judging factor is “Mind.”\n"
	.string "This factor evaluates how aggressive\l"
	.string "the battlers were.\p"
	.string "The judging is based on how often\n"
	.string "the TRAINERS ordered the use of\l"
	.string "offensive moves.$"

BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules::
# 662 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The second judging factor is “Skill.”\n"
	.string "This factor evaluates how effectively\l"
	.string "POKéMON moves were used.\p"
	.string "If a move worked successfully,\n"
	.string "the Skill rating goes up.\p"
	.string "If a move failed, the Skill rating\n"
	.string "is lowered.\p"
	.string "If it was an offensive move, the Skill\n"
	.string "rating goes up if the move was “super\l"
	.string "effective” and goes down if it was\l"
	.string "“not very effective.”\p"
	.string "The Skill rating will not go up for\n"
	.string "moves such as PROTECT and DETECT.\p"
	.string "If the opponent used PROTECT or\n"
	.string "DETECT, and your POKéMON failed to\l"
	.string "hit with a move, its Skill rating will not\l"
	.string "go down.$"

BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules::
# 682 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The third judging factor is “Body.”\n"
	.string "This factor is based on how much HP\l"
	.string "remained at the end of a battle.\p"
	.string "The rating takes into account how much\n"
	.string "HP a POKéMON had at the start of\l"
	.string "battle, and what remained at the end.$"

BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon::
# 691 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "A victory snatched from the ARENA\n"
	.string "TYCOON, and a seven-TRAINER sweep!\p"
	.string "We congratulate you on your most\n"
	.string "splendid challenge!$"

BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints::
# 698 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger, in recognition of\n"
	.string "your indefatigable spirit, please\l"
	.string "accept these Battle Point(s).$"
