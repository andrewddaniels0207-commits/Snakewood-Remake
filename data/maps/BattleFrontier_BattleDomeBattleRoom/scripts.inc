BattleFrontier_BattleDomeBattleRoom_MapScripts::
# 2 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleDomeBattleRoom_OnTransition
# 3 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeBattleRoom_OnWarp
# 4 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeBattleRoom_OnResume
# 5 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom
	.2byte 0


BattleFrontier_BattleDomeBattleRoom_OnTransition::
# 12 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 14 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_setopponentgfx
# 16 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 18 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 20 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_ROUND1
# 21 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_OnTransition_2
	return


BattleFrontier_BattleDomeBattleRoom_OnTransition_1::
# 26 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
	end


BattleFrontier_BattleDomeBattleRoom_OnTransition_2::
# 32 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos
# 33 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_OnTransition_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx::
# 38 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	checkplayergender
# 40 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 41 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_1::
# 46 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 47 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_5
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_4::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_2::
# 56 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxMale
# 57 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_5::
# 62 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxFemale
# 63 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_4
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxMale::
# 68 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxFemale::
# 74 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom::
# 80 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lockall
# 82 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 84 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_ROUND1
# 85 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_1::
# 90 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 92 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer
# 96 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	showobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
# 103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_5
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_4::
# 108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY
# 109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_7
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_2::
# 115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat
# 116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_5::
# 121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter
# 122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_4
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_7::
# 127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnterForTucker
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter::
# 133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter
# 135 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnterForTucker::
# 141 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnterForTucker
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer::
# 147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 149 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 151 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
# 154 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_1::
# 159 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY
# 160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_4
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_2::
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent
# 167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_4::
# 172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent::
# 178 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getopponentname
# 180 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer, MSGBOX_DEFAULT
# 182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward
# 186 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward
# 188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 192 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 194 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 196 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_initopponentparty
# 198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle
# 200 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, NO_DRAW
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1::
# 212 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, DRAW_TRAINER
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_3::
# 218 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent
# 219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_4::
# 224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
# 225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_5::
# 230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
# 231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_Draw::
# 236 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait, MSGBOX_DEFAULT
# 238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 240 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter
# 248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft
# 252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 180
# 256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit
# 258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 260 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, DRAW_TUCKER
# 261 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_1::
# 266 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_compareseeds
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_2::
# 275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
# 276 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_5::
# 281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent::
# 287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 291 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getopponentname
# 293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, NO_DRAW
# 294 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_1::
# 299 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, DRAW_TRAINER
# 300 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_5
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_4::
# 305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, DRAW_TUCKER
# 306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_8
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_7::
# 311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 313 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 315 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_2::
# 321 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon
# 322 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_5::
# 327 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWonDraw
# 328 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_4
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_8::
# 333 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw
# 334 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_7
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney::
# 339 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_LOST_MATCH
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost::
# 345 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon::
# 353 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_gettrainername STR_VAR_2
# 355 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
# 357 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWonDraw::
# 363 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_gettrainername STR_VAR_1
# 365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
# 367 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw::
# 373 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker
# 375 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent::
# 381 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 383 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 385 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, NO_DRAW
# 386 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_1::
# 391 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, DRAW_TRAINER
# 392 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_5
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_4::
# 397 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 399 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 401 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getroundtext
# 405 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 407 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 411 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_7::
# 419 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 421 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 5, 3
# 423 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_2::
# 429 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon
# 430 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_5::
# 435 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWonDraw
# 436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_4
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_9::
# 441 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_7
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney::
# 447 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience
# 449 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 451 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_1::
# 459 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ, MSGBOX_DEFAULT
# 461 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_3::
# 467 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney
# 468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney::
# 473 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin::
# 479 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special DoDomeConfetti
# 481 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 485 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 487 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 489 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon::
# 495 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWonDraw::
# 501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer::
# 507 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_ATTEMPTED_CHALLENGE
# 509 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_1::
# 515 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_HAS_WON_CHALLENGE
# 517 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 518 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_5
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_4::
# 523 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_WIN_STREAK_ACTIVE
# 525 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_8
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_7::
# 531 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_2::
# 537 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt
# 538 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_5::
# 543 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon
# 544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_4
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_8::
# 549 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak
# 550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_7
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt::
# 555 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_3::
# 573 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound1
# 574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_4::
# 579 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound2
# 580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_5::
# 585 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptSemifinal
# 586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_6::
# 591 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptFinal
# 592 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound1::
# 597 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope
# 599 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound2::
# 605 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RisingStar
# 607 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptSemifinal::
# 613 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptFinal::
# 621 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
# 623 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon::
# 629 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_3::
# 647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound1
# 648 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_4::
# 653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound2
# 654 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_5::
# 659 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonSemifinal
# 660 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_6::
# 665 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonFinal
# 666 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound1::
# 671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
# 673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound2::
# 679 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
# 681 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonSemifinal::
# 687 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
# 689 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonFinal::
# 695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
# 697 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion::
# 703 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
# 704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_1::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_2::
# 722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_5::
# 728 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_6::
# 734 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_7::
# 740 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_8::
# 746 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker::
# 752 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_3::
# 770 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound1
# 771 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_4::
# 776 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound2
# 777 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_5::
# 782 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionSemifinal
# 783 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_6::
# 788 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionFinal
# 789 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound1::
# 794 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion
# 796 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound2::
# 802 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer
# 804 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionSemifinal::
# 810 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
# 812 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionFinal::
# 818 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
# 820 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver::
# 826 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold::
# 832 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak::
# 838 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_3::
# 856 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound1
# 857 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_4::
# 862 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound2
# 863 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_5::
# 868 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakSemifinal
# 869 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_6::
# 874 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakFinal
# 875 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound1::
# 880 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
# 882 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound2::
# 888 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
# 890 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakSemifinal::
# 896 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
# 898 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakFinal::
# 904 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
# 906 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum::
# 912 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_2::
# 931 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_3::
# 937 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_4::
# 943 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_5::
# 949 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver::
# 955 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker, MSGBOX_DEFAULT
# 957 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold::
# 963 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker, MSGBOX_DEFAULT
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter::
# 969 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 971 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_AUDIENCE_TWIN, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump
# 973 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance
# 975 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance
# 977 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 979 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 981 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 983 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 985 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 987 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 989 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 991 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 993 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 995 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 997 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 999 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1001 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1003 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1005 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1007 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 1009 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
# 1011 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 1013 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1015 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1017 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1::
# 1029 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 1031 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 1032 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_7
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_6::
# 1037 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro, MSGBOX_DEFAULT
# 1039 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_3::
# 1045 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro
# 1046 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_4::
# 1051 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
# 1052 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_5::
# 1057 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
# 1058 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_7::
# 1063 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
# 1064 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_6
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver::
# 1069 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy, MSGBOX_DEFAULT
# 1071 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1::
# 1083 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer, MSGBOX_DEFAULT
# 1085 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 1087 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getsymbols
# 1089 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 1090 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_7
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_6::
# 1095 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 1097 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer
# 1099 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 1101 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass, MSGBOX_DEFAULT
# 1103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 1105 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
# 1107 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 1109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitfanfare
# 1111 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_givesymbol
# 1113 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime, MSGBOX_DEFAULT
# 1115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_3::
# 1121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 1122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_4::
# 1127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 1128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_5::
# 1133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw
# 1134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_7::
# 1139 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 1140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_6
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro::
# 1145 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 1147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 1148 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_1::
# 1153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro, MSGBOX_DEFAULT
# 1155 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_2::
# 1161 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
# 1162 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold::
# 1167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess, MSGBOX_DEFAULT
# 1169 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1::
# 1181 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer, MSGBOX_DEFAULT
# 1183 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 1185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getsymbols
# 1187 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 1188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_7
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_6::
# 1193 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 1195 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer
# 1197 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 1199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed, MSGBOX_DEFAULT
# 1201 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 1203 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
# 1205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 1207 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitfanfare
# 1209 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_givesymbol
# 1211 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter, MSGBOX_DEFAULT
# 1213 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_3::
# 1219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 1220 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_4::
# 1225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 1226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_5::
# 1231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw
# 1232 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_7::
# 1237 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 1238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_6
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle::
# 1243 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker, MSGBOX_DEFAULT
# 1245 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 1247 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward2
# 1249 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward
# 1251 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 1253 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker::
# 1259 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker, MSGBOX_DEFAULT
# 1261 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1263 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1267 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw::
# 1273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, DRAW_TUCKER
# 1275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle::
# 1281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 1283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special HealPlayerParty
# 1285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_DOME
# 1289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 1291 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_restorehelditems
# 1295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special HealPlayerParty
# 1297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resetsketch
	return


