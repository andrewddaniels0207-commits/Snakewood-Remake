Route110_MapScripts::
# 2 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 3 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 4 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
	.2byte 0


Route110_OnResume::
# 10 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
	end


Route110_OnTransition::
# 15 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 17 "data/maps/Route110/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 1
	goto_if_eq Route110_OnTransition_2
Route110_OnTransition_1:
	end

Route110_OnTransition_2:
# 18 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_SaveCyclingMusic
	goto Route110_OnTransition_1


Route110_EventScript_SaveCyclingMusic::
# 24 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
	return


Route110_EventScript_BeginCylcingRoadChallenge::
# 29 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 30 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
	return


Route110_EventScript_AquaGrunt1::
# 35 "data/maps/Route110/scripts.pory"
	lock
# 36 "data/maps/Route110/scripts.pory"
	faceplayer
# 37 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 38 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 39 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_AquaGrunt2::
# 45 "data/maps/Route110/scripts.pory"
	lock
# 46 "data/maps/Route110/scripts.pory"
	faceplayer
# 47 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 48 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 49 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_AquaGrunt3::
# 55 "data/maps/Route110/scripts.pory"
	lock
# 56 "data/maps/Route110/scripts.pory"
	faceplayer
# 57 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 58 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 59 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_AquaGrunt4::
# 65 "data/maps/Route110/scripts.pory"
	lock
# 66 "data/maps/Route110/scripts.pory"
	faceplayer
# 67 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 68 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 69 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Boy1::
# 75 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
	end


Route110_EventScript_CyclingGirl1::
# 80 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
	end


Route110_EventScript_CyclingGuy1::
# 85 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
	end


Route110_EventScript_OldMan::
# 90 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
	end


Route110_EventScript_OldWoman::
# 95 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
	end


Route110_EventScript_CyclingGuy2::
# 100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
	end


Route110_EventScript_Boy2::
# 105 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
	end


Route110_EventScript_SlateportCitySign::
# 110 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
	end


Route110_EventScript_CyclingRoadSign::
# 115 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
	end


Route110_EventScript_VandalizedSign::
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
	end


Route110_EventScript_Route103Sign::
# 125 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
	end


Route110_EventScript_SeasideParkingSign::
# 130 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
	end


Route110_EventScript_MauvilleCitySign::
# 135 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
	end


Route110_EventScript_TrainerTipsPrlzSleep::
# 140 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
	end


Route110_EventScript_TrainerTipsRegisterItems::
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
	end


Route110_EventScript_TrickHouseSign::
# 150 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
	end


Route110_EventScript_CyclingRoadResultsSign::
# 155 "data/maps/Route110/scripts.pory"
	lockall
# 156 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 157 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_EventScript_CyclingRoadResultsSign_2
Route110_EventScript_CyclingRoadResultsSign_1:
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_CyclingRoadResultsSign_2:
# 158 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_NoRecordSet
	goto Route110_EventScript_CyclingRoadResultsSign_1


Route110_EventScript_NoRecordSet::
# 166 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 167 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_ChallengeGuy::
# 172 "data/maps/Route110/scripts.pory"
	lock
# 173 "data/maps/Route110/scripts.pory"
	faceplayer
# 174 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 175 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeGuy_2
Route110_EventScript_ChallengeGuy_1:
# 178 "data/maps/Route110/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 0
	goto_if_eq Route110_EventScript_ChallengeGuy_5
Route110_EventScript_ChallengeGuy_4:
# 181 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 182 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_ChallengeGuy_2:
# 176 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_PlayerRidingAcroBike
	goto Route110_EventScript_ChallengeGuy_1

Route110_EventScript_ChallengeGuy_5:
# 179 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_PlayerNotRidingBike
	goto Route110_EventScript_ChallengeGuy_4


