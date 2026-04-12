SlateportCity_MapScripts::
# 2 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 3 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SlateportCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
	.2byte 0


SlateportCity_OnTransition::
# 9 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 10 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 11 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_OnTransition_2
SlateportCity_OnTransition_1:
# 14 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
	goto_if_eq SlateportCity_OnTransition_5
SlateportCity_OnTransition_4:
	end

SlateportCity_OnTransition_2:
# 12 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_MovePeopleForSternInterview
	goto SlateportCity_OnTransition_1

SlateportCity_OnTransition_5:
# 15 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_SetReadyForScottScene
	goto SlateportCity_OnTransition_4


SlateportCity_EventScript_EnterSlateport::
# 21 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 22 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 23 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
	return


SlateportCity_EventScript_MovePeopleForSternInterview::
# 28 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 29 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 30 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 31 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 32 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 33 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 34 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 35 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 36 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 37 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 38 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 39 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
	return


SlateportCity_EventScript_SetReadyForScottScene::
# 46 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 47 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 48 "data/maps/SlateportCity/scripts.pory"
	compare VAR_0x8004, 30
	goto_if_eq SlateportCity_EventScript_SetReadyForScottScene_2
SlateportCity_EventScript_SetReadyForScottScene_1:
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	return

SlateportCity_EventScript_SetReadyForScottScene_2:
# 49 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_MoveScottLeft
	goto SlateportCity_EventScript_SetReadyForScottScene_1


SlateportCity_EventScript_MoveScottLeft::
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 58 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	return


SlateportCity_EventScript_ScottScene::
# 63 "data/maps/SlateportCity/scripts.pory"
	lockall
# 64 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 65 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 66 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 67 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 69 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 70 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 73 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 74 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 75 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 77 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 78 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 79 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 80 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 81 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 82 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 83 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 84 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 85 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 86 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 87 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 88 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 90 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 91 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 92 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 93 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 94 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 95 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


# 99 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 100 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 101 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 102 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 103 "data/maps/SlateportCity/scripts.pory"
	step_end

# 106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 107 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 108 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 109 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 110 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 111 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 112 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 113 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 114 "data/maps/SlateportCity/scripts.pory"
	step_end

# 117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 118 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 119 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 126 "data/maps/SlateportCity/scripts.pory"
	step_end

SlateportCity_EventScript_EnergyGuru::
# 130 "data/maps/SlateportCity/scripts.pory"
	lock
# 131 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 132 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 133 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 134 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 135 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 136 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Pokemart_EnergyGuru::
# 141 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
	return


SlateportCity_EventScript_EffortRibbonWoman::
# 145 "data/maps/SlateportCity/scripts.pory"
	lock
# 146 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 147 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 148 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 149 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 150 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_EventScript_EffortRibbonWoman_2
SlateportCity_EventScript_EffortRibbonWoman_1:
# 153 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 154 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_EffortRibbonWoman_5
SlateportCity_EventScript_EffortRibbonWoman_4:
# 157 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 158 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 160 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 161 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 162 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 163 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_EffortRibbonWoman_2:
# 151 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_MonHasEffortRibbon
	goto SlateportCity_EventScript_EffortRibbonWoman_1

SlateportCity_EventScript_EffortRibbonWoman_5:
# 155 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_MonEVsNotMaxed
	goto SlateportCity_EventScript_EffortRibbonWoman_4


SlateportCity_EventScript_MonEVsNotMaxed::
# 168 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 169 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_MonHasEffortRibbon::
# 174 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 175 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_Cook::
# 180 "data/maps/SlateportCity/scripts.pory"
	lock
# 181 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 182 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_Cook_2
SlateportCity_EventScript_Cook_1:
# 185 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 186 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_Cook_2:
# 183 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_CookSternInterview
	goto SlateportCity_EventScript_Cook_1


SlateportCity_EventScript_CookSternInterview::
# 191 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 192 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_OldWoman::
# 197 "data/maps/SlateportCity/scripts.pory"
	lock
# 198 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 199 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_OldWoman_2
SlateportCity_EventScript_OldWoman_1:
# 202 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 203 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_OldWoman_2:
# 200 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_OldWomanSternInterview
	goto SlateportCity_EventScript_OldWoman_1


