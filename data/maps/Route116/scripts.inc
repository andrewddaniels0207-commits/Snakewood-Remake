Route116_MapScripts::
# 2 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 3 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 4 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route116_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route116_OnTransition::
# 10 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_OnTransition_2
Route116_OnTransition_1:
# 13 "data/maps/Route116/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route116_OnTransition_5
Route116_OnTransition_4:
# 16 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
	goto_if_eq Route116_OnTransition_8
Route116_OnTransition_7:
# 19 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
	goto_if_eq Route116_OnTransition_11
Route116_OnTransition_10:
	end

Route116_OnTransition_2:
# 11 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_SetWandasBoyfriendPos
	goto Route116_OnTransition_1

Route116_OnTransition_5:
# 14 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route116_OnTransition_4

Route116_OnTransition_8:
# 17 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
	goto Route116_OnTransition_7

Route116_OnTransition_11:
# 20 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
	goto Route116_OnTransition_10


Route116_EventScript_SetWandasBoyfriendPos::
# 26 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_ROUTE116_WANDAS_BF, 38, 10
	return


Route116_OnLoad::
# 31 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
	goto_if_eq Route116_OnLoad_2
Route116_OnLoad_1:
# 34 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
	goto_if_eq Route116_OnLoad_5
Route116_OnLoad_4:
	end

Route116_OnLoad_2:
# 32 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute116North
	goto Route116_OnLoad_1

Route116_OnLoad_5:
# 35 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute116South
	goto Route116_OnLoad_4


Route116_EventScript_WandasBoyfriend::
# 41 "data/maps/Route116/scripts.pory"
	lock
# 42 "data/maps/Route116/scripts.pory"
	faceplayer
# 43 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_WandasBoyfriend_2
Route116_EventScript_WandasBoyfriend_1:
# 46 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_WandasBoyfriend_5
Route116_EventScript_WandasBoyfriend_4:
# 49 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 50 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_WandasBoyfriend_2:
# 44 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BoyfriendGruntLeftTunnel
	goto Route116_EventScript_WandasBoyfriend_1

Route116_EventScript_WandasBoyfriend_5:
# 47 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_BoyfriendGruntInTunnel
	goto Route116_EventScript_WandasBoyfriend_4


Route116_EventScript_BoyfriendGruntLeftTunnel::
# 55 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 56 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BoyfriendGruntInTunnel::
# 61 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 62 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_DevonEmployee::
# 67 "data/maps/Route116/scripts.pory"
	lock
# 68 "data/maps/Route116/scripts.pory"
	faceplayer
# 69 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_DevonEmployee_2
Route116_EventScript_DevonEmployee_1:
# 72 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 73 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
	end

Route116_EventScript_DevonEmployee_2:
# 70 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryGiveRepeatBallAgain
	goto Route116_EventScript_DevonEmployee_1


Route116_EventScript_GiveRepeatBall::
# 78 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 79 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 80 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_GiveRepeatBall_2
Route116_EventScript_GiveRepeatBall_1:
# 83 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 84 "data/maps/Route116/scripts.pory"
	closemessage
# 85 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route116_EventScript_GiveRepeatBall_5
Route116_EventScript_GiveRepeatBall_4:
# 88 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Route116_EventScript_GiveRepeatBall_8
Route116_EventScript_GiveRepeatBall_7:
# 91 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq Route116_EventScript_GiveRepeatBall_11
Route116_EventScript_GiveRepeatBall_10:
# 94 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Route116_EventScript_GiveRepeatBall_14
Route116_EventScript_GiveRepeatBall_13:
# 97 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 98 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 99 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 100 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_GiveRepeatBall_2:
# 81 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_NoRoomForRepeatBall
	goto Route116_EventScript_GiveRepeatBall_1

Route116_EventScript_GiveRepeatBall_5:
# 86 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_DevonEmployeeExit
	goto Route116_EventScript_GiveRepeatBall_4

Route116_EventScript_GiveRepeatBall_8:
# 89 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_DevonEmployeeExit
	goto Route116_EventScript_GiveRepeatBall_7

Route116_EventScript_GiveRepeatBall_11:
# 92 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_DevonEmployeeExit
	goto Route116_EventScript_GiveRepeatBall_10

Route116_EventScript_GiveRepeatBall_14:
# 95 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_DevonEmployeeExitEast
	goto Route116_EventScript_GiveRepeatBall_13


Route116_EventScript_DevonEmployeeExit::
# 105 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 106 "data/maps/Route116/scripts.pory"
	waitmovement 0
	return


Route116_EventScript_DevonEmployeeExitEast::
# 111 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 112 "data/maps/Route116/scripts.pory"
	waitmovement 0
	return


