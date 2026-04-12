Route119_MapScripts::
# 2 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 3 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
	.byte 0


Route119_OnResume::
# 7 "data/maps/Route119/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_OnResume_2
Route119_OnResume_1:
	end

Route119_OnResume_2:
# 8 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_TryRemoveKecleon
	goto Route119_OnResume_1


Route119_EventScript_TryRemoveKecleon::
# 14 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne Route119_EventScript_TryRemoveKecleon_2
Route119_EventScript_TryRemoveKecleon_1:
# 18 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
	return

Route119_EventScript_TryRemoveKecleon_2:
# 16 "data/maps/Route119/scripts.pory"
	goto Common_EventScript_NopReturn
	goto Route119_EventScript_TryRemoveKecleon_1


Route119_OnTransition::
# 23 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 24 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 25 "data/maps/Route119/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 1
	goto_if_eq Route119_OnTransition_2
Route119_OnTransition_1:
# 28 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
	end

Route119_OnTransition_2:
# 26 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_MoveInstituteWorkersDownstairs
	goto Route119_OnTransition_1


Route119_EventScript_MoveInstituteWorkersDownstairs::
# 33 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 34 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 35 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
	return


Route119_EventScript_RivalTrigger1::
# 40 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
	end


Route119_EventScript_RivalTrigger2::
# 46 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 47 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
	end


Route119_EventScript_RivalEncounter::
# 52 "data/maps/Route119/scripts.pory"
	lockall
# 53 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 54 "data/maps/Route119/scripts.pory"
	checkplayergender
# 55 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route119_EventScript_RivalEncounter_2
Route119_EventScript_RivalEncounter_1:
# 58 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route119_EventScript_RivalEncounter_5
Route119_EventScript_RivalEncounter_4:
# 61 "data/maps/Route119/scripts.pory"
	delay 65
# 62 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route119_EventScript_RivalEncounter_8
Route119_EventScript_RivalEncounter_7:
# 65 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route119_EventScript_RivalEncounter_11
Route119_EventScript_RivalEncounter_10:
# 68 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 69 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route119/scripts.pory"
	delay 30
# 71 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route119_EventScript_RivalEncounter_14
Route119_EventScript_RivalEncounter_13:
# 74 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route119_EventScript_RivalEncounter_17
Route119_EventScript_RivalEncounter_16:
# 77 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 78 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL
# 79 "data/maps/Route119/scripts.pory"
	delay 30
# 80 "data/maps/Route119/scripts.pory"
	checkplayergender
# 81 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route119_EventScript_RivalEncounter_20
Route119_EventScript_RivalEncounter_19:
# 84 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route119_EventScript_RivalEncounter_23
Route119_EventScript_RivalEncounter_22:
# 87 "data/maps/Route119/scripts.pory"
	releaseall
	end

Route119_EventScript_RivalEncounter_2:
# 56 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_PlayMayMusic
	goto Route119_EventScript_RivalEncounter_1

Route119_EventScript_RivalEncounter_5:
# 59 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_PlayBrendanMusic
	goto Route119_EventScript_RivalEncounter_4

Route119_EventScript_RivalEncounter_8:
# 63 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_RivalEnter1
	goto Route119_EventScript_RivalEncounter_7

Route119_EventScript_RivalEncounter_11:
# 66 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_RivalEnter2
	goto Route119_EventScript_RivalEncounter_10

Route119_EventScript_RivalEncounter_14:
# 72 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos1
	goto Route119_EventScript_RivalEncounter_13

Route119_EventScript_RivalEncounter_17:
# 75 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos2
	goto Route119_EventScript_RivalEncounter_16

Route119_EventScript_RivalEncounter_20:
# 82 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMay
	goto Route119_EventScript_RivalEncounter_19

Route119_EventScript_RivalEncounter_23:
# 85 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendan
	goto Route119_EventScript_RivalEncounter_22


Route119_EventScript_PlayMayMusic::
# 92 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return


Route119_EventScript_PlayBrendanMusic::
# 97 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


Route119_EventScript_BattleMay::
# 102 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 103 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 104 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMay_3
# 106 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMay_4
# 108 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMay_5
Route119_EventScript_BattleMay_1:
	end

Route119_EventScript_BattleMay_3:
# 105 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMayTreecko
	goto Route119_EventScript_BattleMay_1

