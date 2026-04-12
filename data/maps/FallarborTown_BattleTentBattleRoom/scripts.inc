FallarborTown_BattleTentBattleRoom_MapScripts::
# 2 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_BattleTentBattleRoom_OnTransition
# 6 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FallarborTown_BattleTentBattleRoom_OnWarp
# 3 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom
	.2byte 0


FallarborTown_BattleTentBattleRoom_OnTransition::
# 10 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
	end


FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx::
# 15 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	checkplayergender
# 16 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1:
# 19 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_5
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_4:
	return

FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2:
# 17 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale
	goto FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1

FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_5:
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale
	goto FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_4


FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale::
# 26 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 27 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return


FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 32 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 33 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return


FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom::
# 38 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	lockall
# 39 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	showobjectat LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 40 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerEnter
# 41 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 42 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 43 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom_1
	return

FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom_1:
# 44 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_ResumeChallenge
	return


FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter::
# 49 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	tower_setopponent
# 50 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 51 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT, FallarborTown_BattleTentBattleRoom_Movement_OpponentEnter
# 52 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 53 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 54 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 55 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 56 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 57 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 58 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 59 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 60 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 61 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 62 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_3
FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_1:
# 66 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 67 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 68 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 69 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 70 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fallarbortent_getopponentname
# 71 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
	return

FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_3:
# 64 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_DefeatedOpponent
	goto FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_1


FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost::
# 75 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 76 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 77 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 78 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


FallarborTown_BattleTentBattleRoom_EventScript_DefeatedOpponent::
# 82 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 83 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_BANG
# 84 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 85 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 86 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 87 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	closemessage
	return


FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum::
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 92 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 93 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 94 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 3, FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_3
FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_1:
# 98 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT, FallarborTown_BattleTentBattleRoom_Movement_OpponentExit
# 99 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 100 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 101 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer
# 102 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 103 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant
# 104 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 105 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 106 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 107 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 108 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 109 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 110 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitfanfare
# 111 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
	return

FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_3:
# 96 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon
	goto FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_1


FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge::
# 115 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 116 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_2
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1:
# 119 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4:
# 122 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 123 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 124 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8
# 126 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9
# 128 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 2, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_2:
# 117 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5:
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8:
# 125 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_ContinueChallenge
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9:
# 127 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10:
# 129 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge
	return


FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge::
# 134 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 135 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case NO, FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_2
# 138 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case YES, FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3
# 140 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_2:
# 137 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3:
# 139 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_PauseChallenge
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4:
# 141 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return


FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge::
# 146 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
# 147 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 148 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 149 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 150 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_2
# 152 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3
# 154 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_2:
# 151 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3:
# 153 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
	return

FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4:
# 155 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return


FallarborTown_BattleTentBattleRoom_EventScript_ContinueChallenge::
# 160 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 161 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantReturnToPos
# 162 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 163 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceBattle
# 164 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 165 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
# 166 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
# 170 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	delay 60
# 171 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 172 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 173 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 174 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 175 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	arena_get ARENA_DATA_WIN_STREAK
# 176 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon_2
FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon_1:
# 179 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 180 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, VAR_RESULT
	return

FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon_2:
# 177 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon_1


FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent::
# 184 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
# 185 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
	return


FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent::
# 190 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
# 191 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
	return


FallarborTown_BattleTentBattleRoom_EventScript_PauseChallenge::
# 196 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
# 197 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 198 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fallarbortent_save CHALLENGE_STATUS_PAUSED
# 199 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 200 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 201 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_reset
	end


FallarborTown_BattleTentBattleRoom_EventScript_ResumeChallenge::
# 207 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer
# 208 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 209 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant
# 210 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 211 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	end


# 215 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerEnter:
# 216 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 217 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 218 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 219 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 220 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 223 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceBattle:
# 224 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 225 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 228 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant:
# 229 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 230 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 233 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentEnter:
# 234 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 235 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 236 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 237 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 238 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 239 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 242 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentStepForward:
# 243 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_left
# 244 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 247 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentExit:
# 248 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 249 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 250 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 251 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 252 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end

FallarborTown_BattleTentBattleRoom_Movement_AttendantJump::
# 256 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 257 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	jump_in_place_down
# 258 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
	return


# 261 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer:
# 262 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 263 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 264 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 265 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 266 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 269 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_AttendantReturnToPos:
# 270 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 271 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 272 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 273 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 274 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 277 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 278 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_OnWarp:
# 279 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FallarborTown_BattleTentBattleRoom_EventScript_SetUpObjects
# 280 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	.2byte 0

FallarborTown_BattleTentBattleRoom_EventScript_SetUpObjects::
# 285 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 286 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 287 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 288 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
	end