Route110_EventScript_PlayerNotRidingBike::
# 187 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 188 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_PlayerRidingAcroBike::
# 193 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 194 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_Edward::
# 199 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 200 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Jaclyn::
# 205 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 206 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Edwin::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 212 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 213 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Edwin_2
Route110_EventScript_Edwin_1:
# 216 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 217 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_Edwin_2:
# 214 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EdwinRematch
	goto Route110_EventScript_Edwin_1


Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 222 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 223 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 225 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 226 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_EdwinRematch::
# 231 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 232 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Dale::
# 237 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 238 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Jacob::
# 243 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 244 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Anthony::
# 249 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 250 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Benjamin::
# 255 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 256 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 257 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Benjamin_2
Route110_EventScript_Benjamin_1:
# 260 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 261 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_Benjamin_2:
# 258 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BenjaminRematch
	goto Route110_EventScript_Benjamin_1


Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 266 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 267 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 269 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 270 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_BenjaminRematch::
# 275 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 276 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Jasmine::
# 281 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 282 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Abigail::
# 287 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 288 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 289 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Abigail_2
Route110_EventScript_Abigail_1:
# 292 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 293 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_Abigail_2:
# 290 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AbigailRematch
	goto Route110_EventScript_Abigail_1


Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 298 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 299 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 300 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 301 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 302 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_AbigailRematch::
# 307 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 308 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Isabel::
# 313 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 314 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 315 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Isabel_2
Route110_EventScript_Isabel_1:
# 318 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 319 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_Isabel_2:
# 316 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_IsabelRematch
	goto Route110_EventScript_Isabel_1


Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 324 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 325 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 327 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 328 "data/maps/Route110/scripts.pory"
	release
	end


Route110_EventScript_IsabelRematch::
# 333 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 334 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Timmy::
# 339 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 340 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Unused::
	end


Route110_EventScript_Kaleb::
# 349 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 350 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Joseph::
# 355 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 356 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Alyssa::
# 361 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 362 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_CyclingChallengeEnd::
# 367 "data/maps/Route110/scripts.pory"
	lockall
# 368 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 369 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 371 "data/maps/Route110/scripts.pory"
	releaseall
	end


Route110_EventScript_CyclingChallengeResults::
# 376 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 377 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 378 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 379 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_CyclingChallengeResults_3
# 381 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_CyclingChallengeResults_4
# 383 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_CyclingChallengeResults_5
# 385 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_CyclingChallengeResults_6
# 387 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_CyclingChallengeResults_7
# 389 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_CyclingChallengeResults_8
# 391 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_CyclingChallengeResults_9
# 393 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_CyclingChallengeResults_10
# 395 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_CyclingChallengeResults_11
# 397 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_CyclingChallengeResults_12
# 399 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_CyclingChallengeResults_13
Route110_EventScript_CyclingChallengeResults_1:
	end

Route110_EventScript_CyclingChallengeResults_3:
# 380 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionBest
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_4:
# 382 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionGood
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_5:
# 384 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionGood
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_6:
# 386 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionGood
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_7:
# 388 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionOk
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_8:
# 390 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionOk
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_9:
# 392 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionOk
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_10:
# 394 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionBad
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_11:
# 396 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionBad
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_12:
# 398 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionBad
	goto Route110_EventScript_CyclingChallengeResults_1

Route110_EventScript_CyclingChallengeResults_13:
# 400 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_ChallengeReactionWorst
	goto Route110_EventScript_CyclingChallengeResults_1


Route110_EventScript_ChallengeReactionBest::
# 406 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 407 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end


Route110_EventScript_ChallengeReactionGood::
# 412 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 413 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end


Route110_EventScript_ChallengeReactionOk::
# 418 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 419 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end


Route110_EventScript_ChallengeReactionBad::
# 424 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 425 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end


Route110_EventScript_ChallengeReactionWorst::
# 430 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 431 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end


Route110_EventScript_EndChallenge::
# 436 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 437 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 438 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
	return


Route110_EventScript_RivalTrigger1::
# 443 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 444 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger2::
# 449 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 450 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger3::
# 455 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 456 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalScene::
# 461 "data/maps/Route110/scripts.pory"
	lockall
# 462 "data/maps/Route110/scripts.pory"
	checkplayergender
# 463 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route110_EventScript_RivalScene_2
Route110_EventScript_RivalScene_1:
# 466 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route110_EventScript_RivalScene_5
Route110_EventScript_RivalScene_4:
# 469 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 470 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 471 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 472 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 474 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 475 "data/maps/Route110/scripts.pory"
	delay 30