Route116_EventScript_TryGiveRepeatBallAgain::
# 117 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 118 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
	end


Route116_EventScript_NoRoomForRepeatBall::
# 123 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 124 "data/maps/Route116/scripts.pory"
	release
	end


# 128 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 129 "data/maps/Route116/scripts.pory"
	walk_left
# 130 "data/maps/Route116/scripts.pory"
	walk_left
# 131 "data/maps/Route116/scripts.pory"
	walk_left
# 132 "data/maps/Route116/scripts.pory"
	walk_left
# 133 "data/maps/Route116/scripts.pory"
	walk_left
# 134 "data/maps/Route116/scripts.pory"
	walk_left
# 135 "data/maps/Route116/scripts.pory"
	walk_left
# 136 "data/maps/Route116/scripts.pory"
	walk_left
# 137 "data/maps/Route116/scripts.pory"
	step_end

# 140 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 141 "data/maps/Route116/scripts.pory"
	walk_down
# 142 "data/maps/Route116/scripts.pory"
	walk_left
# 143 "data/maps/Route116/scripts.pory"
	walk_left
# 144 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 146 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 148 "data/maps/Route116/scripts.pory"
	walk_left
# 149 "data/maps/Route116/scripts.pory"
	walk_left
# 150 "data/maps/Route116/scripts.pory"
	walk_left
# 151 "data/maps/Route116/scripts.pory"
	step_end

Route116_EventScript_RouteSignRustboro::
# 155 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
	end


Route116_EventScript_RusturfTunnelSign::
# 160 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
	end


Route116_EventScript_TunnelersRestHouseSign::
# 165 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
	end


Route116_EventScript_TrainerTipsBToStopEvolution::
# 170 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
	end


Route116_EventScript_TrainerTipsBagHasPockets::
# 175 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
	end


Route116_EventScript_Briney::
# 180 "data/maps/Route116/scripts.pory"
	lock
# 181 "data/maps/Route116/scripts.pory"
	faceplayer
# 182 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 183 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 184 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_BrineyTrigger::
# 189 "data/maps/Route116/scripts.pory"
	lockall
# 190 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_ROUTE116_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 191 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 192 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 194 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 195 "data/maps/Route116/scripts.pory"
	releaseall
	end


Route116_EventScript_GlassesMan::
# 200 "data/maps/Route116/scripts.pory"
	lock
# 201 "data/maps/Route116/scripts.pory"
	faceplayer
# 202 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 203 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_GlassesMan_2
Route116_EventScript_GlassesMan_1:
# 206 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 207 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_GlassesMan_5
Route116_EventScript_GlassesMan_4:
# 210 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 211 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_GlassesMan_2:
# 204 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_PlayerHasGlasses
	goto Route116_EventScript_GlassesMan_1

Route116_EventScript_GlassesMan_5:
# 208 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_FoundGlassesNotOnPlayer
	goto Route116_EventScript_GlassesMan_4


Route116_EventScript_FoundGlassesNotOnPlayer::
# 216 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 217 "data/maps/Route116/scripts.pory"
	closemessage
# 218 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
	end


Route116_EventScript_PlayerHasGlasses::
# 223 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 224 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 225 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 226 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_PlayerHasGlasses_2
Route116_EventScript_PlayerHasGlasses_1:
# 229 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 230 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_PlayerHasGlasses_2:
# 227 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_FoundGlassesOnPlayer
	goto Route116_EventScript_PlayerHasGlasses_1


Route116_EventScript_FoundGlassesOnPlayer::
# 235 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 236 "data/maps/Route116/scripts.pory"
	closemessage
# 237 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
	end


Route116_EventScript_GlassesManExit::
# 242 "data/maps/Route116/scripts.pory"
	delay 20
# 243 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route116_EventScript_GlassesManExit_2
Route116_EventScript_GlassesManExit_1:
# 246 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Route116_EventScript_GlassesManExit_5
Route116_EventScript_GlassesManExit_4:
# 249 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq Route116_EventScript_GlassesManExit_8
Route116_EventScript_GlassesManExit_7:
# 252 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Route116_EventScript_GlassesManExit_11
Route116_EventScript_GlassesManExit_10:
# 255 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 256 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_GlassesManExit_2:
# 244 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExitNormal
	goto Route116_EventScript_GlassesManExit_1

Route116_EventScript_GlassesManExit_5:
# 247 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExitNormal
	goto Route116_EventScript_GlassesManExit_4

Route116_EventScript_GlassesManExit_8:
# 250 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExitNormal
	goto Route116_EventScript_GlassesManExit_7