Route119_EventScript_BattleMay_4:
# 107 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMayTorchic
	goto Route119_EventScript_BattleMay_1

Route119_EventScript_BattleMay_5:
# 109 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMayMudkip
	goto Route119_EventScript_BattleMay_1


Route119_EventScript_BattleMayTreecko::
# 115 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 116 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
	end


Route119_EventScript_BattleMayTorchic::
# 121 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 122 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
	end


Route119_EventScript_BattleMayMudkip::
# 127 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 128 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
	end


Route119_EventScript_DefeatedMay::
# 133 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 134 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 135 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 136 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
	end


Route119_EventScript_BattleBrendan::
# 141 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 142 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 143 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendan_3
# 145 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendan_4
# 147 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendan_5
Route119_EventScript_BattleBrendan_1:
	end

Route119_EventScript_BattleBrendan_3:
# 144 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendanTreecko
	goto Route119_EventScript_BattleBrendan_1

Route119_EventScript_BattleBrendan_4:
# 146 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendanTorchic
	goto Route119_EventScript_BattleBrendan_1

Route119_EventScript_BattleBrendan_5:
# 148 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendanMudkip
	goto Route119_EventScript_BattleBrendan_1


Route119_EventScript_BattleBrendanTreecko::
# 154 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 155 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
	end


Route119_EventScript_BattleBrendanTorchic::
# 160 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 161 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
	end


Route119_EventScript_BattleBrendanMudkip::
# 166 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 167 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
	end


Route119_EventScript_DefeatedBrendan::
# 172 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 173 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 174 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 175 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
	end


Route119_EventScript_GiveFlyHM::
# 180 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 181 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
	return


Route119_EventScript_RivalExitScottArrive::
# 186 "data/maps/Route119/scripts.pory"
	closemessage
# 187 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route119_EventScript_RivalExitScottArrive_2
Route119_EventScript_RivalExitScottArrive_1:
# 190 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route119_EventScript_RivalExitScottArrive_5
Route119_EventScript_RivalExitScottArrive_4:
# 193 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL
# 194 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 195 "data/maps/Route119/scripts.pory"
	delay 30
# 196 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route119_EventScript_RivalExitScottArrive_8
Route119_EventScript_RivalExitScottArrive_7:
# 199 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route119_EventScript_RivalExitScottArrive_11
Route119_EventScript_RivalExitScottArrive_10:
# 202 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 203 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 204 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 205 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 206 "data/maps/Route119/scripts.pory"
	delay 60
# 207 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route119_EventScript_RivalExitScottArrive_14
Route119_EventScript_RivalExitScottArrive_13:
# 210 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route119_EventScript_RivalExitScottArrive_17
Route119_EventScript_RivalExitScottArrive_16:
# 213 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_SCOTT
# 214 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottEnter
# 215 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 217 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 218 "data/maps/Route119/scripts.pory"
	closemessage
# 219 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route119_EventScript_RivalExitScottArrive_20
Route119_EventScript_RivalExitScottArrive_19:
# 222 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq Route119_EventScript_RivalExitScottArrive_23
Route119_EventScript_RivalExitScottArrive_22:
# 225 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_SCOTT
# 226 "data/maps/Route119/scripts.pory"
	releaseall
	end

Route119_EventScript_RivalExitScottArrive_2:
# 188 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos1
	goto Route119_EventScript_RivalExitScottArrive_1

Route119_EventScript_RivalExitScottArrive_5:
# 191 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos2
	goto Route119_EventScript_RivalExitScottArrive_4

Route119_EventScript_RivalExitScottArrive_8:
# 197 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_RivalExit1
	goto Route119_EventScript_RivalExitScottArrive_7

Route119_EventScript_RivalExitScottArrive_11:
# 200 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_RivalExit2
	goto Route119_EventScript_RivalExitScottArrive_10

Route119_EventScript_RivalExitScottArrive_14:
# 208 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetScottPos1
	goto Route119_EventScript_RivalExitScottArrive_13

Route119_EventScript_RivalExitScottArrive_17:
# 211 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetScottPos2
	goto Route119_EventScript_RivalExitScottArrive_16

Route119_EventScript_RivalExitScottArrive_20:
# 220 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_ScottExit1
	goto Route119_EventScript_RivalExitScottArrive_19