# 1303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1304 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnWarp:
# 1305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	# 614 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects
# 1307 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1308 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.2byte 0

BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects::
# 1314 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	hideobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 1316 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience
# 1318 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 1320 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1322 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible
# 1324 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 1326 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_FINAL
# 1327 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_1::
# 1332 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 1334 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 1336 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 1337 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_5
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_4::
# 1342 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 1344 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_DOME_OPPONENT, 13, 9
# 1346 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	removeobject LOCALID_DOME_OPPONENT
# 1348 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 1
# 1350 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	addobject LOCALID_DOME_OPPONENT
# 1352 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisibleFacingUp
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_2::
# 1358 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects
# 1359 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_5::
# 1364 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects
# 1365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_4
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects::
	end


BattleFrontier_BattleDomeBattleRoom_OnResume::
# 1374 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_9, 1
# 1375 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_OnResume_2
	return


BattleFrontier_BattleDomeBattleRoom_OnResume_1::
	end


BattleFrontier_BattleDomeBattleRoom_OnResume_2::
# 1384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience
# 1385 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_OnResume_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience::
# 1390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience::
# 1396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_ROUND1
# 1397 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_1::
# 1402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_ROUND2
# 1403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_5
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_4::
# 1408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_SEMIFINAL
# 1409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_8
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_7::
# 1414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
# 1415 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_11
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_10::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_2::
# 1424 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience
# 1425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_5::
# 1430 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience
# 1431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_4
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_8::
# 1436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience
# 1437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_7
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_11::
# 1442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience
# 1443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_10
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience::
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience::
# 1452 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 1454 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 1456 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 1458 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 1460 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 1462 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 1464 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 1466 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 1468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 1470 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 1472 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience::
# 1478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 1480 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 1482 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 1484 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 1486 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 1488 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 1490 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 1492 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 1494 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 1496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 1498 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 1500 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 1502 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 1504 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 1506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 1508 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 1510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 1512 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 1514 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 1516 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 1518 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience::
# 1524 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 0, 2, 0
# 1526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 1528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 2, 15, 0
# 1530 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 3, 5, 0
# 1532 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 1534 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 5, 7, 0
# 1536 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 1538 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 1540 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 8, 10, 0
# 1542 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 1544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 1546 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 1548 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 12, 14, 0
# 1550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 2
# 1552 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 14, 12, 2
# 1554 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 1556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 1558 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 1560 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 18, 6, 1
# 1562 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 1564 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 1566 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 21, 10, 1
# 1568 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 1570 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 1572 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 14, 1
# 1574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 1576 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 1578 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 3, 2
# 1580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 1582 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 1584 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 1586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
	return


BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible::
# 1593 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_invisible
# 1595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter::
# 1600 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 1602 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1604 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1606 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1608 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1610 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
	return


BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward::
# 1617 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1619 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience::
# 1625 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1627 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnterForTucker::
# 1633 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 1635 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1637 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1639 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1641 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1643 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1645 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward2::
# 1653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1655 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward::
# 1661 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1663 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisibleFacingUp::
# 1669 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_invisible
# 1673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance::
# 1678 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 1680 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1682 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1684 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1686 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1688 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1690 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1692 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1694 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1696 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1698 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1700 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1702 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1706 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1708 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1710 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1712 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1714 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_fast_up
# 1716 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_fast_up
# 1718 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1720 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1724 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1726 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1728 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1730 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1732 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1734 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1736 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1738 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1740 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1742 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1744 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 1746 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 1748 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1750 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 1752 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 1754 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 1756 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 1758 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1760 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 1762 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 1764 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 1766 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1768 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1770 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1772 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1774 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1776 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1778 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1780 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1782 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1784 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1786 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1788 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1790 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1792 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1794 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1796 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1798 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1800 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1802 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1804 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1806 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1808 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1810 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1812 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1814 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1816 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1818 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1820 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1822 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1824 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1826 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1828 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 1830 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1832 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_slow_right
# 1834 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1836 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_slow_right
# 1838 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 1840 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1842 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1844 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 1846 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 1848 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1850 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1852 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1854 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1856 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 1858 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1860 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1862 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 1864 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 1866 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1868 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1870 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1872 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1874 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1876 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1878 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1880 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1882 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1884 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1886 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1888 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1890 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance::
# 1897 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1899 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1901 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1903 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1905 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 1907 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1909 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1911 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1913 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1915 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1917 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1919 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1921 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1923 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1925 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1927 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1929 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1931 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1933 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1935 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1937 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1939 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1941 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1943 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1945 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1947 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1949 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1951 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1953 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1955 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1957 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1959 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1961 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1963 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1965 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1967 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1969 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1971 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1973 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1975 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1977 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1979 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1981 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1983 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1985 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1987 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1989 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 1991 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward::
# 1997 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1999 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer::
# 2005 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2007 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2009 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround::
# 2014 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 0, DIR_EAST
# 2016 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 2, DIR_EAST
# 2018 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 4, DIR_EAST
# 2020 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 6, DIR_EAST
# 2022 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 8, DIR_EAST
# 2024 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 10, DIR_WEST
# 2026 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 12, DIR_WEST
# 2028 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 14, DIR_WEST
# 2030 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 16, DIR_WEST
# 2032 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 18, DIR_WEST
# 2034 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 20, DIR_EAST
# 2036 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 22, DIR_EAST
# 2038 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 24, DIR_EAST
# 2040 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 26, DIR_EAST
# 2042 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 28, DIR_EAST
# 2044 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 30, DIR_EAST
# 2046 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 2048 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 2050 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 2052 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 4, DIR_SOUTH
# 2054 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 6, DIR_SOUTH
# 2056 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 8, DIR_SOUTH
# 2058 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 10, DIR_SOUTH
# 2060 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 12, DIR_SOUTH
# 2062 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 14, DIR_SOUTH
# 2064 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 16, DIR_SOUTH
# 2066 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 18, DIR_SOUTH
# 2068 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 20, DIR_SOUTH
# 2070 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 22, DIR_SOUTH
# 2072 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 24, DIR_SOUTH
# 2074 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 26, DIR_SOUTH
# 2076 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 28, DIR_SOUTH
# 2078 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 30, DIR_SOUTH
# 2080 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 2082 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 1, DIR_EAST
# 2084 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 3, DIR_EAST
# 2086 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 5, DIR_EAST
# 2088 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 7, DIR_EAST
# 2090 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 9, DIR_EAST
# 2092 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 11, DIR_WEST
# 2094 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 13, DIR_WEST
# 2096 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 15, DIR_WEST
# 2098 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 17, DIR_WEST
# 2100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 19, DIR_WEST
# 2102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 21, DIR_EAST
# 2104 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 23, DIR_EAST
# 2106 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 25, DIR_EAST
# 2108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 27, DIR_WEST
# 2110 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 31, DIR_WEST
# 2112 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 2114 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 2116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 3, DIR_SOUTH
# 2118 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 5, DIR_SOUTH
# 2120 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 7, DIR_SOUTH
# 2122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 9, DIR_SOUTH
# 2124 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 11, DIR_SOUTH
# 2126 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 13, DIR_SOUTH
# 2128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 15, DIR_SOUTH
# 2130 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 17, DIR_SOUTH
# 2132 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 19, DIR_SOUTH
# 2134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 21, DIR_SOUTH
# 2136 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 23, DIR_SOUTH
# 2138 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 25, DIR_SOUTH
# 2140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 27, DIR_SOUTH
# 2142 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 31, DIR_SOUTH
# 2144 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby::
# 2150 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 2152 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
# 2153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_1::
# 2158 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 5, 11
# 2160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
	end


BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_2::
# 2166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles
# 2167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_1
	return


BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles::
# 2172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 17, 11
# 2174 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
	end


BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos::
# 2180 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	random 2
# 2182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 2184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_D, 0
# 2185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_1::
# 2190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_DOME_AUDIENCE_WALKING, 2, 0
# 2192 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectmovementtype LOCALID_DOME_AUDIENCE_WALKING, MOVEMENT_TYPE_FACE_RIGHT
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_2::
# 2198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto Common_EventScript_NopReturn
# 2199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat::
# 2204 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_D, 0
# 2205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_1::
# 2210 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_AUDIENCE_WALKING, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_2::
# 2216 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto Common_EventScript_NopReturn
# 2217 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_1
	return


BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump::
# 2222 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2232 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2234 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2236 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2240 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 2248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 2250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_down
# 2252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 2254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_down
# 2256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	enable_jump_landing_ground_effect
# 2258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat::
# 2265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 2267 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 2269 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2271 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 2275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter::
# 2281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft::
# 2295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 2297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit::
# 2303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2307 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2309 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
	return


BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome::
# 2314 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} has entered the BATTLE DOME!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer::
# 2318 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{STR_VAR_1}\n"
	.string "match!\p"
	.string "{PLAYER} versus {STR_VAR_2}!\p"
	.string "Let the battle begin!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner::
# 2325 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the winner!\n"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner::
# 2330 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{STR_VAR_2} is the winner!\n"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ::
# 2335 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Level 50\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp::
# 2341 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Open Level\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait::
# 2347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "What an unbelievable finish!\n"
	.string "We have a double knockout!\p"
	.string "In this event, the Battle Tournament\n"
	.string "rules call for a REFEREE'S decision.\p"
	.string "Please wait while the judging\n"
	.string "is under way.$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer::
# 2356 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is {STR_VAR_1}!\l"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer::
# 2365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is {PLAYER}!\l"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope::
# 2374 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The bright new hope!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_RisingStar::
# 2379 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The rising star!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship::
# 2384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will this TRAINER race to\n"
	.string "the championship?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry::