Route116_EventScript_GlassesManExit_11:
# 253 "data/maps/Route116/scripts.pory"
	call Route116_EventScript_GlassesManExitEast
	goto Route116_EventScript_GlassesManExit_10


Route116_EventScript_GlassesManExitNormal::
# 261 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 262 "data/maps/Route116/scripts.pory"
	waitmovement 0
	return


Route116_EventScript_GlassesManExitEast::
# 267 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 268 "data/maps/Route116/scripts.pory"
	waitmovement 0
	return


# 272 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 273 "data/maps/Route116/scripts.pory"
	walk_left
# 274 "data/maps/Route116/scripts.pory"
	walk_left
# 275 "data/maps/Route116/scripts.pory"
	walk_left
# 276 "data/maps/Route116/scripts.pory"
	walk_left
# 277 "data/maps/Route116/scripts.pory"
	walk_left
# 278 "data/maps/Route116/scripts.pory"
	walk_left
# 279 "data/maps/Route116/scripts.pory"
	walk_left
# 280 "data/maps/Route116/scripts.pory"
	walk_left
# 281 "data/maps/Route116/scripts.pory"
	walk_left
# 282 "data/maps/Route116/scripts.pory"
	step_end

# 285 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 286 "data/maps/Route116/scripts.pory"
	walk_up
# 287 "data/maps/Route116/scripts.pory"
	walk_left
# 288 "data/maps/Route116/scripts.pory"
	walk_left
# 289 "data/maps/Route116/scripts.pory"
	walk_left
# 290 "data/maps/Route116/scripts.pory"
	walk_left
# 291 "data/maps/Route116/scripts.pory"
	walk_left
# 292 "data/maps/Route116/scripts.pory"
	walk_left
# 293 "data/maps/Route116/scripts.pory"
	walk_left
# 294 "data/maps/Route116/scripts.pory"
	walk_left
# 295 "data/maps/Route116/scripts.pory"
	walk_left
# 296 "data/maps/Route116/scripts.pory"
	step_end

Route116_EventScript_Joey::
# 300 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 301 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Jose::
# 306 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 307 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Jerry::
# 312 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 313 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 314 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_Jerry_2
Route116_EventScript_Jerry_1:
# 317 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 318 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 319 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_Jerry_5
Route116_EventScript_Jerry_4:
# 322 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 323 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_Jerry_2:
# 315 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RematchJerry
	goto Route116_EventScript_Jerry_1

Route116_EventScript_Jerry_5:
# 320 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryRegisterJerry
	goto Route116_EventScript_Jerry_4


Route116_EventScript_TryRegisterJerryAfterBattle::
# 328 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterJerryAfterBattle_2
Route116_EventScript_TryRegisterJerryAfterBattle_1:
# 331 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_TryRegisterJerryAfterBattle_2:
# 329 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RegisterJerryAfterBattle
	goto Route116_EventScript_TryRegisterJerryAfterBattle_1


Route116_EventScript_RegisterJerryAfterBattle::
# 336 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 337 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 339 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 340 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_TryRegisterJerry::
# 345 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterJerry_2
Route116_EventScript_TryRegisterJerry_1:
# 348 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 349 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_TryRegisterJerry_2:
# 346 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RegisterJerry
	goto Route116_EventScript_TryRegisterJerry_1


Route116_EventScript_RegisterJerry::
# 354 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 355 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 356 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_RematchJerry::
# 361 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 362 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Clark::
# 367 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 368 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Janice::
# 373 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 374 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Karen::
# 379 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 380 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 381 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_Karen_2
Route116_EventScript_Karen_1:
# 384 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 385 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 386 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_Karen_5
Route116_EventScript_Karen_4:
# 389 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 390 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_Karen_2:
# 382 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RematchKaren
	goto Route116_EventScript_Karen_1

Route116_EventScript_Karen_5:
# 387 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_TryRegisterKaren
	goto Route116_EventScript_Karen_4


Route116_EventScript_TryRegisterKarenAfterBattle::
# 395 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterKarenAfterBattle_2
Route116_EventScript_TryRegisterKarenAfterBattle_1:
# 398 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_TryRegisterKarenAfterBattle_2:
# 396 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RegisterKarenAfterBattle
	goto Route116_EventScript_TryRegisterKarenAfterBattle_1


Route116_EventScript_RegisterKarenAfterBattle::
# 403 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 404 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 406 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 407 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_TryRegisterKaren::
# 412 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterKaren_2
Route116_EventScript_TryRegisterKaren_1:
# 415 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 416 "data/maps/Route116/scripts.pory"
	release
	end

Route116_EventScript_TryRegisterKaren_2:
# 413 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_RegisterKaren
	goto Route116_EventScript_TryRegisterKaren_1