# 476 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalScene_8
Route110_EventScript_RivalScene_7:
# 479 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq Route110_EventScript_RivalScene_11
Route110_EventScript_RivalScene_10:
# 482 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route110_EventScript_RivalScene_14
Route110_EventScript_RivalScene_13:
# 485 "data/maps/Route110/scripts.pory"
	checkplayergender
# 486 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route110_EventScript_RivalScene_17
Route110_EventScript_RivalScene_16:
# 489 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route110_EventScript_RivalScene_20
Route110_EventScript_RivalScene_19:
# 492 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_RivalScene_2:
# 464 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_PlayMayMusic
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_5:
# 467 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_PlayBrendanMusic
	goto Route110_EventScript_RivalScene_4

Route110_EventScript_RivalScene_8:
# 477 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalApproachPlayer1
	goto Route110_EventScript_RivalScene_7

Route110_EventScript_RivalScene_11:
# 480 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalApproachPlayer2
	goto Route110_EventScript_RivalScene_10

Route110_EventScript_RivalScene_14:
# 483 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalApproachPlayer3
	goto Route110_EventScript_RivalScene_13

Route110_EventScript_RivalScene_17:
# 487 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattle
	goto Route110_EventScript_RivalScene_16

Route110_EventScript_RivalScene_20:
# 490 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattle
	goto Route110_EventScript_RivalScene_19


Route110_EventScript_PlayMayMusic::
# 497 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return


Route110_EventScript_PlayBrendanMusic::
# 502 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


Route110_EventScript_MayBattle::
# 507 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 508 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 509 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattle_3
# 511 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattle_4
# 513 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattle_5
Route110_EventScript_MayBattle_1:
	end

Route110_EventScript_MayBattle_3:
# 510 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattleTreecko
	goto Route110_EventScript_MayBattle_1

Route110_EventScript_MayBattle_4:
# 512 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattleTorchic
	goto Route110_EventScript_MayBattle_1

Route110_EventScript_MayBattle_5:
# 514 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattleMudkip
	goto Route110_EventScript_MayBattle_1


Route110_EventScript_MayBattleTreecko::
# 520 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 521 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
	end


Route110_EventScript_MayBattleTorchic::
# 526 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 527 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
	end


Route110_EventScript_MayBattleMudkip::
# 532 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 533 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
	end


Route110_EventScript_MayDefeated::
# 538 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 539 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 540 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 541 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
	end


Route110_EventScript_BrendanBattle::
# 546 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 547 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 548 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattle_3
# 550 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattle_4
# 552 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattle_5
Route110_EventScript_BrendanBattle_1:
	end

Route110_EventScript_BrendanBattle_3:
# 549 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattleTreecko
	goto Route110_EventScript_BrendanBattle_1

Route110_EventScript_BrendanBattle_4:
# 551 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattleTorchic
	goto Route110_EventScript_BrendanBattle_1

Route110_EventScript_BrendanBattle_5:
# 553 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattleMudkip
	goto Route110_EventScript_BrendanBattle_1


Route110_EventScript_BrendanBattleTreecko::
# 559 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 560 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
	end


Route110_EventScript_BrendanBattleTorchic::
# 565 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 566 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
	end


Route110_EventScript_BrendanBattleMudkip::
# 571 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 572 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
	end


Route110_EventScript_BrendanDefeated::
# 577 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 578 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 579 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 580 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
	end


Route110_EventScript_GiveItemfinder::
# 585 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
	return


Route110_EventScript_RivalExit::
# 590 "data/maps/Route110/scripts.pory"
	closemessage
# 591 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalExit_2
Route110_EventScript_RivalExit_1:
# 594 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq Route110_EventScript_RivalExit_5
Route110_EventScript_RivalExit_4:
# 597 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route110_EventScript_RivalExit_8
Route110_EventScript_RivalExit_7:
# 600 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 601 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 602 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 603 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 604 "data/maps/Route110/scripts.pory"
	delay 45
# 605 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_RivalExit_11
Route110_EventScript_RivalExit_10:
# 608 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq Route110_EventScript_RivalExit_14
Route110_EventScript_RivalExit_13:
# 611 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route110_EventScript_RivalExit_17
Route110_EventScript_RivalExit_16:
# 614 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 615 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 616 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 617 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 618 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_RivalExit_2:
# 592 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_MoveRival1
	goto Route110_EventScript_RivalExit_1