# 2390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the feat of a championship\n"
	.string "on the first try be achieved?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged::
# 2396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the loss of the last match\n"
	.string "be avenged?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship::
# 2402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The TRAINER is on fire for\n"
	.string "the first championship try!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal::
# 2408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "A win here means this TRAINER\n"
	.string "advances to the final!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue::
# 2414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will the long-held dream of\n"
	.string "a championship finally come true?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion::
# 2420 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The invincible champion!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer::
# 2425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can anyone hope to beat this\n"
	.string "TRAINER?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer::
# 2431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Do battles exist solely for\n"
	.string "this TRAINER?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle::
# 2437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The current champion aiming to\n"
	.string "retain the title!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned::
# 2443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The former champion has returned!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned::
# 2448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The former toughness has returned!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals::
# 2453 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will this TRAINER do as expected\n"
	.string "and advance to the finals?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory::
# 2459 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will the former champ regain\n"
	.string "lost glory?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster::
# 2465 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Feel the glow of a true master!$"

BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker::
# 2469 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "And now… The TRAINER standing in\n"
	.string "{PLAYER}'s record-setting path…\p"
	.string "Yes! The one and only!\n"
	.string "The BATTLE DOME COMMISSIONER!\l"
	.string "Our very own DOME ACE!\l"
	.string "Make way for TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant::
# 2478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Spectators: TUCKER! TUCKER!\n"
	.string "TUCKER! TUCKER! TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro::
# 2483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Ahahah!\p"
	.string "Do you hear it? This crowd!\n"
	.string "They're all itching to see our match!\p"
	.string "Ahahah!\p"
	.string "I bet you're twitching all over from\n"
	.string "the tension of getting to battle me!\p"
	.string "But don't you worry about a thing!\p"
	.string "I'm the no. 1 star of the BATTLE DOME!\n"
	.string "I, TUCKER the DOME ACE, will bathe you\l"
	.string "in my brilliant glow!$"

BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy::
# 2496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Your strategy!\n"
	.string "Let's see it!$"

BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer::
# 2501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Unbelievable! It's incredible!\n"
	.string "The victor is {PLAYER}!$"

BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker::
# 2506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is TUCKER!\n"
	.string "The DOME ACE has prevailed!\p"
	.string "Congratulations, TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass::
# 2512 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Rules are rules!\n"
	.string "Let me see your FRONTIER PASS.$"

BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol::
# 2517 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The Tactics Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime::
# 2522 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "… … … … … …\p"
	.string "I sorely underestimated you. I won't\n"
	.string "make the same mistake next time…$"

BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched::
# 2528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the win streak be stretched?\n"
	.string "The confidence is there!$"

BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker::
# 2533 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Ladies and gentlemen!\n"
	.string "Boys, girls, and POKéMON!\p"
	.string "Finally!\n"
	.string "Finally, the legend has returned!\p"
	.string "Yes, the name of that legend!\n"
	.string "Our very own DOME ACE!\l"
	.string "It's none other than TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro::
# 2543 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Ah…\n"
	.string "The pummeling roar of the crowd…\l"
	.string "Their furnace-like heat of excitement…\l"
	.string "This is a wonderful place…\p"
	.string "To the crowd, I am the DOME ACE…\n"
	.string "I represent their hopes and dreams…\l"
	.string "I must never fade from their sight…\p"
	.string "I must burn!\n"
	.string "Brighter and more brilliant!\l"
	.string "I must light all that gather here!$"

BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess::
# 2556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I will unleash all the power that\n"
	.string "I possess! Right here and now!$"

BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed::
# 2561 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: You're genuinely fantastic!\p"
	.string "Never before! I haven't ever lost in the\n"
	.string "times I've had to unleash my power.\p"
	.string "Yes, quite fantastic!\n"
	.string "Your FRONTIER PASS, please?$"

BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine::
# 2569 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The Tactics Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter::
# 2574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "You're strong, but above all,\n"
	.string "you have a unique charm!\p"
	.string "In you, I see a definite potential for\n"
	.string "a superstar like me.\p"
	.string "I will very much look forward to\n"
	.string "our next encounter!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ2::
# 2583 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Level 50\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp2::
# 2589 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Open Level\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker::
# 2595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The final match!\p"
	.string "{PLAYER} versus the DOME ACE, TUCKER!\p"
	.string "Let the battle begin!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker::
# 2601 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is our very own DOME ACE!\l"
	.string "It's TUCKER!\p"
	.string "Congratulations! And thank you!\n"
	.string "Let's hear it for the DOME ACE, TUCKER!$"