SlateportCity_EventScript_OldWomanSternInterview::
# 208 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 209 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_Girl::
# 214 "data/maps/SlateportCity/scripts.pory"
	lock
# 215 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 216 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_Girl_2
SlateportCity_EventScript_Girl_1:
# 219 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_Girl_5
SlateportCity_EventScript_Girl_4:
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 223 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_Girl_2:
# 217 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_GirlSternInterview
	goto SlateportCity_EventScript_Girl_1

SlateportCity_EventScript_Girl_5:
# 220 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_GirlSecretBase
	goto SlateportCity_EventScript_Girl_4


SlateportCity_EventScript_GirlSternInterview::
# 228 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 229 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_GirlSecretBase::
# 234 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 235 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_RichBoy::
# 240 "data/maps/SlateportCity/scripts.pory"
	lock
# 241 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 242 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_RichBoy_2
SlateportCity_EventScript_RichBoy_1:
# 245 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 246 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_RichBoy_2:
# 243 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_RichBoySternInterview
	goto SlateportCity_EventScript_RichBoy_1


SlateportCity_EventScript_RichBoySternInterview::
# 251 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 252 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_FatMan::
# 257 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_FatMan_2
SlateportCity_EventScript_FatMan_1:
# 260 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
	end

SlateportCity_EventScript_FatMan_2:
# 258 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_FatManSternInterview
	goto SlateportCity_EventScript_FatMan_1


SlateportCity_EventScript_FatManSternInterview::
# 265 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
	end


SlateportCity_EventScript_Man1::
# 270 "data/maps/SlateportCity/scripts.pory"
	lock
# 271 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 272 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_Man1_2
SlateportCity_EventScript_Man1_1:
# 275 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 276 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_Man1_2:
# 273 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_Man1SternInterview
	goto SlateportCity_EventScript_Man1_1


SlateportCity_EventScript_Man1SternInterview::
# 281 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 282 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_Woman1::
# 287 "data/maps/SlateportCity/scripts.pory"
	lock
# 288 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 289 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1_2
SlateportCity_EventScript_Woman1_1:
# 292 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 293 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_Woman1_2:
# 290 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Woman1AquaGone
	goto SlateportCity_EventScript_Woman1_1


SlateportCity_EventScript_Woman1AquaGone::
# 298 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 299 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_BattleTentSign::
# 304 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_SternsShipyardSign::
# 309 "data/maps/SlateportCity/scripts.pory"
	lockall
# 310 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardSign_2
SlateportCity_EventScript_SternsShipyardSign_1:
# 313 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardSign_5
SlateportCity_EventScript_SternsShipyardSign_4:
# 316 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 317 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end

SlateportCity_EventScript_SternsShipyardSign_2:
# 311 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_SternsShipyardFerryComplete
	goto SlateportCity_EventScript_SternsShipyardSign_1

SlateportCity_EventScript_SternsShipyardSign_5:
# 314 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_SternsShipyardNearsCompletion
	goto SlateportCity_EventScript_SternsShipyardSign_4


SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 322 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 323 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


SlateportCity_EventScript_SternsShipyardFerryComplete::
# 328 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 329 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


SlateportCity_EventScript_PokemonFanClubSign::
# 334 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_OceanicMuseumSign::
# 339 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_CitySign::
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
	end


SlateportCity_EventScript_MarketSign::
# 349 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_HarborSign::
# 354 "data/maps/SlateportCity/scripts.pory"
	lockall
# 355 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSign_2
SlateportCity_EventScript_HarborSign_1:
# 358 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 359 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end

SlateportCity_EventScript_HarborSign_2:
# 356 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_HarborSignFerryComplete
	goto SlateportCity_EventScript_HarborSign_1


SlateportCity_EventScript_HarborSignFerryComplete::
# 364 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 365 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


SlateportCity_EventScript_NameRatersHouseSign::
# 370 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_Maniac::
# 375 "data/maps/SlateportCity/scripts.pory"
	lock
# 376 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 377 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_Maniac_2
SlateportCity_EventScript_Maniac_1:
# 380 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 381 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_Maniac_2:
# 378 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_ManiacSternInterview
	goto SlateportCity_EventScript_Maniac_1