Route119_EventScript_RivalExitScottArrive_23:
# 223 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_ScottExit2
	goto Route119_EventScript_RivalExitScottArrive_22


Route119_EventScript_SetScottPos1::
# 231 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 27, 25
	return


Route119_EventScript_SetScottPos2::
# 236 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 28, 25
	return


Route119_EventScript_ScottExit1::
# 241 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit1
# 242 "data/maps/Route119/scripts.pory"
	waitmovement 0
	return


Route119_EventScript_ScottExit2::
# 247 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit2
# 248 "data/maps/Route119/scripts.pory"
	waitmovement 0
	return


Route119_EventScript_RivalEnter1::
# 253 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 254 "data/maps/Route119/scripts.pory"
	waitmovement 0
	return


Route119_EventScript_RivalEnter2::
# 259 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 260 "data/maps/Route119/scripts.pory"
	waitmovement 0
	return


Route119_EventScript_RivalExit1::
# 265 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 266 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 267 "data/maps/Route119/scripts.pory"
	waitmovement 0
	return


Route119_EventScript_RivalExit2::
# 272 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 273 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 274 "data/maps/Route119/scripts.pory"
	waitmovement 0
	return


Route119_EventScript_SetRivalPos1::
# 279 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 25, 32
# 280 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 25, 32
	return


Route119_EventScript_SetRivalPos2::
# 285 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 26, 32
# 286 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 26, 32
	return


# 290 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 291 "data/maps/Route119/scripts.pory"
	delay_16
# 292 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_right
# 293 "data/maps/Route119/scripts.pory"
	delay_8
# 294 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 295 "data/maps/Route119/scripts.pory"
	step_end

# 298 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 299 "data/maps/Route119/scripts.pory"
	delay_16
# 300 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_left
# 301 "data/maps/Route119/scripts.pory"
	delay_8
# 302 "data/maps/Route119/scripts.pory"
	walk_in_place_faster_up
# 303 "data/maps/Route119/scripts.pory"
	step_end

# 306 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 307 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 308 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 309 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 310 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 311 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 312 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 313 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 314 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 315 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 316 "data/maps/Route119/scripts.pory"
	step_end

# 319 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 320 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 321 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 322 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 323 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 324 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 325 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 326 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 327 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 328 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 329 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 330 "data/maps/Route119/scripts.pory"
	step_end

# 333 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 334 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 335 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 336 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 337 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 338 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 339 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 340 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 341 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 342 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 343 "data/maps/Route119/scripts.pory"
	step_end

# 346 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 347 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 348 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 349 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 350 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 351 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 352 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 353 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 354 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 355 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 356 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 357 "data/maps/Route119/scripts.pory"
	step_end

# 360 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 361 "data/maps/Route119/scripts.pory"
	walk_down
# 362 "data/maps/Route119/scripts.pory"
	walk_down
# 363 "data/maps/Route119/scripts.pory"
	walk_down
# 364 "data/maps/Route119/scripts.pory"
	walk_down
# 365 "data/maps/Route119/scripts.pory"
	walk_left
# 366 "data/maps/Route119/scripts.pory"
	walk_left
# 367 "data/maps/Route119/scripts.pory"
	walk_down
# 368 "data/maps/Route119/scripts.pory"
	step_end

# 371 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 372 "data/maps/Route119/scripts.pory"
	walk_up
# 373 "data/maps/Route119/scripts.pory"
	walk_right
# 374 "data/maps/Route119/scripts.pory"
	walk_right
# 375 "data/maps/Route119/scripts.pory"
	walk_up
# 376 "data/maps/Route119/scripts.pory"
	walk_up
# 377 "data/maps/Route119/scripts.pory"
	walk_up
# 378 "data/maps/Route119/scripts.pory"
	walk_up
# 379 "data/maps/Route119/scripts.pory"
	walk_up
# 380 "data/maps/Route119/scripts.pory"
	step_end

# 383 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 384 "data/maps/Route119/scripts.pory"
	walk_up
# 385 "data/maps/Route119/scripts.pory"
	walk_right
# 386 "data/maps/Route119/scripts.pory"
	walk_up
# 387 "data/maps/Route119/scripts.pory"
	walk_up
# 388 "data/maps/Route119/scripts.pory"
	walk_up
