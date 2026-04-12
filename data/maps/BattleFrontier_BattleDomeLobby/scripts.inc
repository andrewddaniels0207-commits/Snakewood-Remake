BattleFrontier_BattleDomeLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_OnResume
# 10 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 3 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus
# 5 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving
# 6 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge
# 7 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleDomeLobby_EventScript_WonChallenge
# 8 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleDomeLobby_EventScript_LostChallenge
	.2byte 0


BattleFrontier_BattleDomeLobby_OnResume::
# 14 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_initresultstree
	end


# 18 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 19 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnWarp:
# 20 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth
# 21 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0

BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth::
# 26 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus::
# 32 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_getstatus
	end


BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving::
# 37 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 38 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 39 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 40 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK, 0
# 41 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 42 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 43 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 44 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 45 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleDomeLobby_EventScript_WonChallenge::
# 50 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 51 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 52 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_isbrain
# 53 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_2
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_1:
# 56 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney, MSGBOX_DEFAULT
# 57 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints
	return

BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_2:
# 54 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce
	goto BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_1


BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce::
# 61 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints::
# 65 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_givepoints
# 67 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 68 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 69 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 70 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 71 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 72 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 73 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 74 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_HAS_WON_CHALLENGE, TRUE
# 75 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, TRUE
# 76 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 77 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 78 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 79 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle
	return


BattleFrontier_BattleDomeLobby_EventScript_LostChallenge::
# 83 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 84 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 85 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 86 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 87 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 88 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 89 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 90 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 91 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 92 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 93 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 94 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
	return


BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle::
# 98 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save 0
# 99 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 100 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 101 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_2
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_1:
# 105 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
# 106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_5
# 111 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_6
# 113 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_7
	return

BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_2:
# 103 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_1

BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_5:
# 110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
	return

BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_6:
# 112 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_RecordBattle
	return

BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_7:
# 114 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_RecordBattle::
# 119 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	return


BattleFrontier_BattleDomeLobby_EventScript_EndChallenge::
# 123 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 125 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge::
# 131 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 132 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou, MSGBOX_DEFAULT
# 133 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2
# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save CHALLENGE_STATUS_SAVING
# 136 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 137 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 138 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 139 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant::
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 145 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 147 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
	end


BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant::
# 153 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 154 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 155 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 156 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 157 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
	end


BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome::
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 163 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_2
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_1:
# 166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_4
	return

BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_2:
# 164 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_1

BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_4:
# 167 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles
	return


BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge::
# 172 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_2
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_1:
# 175 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_5
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_4:
# 178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 179 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_8
# 183 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_9
# 185 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_10
# 187 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_11
	return

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_2:
# 173 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_5:
# 176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_4

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_8:
# 182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge
	return

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_9:
# 184 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge
	return

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_10:
# 186 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	return

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_11:
# 188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge::
# 193 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
# 194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 195 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 196 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_3
# 199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_4
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_1:
# 202 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkineligible
# 203 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_6
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_5:
# 206 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 207 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 208 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 210 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 212 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 213 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 214 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 215 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_9
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_8:
# 218 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 219 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 220 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case NO, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_12
# 222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case YES, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_13
# 224 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_14
	return

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_3:
# 198 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_4:
# 200 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_6:
# 204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_5

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_9:
# 216 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_8

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_12:
# 221 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
	return

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_13:
# 223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge
	return

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_14:
# 225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge::
# 230 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 231 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_init
# 233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 234 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 236 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 237 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	delay 2
# 238 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 240 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_2
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_1:
# 243 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_inittrainers
	return

BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_2:
# 241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed
	goto BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_1


BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge::
# 247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 248 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 249 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_settrainers
# 250 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome, MSGBOX_DEFAULT
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor
# 253 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 254 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 23, 6
# 255 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
	end


BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge::
# 261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_2
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_1:
# 264 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_5
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_4:
# 267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge
	return

BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_2:
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_1

BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_5:
# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_4


BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons::
# 271 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 272 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_2
# 274 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_3
	return

BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_2:
# 273 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50
	return

BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_3:
# 275 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen
	return


BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50::
# 280 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 281 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 282 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 283 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 288 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 290 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed::
# 294 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge::
# 299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 300 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
	return


BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge::
# 304 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge::
# 308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	release
	end


BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor::
# 313 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_2
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_1:
# 316 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_5
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_4:
# 319 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 321 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_8
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_7:
# 324 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_11
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_10:
# 327 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 328 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_14
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_13:
# 331 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_17
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_16:
# 334 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor
# 335 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 336 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_20
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_19:
# 339 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_23
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_22:
# 342 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
	return

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_2:
# 314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_1

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_5:
# 317 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_4

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_8:
# 322 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_7

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_11:
# 325 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_10

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_14:
# 329 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_13

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_17:
# 332 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_16

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_20:
# 337 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_19

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_23:
# 340 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_22


BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor::
# 347 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
	return


BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor::
# 352 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
	return


BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor::
# 357 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
	return


BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor::
# 362 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
	return


BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles::
# 367 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles::
# 372 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge::
# 377 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge::
# 382 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge::
# 387 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge::
# 392 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor::
# 397 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 5, 4
	return


BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor::
# 402 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 17, 4
	return


BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor::
# 407 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 5, 4
	return


BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor::
# 412 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 17, 4
	return


# 416 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_WalkToDoor:
# 417 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 418 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 420 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 421 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 422 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end

# 425 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor:
# 426 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 427 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 428 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end

# 431 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor:
# 432 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 433 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 434 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 435 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end

BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults::
# 439 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 440 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_SINGLES
# 441 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 442 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 443 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults::
# 448 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 449 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_DOUBLES
# 450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 451 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 452 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree::
# 457 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_get DOME_DATA_PREV_TOURNEY_TYPE
# 458 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_2
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1:
# 461 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_5
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_4:
# 464 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_8
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_7:
# 467 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_11
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_10:
# 470 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 471 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_showprevtourneytree
# 472 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_2:
# 459 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_5:
# 462 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_4

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_8:
# 465 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_7

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_11:
# 468 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_10


BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50::
# 477 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50, MSGBOX_SIGN
	return


BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50::
# 482 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50, MSGBOX_SIGN
	return


BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen::
# 487 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen, MSGBOX_SIGN
	return


BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen::
# 492 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen, MSGBOX_SIGN
	return


BattleFrontier_BattleDomeLobby_EventScript_Maniac::
# 497 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_getwinnersname
# 498 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_Lass::
# 503 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_FatMan::
# 508 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_Man::
# 513 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Man3::
# 518 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_BattleDomeSign2::
# 523 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign2, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_UnderConstructionSign::
# 528 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_RulesBoard::
# 533 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 534 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 535 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard::
# 540 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading
# 541 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 542 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 4, MULTI_BATTLE_DOME_RULES, FALSE
# 543 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 544 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_3
# 546 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_4
# 548 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_5
# 550 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 3, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_6
# 552 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_7
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1:
	end

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_3:
# 545 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_4:
# 547 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_5:
# 549 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_6:
# 551 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExitRules
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_7:
# 553 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExitRules
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1


BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup::
# 559 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules, MSGBOX_DEFAULT
# 560 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree::
# 565 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree, MSGBOX_DEFAULT
# 566 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO::
# 571 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules, MSGBOX_DEFAULT
# 572 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleDomeLobby_EventScript_ExitRules::
# 577 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle::
# 581 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE DOME!\p"
	.string "I am your guide to the SINGLE BATTLE\n"
	.string "Tournament.$"

BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge::
# 589 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
	.string "the SINGLE BATTLE Tournament?$"

BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain::
# 594 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We hope to see you again.$"

BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge::
# 598 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The SINGLE BATTLE Tournament\n"
	.string "is exactly as the name suggests--\l"
	.string "a tournament of SINGLE BATTLES.\p"
	.string "All participating TRAINERS must\n"
	.string "enter three POKéMON each.\p"
	.string "In each battle, one of the three\n"
	.string "POKéMON must be held in reserve.\p"
	.string "The other two POKéMON can battle\n"
	.string "one at a time.\p"
	.string "Choose the two battling POKéMON after\n"
	.string "examining the opponent's trio.\p"
	.string "You win the tournament by defeating\n"
	.string "four TRAINERS.\p"
	.string "Battle Points are awarded to\n"
	.string "the tournament winner.\p"
	.string "If you want to interrupt your\n"
	.string "tournament, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge::
# 620 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
	.string "I must save the data. Is that okay?$"

BattleFrontier_BattleDomeLobby_Text_WhichLevelMode::
# 625 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament offers two levels\n"
	.string "of challenge, Level 50 and Open Level.\l"
	.string "Which is your choice?$"

BattleFrontier_BattleDomeLobby_Text_SelectThreeMons::
# 631 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Now select the three POKéMON that\n"
	.string "you wish to enter, please.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen::
# 636 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "Also, the POKéMON must be holding\n"
	.string "different kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd::
# 644 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50::
# 648 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "You must have three different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome::
# 658 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I will now show you to\n"
	.string "the BATTLE DOME.$"

BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting::
# 663 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You didn't save before you quit your\n"
	.string "challenge last time.\p"
	.string "Because of that, your challenge so far\n"
	.string "has been disqualified. Sorry!$"

BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney::
# 671 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations for winning\n"
	.string "your Battle Tournament!$"

BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize::
# 676 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Here is your prize for your Battle\n"
	.string "Tournament victory.$"