Route116_EventScript_RegisterKaren::
# 421 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 422 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 423 "data/maps/Route116/scripts.pory"
	release
	end


Route116_EventScript_RematchKaren::
# 428 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 429 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Sarah::
# 434 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 435 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Dawson::
# 440 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 441 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Devan::
# 446 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 447 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Johnson::
# 452 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 453 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_Text_ScoundrelMadeOffWithPeeko::
# 457 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
	.string "We were on our walk, PEEKO and I, when\n"
	.string "we were jumped by an odd thug…\p"
	.string "The scoundrel made off with my\n"
	.string "darling PEEKO!\p"
	.string "Wrrrooooooaaaar! PEEKO!$"

Route116_Text_WantToDigTunnel::
# 466 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
	.string "I want to dig that tunnel!$"

Route116_Text_DiggingTunnelWhenGoonOrderedMeOut::
# 471 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
	.string "What's going on?\p"
	.string "I was digging the tunnel without any\n"
	.string "tools when some goon ordered me out!\p"
	.string "That tunnel's filled with POKéMON\n"
	.string "that react badly to loud noises.\l"
	.string "They could cause an uproar.\p"
	.string "That's why we stopped using heavy\n"
	.string "equipment for tunneling…\p"
	.string "I'm worried that the goon will do\n"
	.string "something stupid and startle the\l"
	.string "POKéMON into an uproar.$"

Route116_Text_GoonHightailedItOutOfTunnel::
# 486 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
	.string "That goofy goon hightailed it out of\n"
	.string "the tunnel! I can go back to digging!$"

Route116_Text_ThankYouTokenOfAppreciation::
# 492 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
	.string "You're that person who not only helped\n"
	.string "me in PETALBURG WOODS, but also got\l"
	.string "back my stolen package and then even\l"
	.string "graciously delivered it to SLATEPORT!\p"
	.string "CAPT. STERN informed us that the\n"
	.string "package arrived, too!\p"
	.string "I thank you very, very much!\p"
	.string "Why, if I were a rain cloud, I would\n"
	.string "shower you with gratitude and hail\l"
	.string "you as a hero!\p"
	.string "For you, the most wonderful TRAINER,\n"
	.string "I bear good news!\p"
	.string "Recently, our company developed\n"
	.string "a new kind of POKé BALL.\p"
	.string "As a token of our appreciation, this\n"
	.string "is our gift to our wonderful TRAINER!$"

Route116_Text_NewBallAvailableAtMart::
# 512 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
	.string "at the POKéMON MART in RUSTBORO.\p"
	.string "Please do try it out!\n"
	.string "Thank you and bye-bye!$"

Route116_Text_BagIsJamPacked::
# 519 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
	.string "I can't give you this REPEAT BALL.$"

Route116_Text_TokenOfAppreciation::
# 524 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
	.string "your delivering our package, I have\l"
	.string "a gift of a new kind of POKé BALL\l"
	.string "for our most wonderful TRAINER!$"

Route116_Text_CanYouHelpMeFindGlasses::
# 531 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
	.string "Can you help me find them?$"

Route116_Text_MayISeeThoseGlasses::
# 536 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
	.string "May I see them for a second?$"

Route116_Text_NotWhatImLookingForMaybeTheyArentHere::
# 541 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "These are BLACKGLASSES.\l"
	.string "They're not what I'm looking for…\p"
	.string "Maybe my glasses aren't around\n"
	.string "here…$"

Route116_Text_CantFindGlassesNotHere::
# 549 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "I can't find my glasses anywhere…\l"
	.string "Maybe they're not around here…$"

Route116_Text_NotWhatImLookingFor::
# 555 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "These are BLACKGLASSES.\l"
	.string "They're not what I'm looking for…$"

Route116_Text_RouteSignRustboro::
# 561 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
	.string "{LEFT_ARROW} RUSTBORO CITY$"

Route116_Text_RusturfTunnelSign::
# 566 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

Route116_Text_TunnelersRestHouse::
# 573 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"

Route116_Text_TrainerTipsBToStopEvolution::
# 577 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "If you want to stop a POKéMON from\n"
	.string "evolving, press the B Button while it\l"
	.string "is trying to evolve.\l"
	.string "The startled POKéMON will stop.\p"
	.string "This is called an evolution cancel.$"

Route116_Text_TrainerTipsBagHasPockets::
# 586 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Your BAG has several POCKETS.\p"
	.string "Items you obtain are automatically\n"
	.string "placed in the appropriate POCKETS.\p"
	.string "No TRAINER can afford to be without\n"
	.string "a BAG of their own.$"