Route110_EventScript_RivalExit_5:
# 595 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_MoveRival2
	goto Route110_EventScript_RivalExit_4

Route110_EventScript_RivalExit_8:
# 598 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_MoveRival3
	goto Route110_EventScript_RivalExit_7

Route110_EventScript_RivalExit_11:
# 606 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalExit1
	goto Route110_EventScript_RivalExit_10

Route110_EventScript_RivalExit_14:
# 609 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalExit2
	goto Route110_EventScript_RivalExit_13

Route110_EventScript_RivalExit_17:
# 612 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_RivalExit3
	goto Route110_EventScript_RivalExit_16


Route110_EventScript_RivalApproachPlayer1::
# 623 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 624 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_RivalApproachPlayer2::
# 629 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer2
# 630 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_RivalApproachPlayer3::
# 635 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 636 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_RivalExit1::
# 641 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 642 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_RivalExit2::
# 647 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 648 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_RivalExit3::
# 653 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 654 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_MoveRival1::
# 659 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
	return


Route110_EventScript_MoveRival2::
# 664 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
	return


Route110_EventScript_MoveRival3::
# 669 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
	return


# 673 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 674 "data/maps/Route110/scripts.pory"
	walk_down
# 675 "data/maps/Route110/scripts.pory"
	walk_left
# 676 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 677 "data/maps/Route110/scripts.pory"
	step_end

# 680 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 681 "data/maps/Route110/scripts.pory"
	walk_down
# 682 "data/maps/Route110/scripts.pory"
	step_end

# 685 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 686 "data/maps/Route110/scripts.pory"
	walk_down
# 687 "data/maps/Route110/scripts.pory"
	walk_right
# 688 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 689 "data/maps/Route110/scripts.pory"
	step_end

# 692 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 693 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 694 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 695 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 696 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 697 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 698 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 699 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 700 "data/maps/Route110/scripts.pory"
	step_end

# 703 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 704 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 705 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 706 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 707 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 708 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 709 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 710 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 711 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 712 "data/maps/Route110/scripts.pory"
	step_end

# 715 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 716 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 717 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 718 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 719 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 720 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 721 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 722 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 723 "data/maps/Route110/scripts.pory"
	step_end

Route110_EventScript_BirchScene1::
# 727 "data/maps/Route110/scripts.pory"
	lockall
# 728 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 729 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene2::
# 733 "data/maps/Route110/scripts.pory"
	lockall
# 734 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 735 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene3::
# 739 "data/maps/Route110/scripts.pory"
	lockall
# 740 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 741 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene4::
# 745 "data/maps/Route110/scripts.pory"
	lockall
# 746 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 747 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene::
# 751 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 752 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchEntrance
# 753 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 754 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 755 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 756 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 757 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 758 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 759 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_BirchScene_2
Route110_EventScript_BirchScene_1:
# 762 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq Route110_EventScript_BirchScene_5
Route110_EventScript_BirchScene_4:
# 765 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route110_EventScript_BirchScene_8
Route110_EventScript_BirchScene_7:
# 768 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 4
	goto_if_eq Route110_EventScript_BirchScene_11
Route110_EventScript_BirchScene_10:
# 771 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 772 "data/maps/Route110/scripts.pory"
	closemessage
# 773 "data/maps/Route110/scripts.pory"
	delay 20
# 774 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 775 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 776 "data/maps/Route110/scripts.pory"
	delay 10
# 777 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 778 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 779 "data/maps/Route110/scripts.pory"
	delay 20
# 780 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 781 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 782 "data/maps/Route110/scripts.pory"
	delay 30
# 783 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 784 "data/maps/Route110/scripts.pory"
	closemessage
# 785 "data/maps/Route110/scripts.pory"
	delay 30
# 786 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 787 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 788 "data/maps/Route110/scripts.pory"
	waitfanfare
# 789 "data/maps/Route110/scripts.pory"
	closemessage
# 790 "data/maps/Route110/scripts.pory"
	delay 30
# 791 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 792 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 793 "data/maps/Route110/scripts.pory"
	closemessage