# 389 "data/maps/Route119/scripts.pory"
	walk_up
# 390 "data/maps/Route119/scripts.pory"
	walk_up
# 391 "data/maps/Route119/scripts.pory"
	step_end

Route119_EventScript_CyclingTriathleteM::
# 395 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
	end


Route119_EventScript_RouteSignFortree::
# 400 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
	end


Route119_EventScript_WeatherInstituteSign::
# 405 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
	end


Route119_EventScript_Brent::
# 410 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 411 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Donald::
# 416 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 417 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Taylor::
# 422 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 423 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Doug::
# 428 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 429 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Greg::
# 434 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 435 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Kent::
# 440 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 441 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Jackson::
# 446 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 447 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 448 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_EventScript_Jackson_2
Route119_EventScript_Jackson_1:
# 451 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 452 "data/maps/Route119/scripts.pory"
	release
	end

Route119_EventScript_Jackson_2:
# 449 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RematchJackson
	goto Route119_EventScript_Jackson_1


Route119_EventScript_RegisterJackson::
# 457 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 458 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 459 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 460 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 461 "data/maps/Route119/scripts.pory"
	release
	end


Route119_EventScript_RematchJackson::
# 466 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 467 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Catherine::
# 472 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 473 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 474 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_EventScript_Catherine_2
Route119_EventScript_Catherine_1:
# 477 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 478 "data/maps/Route119/scripts.pory"
	release
	end

Route119_EventScript_Catherine_2:
# 475 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RematchCatherine
	goto Route119_EventScript_Catherine_1


Route119_EventScript_RegisterCatherine::
# 483 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 484 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 485 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 486 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 487 "data/maps/Route119/scripts.pory"
	release
	end


Route119_EventScript_RematchCatherine::
# 492 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 493 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Hugh::
# 498 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 499 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Phil::
# 504 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 505 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Yasu::
# 510 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 511 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Takashi::
# 516 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 517 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Hideo::
# 522 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 523 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Chris::
# 528 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 529 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Fabian::
# 534 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 535 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Dayton::
# 540 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 541 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Rachel::
# 546 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 547 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_BridgeAquaGrunt1::
# 552 "data/maps/Route119/scripts.pory"
	lock
# 553 "data/maps/Route119/scripts.pory"
	faceplayer
# 554 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 555 "data/maps/Route119/scripts.pory"
	closemessage
# 556 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 557 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 558 "data/maps/Route119/scripts.pory"
	release
	end


Route119_EventScript_BridgeAquaGrunt2::
# 563 "data/maps/Route119/scripts.pory"
	lock
# 564 "data/maps/Route119/scripts.pory"
	faceplayer
# 565 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 566 "data/maps/Route119/scripts.pory"
	closemessage
# 567 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 568 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 569 "data/maps/Route119/scripts.pory"
	release
	end


Route119_EventScript_Boy1::
# 574 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
	end


Route119_EventScript_Boy2::
# 579 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
	end


Route119_EventScript_TrainerTipsDecoration::
# 584 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
	end


Route119_EventScript_ScottWonAtFortreeGymCall::
# 589 "data/maps/Route119/scripts.pory"
	lockall
# 590 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 591 "data/maps/Route119/scripts.pory"
	waitmessage
# 592 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 593 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 594 "data/maps/Route119/scripts.pory"
	releaseall
	end


Route119_Text_MayIntro::
# 598 "data/maps/Route119/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
	.string "Where were you? I was looking for you!\p"
	.string "How much stronger have you gotten?\n"
	.string "Let me check for you!\p"
	.string "Ready with your POKéMON?\n"
	.string "Of course you are! Go!$"

Route119_Text_MayDefeat::
# 607 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
	.string "{PLAYER}{KUN}, you're strong!\p"
	.string "I was worried that you might be\n"
	.string "struggling with your training.$"

Route119_Text_MayPresentForYou::
# 614 "data/maps/Route119/scripts.pory"
	.string "MAY: But I had absolutely nothing to\n"
	.string "worry about! Keep it up!\p"
	.string "And, here! I have a present for you.$"