SlateportCity_EventScript_ManiacSternInterview::
# 386 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 387 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_Woman2::
# 392 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
	end


SlateportCity_EventScript_Sailor1::
# 397 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
	end


SlateportCity_EventScript_Sailor2::
# 402 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
	end


SlateportCity_EventScript_PokefanF::
# 407 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
	end


SlateportCity_EventScript_Man2::
# 412 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
	end


SlateportCity_EventScript_AquaGrunt1::
# 417 "data/maps/SlateportCity/scripts.pory"
	lock
# 418 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 419 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 420 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 421 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 422 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AquaGrunt2::
# 428 "data/maps/SlateportCity/scripts.pory"
	lock
# 429 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 430 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 431 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 432 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 433 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 434 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AquaGrunt3::
# 439 "data/maps/SlateportCity/scripts.pory"
	lock
# 440 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 441 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 442 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 443 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 444 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AquaGrunt4::
# 450 "data/maps/SlateportCity/scripts.pory"
	lock
# 451 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 452 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 453 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 454 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 455 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 456 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AquaGrunt5::
# 461 "data/maps/SlateportCity/scripts.pory"
	lock
# 462 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 463 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 464 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 465 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 466 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 467 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AquaGrunt6::
# 472 "data/maps/SlateportCity/scripts.pory"
	lock
# 473 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 474 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 475 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 476 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 477 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AquaGrunt7::
# 483 "data/maps/SlateportCity/scripts.pory"
	lock
# 484 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 485 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 486 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 487 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 488 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 489 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AquaGrunt8::
# 494 "data/maps/SlateportCity/scripts.pory"
	lock
# 495 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 497 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 498 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 499 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_AquaGrunt9::
# 505 "data/maps/SlateportCity/scripts.pory"
	lock
# 506 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 507 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 508 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 509 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 511 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 513 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 514 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 515 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 516 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 517 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 518 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 519 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 520 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 521 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 522 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 523 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 525 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 527 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 528 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 529 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 531 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 533 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/SlateportCity/scripts.pory"
	release
	end


# 538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 539 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 540 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 541 "data/maps/SlateportCity/scripts.pory"
	step_end

SlateportCity_EventScript_AquaGrunt10::
# 545 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
	end


SlateportCity_EventScript_AquaGrunt11::
# 550 "data/maps/SlateportCity/scripts.pory"
	lock
# 551 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 552 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 553 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 554 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 555 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_DollClerk::
# 561 "data/maps/SlateportCity/scripts.pory"
	lock
# 562 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 563 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 564 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 565 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 566 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 567 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_PokemartDecor_Dolls::
# 572 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
	return


SlateportCity_EventScript_ComeBackWithSecretPower::
# 576 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 577 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_DecorClerk::
# 582 "data/maps/SlateportCity/scripts.pory"
	lock
# 583 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 584 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_DecorClerk_2
SlateportCity_EventScript_DecorClerk_1:
# 587 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 588 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 589 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 590 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 591 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_DecorClerk_2:
# 585 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ComeBackWithSecretPower
	goto SlateportCity_EventScript_DecorClerk_1


SlateportCity_PokemartDecor::
# 596 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
	return


SlateportCity_EventScript_PowerTMClerk::
# 600 "data/maps/SlateportCity/scripts.pory"
	lock
# 601 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 602 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 603 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 604 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 605 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 606 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Pokemart_PowerTMs::
# 611 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
	return


SlateportCity_EventScript_CaptStern::
# 615 "data/maps/SlateportCity/scripts.pory"
	lockall
# 616 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 617 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 618 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 620 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 622 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 623 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 625 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 626 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 627 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 628 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 629 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 631 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 632 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 633 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 634 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 636 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 637 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 638 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 639 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 640 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 641 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 642 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 643 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 645 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 647 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 648 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 649 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 651 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 653 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 655 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 656 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 657 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 658 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 659 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 661 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 662 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 663 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 664 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 665 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 666 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 667 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 668 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


# 672 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 673 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 674 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 675 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 677 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 678 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 679 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 680 "data/maps/SlateportCity/scripts.pory"
	step_end