# 794 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_BirchScene_14
Route110_EventScript_BirchScene_13:
# 797 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_eq Route110_EventScript_BirchScene_17
Route110_EventScript_BirchScene_16:
# 800 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq Route110_EventScript_BirchScene_20
Route110_EventScript_BirchScene_19:
# 803 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 4
	goto_if_eq Route110_EventScript_BirchScene_23
Route110_EventScript_BirchScene_22:
# 806 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 807 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 808 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_BirchScene_2:
# 760 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchApproachPlayer1
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_5:
# 763 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchApproachPlayer2
	goto Route110_EventScript_BirchScene_4

Route110_EventScript_BirchScene_8:
# 766 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchApproachPlayer3
	goto Route110_EventScript_BirchScene_7

Route110_EventScript_BirchScene_11:
# 769 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchApproachPlayer4
	goto Route110_EventScript_BirchScene_10

Route110_EventScript_BirchScene_14:
# 795 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchExit1
	goto Route110_EventScript_BirchScene_13

Route110_EventScript_BirchScene_17:
# 798 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchExit2
	goto Route110_EventScript_BirchScene_16

Route110_EventScript_BirchScene_20:
# 801 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchExit3
	goto Route110_EventScript_BirchScene_19

Route110_EventScript_BirchScene_23:
# 804 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_BirchExit4
	goto Route110_EventScript_BirchScene_22


Route110_EventScript_BirchApproachPlayer1::
# 813 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 814 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_BirchApproachPlayer2::
# 819 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 820 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_BirchApproachPlayer3::
# 825 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer3
# 826 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_BirchApproachPlayer4::
# 831 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 832 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_BirchExit1::
# 837 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 838 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_BirchExit2::
# 843 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit2
# 844 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_BirchExit3::
# 849 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit3
# 850 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


Route110_EventScript_BirchExit4::
# 855 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit4
# 856 "data/maps/Route110/scripts.pory"
	waitmovement 0
	return


# 860 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 861 "data/maps/Route110/scripts.pory"
	walk_down
# 862 "data/maps/Route110/scripts.pory"
	walk_down
# 863 "data/maps/Route110/scripts.pory"
	walk_down
# 864 "data/maps/Route110/scripts.pory"
	step_end

# 867 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 868 "data/maps/Route110/scripts.pory"
	walk_down
# 869 "data/maps/Route110/scripts.pory"
	walk_left
# 870 "data/maps/Route110/scripts.pory"
	walk_left
# 871 "data/maps/Route110/scripts.pory"
	walk_down
# 872 "data/maps/Route110/scripts.pory"
	step_end

# 875 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 876 "data/maps/Route110/scripts.pory"
	walk_down
# 877 "data/maps/Route110/scripts.pory"
	walk_left
# 878 "data/maps/Route110/scripts.pory"
	walk_down
# 879 "data/maps/Route110/scripts.pory"
	step_end

# 882 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 883 "data/maps/Route110/scripts.pory"
	walk_down
# 884 "data/maps/Route110/scripts.pory"
	walk_down
# 885 "data/maps/Route110/scripts.pory"
	step_end

# 888 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 889 "data/maps/Route110/scripts.pory"
	walk_down
# 890 "data/maps/Route110/scripts.pory"
	walk_right
# 891 "data/maps/Route110/scripts.pory"
	walk_down
# 892 "data/maps/Route110/scripts.pory"
	step_end

# 895 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 896 "data/maps/Route110/scripts.pory"
	walk_up
# 897 "data/maps/Route110/scripts.pory"
	walk_up
# 898 "data/maps/Route110/scripts.pory"
	walk_right
# 899 "data/maps/Route110/scripts.pory"
	walk_up
# 900 "data/maps/Route110/scripts.pory"
	walk_up
# 901 "data/maps/Route110/scripts.pory"
	walk_up
# 902 "data/maps/Route110/scripts.pory"
	step_end

# 905 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 906 "data/maps/Route110/scripts.pory"
	walk_up
# 907 "data/maps/Route110/scripts.pory"
	walk_up
# 908 "data/maps/Route110/scripts.pory"
	walk_up
# 909 "data/maps/Route110/scripts.pory"
	walk_up
# 910 "data/maps/Route110/scripts.pory"
	walk_up