Route119_Text_MayExplainFly::
# 620 "data/maps/Route119/scripts.pory"
	.string "MAY: Use FLY, and your POKéMON will\n"
	.string "instantly carry you to any town you've\l"
	.string "already visited.\p"
	.string "But, to use FLY, you have to get\n"
	.string "the GYM BADGE from FORTREE CITY.\l"
	.string "That's important, so don't forget.\p"
	.string "You should FLY home and visit\n"
	.string "LITTLEROOT for a change.\p"
	.string "I bet your mom's worried about you,\n"
	.string "{PLAYER}{KUN}.\p"
	.string "Well, let's meet again somewhere!$"

Route119_Text_BrendanIntro::
# 634 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: {PLAYER}! So this is where\n"
	.string "you've been looking for POKéMON?\p"
	.string "Let me see how good you got.\n"
	.string "I'll test you!\p"
	.string "Now!\n"
	.string "It's a battle, so battle!$"

Route119_Text_BrendanDefeat::
# 643 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
	.string "You've gotten pretty darn decent.$"

Route119_Text_BrendanIllGiveYouThis::
# 648 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: I'd say you're good enough\n"
	.string "to search for POKéMON anywhere.\p"
	.string "Here, I'll give you this.\n"
	.string "Try it out.$"

Route119_Text_BrendanExplainFly::
# 655 "data/maps/Route119/scripts.pory"
	.string "BRENDAN: Use FLY, and your POKéMON\n"
	.string "instantly carries you to any town\l"
	.string "you've already visited.\p"
	.string "But you need the FORTREE GYM BADGE \n"
	.string "to do that.\p"
	.string "Anyway, I have to move along.$"

Route119_Text_ScottWayToGoBeSeeingYou::
# 664 "data/maps/Route119/scripts.pory"
	.string "SCOTT: Hahahah!\n"
	.string "Way to go, {PLAYER}{KUN}!\p"
	.string "I just passed by a TRAINER riding\n"
	.string "a BIKE.\p"
	.string "You just beat that TRAINER, didn't you?\n"
	.string "It was pretty obvious that you did.\p"
	.string "The kid looked really upset with\n"
	.string "a face all red from anger.\p"
	.string "I sure seem to run into you often.\n"
	.string "Are you off to FORTREE GYM next?\p"
	.string "I expect that you'll do well at the GYM.\n"
	.string "Well, I'll be seeing you!$"

Route119_Text_ScottYouWonAtFortreeGym::
# 679 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "SCOTT: Hiya, {PLAYER}{KUN}, it's me!\p"
	.string "Just as I thought, you won at\n"
	.string "the FORTREE GYM.\p"
	.string "Your strength…\n"
	.string "Perhaps you really are the TRAINER\l"
	.string "that I've been searching for.\p"
	.string "Remember, you have a fan in me.\n"
	.string "I'll be cheering from the sidelines.\l"
	.string "Keep up the great work!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

Route119_Text_StayAwayFromWeatherInstitute::
# 695 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
	.string "Hey, you! Stay away from the WEATHER\n"
	.string "INSTITUTE. It's not safe.$"

Route119_Text_DontGoNearWeatherInstitute::
# 701 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
	.string "Hey, you! Please don't go near the\n"
	.string "WEATHER INSTITUTE.$"

Route119_Text_ThoughtFlyByCatchingBirdMons::
# 707 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
	.string "flock of BIRD POKéMON, and then\l"
	.string "hanging on to them somehow.\p"
	.string "But it turns out there's an HM move\n"
	.string "called FLY!\p"
	.string "I wish I'd known about that a long\n"
	.string "time ago…$"

Route119_Text_TallGrassSnaresBikeTires::
# 717 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
	.string "It's a no-go…\p"
	.string "The tall grass snares BIKE tires.\n"
	.string "There's no way you can cycle here.$"

Route119_Text_CanYourMonMakeSecretBase::
# 724 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
	.string "on a big pile of grass and make a\l"
	.string "SECRET BASE?$"

Route119_Text_RouteSignFortree::
# 730 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
	.string "{RIGHT_ARROW} FORTREE CITY$"

Route119_Text_WeatherInstitute::
# 735 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"

Route119_Text_TrainerTipsDecoration::
# 739 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Up to sixteen decorations and\n"
	.string "furniture items can be placed in\l"
	.string "a SECRET BASE.\p"
	.string "Pick your favorite items and create\n"
	.string "your very own SECRET BASE exactly the\l"
	.string "way you want.$"