# 683 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 684 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 685 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 686 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 688 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 689 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 690 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 691 "data/maps/SlateportCity/scripts.pory"
	step_end

# 694 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 695 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 696 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 697 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 698 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 699 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 700 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 701 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 702 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 704 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 705 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 706 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 707 "data/maps/SlateportCity/scripts.pory"
	step_end

# 710 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 711 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 712 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 713 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 714 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 715 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 716 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 717 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 718 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 719 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 720 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 721 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 722 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 723 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 724 "data/maps/SlateportCity/scripts.pory"
	step_end

# 727 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 728 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 729 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 730 "data/maps/SlateportCity/scripts.pory"
	step_end

# 733 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 734 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 735 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 736 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 737 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 738 "data/maps/SlateportCity/scripts.pory"
	step_end

# 741 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 742 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 743 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 744 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 745 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 746 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 747 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 748 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 749 "data/maps/SlateportCity/scripts.pory"
	step_end

# 752 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 753 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 754 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 755 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 756 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 757 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 758 "data/maps/SlateportCity/scripts.pory"
	step_end

# 761 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 762 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 763 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 764 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 765 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 766 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 767 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 768 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 769 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 770 "data/maps/SlateportCity/scripts.pory"
	step_end

SlateportCity_EventScript_Ty::
# 774 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
	end


SlateportCity_EventScript_Gabby::
# 779 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
	end


SlateportCity_EventScript_Man3::
# 784 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
	end


SlateportCity_EventScript_BerryPowderClerk::
# 789 "data/maps/SlateportCity/scripts.pory"
	lock
# 790 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 791 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_BerryPowderClerk_2
SlateportCity_EventScript_BerryPowderClerk_1:
# 794 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 795 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 796 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 797 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 798 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_BerryPowderClerk_2:
# 792 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ReceivedPowderJar
	goto SlateportCity_EventScript_BerryPowderClerk_1


SlateportCity_EventScript_ReceivedPowderJar::
# 803 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 804 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 805 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_ReceivedPowderJar_2
SlateportCity_EventScript_ReceivedPowderJar_1:
# 808 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 809 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 810 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	end

SlateportCity_EventScript_ReceivedPowderJar_2:
# 806 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ExplainBerryPowder
	goto SlateportCity_EventScript_ReceivedPowderJar_1


SlateportCity_EventScript_ExplainBerryPowder::
# 815 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 816 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_ChooseBerryPowderItem::
# 821 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 822 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 824 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 825 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 826 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 827 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_ChooseBerryPowderItem_3
# 829 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_ChooseBerryPowderItem_4
# 831 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_ChooseBerryPowderItem_5
# 833 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_ChooseBerryPowderItem_6
# 835 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_ChooseBerryPowderItem_7
# 837 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_ChooseBerryPowderItem_8
# 839 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_ChooseBerryPowderItem_9
# 841 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_ChooseBerryPowderItem_10
# 843 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_ChooseBerryPowderItem_11
# 845 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_ChooseBerryPowderItem_12
# 847 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_ChooseBerryPowderItem_13
# 849 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_ChooseBerryPowderItem_14
# 851 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_ChooseBerryPowderItem_15
SlateportCity_EventScript_ChooseBerryPowderItem_1:
	end

SlateportCity_EventScript_ChooseBerryPowderItem_3:
# 828 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_EnergyPowder
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_4:
# 830 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_EnergyRoot
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_5:
# 832 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_HealPowder
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_6:
# 834 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_RevivalHerb
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_7:
# 836 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Protein
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_8:
# 838 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Iron
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_9:
# 840 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Carbos
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_10:
# 842 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Calcium
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_11:
# 844 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Zinc
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_12:
# 846 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_HPUp
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_13:
# 848 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_PPUp
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_14:
# 850 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_CancelPowderItemSelect
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_15:
# 852 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_CancelPowderItemSelect
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1