BattleFrontier_BattleDomeLobby_Text_ReceivedPrize::
# 681 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom::
# 686 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
	.string "Please make room in your BAG, then come\n"
	.string "see me.$"

BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying::
# 692 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Thank you for playing!$"

BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved::
# 696 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Your record will be saved.\n"
	.string "Please wait.$"

BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou::
# 701 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We've been waiting for you!$"

BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2::
# 705 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
	.string "I must save the data. Is that okay?$"

BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle::
# 710 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE DOME!\p"
	.string "I am your guide to the DOUBLE BATTLE\n"
	.string "Tournament.$"

BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge::
# 718 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
	.string "the DOUBLE BATTLE Tournament?$"

BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge::
# 723 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The DOUBLE BATTLE Tournament\n"
	.string "is exactly as the name suggests--\l"
	.string "a tournament of DOUBLE BATTLES.\p"
	.string "All participating TRAINERS must\n"
	.string "enter three POKéMON each.\p"
	.string "In each battle, one of the three\n"
	.string "POKéMON must be held in reserve.\p"
	.string "The remaining two POKéMON must take\n"
	.string "part in a DOUBLE BATTLE.\p"
	.string "Choose the two battling POKéMON after\n"
	.string "examining the opponent's trio.\p"
	.string "You win the tournament by defeating\n"
	.string "four TRAINERS.\p"
	.string "Battle Points are awarded to\n"
	.string "the tournament winner.\p"
	.string "If you want to interrupt your\n"
	.string "tournament, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50::
# 745 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
	.string "Level 50 SINGLE BATTLE Tournament.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50::
# 750 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
	.string "Level 50 DOUBLE BATTLE Tournament.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen::
# 755 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
	.string "Open Level SINGLE BATTLE Tournament.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen::
# 760 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
	.string "Open Level DOUBLE BATTLE Tournament.$"

BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough::
# 765 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Did you see it?\n"
	.string "The last Battle Tournament?\p"
	.string "The winner, {STR_VAR_1}, was seriously\n"
	.string "tough.\p"
	.string "You should check out the results\n"
	.string "on the monitor beside the PC.$"

BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier::
# 774 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE FRONTIER…\n"
	.string "I've long dreamed about a place like it.$"

BattleFrontier_OutsideWest_Text_BattleDomeSign2::
# 779 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE DOME\n"
	.string "Become the Unbeatable Superstar!$"

BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction::
# 784 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The ??????\n"
	.string "Under Construction!$"

BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation::
# 789 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "When a TRAINER chains tournament\n"
	.string "wins at the BATTLE DOME, he or she\l"
	.string "gains a reputation as a star.\p"
	.string "Tough TRAINERS are drawn by that\n"
	.string "reputation to the BATTLE DOME.\p"
	.string "A true superstar is a TRAINER who\n"
	.string "can keep winning tournaments.$"

BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound::
# 799 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I ran into one of the tournament\n"
	.string "favorites in the very first round.\p"
	.string "Of course I got trashed…$"

BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully::
# 805 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I would've won if I'd kept this POKéMON\n"
	.string "held in reserve.\p"
	.string "You need to check your opponent's\n"
	.string "POKéMON carefully before choosing\l"
	.string "your battling POKéMON.$"

BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker::
# 813 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations!\p"
	.string "You defeated the DOME ACE and won\n"
	.string "the Battle Tournament!$"

BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints::
# 819 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In recognition of your strategy--\n"
	.string "a thing of beauty it was, too--\l"
	.string "we award you these Battle Point(s)!$"

BattleFrontier_BattleDomeLobby_Text_RecordLastMatch::
# 825 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to record your\n"
	.string "last BATTLE DOME match on your\l"
	.string "FRONTIER PASS?$"

BattleFrontier_BattleDomeLobby_Text_RulesAreListed::
# 831 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The Battle Tournament rules\n"
	.string "are listed.$"

BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading::
# 836 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules::
# 840 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament matchups are drawn up\n"
	.string "based on the toughness of POKéMON\l"
	.string "held by TRAINERS.\p"
	.string "The matchups avoid having tough\n"
	.string "TRAINERS face each other right away.$"

BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree::
# 848 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament chart, or as we call it,\n"
	.string "the “Tree,” is available for viewing\l"
	.string "in the Waiting Room from any guide.\p"
	.string "The Tournament Tree will provide\n"
	.string "several kinds of data.\p"
	.string "The data on view includes the previous\n"
	.string "tournament's results, the POKéMON held\l"
	.string "by TRAINERS, and the battle styles of\l"
	.string "TRAINERS.$"

BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules::
# 860 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If battling POKéMON faint at the same\n"
	.string "time--a double KO--in a tournament\l"
	.string "match, the REFEREES will review\l"
	.string "the match and declare the winner.$"