# 911 "data/maps/Route110/scripts.pory"
	step_end

# 914 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 915 "data/maps/Route110/scripts.pory"
	walk_up
# 916 "data/maps/Route110/scripts.pory"
	walk_up
# 917 "data/maps/Route110/scripts.pory"
	walk_up
# 918 "data/maps/Route110/scripts.pory"
	walk_up
# 919 "data/maps/Route110/scripts.pory"
	walk_up
# 920 "data/maps/Route110/scripts.pory"
	step_end

# 923 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 924 "data/maps/Route110/scripts.pory"
	walk_up
# 925 "data/maps/Route110/scripts.pory"
	walk_up
# 926 "data/maps/Route110/scripts.pory"
	walk_up
# 927 "data/maps/Route110/scripts.pory"
	walk_up
# 928 "data/maps/Route110/scripts.pory"
	walk_up
# 929 "data/maps/Route110/scripts.pory"
	step_end

Route110_Text_WeCantTalkAboutAquaActivities::
# 932 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
	.string "We can't talk about them yet.$"

Route110_Text_KickUpARuckus::
# 937 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
	.string "kick up a ruckus!$"

Route110_Text_MyFirstJobInAqua::
# 942 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
	.string "TEAM AQUA. It's a little scary.$"

Route110_Text_AquaActionsBringSmiles::
# 947 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
	.string "smiles to people's faces!$"

Route110_Text_MayLetsBattle::
# 952 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
	.string "While I was searching for other\n"
	.string "POKéMON, my POKéMON grew stronger.\p"
	.string "So…\n"
	.string "How about a little battle?$"

Route110_Text_MayDefeated::
# 960 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

Route110_Text_MayTakeThis::
# 965 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
	.string "training, too, haven't you?\p"
	.string "I think you deserve a reward!\n"
	.string "This is from me!$"

Route110_Text_MayExplainItemfinder::
# 972 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
	.string "I know it's a little silly coming from\n"
	.string "me, but I think you should train a lot\l"
	.string "harder for the next time.$"

Route110_Text_BrendanLetsBattle::
# 982 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
	.string "So this is where you were.\l"
	.string "How's it going?\p"
	.string "Have you been raising your POKéMON?\n"
	.string "I'll check for you.$"

Route110_Text_BrendanDefeated::
# 990 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route110_Text_BrendanTakeThis::
# 995 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
	.string "without me noticing…\p"
	.string "Good enough!\n"
	.string "Here, take this.$"

Route110_Text_BrendanExplainItemfinder::
# 1002 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
	.string "Use it to root around for items that\n"
	.string "aren't visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.\p"
	.string "Anyway, I'm off to look for new\n"
	.string "POKéMON.$"

Route110_Text_RideBikeAtFullSpeed::
# 1012 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
	.string "at full speed on CYCLING ROAD?$"

Route110_Text_HairStreamsBehindMe::
# 1017 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
	.string "colored hair streams behind me?\p"
	.string "I grew my hair out just for that.$"

Route110_Text_YouGotBikeFromRydel::
# 1023 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
	.string "Oh, it's glaringly obvious.\n"
	.string "It says right on your bike…\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
	.string "That name's everywhere.\p"
	.string "You should ride it around all over\n"
	.string "the place--it's good advertising!$"

Route110_Text_TwoRoads::
# 1041 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
	.string "A road each for people and POKéMON.\n"
	.string "Perhaps that is right and fair.$"

Route110_Text_WalkOnTheLowRoad::
# 1047 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
	.string "a leisurely walk on the low road.$"

Route110_Text_BikeTechniques::
# 1052 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
	.string "riding even more fun.\p"
	.string "There are some places that you can\n"
	.string "reach only by using a BIKE technique.$"

Route110_Text_WhichShouldIChoose::
# 1059 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
	.string "Make a beeline for MAUVILLE on\n"
	.string "CYCLING ROAD, or take the low road\l"
	.string "and look for POKéMON?$"

Route110_Text_CyclingChallengeResultSummary::
# 1066 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
	.string "… … {STR_VAR_1}!\p"
	.string "Total time:\n"
	.string "… … {STR_VAR_2}!$"