SlateportCity_EventScript_EnergyPowder::
# 858 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 859 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 860 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 861 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_EnergyRoot::
# 866 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 867 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 868 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 869 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_HealPowder::
# 874 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 875 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 876 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 877 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_RevivalHerb::
# 882 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 883 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 884 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 885 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_Protein::
# 890 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 891 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 892 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 893 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_Iron::
# 898 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 899 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 900 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 901 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_Carbos::
# 906 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 907 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 908 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 909 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_Calcium::
# 914 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 915 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 916 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 917 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_Zinc::
# 922 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 923 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 924 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 925 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_HPUp::
# 930 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 931 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 932 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 933 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_PPUp::
# 938 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 939 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 940 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 941 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end


SlateportCity_EventScript_CancelPowderItemSelect::
# 946 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 947 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 948 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_TryBuyBerryPowderItem::
# 953 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 954 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_2
SlateportCity_EventScript_TryBuyBerryPowderItem_1:
# 957 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 958 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 959 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_5
SlateportCity_EventScript_TryBuyBerryPowderItem_4:
# 962 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 963 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_8
SlateportCity_EventScript_TryBuyBerryPowderItem_7:
# 966 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 967 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 968 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 969 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 970 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_11
SlateportCity_EventScript_TryBuyBerryPowderItem_10:
# 973 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 974 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 975 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_TryBuyBerryPowderItem_2:
# 955 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_1

SlateportCity_EventScript_TryBuyBerryPowderItem_5:
# 960 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_NotEnoughBerryPowder
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_4

SlateportCity_EventScript_TryBuyBerryPowderItem_8:
# 964 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_NoRoomForBerryPowderItem
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_7

SlateportCity_EventScript_TryBuyBerryPowderItem_11:
# 971 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_10


SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 980 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 981 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 982 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_NotEnoughBerryPowder::
# 987 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 988 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	end


SlateportCity_EventScript_ScottBattleTentScene::
# 993 "data/maps/SlateportCity/scripts.pory"
	lockall
# 994 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 995 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 996 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 997 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 998 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 999 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1000 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1001 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1002 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1003 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1004 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1005 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1006 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1007 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1008 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1009 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 1010 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1011 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1012 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


SlateportCity_Movement_PushPlayerDown::
# 1017 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1018 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1019 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1020 "data/maps/SlateportCity/scripts.pory"
	step_end
	return


# 1023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1024 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1025 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1026 "data/maps/SlateportCity/scripts.pory"
	step_end

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1030 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1031 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1032 "data/maps/SlateportCity/scripts.pory"
	step_end

# 1035 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1036 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1037 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1038 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1039 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1040 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1041 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1042 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1043 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1044 "data/maps/SlateportCity/scripts.pory"
	step_end

SlateportCity_EventScript_BerryCrushRankingsSign::
# 1048 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1049 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1050 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1051 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


SlateportCity_Text_EnergyGuruSellWhatYouNeed::
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
	.string "sell you what you need!$"

SlateportCity_Text_OhYourPokemon::
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
	.string "Your {STR_VAR_1}…$"

SlateportCity_Text_PleaseGiveItThisEffortRibbon::
# 1065 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
	.string "As its reward, please give it this\n"
	.string "EFFORT RIBBON.$"

SlateportCity_Text_ReceivedEffortRibbon::
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"

SlateportCity_Text_PutEffortRibbonOnMon::
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
	.string "on {STR_VAR_1}.$"

SlateportCity_Text_GoForItLittleHarder::
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
	.string "If you do, I'll give your POKéMON\n"
	.string "something nice.$"

SlateportCity_Text_EffortRibbonLooksGoodOnIt::
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
	.string "RIBBON looks good on it!$"

SlateportCity_Text_WonderIfLighthouseStartlesPokemon::
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
	.string "dozens of miles away.\p"
	.string "I wonder if it doesn't startle POKéMON\n"
	.string "in the sea.$"

SlateportCity_Text_SeaweedFullOfLife::
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
	.string "The seaweed you can get around these\n"
	.string "parts is fresh and full of life.\p"
	.string "Why, it looks like it can even rear up\n"
	.string "and attack!$"

SlateportCity_Text_HowTownIsBornAndGrows::
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
	.string "of bountiful harvest gather.\p"
	.string "And where people gather, a market\n"
	.string "soon starts.\p"
	.string "That is how a town is born and grows.$"

SlateportCity_Text_SlateportWonderfulPlace::
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
	.string "scent of the ocean…\p"
	.string "SLATEPORT is such a wonderful place!$"

