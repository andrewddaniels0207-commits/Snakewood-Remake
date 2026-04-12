BattleFrontier_BattlePalaceBattleRoom_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePalaceBattleRoom_OnTransition
# 3 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceBattleRoom_OnWarp
# 4 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattlePalaceBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom
	.2byte 0


BattleFrontier_BattlePalaceBattleRoom_OnTransition::
# 11 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_settrainers
# 13 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx
	end


BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx::
# 19 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	checkplayergender
# 21 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 22 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_1::
# 27 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 28 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_5
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_4::
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_2::
# 37 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxMale
# 38 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_5::
# 43 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxFemale
# 44 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_4
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxMale::
# 49 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 51 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxFemale::
# 57 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 59 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom::
# 65 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	showobjectat LOCALID_PALACE_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 67 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 69 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 70 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom_1::
# 75 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerReturnToChallenge
# 77 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 79 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 81 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 83 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 85 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom_2::
# 91 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BeginChallenge
# 92 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BeginChallenge::
# 97 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerEnterRoom
# 99 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter::
# 105 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	tower_setopponent
# 107 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addobject LOCALID_PALACE_BATTLE_OPPONENT
# 109 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentEnter
# 111 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 113 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_getopponentintro
# 115 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 117 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 119 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter_2::
# 128 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost::
# 134 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 136 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent::
# 142 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 144 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 146 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 148 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent_1::
# 156 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentExit
# 158 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 160 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	removeobject LOCALID_PALACE_BATTLE_OPPONENT
# 162 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 164 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 166 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 168 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons, MSGBOX_DEFAULT
# 170 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special LoadPlayerParty
# 172 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special SavePlayerParty
# 174 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 176 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 178 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 180 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent_3::
# 186 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 187 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent::
# 192 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 194 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 196 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 197 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_1::
# 202 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 204 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 205 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_5
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_4::
# 210 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 211 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_8
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_7::
# 216 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 3
# 217 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_11
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_10::
# 222 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 4
# 223 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_14
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_13::
# 228 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 5
# 229 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_17
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_16::
# 234 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 6
# 235 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_20
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_19::
# 240 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 242 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 243 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_23
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_22::
# 248 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_2::
# 265 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext
# 266 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_5::
# 271 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor2ndOpponent
# 272 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_4
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_8::
# 277 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor3rdOpponent
# 278 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_7
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_11::
# 283 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor4thOpponent
# 284 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_10
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_14::
# 289 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor5thOpponent
# 290 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_13
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_17::
# 295 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor6thOpponent
# 296 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_16
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_20::
# 301 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor7thOpponent
# 302 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_19
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_23::
# 307 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 308 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_22
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_26::
# 313 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_27::
# 319 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_28::
# 325 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_29::
# 331 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_30::
# 337 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 343 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord_2::
# 358 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord_3::
# 364 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord_4::
# 370 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord_5::
# 376 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle::
# 382 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch
# 384 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 386 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle_2::
# 399 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle_3::
# 405 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_RecordBattle
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle_4::
# 411 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_RecordBattle::
# 417 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 419 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge::
# 425 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge_2::
# 438 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge_3::
# 444 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_PauseChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge_4::
# 450 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge::
# 456 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
# 458 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 460 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge_2::
# 473 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge_3::
# 479 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge_4::
# 485 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge::
# 491 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 493 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 495 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 497 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon::
# 503 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 505 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_PauseChallenge::
# 511 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
# 513 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 515 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_save CHALLENGE_STATUS_PAUSED
# 517 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playse SE_SAVE
# 519 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitse
# 521 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 523 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_reset
	end


BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext::
# 529 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_TEMP_2, 1
# 530 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext_1::
# 535 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven, MSGBOX_DEFAULT
# 537 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext_2::
# 543 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 544 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven::
# 549 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven
# 551 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 553 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 555 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 556 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_1::
# 561 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_2::
# 578 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord
# 579 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_5::
# 584 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_6::
# 590 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_7::
# 596 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_8::
# 602 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_9::
# 608 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord::
# 614 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord_2::
# 629 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord_3::
# 635 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord_4::
# 641 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord_5::
# 647 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser::
# 653 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 655 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser, MSGBOX_DEFAULT
# 657 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 659 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 661 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 663 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_PALACE_BATTLE_OPPONENT, 15, 1
# 665 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addobject LOCALID_PALACE_BATTLE_OPPONENT
# 667 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	hideobjectat LOCALID_PALACE_BATTLE_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 669 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxy LOCALID_PALACE_BATTLE_OPPONENT, 13, 1
# 671 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_PALACE_BATTLE_OPPONENT, 13, 1
# 673 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_DUSCLOPS, BattleFrontier_BattlePalaceBattleRoom_Movement_DusclopsEnter
# 675 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_AZURILL, BattleFrontier_BattlePalaceBattleRoom_Movement_AzurillEnter
# 677 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_SpenserEnter
# 679 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_1::
# 691 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 693 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 694 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_7
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_6::
# 699 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro, MSGBOX_DEFAULT
# 701 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_3::
# 707 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold
# 708 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_4::
# 713 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver
# 714 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_5::
# 719 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold
# 720 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_7::
# 725 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver
# 726 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_6
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver::
# 731 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons, MSGBOX_DEFAULT
# 733 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 735 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 736 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver_1::
# 741 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver_2::
# 747 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver
# 748 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver::
# 753 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_incrementstreak
# 755 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getsymbols
# 757 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 758 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver_1::
# 763 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle, MSGBOX_DEFAULT
# 765 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 767 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 769 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass, MSGBOX_DEFAULT
# 771 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 773 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol
# 775 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 777 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 779 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_givesymbol
# 781 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, Common_Movement_WalkInPlaceLeft
# 783 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 785 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 787 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 789 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 791 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime, MSGBOX_DEFAULT
# 793 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver_2::
# 799 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 800 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold::
# 805 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 807 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 808 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold_1::
# 813 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack, MSGBOX_DEFAULT
# 815 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold_2::
# 821 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold
# 822 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold::
# 827 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah, MSGBOX_DEFAULT
# 829 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 831 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 832 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold_1::
# 837 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold_2::
# 843 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold
# 844 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold::
# 849 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_incrementstreak
# 851 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getsymbols
# 853 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 854 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold_1::
# 859 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable, MSGBOX_DEFAULT
# 861 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 863 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 865 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass, MSGBOX_DEFAULT
# 867 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 869 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine
# 871 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 873 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 875 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_givesymbol
# 877 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, Common_Movement_WalkInPlaceLeft
# 879 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 881 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 883 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 885 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 887 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain, MSGBOX_DEFAULT
# 889 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold_2::
# 895 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 896 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle::
# 901 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 903 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 905 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 907 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 909 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PALACE
# 911 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 913 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_restorehelditems
# 915 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 917 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_resetsketch
	return


# 923 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 924 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnWarp:
# 925 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	# 392 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 926 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_SetUpRoomObjects
# 927 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	# 393 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 928 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.2byte 0

BattleFrontier_BattlePalaceBattleRoom_EventScript_SetUpRoomObjects::
# 934 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	hideobjectat LOCALID_PALACE_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 936 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx
# 938 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 940 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 942 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	removeobject LOCALID_PALACE_BATTLE_OPPONENT
# 944 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_DUSCLOPS, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 946 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_AZURILL, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
	end


BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor2ndOpponent::
# 952 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
# 954 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor3rdOpponent::
# 960 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
# 962 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor4thOpponent::
# 968 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent
# 970 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor5thOpponent::
# 976 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent
# 978 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor6thOpponent::
# 984 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent
# 986 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor7thOpponent::
# 992 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent
# 994 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible::
# 1001 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_invisible
# 1003 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerEnterRoom::
# 1008 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1010 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1012 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1014 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1016 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight::
# 1023 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_right
# 1025 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp::
# 1031 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_up
# 1033 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerReturnToChallenge::
# 1039 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1041 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1043 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1045 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1047 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1049 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentEnter::
# 1055 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1057 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1059 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1061 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1063 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 1065 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentExit::
# 1071 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1073 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1075 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1077 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1079 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown::
# 1085 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_down
# 1087 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter1::
# 1093 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1095 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1097 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1099 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 1101 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter2::
# 1107 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1109 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1111 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter3::
# 1117 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1119 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1121 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1123 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 1125 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby::
# 1130 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 1132 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
# 1133 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby_2
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby_1::
# 1138 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 5, 7
# 1140 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
	end


BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby_2::
# 1146 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyDoubles
# 1147 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby_1
	return


BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyDoubles::
# 1152 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 19, 7
# 1154 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
	end


BattleFrontier_BattlePalaceBattleRoom_Movement_DusclopsEnter::
# 1161 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1163 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1165 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1167 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1169 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_right
# 1171 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1173 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 1175 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_AzurillEnter::
# 1181 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1183 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1185 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_right
# 1187 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1189 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1191 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1193 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1195 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1197 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 1199 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1201 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Movement_SpenserEnter::
# 1207 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1209 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1211 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1213 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1215 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1217 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1219 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1221 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1223 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1225 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1227 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1229 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1231 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 1233 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons::
# 1236 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Excellent…\n"
	.string "Let me restore your POKéMON.$"

BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent::
# 1241 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 2nd opponent is next.\n"
	.string "Are you prepared?$"

BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent::
# 1246 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 3rd opponent is next.\n"
	.string "Are you prepared?$"

BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent::
# 1251 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 4th opponent is next.\n"
	.string "Are you prepared?$"

BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent::
# 1256 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 5th opponent is next.\n"
	.string "Are you prepared?$"

BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent::
# 1261 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 6th opponent is next.\n"
	.string "Are you prepared?$"

BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent::
# 1266 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 7th opponent is next.\n"
	.string "Are you prepared?$"

BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame::
# 1271 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Would you like to save and quit\n"
	.string "the game?$"

BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge::
# 1276 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you wish to quit your challenge?$"

BattleFrontier_BattlePalaceBattleRoom_Text_SavingData::
# 1280 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Saving the data.\n"
	.string "Have patience…$"

BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch::
# 1285 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you wish to record your latest\n"
	.string "match on your FRONTIER PASS?$"

BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven::
# 1290 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "And now…\p"
	.string "By winning consistently, you have\n"
	.string "earned the privilege of challenging\l"
	.string "our master, the PALACE MAVEN…$"

BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven::
# 1297 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "I shall send for the PALACE MAVEN.\n"
	.string "Are you ready?$"

BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser::
# 1302 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let great fanfare announce the arrival\n"
	.string "of the PALACE MAVEN, SPENSER!$"

BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro::
# 1307 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: My physical being is with\n"
	.string "POKéMON always!\p"
	.string "My heart beats as one with\n"
	.string "POKéMON always!\p"
	.string "Young one of a TRAINER!\n"
	.string "Do you believe in your POKéMON?\p"
	.string "Can you believe them through\n"
	.string "and through?\p"
	.string "If your bonds of trust are frail,\n"
	.string "you will never beat my brethren!$"

BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons::
# 1320 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The bond you share with your POKéMON!\n"
	.string "Prove it to me here!$"

BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle::
# 1325 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\p"
	.string "Hah, you never fell for my bluster!\n"
	.string "Sorry for trying that stunt!\p"
	.string "Here!\n"
	.string "Bring me the thing!$"

BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass::
# 1333 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My, my, if only you could maintain that\n"
	.string "facade of distinguished authority…\p"
	.string "Here!\n"
	.string "Let's see your FRONTIER PASS!$"

BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol::
# 1340 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The Spirits Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime::
# 1345 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Your POKéMON's eyes are \n"
	.string "truly clear and unclouded.\p"
	.string "I will eagerly await the next\n"
	.string "opportunity to see you.$"

BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack::
# 1352 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\n"
	.string "You've battled your way up again?\p"
	.string "You must have developed a truly\n"
	.string "formidable bond with your POKéMON.\p"
	.string "So be it!\p"
	.string "This time, I won't bluster or hold back.\n"
	.string "This time, there's no fooling around.\p"
	.string "Ready now?\n"
	.string "Prepare to lose!$"

BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah::
# 1364 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "… … …Kaaah!$"

BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable::
# 1368 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Well, that was some display!\n"
	.string "Even fully unleashed, my brethren\l"
	.string "could not overpower you.\p"
	.string "Your team spirit is truly admirable!\p"
	.string "Here!\n"
	.string "Bring me that thing, will you?$"

BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass::
# 1377 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My, my, if only you could maintain\n"
	.string "a certain level of decorum…\p"
	.string "Gaaah, here!\n"
	.string "Hurry with that FRONTIER PASS, you!$"

BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine::
# 1384 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The Spirits Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain::
# 1389 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\p"
	.string "Come see me time and again!\n"
	.string "My brethren and I will be waiting!$"