Route110_Text_ChallengeReactionBest::
# 1073 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
	.string "Your love of cycling comes from deep\n"
	.string "within your heart.\l"
	.string "You've shaken me to my very soul!$"

Route110_Text_ChallengeReactionGood::
# 1080 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
	.string "I suggest you speed up a bit while\n"
	.string "still avoiding collisions.$"

Route110_Text_ChallengeReactionOk::
# 1086 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
	.string "progress.\p"
	.string "Still, I hope you don't forget the\n"
	.string "sheer pleasure of cycling.$"

Route110_Text_ChallengeReactionBad::
# 1093 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
	.string "on terrifying.\p"
	.string "Most certainly, you need much more\n"
	.string "practice riding.$"

Route110_Text_ChallengeReactionWorst::
# 1100 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
	.string "You're perhaps not cut out for this\n"
	.string "unfortunate cycling business.\p"
	.string "You ought to give serious thought to\n"
	.string "returning that BIKE to RYDEL.$"

Route110_Text_RatedForNumberOfCollisions::
# 1108 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
	.string "If you were to ride from MAUVILLE to\n"
	.string "SLATEPORT on a MACH BIKE, you would\l"
	.string "be rated for the number of collisions\l"
	.string "and your total time.$"

Route110_Text_AlwaysAimHigher::
# 1116 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
	.string "seeing more challenges from you.\l"
	.string "Always aim higher!$"

Route110_Text_AcroBikesDoNotQualify::
# 1122 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
	.string "MACH BIKES are rated for their number\l"
	.string "of collisions and their total times.\p"
	.string "ACRO BIKES do not qualify for rating.\n"
	.string "They are easy to turn, so it's not fair.$"

Route110_Text_SlateportCitySign::
# 1130 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{DOWN_ARROW} SLATEPORT CITY$"

Route110_Text_CyclingRoadSign::
# 1135 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"

Route110_Text_AquaWasHere::
# 1139 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
	.string "Someone painted that onto this sign,\n"
	.string "but then someone else painted over it.\p"
	.string "“TEAM MAGMA rules!” is what it\n"
	.string "says now.$"

Route110_Text_Route103Sign::
# 1147 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{LEFT_ARROW} ROUTE 103$"

Route110_Text_SeasideParkingSign::
# 1152 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"

Route110_Text_MauvilleCitySign::
# 1156 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{UP_ARROW} MAUVILLE CITY$"

Route110_Text_TrainerTipsPrlzSleep::
# 1161 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The foe can be made helpless by\n"
	.string "paralyzing it or causing it to sleep.\p"
	.string "It is an important technique for\n"
	.string "POKéMON battles.$"

Route110_Text_TrainerTipsRegisterItems::
# 1169 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The items in the BAG can be reorganized\n"
	.string "by pressing SELECT.$"

Route110_Text_TrickHouseSign::
# 1175 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
	.string "to reach the wondrous TRICK HOUSE.”$"

Route110_Text_BestRecord::
# 1180 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
	.string "No. of collisions: {STR_VAR_1}\p"
	.string "Elapsed time: {STR_VAR_2}$"

Route110_Text_ThereIsNoRecord::
# 1186 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
	.string "No one seems to have taken the\n"
	.string "challenge. There is no record…$"

Route110_Text_ImagineSeeingYouHere::
# 1192 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
	.string "Imagine seeing you here!\p"
	.string "And where might my {RIVAL} be?$"

Route110_Text_HeardYouInstallMatchCall::
# 1198 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
	.string "You two are running separately.\l"
	.string "Well, that's fine.\p"
	.string "Oh, yes, I heard that your POKéNAV\n"
	.string "had the MATCH CALL system installed.\p"
	.string "Well, then, I should register you in\n"
	.string "my POKéNAV as well.\p"
	.string "That way, even when we're apart,\n"
	.string "I can rate your POKéDEX anytime.\p"
	.string "… … … … … …$"

Route110_Text_RegisteredBirchInPokenav::
# 1211 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
	.string "in the POKéNAV.$"

Route110_Text_KeepAnEyeOutForRival::
# 1216 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
	.string "Please keep an eye out for my {RIVAL}.\n"
	.string "… … … … … …\p"
	.string "Well, I had better get going.\n"
	.string "See you again, {PLAYER}{KUN}!$"