SlateportCity_Text_BuyBricksSoDecorWontGetDirty::
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
	.string "the floor, they'll get dirty.\p"
	.string "I'm going to buy some BRICKS so my\n"
	.string "DOLLS and CUSHIONS won't get dirty\l"
	.string "when I leave them out.$"

SlateportCity_Text_GoingToCompeteInBattleTent::
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
	.string "the BATTLE TENT, too!\p"
	.string "But before that, I need to catch\n"
	.string "some POKéMON!$"

SlateportCity_Text_BushedHikingFromMauville::
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
	.string "I hiked over from MAUVILLE CITY.\n"
	.string "But, boy, this city's huge.\p"
	.string "If I'd known this, I would've ridden\n"
	.string "my BIKE here.$"

SlateportCity_Text_EveryoneCallsHimCaptStern::
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
	.string "MUSEUM, also happens to be the leader\l"
	.string "of an undersea exploration team.\p"
	.string "So, everyone calls him CAPT. STERN.$"

SlateportCity_Text_WhatsLongLineOverThere::
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
	.string "That long line…$"

SlateportCity_Text_VisitedMuseumOften::
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
	.string "the MUSEUM often.\p"
	.string "I used to dream about the mysteries of\n"
	.string "the sea after seeing the exhibits.$"

SlateportCity_Text_QuitPushing::
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
	.string "This is the line, can't you see?$"

SlateportCity_Text_AquaHasPolicy::
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
	.string "assembling and dispersing at\l"
	.string "the operation site.$"

SlateportCity_Text_BossIsBrilliant::
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
	.string "What would he want to do with\n"
	.string "a MUSEUM now?$"

SlateportCity_Text_WhatsNewSchemeIWonder::
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
	.string "Our BOSS is scary when he's mad, so\n"
	.string "I'd better not screw things up…$"

SlateportCity_Text_ShouldTakeItAll::
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
	.string "the MUSEUM, we should take it all!$"

SlateportCity_Text_DontButtIn::
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
	.string "Don't butt in!$"

SlateportCity_Text_RemindsMeOfLongLineForGames::
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
	.string "It reminds me of the times I lined up to\n"
	.string "buy smash-hit games…$"

SlateportCity_Text_WhyAreWeLiningUp::
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
	.string "We should just march in!$"

SlateportCity_Text_WhatDoYouWant::
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
	.string "What do you want?$"

SlateportCity_Text_IllReadSignForYou::
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
	.string "I'll read it for you!$"

SlateportCity_Text_SaysSomethingLikeSeaIsEndless::
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
	.string "Um… I think it says something like\n"
	.string "“the life in the sea is endless.”\p"
	.string "Yup, I'm pretty sure that's what\n"
	.string "it says.$"

SlateportCity_Text_ShouldveBroughtMyGameBoy::
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
	.string "I should've brought my Game Boy\n"
	.string "Advance so I wouldn't get bored in line…\p"
	.string "Grumble…$"

SlateportCity_Text_HotSpringsAfterOperation::
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
	.string "you to a hot spring spa!\p"
	.string "That's what our leader said.\n"
	.string "I can't wait!$"

SlateportCity_Text_SeaIsSoWet::
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
	.string "Could the sea have been made by\n"
	.string "the tears shed by POKéMON?$"

SlateportCity_Text_SinkOldBoats::
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
	.string "ships that become too creaky to sail?\p"
	.string "They sink them in the sea so they\n"
	.string "become habitats for POKéMON.$"

SlateportCity_Text_BuyTooMuch::
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
	.string "away and buy too much.$"

SlateportCity_Text_GetNameRaterToHelpYou::
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
	.string "nickname, you'll have to get the NAME\l"
	.string "RATER to help you.$"

SlateportCity_Text_CantChangeTradeMonName::
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
	.string "you can't change its nickname.\p"
	.string "The original TRAINER's love for that\n"
	.string "POKéMON is in the nickname.$"

SlateportCity_Text_BattleTentBuiltRecently::
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
	.string "in SLATEPORT.\p"
	.string "GYMS are fun, but the BATTLE TENT's\n"
	.string "awesome in its own way.\p"
	.string "You should go find tough POKéMON\n"
	.string "for the BATTLE TENT!$"

