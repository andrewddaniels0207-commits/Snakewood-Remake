BattleFrontier_BattleFactoryLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_OnWarp
# 3 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
# 5 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
# 6 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
# 7 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
# 8 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
	.2byte 0


# 12 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnWarp:
# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
# 16 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0

BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth::
# 23 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus::
# 31 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_getstatus
	end


BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
# 37 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 39 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 43 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_setswapped
# 45 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
# 47 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, 0
# 49 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 51 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 53 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 55 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
# 61 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 63 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_isbrain
# 65 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 66 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_2
	return


BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_1::
# 71 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
# 73 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 75 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints
	return


BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_2::
# 81 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead
# 82 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead::
# 87 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
# 95 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_givepoints
# 99 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 101 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
# 103 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 105 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 107 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 109 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 111 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 113 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 115 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 117 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle
	end


BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
# 123 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 125 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
# 127 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 131 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 133 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 135 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 139 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 141 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle::
# 147 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 149 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 150 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_2
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_1::
# 155 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
# 157 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 159 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_2::
# 172 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 173 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_5::
# 178 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_6::
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_7::
# 190 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
	return


BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle::
# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	return


BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle::
# 202 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 204 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 206 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 208 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
# 214 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 216 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
# 218 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 220 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save CHALLENGE_STATUS_SAVING
# 222 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 224 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 226 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 228 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 230 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 232 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
# 238 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 240 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	faceplayer
# 242 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 244 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 246 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end


BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
# 252 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 254 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 256 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end


BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 264 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 265 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_Attendant_2
	return


BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1::
# 270 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 271 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_Attendant_4
	return


BattleFrontier_BattleFactoryLobby_EventScript_Attendant_2::
# 277 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle
# 278 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_Attendant_4::
# 283 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
# 289 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 290 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_2
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1::
# 295 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 296 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_4::
# 301 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 303 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_2::
# 318 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge
# 319 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5::
# 324 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge
# 325 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_4
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_8::
# 330 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_9::
# 336 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_10::
# 342 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_11::
# 348 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
# 354 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
# 356 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 358 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	return


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1::
# 368 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 370 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
	return


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_3::
# 383 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 384 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_4::
# 389 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 390 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_6::
# 395 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_7::
# 401 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_8::
# 407 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge::
# 413 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 415 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_init
# 417 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 419 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
# 421 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 423 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 425 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	delay 2
# 427 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 429 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 431 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, 0
# 432 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_2
	return


BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_1::
# 437 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 0
	return


BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_2::
# 443 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed
# 444 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
# 449 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 451 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 453 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 455 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 456 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_2
	return


BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1::
# 461 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 462 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_5
	return


BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_4::
# 467 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor
# 469 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor
# 471 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmovement 0
# 473 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
# 475 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 477 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitstate
	end


BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_2::
# 483 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant
# 484 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_5::
# 489 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant
# 490 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_4
	return


BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant::
# 495 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_SINGLES
	return


BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant::
# 501 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_DOUBLES
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
# 507 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 508 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_2
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1::
# 513 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 514 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_5
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_4::
# 519 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_2::
# 525 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge
# 526 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_5::
# 531 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge
# 532 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_4
	return


BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed::
# 537 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 539 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge::
# 545 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 547 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
	return


BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
# 553 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 555 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
	end


BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor::
# 562 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 564 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 566 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 568 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	set_invisible
# 570 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
	return


BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor::
# 576 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 578 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 580 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 582 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 584 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
	return


BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle::
# 589 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
	return


BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle::
# 595 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
	return


BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge::
# 601 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge::
# 607 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge::
# 613 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
	return


BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge::
# 619 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
	return


BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
# 625 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 627 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
# 629 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 631 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 633 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
# 639 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 641 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
# 643 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 645 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 647 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_Woman::
# 653 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_Camper::
# 659 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
# 665 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 667 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
# 669 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
	end


BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
# 675 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
# 681 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 683 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 685 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
# 691 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 693 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 695 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
	return


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1::
	end


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_3::
# 719 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics
# 720 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_4::
# 725 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner
# 726 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_5::
# 731 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber
# 732 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_6::
# 737 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes
# 738 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_7::
# 743 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv
# 744 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_8::
# 749 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 750 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_9::
# 755 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 756 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
	return


BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics::
# 761 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 763 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner::
# 769 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 771 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber::
# 777 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 779 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes::
# 785 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
# 787 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv::
# 793 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
# 795 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_ExitRules::
# 801 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle::
# 805 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of TRAINERS\n"
	.string "is put to the test!\p"
	.string "Welcome to the BATTLE FACTORY!\p"
	.string "I am your guide to the Battle Swap\n"
	.string "Single Tournament.$"

BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge::
# 813 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
	.string "Swap Single challenge?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge::
# 818 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
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
# 837 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We look forward to your next visit.$"

BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode::
# 841 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which level do you wish to challenge?\n"
	.string "Level 50 or Open Level?$"

BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge::
# 846 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Before you begin your challenge,\n"
	.string "I need to save the game. Is that okay?$"

BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping::
# 851 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Okay, I will hold your POKéMON for\n"
	.string "safekeeping while you compete.$"

BattleFrontier_BattleFactoryLobby_Text_StepThisWay::
# 856 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please step this way.$"

BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults::
# 860 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Thank you for participating!\p"
	.string "I will return your POKéMON in exchange\n"
	.string "for our rental POKéMON.\p"
	.string "I must also save the event results.\n"
	.string "Please wait.$"

BattleFrontier_BattleFactoryLobby_Text_ReturnMons::
# 868 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I will return your POKéMON in exchange\n"
	.string "for our rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins::
# 873 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations! You've won seven\n"
	.string "straight Battle Swap matches!$"

BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak::
# 878 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your 7-win streak,\n"
	.string "we award you these Battle Point(s).$"

BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints::
# 883 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Oh, oh, oh!\p"
	.string "Your Battle Points are maxed.\p"
	.string "Please come back after using\n"
	.string "some Battle Points.$"

BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume::
# 890 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We've been waiting for you!\p"
	.string "Before we resume your challenge,\n"
	.string "I must save the game.$"

BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting::
# 896 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I'm sorry to say this, but you didn't\n"
	.string "save before you quit playing last time.\p"
	.string "As a result, you have been disqualified\n"
	.string "from your challenge.$"

BattleFrontier_BattleFactoryLobby_Text_WellReturnMons::
# 903 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We'll return your personal POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_ReceivedPrizeItem::
# 907 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle::
# 912 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of TRAINERS\n"
	.string "is put to the test!\p"
	.string "Welcome to the BATTLE FACTORY!\p"
	.string "I am your guide to the Battle Swap\n"
	.string "Double Tournament.$"

BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge::
# 920 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
	.string "Swap Double challenge?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge::
# 925 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
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
# 944 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations for defeating\n"
	.string "the FACTORY HEAD and winning\l"
	.string "seven matches in a row!$"

BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints::
# 950 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your wealth of\n"
	.string "knowledge and keen intelligence,\l"
	.string "we award you these Battle Point(s).$"

BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave::
# 956 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Let me exchange your POKéMON\n"
	.string "for our rental POKéMON.\p"
	.string "I need to save the battle data,\n"
	.string "so please wait.$"

BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch::
# 963 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to record your last\n"
	.string "BATTLE FACTORY match on your\l"
	.string "FRONTIER PASS?$"

BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves::
# 969 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
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
# 982 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I swapped for a weak POKéMON…\n"
	.string "I thought it was a good kind to have…\p"
	.string "They wiped the floor with us…$"

BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons::
# 988 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Things haven't been going my way\n"
	.string "at all.\p"
	.string "You need to check your opponent's\n"
	.string "POKéMON during battle to see if\l"
	.string "they're any good.$"

BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints::
# 996 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You know how the staff here give you\n"
	.string "a few hints about your next opponent?\p"
	.string "Well, I'm a full-grown man, but I have\n"
	.string "trouble figuring out their hints.$"

BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried::
# 1003 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Like, I'm really tough, but I get bored\n"
	.string "really easily, so I just kept swapping\l"
	.string "and battling over and over.\p"
	.string "So anyway, when I kept entering\n"
	.string "Battle Swap events, I noticed they\l"
	.string "varied the rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_RulesAreListed::
# 1012 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap rules are listed.$"

BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading::
# 1016 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules::
# 1020 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In a Battle Swap event, you may use\n"
	.string "only three POKéMON.\p"
	.string "Whether you are renting or swapping,\n"
	.string "your team may not have two or more\l"
	.string "of the same POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules::
# 1028 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You may swap POKéMON only with\n"
	.string "the TRAINER you have just defeated.\p"
	.string "You may swap for only those POKéMON\n"
	.string "used by the beaten TRAINER.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules::
# 1035 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "After every battle you win, you may\n"
	.string "swap for one of your defeated\l"
	.string "opponent's POKéMON.\p"
	.string "You will not be able to swap POKéMON\n"
	.string "with the seventh TRAINER in the event.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules::
# 1043 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
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
# 1056 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In the Open Level, the rental POKéMON\n"
	.string "and the opposing TRAINERS' POKéMON\l"
	.string "are all Level 100.$"