SlateportCity_Text_CaptSternBeingInterviewed::
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
	.string "so I could get an autograph.\p"
	.string "But who's that being interviewed?\n"
	.string "Isn't that CAPT. STERN?$"

SlateportCity_Text_InterviewerSoCool::
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
	.string "and pretty.\p"
	.string "When I grow up, I'm going to be\n"
	.string "an international journalist!$"

SlateportCity_Text_SternSaysDiscoveredSomething::
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
	.string "something at the bottom of the sea.\p"
	.string "I wonder what it is?\n"
	.string "What could it be?$"

SlateportCity_Text_CaptainComeBackWithBigFish::
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
	.string "Did the good CAPTAIN come back with\n"
	.string "a big fish from the ocean floor?$"

SlateportCity_Text_AmIOnTV::
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
	.string "Am I on TV?$"

SlateportCity_Text_CaptainsACelebrity::
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
	.string "The CAPTAIN's a celebrity!$"

SlateportCity_Text_BigSmileForCamera::
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
	.string "for the camera!$"

SlateportCity_Text_MostInvaluableExperience::
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
	.string "invaluable experience…$"

SlateportCity_Text_SternMoveAheadWithExploration::
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
	.string "move ahead with our exploration.$"

SlateportCity_Text_GabbyWonderfulThanksForInterview::
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
	.string "Thank you for taking the time from\l"
	.string "your busy schedule to talk to us.\p"
	.string "We hope we can interview you again\n"
	.string "with news of more discoveries!$"

SlateportCity_Text_SternWhewFirstInterview::
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
	.string "That was my first time to be filmed for\n"
	.string "TV. That was nerve-wracking.$"

SlateportCity_Text_OhPlayerWeMadeDiscovery::
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
	.string "You're looking great!\p"
	.string "We made a huge discovery on our last\n"
	.string "seafloor exploration.\p"
	.string "We found an underwater cavern on\n"
	.string "ROUTE 128.\p"
	.string "We think it's the habitat of a POKéMON\n"
	.string "that's said to have been long extinct.$"

SlateportCity_Text_AquaWillAssumeControlOfSubmarine::
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
	.string "CAPT. STERN, I presume.\p"
	.string "We of TEAM AQUA will assume\n"
	.string "control of your submarine!\p"
	.string "Your objections are meaningless!\n"
	.string "We expect your total cooperation!\p"
	.string "Fufufu…\n"
	.string "Just watch and learn what TEAM\l"
	.string "AQUA has planned!$"

SlateportCity_Text_SternWhatWasAllThat::
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
	.string "It sounded like someone using\n"
	.string "a megaphone…\p"
	.string "Where did it come from?$"

SlateportCity_Text_FromHarborTryingToTakeSub::
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
	.string "The submarine!\n"
	.string "They're trying to take it!$"

SlateportCity_Text_PleaseComeWithMe::
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
	.string "Please, come with me!$"

SlateportCity_Text_BattleTentSign::
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
	.string "“Find it! The ultimate POKéMON!”$"

SlateportCity_Text_SternsShipyardWantedSign::
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
	.string "“Wanted: A sailor capable of sailing\n"
	.string "in all currents.”$"

SlateportCity_Text_SternsShipyardNearsCompletion::
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
	.string "“The ferry S.S. TIDAL nears\n"
	.string "completion for serving the ports of\l"
	.string "SLATEPORT and LILYCOVE.”$"

SlateportCity_Text_SternsShipyardFerryComplete::
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
	.string "ferry S.S. TIDAL is handled at the\l"
	.string "HARBOR.”$"

SlateportCity_Text_PokemonFanClubSign::
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
	.string "“Calling all fans of POKéMON!”$"

SlateportCity_Text_OceanicMuseumSign::
# 1415 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
	.string "all life.”\p"
	.string "OCEANIC MUSEUM$"

SlateportCity_Text_CitySign::
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
	.string "“The port where people and POKéMON\n"
	.string "cross paths.”$"

SlateportCity_Text_MarketSign::
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
	.string "“Unique items found nowhere else!”$"

SlateportCity_Text_HarborFerryUnderConstruction::
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
	.string "“The ferry S.S. TIDAL is under\n"
	.string "construction in the SHIPYARD.\p"
	.string "“Service is scheduled to begin\n"
	.string "shortly.”$"

SlateportCity_Text_HarborSign::
# 1440 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
	.string "“Enjoy a delightful cruise on\n"
	.string "the ferry S.S. TIDAL.”$"

SlateportCity_Text_NameRatersHouseSign::
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
	.string "“POKéMON nicknames rated.”$"

SlateportCity_Text_ExplainBerries::
# 1451 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
	.string "itself by chewing on BERRIES.\p"
	.string "Did you know that?\p"
	.string "Somebody saw that and got the idea\n"
	.string "of making medicine from BERRIES.\p"
	.string "Did you know that?\p"
	.string "To turn BERRIES into medicine,\n"
	.string "they must be crushed into powder.\p"
	.string "Did you know that?\p"
	.string "You seem to have an interest\n"
	.string "in BERRIES!\p"
	.string "I've got something good for someone\n"
	.string "like you.$"

SlateportCity_Text_ExplainBerryPowder::
# 1467 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
	.string "The BERRY CRUSH machines are at\n"
	.string "the DIRECT CORNER upstairs.\p"
	.string "Did you know?\p"
	.string "Could you make BERRY POWDER for\n"
	.string "me using those machines?\p"
	.string "I can make you all sorts of medicine\n"
	.string "if you bring me lots of BERRY POWDER.$"

SlateportCity_Text_BroughtMeSomeBerryPowder::
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
	.string "BERRY POWDER?$"

SlateportCity_Text_ExchangeWhatWithIt::
# 1484 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
	.string "it with?$"

SlateportCity_Text_ExchangeBerryPowderForItem::
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
	.string "BERRY POWDER for one {STR_VAR_1}?$"

SlateportCity_Text_DontHaveEnoughBerryPowder::
# 1494 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
	.string "BERRY POWDER.$"

SlateportCity_Text_FineBerryPowderTradeSomethingElse::
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
	.string "It will make excellent medicine.\p"
	.string "Would you like to trade more of your\n"
	.string "BERRY POWDER for something else?$"

SlateportCity_Text_WhenYouGetMoreBringItToMe::
# 1506 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
	.string "BERRY POWDER, bring it to me, please!$"

SlateportCity_Text_ComeBackToTradeBerryPowder::
# 1511 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
	.string "BERRY POWDER for some medicine.\p"
	.string "I'm always running a bazaar here.\p"
	.string "Did you know?$"

SlateportCity_Text_YouDroveTeamAquaAway::
# 1518 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
	.string "I'm sure I met you somewhere before.\p"
	.string "Have I introduced myself to you?\n"
	.string "If not, my name's SCOTT.\p"
	.string "I just saw TEAM AQUA run away from\n"
	.string "here like they were stung.\p"
	.string "Let me guess--you drove them away?$"

SlateportCity_Text_MaybeThisTrainer::
# 1528 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
	.string "Maybe, just maybe, this TRAINER…$"

SlateportCity_Text_LetsRegisterEachOther::
# 1533 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
	.string "to become a good friend.\p"
	.string "So, let's register each other in our\n"
	.string "POKéNAVS.\p"
	.string "… … … … … …$"

SlateportCity_Text_RegisteredScott::
# 1541 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
	.string "in the POKéNAV.$"

SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou::
# 1546 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
	.string "with you, but I do want to keep an eye\l"
	.string "on the talents of other people, too.\p"
	.string "So, I'll be off to roam other towns\n"
	.string "a bit more.\p"
	.string "Be seeing you, {PLAYER}{KUN}!$"

SlateportCity_Text_TakingBattleTentChallenge::
# 1555 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
	.string "If it isn't {PLAYER}{KUN}!\p"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
	.string "to take the BATTLE TENT challenge?\p"
	.string "Yeah! That's a good idea!\n"
	.string "That's a really great idea!\p"
	.string "After all, a tough TRAINER is\n"
	.string "the perfect fit for the BATTLE TENT!\p"
	.string "Give it your best effort!$"
