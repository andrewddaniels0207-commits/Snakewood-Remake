RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 3 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
	.2byte 0


RustboroCity_OnTransition::
# 9 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 10 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_eq RustboroCity_OnTransition_2
RustboroCity_OnTransition_1:
# 14 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 15 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_eq RustboroCity_OnTransition_5
RustboroCity_OnTransition_4:
	end

RustboroCity_OnTransition_2:
# 12 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_HideMapNamePopup
	goto RustboroCity_OnTransition_1

RustboroCity_OnTransition_5:
# 16 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PositionScientistForExit
	goto RustboroCity_OnTransition_4


RustboroCity_EventScript_PositionScientistForExit::
# 22 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_eq RustboroCity_EventScript_PositionScientistForExit_2
RustboroCity_EventScript_PositionScientistForExit_1:
# 25 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
	end

RustboroCity_EventScript_PositionScientistForExit_2:
# 23 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PositionScientistLeftExit
	goto RustboroCity_EventScript_PositionScientistForExit_1


RustboroCity_EventScript_PositionScientistLeftExit::
# 30 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
	end


RustboroCity_EventScript_HideMapNamePopup::
# 35 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return


RustboroCity_EventScript_ScientistAddMatchCall::
# 40 "data/maps/RustboroCity/scripts.pory"
	lockall
# 41 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 42 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 43 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 46 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 47 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 48 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 50 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 51 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 53 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 57 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 60 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 61 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 64 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 65 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 67 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 69 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 71 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 72 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 74 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 75 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 76 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
	return


RustboroCity_EventScript_PleaseSelectPokenav::
# 80 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 82 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 83 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
	return


RustboroCity_EventScript_MatchCallTutorial::
# 87 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 88 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 89 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 90 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_MatchCallTutorial_3
# 93 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_MatchCallTutorial_4
# 95 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_MatchCallTutorial_5
# 97 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_MatchCallTutorial_6
# 99 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_MatchCallTutorial_7
# 101 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_MatchCallTutorial_8
# 103 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_MatchCallTutorial_9
# 105 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_MatchCallTutorial_10
RustboroCity_EventScript_MatchCallTutorial_1:
# 108 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 109 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 110 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 111 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 112 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 113 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 114 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 116 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 117 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 118 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 119 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 120 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MatchCallTutorial_3:
# 92 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_4:
# 94 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_5:
# 96 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_6:
# 98 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_7:
# 100 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_8:
# 102 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_9:
# 104 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1

RustboroCity_EventScript_MatchCallTutorial_10:
# 106 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PleaseSelectPokenav
	goto RustboroCity_EventScript_MatchCallTutorial_1


# 124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 125 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 126 "data/maps/RustboroCity/scripts.pory"
	step_end

# 129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 130 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity/scripts.pory"
	step_end

# 134 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 135 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 136 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 137 "data/maps/RustboroCity/scripts.pory"
	step_end

# 140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 141 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 142 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 143 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 144 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 145 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 146 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 147 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 148 "data/maps/RustboroCity/scripts.pory"
	step_end

# 151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 152 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 153 "data/maps/RustboroCity/scripts.pory"
	step_end

RustboroCity_EventScript_FatMan::
# 157 "data/maps/RustboroCity/scripts.pory"
	lock
# 158 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 159 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatMan_2
RustboroCity_EventScript_FatMan_1:
# 162 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_FatMan_2:
# 160 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_FatManSawGrunt
	goto RustboroCity_EventScript_FatMan_1


RustboroCity_EventScript_FatManSawGrunt::
# 168 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 169 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_DevonEmployee2::
# 174 "data/maps/RustboroCity/scripts.pory"
	lock
# 175 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 176 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 177 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_Woman::
# 182 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
	end


RustboroCity_EventScript_Man1::
# 187 "data/maps/RustboroCity/scripts.pory"
	lock
# 188 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 189 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1_2
RustboroCity_EventScript_Man1_1:
# 192 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 193 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_Man1_2:
# 190 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Man1HaveBadge
	goto RustboroCity_EventScript_Man1_1


RustboroCity_EventScript_Man1HaveBadge::
# 198 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 199 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_Boy2::
# 204 "data/maps/RustboroCity/scripts.pory"
	lock
# 205 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 206 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2_2
RustboroCity_EventScript_Boy2_1:
# 209 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 210 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_Boy2_2:
# 207 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_Boy2BrineyLeftTunnel
	goto RustboroCity_EventScript_Boy2_1


RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 215 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 216 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_Twin::
# 221 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
	end


RustboroCity_EventScript_NinjaBoy::
# 226 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
	end


RustboroCity_EventScript_TunnelSign::
# 231 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
	end


RustboroCity_EventScript_DevonCorpSign::
# 236 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_GymSign::
# 241 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 246 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_CitySign::
# 251 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
	end


RustboroCity_EventScript_TrainersSchoolSign::
# 256 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_CuttersHouseSign::
# 261 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
	end


RustboroCity_EventScript_LittleBoy::
# 266 "data/maps/RustboroCity/scripts.pory"
	lock
# 267 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 268 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 269 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 270 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_LittleGirl::
# 276 "data/maps/RustboroCity/scripts.pory"
	lock
# 277 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 278 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 279 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 280 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_Man2::
# 286 "data/maps/RustboroCity/scripts.pory"
	lock
# 287 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 288 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 289 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_EventScript_StolenGoodsTrigger0::
# 294 "data/maps/RustboroCity/scripts.pory"
	lockall
# 295 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 296 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 297 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 298 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger1::
# 303 "data/maps/RustboroCity/scripts.pory"
	lockall
# 304 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 305 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 306 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 307 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger2::
# 312 "data/maps/RustboroCity/scripts.pory"
	lockall
# 313 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 314 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 315 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 316 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger3::
# 321 "data/maps/RustboroCity/scripts.pory"
	lockall
# 322 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 323 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 324 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 325 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger4::
# 330 "data/maps/RustboroCity/scripts.pory"
	lockall
# 331 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 332 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 333 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 334 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsScene::
# 339 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 340 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 341 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 342 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 343 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 344 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 345 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 347 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 348 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 350 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 351 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 352 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 353 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 354 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 355 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 356 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 357 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 358 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 359 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 360 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 361 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 362 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 363 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 364 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 365 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 366 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


RustboroCity_EventScript_ShadyCharacterTookOff::
# 371 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
	return


RustboroCity_EventScript_YouGotItThankYou::
# 376 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
	return


RustboroCity_EventScript_EmployeeApproachUp::
# 381 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 382 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachLeft::
# 387 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 388 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachRight::
# 393 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 394 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachDown::
# 399 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 400 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 405 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 406 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 407 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 408 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


# 412 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 429 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 430 "data/maps/RustboroCity/scripts.pory"
	step_end

# 433 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 450 "data/maps/RustboroCity/scripts.pory"
	step_end

# 453 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 458 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 460 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 461 "data/maps/RustboroCity/scripts.pory"
	step_end

# 464 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 470 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 471 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 472 "data/maps/RustboroCity/scripts.pory"
	step_end

# 475 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 476 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 477 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 478 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 479 "data/maps/RustboroCity/scripts.pory"
	step_end

# 482 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 483 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 484 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 485 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 486 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 487 "data/maps/RustboroCity/scripts.pory"
	step_end

# 490 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 491 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 492 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 493 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 494 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 495 "data/maps/RustboroCity/scripts.pory"
	step_end

# 498 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 499 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 500 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 501 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 502 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 503 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 504 "data/maps/RustboroCity/scripts.pory"
	step_end

# 507 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 508 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 509 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 510 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 511 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 512 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 513 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 514 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 515 "data/maps/RustboroCity/scripts.pory"
	step_end

RustboroCity_EventScript_DevonEmployee1::
# 519 "data/maps/RustboroCity/scripts.pory"
	lock
# 520 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 521 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_DevonEmployee1_2
RustboroCity_EventScript_DevonEmployee1_1:
# 524 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 525 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_DevonEmployee1_2:
# 522 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
	goto RustboroCity_EventScript_DevonEmployee1_1


RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 530 "data/maps/RustboroCity/scripts.pory"
	waitse
# 531 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 532 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 537 "data/maps/RustboroCity/scripts.pory"
	lockall
# 538 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 539 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 544 "data/maps/RustboroCity/scripts.pory"
	lockall
# 545 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 546 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 551 "data/maps/RustboroCity/scripts.pory"
	lockall
# 552 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 553 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 558 "data/maps/RustboroCity/scripts.pory"
	lockall
# 559 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 560 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_EmployeeAskToGetGoods::
# 565 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_2
RustboroCity_EventScript_EmployeeAskToGetGoods_1:
# 568 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_5
RustboroCity_EventScript_EmployeeAskToGetGoods_4:
# 571 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_8
RustboroCity_EventScript_EmployeeAskToGetGoods_7:
# 574 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RustboroCity_EventScript_EmployeeAskToGetGoods_11
RustboroCity_EventScript_EmployeeAskToGetGoods_10:
# 577 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 578 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 579 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 580 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 581 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_EmployeeAskToGetGoods_2:
# 566 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerUp1
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_1

RustboroCity_EventScript_EmployeeAskToGetGoods_5:
# 569 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerLeft1
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_4

RustboroCity_EventScript_EmployeeAskToGetGoods_8:
# 572 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerDown1
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_7

RustboroCity_EventScript_EmployeeAskToGetGoods_11:
# 575 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeApproachPlayerDown1
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_10


RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 586 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 587 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 589 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 590 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 591 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 592 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 593 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 594 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 599 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 600 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 602 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 603 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 604 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 605 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 607 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 612 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 613 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 615 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 616 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 618 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 620 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 625 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 626 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 628 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 629 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 633 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 635 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


# 639 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 640 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 641 "data/maps/RustboroCity/scripts.pory"
	step_end

RustboroCity_EventScript_ReturnGoodsTrigger0::
# 645 "data/maps/RustboroCity/scripts.pory"
	lockall
# 646 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 647 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger1::
# 652 "data/maps/RustboroCity/scripts.pory"
	lockall
# 653 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 654 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger2::
# 659 "data/maps/RustboroCity/scripts.pory"
	lockall
# 660 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 661 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger3::
# 666 "data/maps/RustboroCity/scripts.pory"
	lockall
# 667 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 668 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoods::
# 673 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq RustboroCity_EventScript_ReturnGoods_2
RustboroCity_EventScript_ReturnGoods_1:
# 676 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RustboroCity_EventScript_ReturnGoods_5
RustboroCity_EventScript_ReturnGoods_4:
# 679 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RustboroCity_EventScript_ReturnGoods_8
RustboroCity_EventScript_ReturnGoods_7:
# 682 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RustboroCity_EventScript_ReturnGoods_11
RustboroCity_EventScript_ReturnGoods_10:
# 685 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq RustboroCity_EventScript_ReturnGoods_14
RustboroCity_EventScript_ReturnGoods_13:
# 688 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 689 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 690 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ReturnGoods_17
RustboroCity_EventScript_ReturnGoods_16:
# 693 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 694 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 695 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 696 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 697 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 698 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 699 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 700 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 701 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_ReturnGoods_2:
# 674 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerUp2
	goto RustboroCity_EventScript_ReturnGoods_1

RustboroCity_EventScript_ReturnGoods_5:
# 677 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerLeft2
	goto RustboroCity_EventScript_ReturnGoods_4

RustboroCity_EventScript_ReturnGoods_8:
# 680 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerDown2
	goto RustboroCity_EventScript_ReturnGoods_7

RustboroCity_EventScript_ReturnGoods_11:
# 683 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeApproachPlayerDown2
	goto RustboroCity_EventScript_ReturnGoods_10

RustboroCity_EventScript_ReturnGoods_14:
# 686 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeFacePlayerRight
	goto RustboroCity_EventScript_ReturnGoods_13

RustboroCity_EventScript_ReturnGoods_17:
# 691 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_BagFull
	goto RustboroCity_EventScript_ReturnGoods_16


RustboroCity_EventScript_BagFull::
# 706 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	return


RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 711 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 712 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 724 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 725 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 726 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 727 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 728 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 737 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 738 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 740 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 741 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 745 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 753 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 754 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 756 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 758 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 760 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeFacePlayerRight::
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 768 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 769 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 771 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_Rival::
# 776 "data/maps/RustboroCity/scripts.pory"
	lockall
# 777 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_Rival_2
RustboroCity_EventScript_Rival_1:
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return

RustboroCity_EventScript_Rival_2:
# 778 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
	goto RustboroCity_EventScript_Rival_1


RustboroCity_EventScript_PlayRivalMusic::
# 786 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 787 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_PlayRivalMusic_2
RustboroCity_EventScript_PlayRivalMusic_1:
# 790 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RustboroCity_EventScript_PlayRivalMusic_5
RustboroCity_EventScript_PlayRivalMusic_4:
	return

RustboroCity_EventScript_PlayRivalMusic_2:
# 788 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PlayMayMusic
	goto RustboroCity_EventScript_PlayRivalMusic_1

RustboroCity_EventScript_PlayRivalMusic_5:
# 791 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_PlayBrendanMusic
	goto RustboroCity_EventScript_PlayRivalMusic_4


RustboroCity_EventScript_PlayMayMusic::
# 797 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return


RustboroCity_EventScript_PlayBrendanMusic::
# 802 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return


RustboroCity_EventScript_RivalTrigger0::
# 807 "data/maps/RustboroCity/scripts.pory"
	lockall
# 808 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 815 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 817 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 819 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 820 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger1::
# 824 "data/maps/RustboroCity/scripts.pory"
	lockall
# 825 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 826 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 827 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 829 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 830 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 832 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 833 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 834 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 835 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 836 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 837 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger2::
# 841 "data/maps/RustboroCity/scripts.pory"
	lockall
# 842 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 843 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 844 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 845 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 846 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 847 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 848 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 849 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 850 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 851 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 852 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 853 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 854 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger3::
# 858 "data/maps/RustboroCity/scripts.pory"
	lockall
# 859 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 860 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 861 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 862 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 863 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 864 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 865 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 866 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 867 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 868 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 869 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 870 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 871 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger4::
# 875 "data/maps/RustboroCity/scripts.pory"
	lockall
# 876 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 877 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 878 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 879 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 880 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 881 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 882 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 883 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 884 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 885 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 886 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 887 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 888 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger5::
# 892 "data/maps/RustboroCity/scripts.pory"
	lockall
# 893 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 894 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 895 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 896 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 897 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 898 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 899 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 900 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 901 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 902 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 903 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 904 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 905 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger6::
# 909 "data/maps/RustboroCity/scripts.pory"
	lockall
# 910 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 911 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 912 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 913 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 914 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 915 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 916 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 917 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 918 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 919 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 920 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 921 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 922 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger7::
# 926 "data/maps/RustboroCity/scripts.pory"
	lockall
# 927 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 928 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 929 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 930 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 931 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 932 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 933 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 934 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 935 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 936 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 937 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 938 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 939 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalEncounter::
# 943 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 944 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalEncounter_2
RustboroCity_EventScript_RivalEncounter_1:
# 947 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RustboroCity_EventScript_RivalEncounter_5
RustboroCity_EventScript_RivalEncounter_4:
	end

RustboroCity_EventScript_RivalEncounter_2:
# 945 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayEncounter
	goto RustboroCity_EventScript_RivalEncounter_1

RustboroCity_EventScript_RivalEncounter_5:
# 948 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanEncounter
	goto RustboroCity_EventScript_RivalEncounter_4


RustboroCity_EventScript_MayEncounter::
# 954 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayEncounter_2
RustboroCity_EventScript_MayEncounter_1:
# 957 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayEncounter_5
RustboroCity_EventScript_MayEncounter_4:
# 960 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 961 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 962 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 963 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 964 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 965 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 966 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 967 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 968 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 969 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 970 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 971 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 972 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 973 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 974 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_MayEncounter_8
RustboroCity_EventScript_MayEncounter_7:
# 977 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 978 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 979 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MayEncounter_2:
# 955 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
	goto RustboroCity_EventScript_MayEncounter_1

RustboroCity_EventScript_MayEncounter_5:
# 958 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayAskToBattle
	goto RustboroCity_EventScript_MayEncounter_4

RustboroCity_EventScript_MayEncounter_8:
# 975 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
	goto RustboroCity_EventScript_MayEncounter_7


RustboroCity_EventScript_MayAskToBattle::
# 984 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 985 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 986 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_MayAskToBattle_2
RustboroCity_EventScript_MayAskToBattle_1:
# 989 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 990 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MayAskToBattle_2:
# 987 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
	goto RustboroCity_EventScript_MayAskToBattle_1


RustboroCity_EventScript_BattleMay::
# 995 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 996 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 997 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMay_3
# 999 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMay_4
# 1001 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMay_5
RustboroCity_EventScript_BattleMay_1:
	end

RustboroCity_EventScript_BattleMay_3:
# 998 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMayTreecko
	goto RustboroCity_EventScript_BattleMay_1

RustboroCity_EventScript_BattleMay_4:
# 1000 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMayTorchic
	goto RustboroCity_EventScript_BattleMay_1

RustboroCity_EventScript_BattleMay_5:
# 1002 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMayMudkip
	goto RustboroCity_EventScript_BattleMay_1


RustboroCity_EventScript_MayBrineyHint::
# 1008 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 1009 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_MayBrineyHint_2
RustboroCity_EventScript_MayBrineyHint_1:
# 1012 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MayBrineyHint_2:
# 1010 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_MayBrineyHint_1


RustboroCity_EventScript_RestoreBgm::
# 1017 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 1018 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
	return


RustboroCity_EventScript_BattleMayTreecko::
# 1023 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 1024 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1025 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
	end


RustboroCity_EventScript_BattleMayTorchic::
# 1030 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 1031 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1032 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
	end


RustboroCity_EventScript_BattleMayMudkip::
# 1037 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 1038 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1039 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
	end


RustboroCity_EventScript_BrendanEncounter::
# 1044 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanEncounter_2
RustboroCity_EventScript_BrendanEncounter_1:
# 1047 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanEncounter_5
RustboroCity_EventScript_BrendanEncounter_4:
# 1050 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1051 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 1052 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1053 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1054 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1055 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 1056 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 1057 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1058 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 1059 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1060 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 1061 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1062 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 1063 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_BrendanEncounter_8
RustboroCity_EventScript_BrendanEncounter_7:
# 1066 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1067 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1068 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_BrendanEncounter_2:
# 1045 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
	goto RustboroCity_EventScript_BrendanEncounter_1

RustboroCity_EventScript_BrendanEncounter_5:
# 1048 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanAskToBattle
	goto RustboroCity_EventScript_BrendanEncounter_4

RustboroCity_EventScript_BrendanEncounter_8:
# 1064 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan
	goto RustboroCity_EventScript_BrendanEncounter_7


RustboroCity_EventScript_BrendanAskToBattle::
# 1073 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 1074 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_BrendanAskToBattle_2
RustboroCity_EventScript_BrendanAskToBattle_1:
# 1077 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1078 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_BrendanAskToBattle_2:
# 1075 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan
	goto RustboroCity_EventScript_BrendanAskToBattle_1


RustboroCity_EventScript_BattleBrendan::
# 1083 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 1084 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1085 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendan_3
# 1087 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendan_4
# 1089 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendan_5
RustboroCity_EventScript_BattleBrendan_1:
	end

RustboroCity_EventScript_BattleBrendan_3:
# 1086 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendanTreecko
	goto RustboroCity_EventScript_BattleBrendan_1

RustboroCity_EventScript_BattleBrendan_4:
# 1088 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendanTorchic
	goto RustboroCity_EventScript_BattleBrendan_1

RustboroCity_EventScript_BattleBrendan_5:
# 1090 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendanMudkip
	goto RustboroCity_EventScript_BattleBrendan_1


RustboroCity_EventScript_BrendanBrineyHint::
# 1096 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 1097 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_BrendanBrineyHint_2
RustboroCity_EventScript_BrendanBrineyHint_1:
# 1100 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_BrendanBrineyHint_2:
# 1098 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_BrendanBrineyHint_1


RustboroCity_EventScript_BattleBrendanTreecko::
# 1105 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1106 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1107 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
	end


RustboroCity_EventScript_BattleBrendanTorchic::
# 1112 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1113 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1114 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
	end


RustboroCity_EventScript_BattleBrendanMudkip::
# 1119 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1120 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1121 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
	end


# 1125 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1126 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1127 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1128 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1129 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1130 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1131 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1132 "data/maps/RustboroCity/scripts.pory"
	step_end

# 1135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1136 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1137 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1138 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1139 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1140 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1141 "data/maps/RustboroCity/scripts.pory"
	step_end

# 1144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1145 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1146 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1147 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1148 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1149 "data/maps/RustboroCity/scripts.pory"
	step_end

# 1152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1153 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1154 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1155 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1156 "data/maps/RustboroCity/scripts.pory"
	step_end

# 1159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1160 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1161 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1162 "data/maps/RustboroCity/scripts.pory"
	step_end

# 1165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1166 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1167 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1168 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1169 "data/maps/RustboroCity/scripts.pory"
	step_end

# 1172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1173 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1174 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1175 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1176 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1177 "data/maps/RustboroCity/scripts.pory"
	step_end

# 1180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1181 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1182 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1183 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1184 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1185 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1186 "data/maps/RustboroCity/scripts.pory"
	step_end

RustboroCity_EventScript_Boy1::
# 1190 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
	end


RustboroCity_Text_WeShortenItToDevon::
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
	.string "We all just shorten it to DEVON.\p"
	.string "That company makes all sorts of\n"
	.string "convenient products.$"

RustboroCity_Text_SneakyLookingManWentAroundCorner::
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
	.string "Come to think of it, yes, a shady-\n"
	.string "looking guy went around the corner.$"

RustboroCity_Text_HaveYouChallengedGym::
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
	.string "challenge?\p"
	.string "When you get that shiny GYM BADGE\n"
	.string "in hand, I guess TRAINERS begin to\l"
	.string "realize what is required of them.$"

RustboroCity_Text_HeyThatsRustborosGymBadge::
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
	.string "Out of all the POKéMON GYM BADGES,\n"
	.string "RUSTBORO's is the coolest, I'd say.$"

RustboroCity_Text_YoureNewAroundHere::
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
	.string "You're a new face around these parts.\p"
	.string "Have you just transferred into the\n"
	.string "POKéMON TRAINER'S SCHOOL?$"

RustboroCity_Text_GymLeaderIsntEasyWithFire::
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
	.string "It's not going to be easy winning with\n"
	.string "my FIRE-type POKéMON…\p"
	.string "FIRE-type POKéMON don't match up\n"
	.string "well against ROCK-type POKéMON…$"

RustboroCity_Text_MrBrineyWalksInTheTunnel::
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
	.string "a cottage by the sea.\p"
	.string "He goes for walks in the tunnel every\n"
	.string "so often.$"

RustboroCity_Text_MrBrineyLovesPeeko::
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
	.string "a cottage by the sea.\p"
	.string "He said he was going shopping in\n"
	.string "SLATEPORT for his pet, PEEKO.\p"
	.string "That old sea dog, he must really love\n"
	.string "that PEEKO.$"

RustboroCity_Text_WowYouHavePokemon::
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
	.string "When I get bigger, I'm going to go\n"
	.string "places with POKéMON, too.$"

RustboroCity_Text_CatchRarePokemonIfIGoToSchool::
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
	.string "If I go to this school, will I be able\n"
	.string "to catch rare POKéMON easily?$"

RustboroCity_Text_PokemonCanChangeLookFromExp::
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
	.string "battles, it can sometimes change in\l"
	.string "the way it looks.$"

RustboroCity_Text_PokemonChangeShape::
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
	.string "If one did that, I would be shocked!$"

RustboroCity_Text_TradePokemonGrowFast::
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
	.string "someone grows fast.\p"
	.string "But if you don't have certain GYM\n"
	.string "BADGES, it may not obey you…$"

RustboroCity_Text_OutOfTheWay::
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
	.string "Out of the way!$"

RustboroCity_Text_WaitDontTakeMyGoods::
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
	.string "Don't take my GOODS!$"

RustboroCity_Text_HelpMeIWasRobbed::
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
	.string "You're that fantastic TRAINER who\n"
	.string "helped me in PETALBURG WOODS!\p"
	.string "Help me! I was robbed by TEAM AQUA!\n"
	.string "I have to get the DEVON GOODS back!\p"
	.string "If I don't…\n"
	.string "I'm going to be in serious trouble.$"

RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel::
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
	.string "off towards the tunnel over there.$"

RustboroCity_Text_YouGotItThankYou::
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
	.string "The DEVON GOODS?\p"
	.string "You did!\n"
	.string "You got them back!\p"
	.string "You really are a great TRAINER!\p"
	.string "I know! As my thanks, I'll give you\n"
	.string "another GREAT BALL!$"

RustboroCity_Text_YoureLoadedWithItems::
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
	.string "I can't give you this GREAT BALL.$"

RustboroCity_Text_PleaseComeWithMe::
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
	.string "Please come with me!$"

RustboroCity_Text_MayHiLetsRegister::
# 1327 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
	.string "You had a MATCH CALL feature put\n"
	.string "on your POKéNAV!\p"
	.string "Let's register each other so we can\n"
	.string "contact one another anytime!\p"
	.string "… … … … … …$"

RustboroCity_Text_RegisteredMay::
# 1336 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
	.string "in the POKéNAV.$"

RustboroCity_Text_MayPassedBrineyWantToBattle::
# 1341 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
	.string "I guess he's on his way home to his\n"
	.string "cottage by the sea.\p"
	.string "How's your POKéDEX coming along,\n"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
	.string "So…\n"
	.string "How about a little battle?$"

RustboroCity_Text_MayOhHaventRaisedPokemonEnough::
# 1352 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "POKéMON very much?\p"
	.string "That's not very good for a TRAINER!$"

RustboroCity_Text_MayWantToBattle::
# 1359 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
	.string "How about a little battle here?$"

RustboroCity_Text_MayImNotGoingToLose::
# 1364 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

RustboroCity_Text_MayDefeat::
# 1369 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

RustboroCity_Text_MayMrBrineyHint::
# 1374 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
	.string "I just passed…\p"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
	.string "might not know this, but MR. BRINEY\l"
	.string "was once a revered seafarer.$"

RustboroCity_Text_BrendanHiLetsRegister::
# 1382 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
	.string "You had a MATCH CALL feature put\n"
	.string "on your POKéNAV! Cool!\p"
	.string "Let's register each other so we can\n"
	.string "get in touch anytime!\p"
	.string "… … … … … …$"

RustboroCity_Text_RegisteredBrendan::
# 1391 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
	.string "in the POKéNAV.$"

RustboroCity_Text_BrendanPassedBrineyWantToBattle::
# 1396 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
	.string "I bet he was on his way home to his\n"
	.string "cottage by the sea.\p"
	.string "{PLAYER}, how's your POKéDEX?\n"
	.string "Have you filled in any pages yet?\p"
	.string "Mine rules.\p"
	.string "Want to have a battle to test how\n"
	.string "far you've progressed?$"

RustboroCity_Text_BrendanNoConfidenceInPokemon::
# 1408 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
	.string "any confidence in your POKéMON?$"

RustboroCity_Text_BrendanWantToBattle::
# 1413 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
	.string "Want to have a battle with me?$"

RustboroCity_Text_BrendanIWontGoEasy::
# 1418 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
	.string "a TRAINER, but I won't go easy!$"

RustboroCity_Text_BrendanDefeat::
# 1423 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

RustboroCity_Text_BrendanMrBrineyHint::
# 1428 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
	.string "MR. BRINEY? The guy I just passed?\p"
	.string "I bet you didn't know this, since you\n"
	.string "just moved here, {PLAYER}, but\l"
	.string "MR. BRINEY was once a great sailor.$"

RustboroCity_Text_TunnelNearingCompletion::
# 1436 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
	.string "completion!”\p"
	.string "…Is what it says on the sign, but\n"
	.string "there's also a big “X” splashed\l"
	.string "across it in red paint…$"

RustboroCity_Text_DevonCorpSign::
# 1444 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
	.string "“For all your living needs, we make\n"
	.string "it all.”$"

RustboroCity_Text_GymSign::
# 1450 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
	.string "LEADER: ROXANNE\p"
	.string "“The ROCK-loving honors student!”$"

RustboroCity_Text_DevonCorpBranchOfficeSign::
# 1456 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
	.string "“Access limited to DEVON employees\n"
	.string "and authorized personnel.”$"

RustboroCity_Text_CitySign::
# 1462 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
	.string "“The city probing the integration of\n"
	.string "nature and science.”$"

RustboroCity_Text_TrainersSchoolSign::
# 1468 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
	.string "“We'll teach you anything about\n"
	.string "POKéMON!”$"

RustboroCity_Text_CuttersHouse::
# 1474 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"

RustboroCity_Text_DevelopedNewPokenavFeature::
# 1478 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
	.string "for the POKéNAV…\p"
	.string "And it turned out great!\p"
	.string "{PLAYER}, may I see that POKéNAV?\n"
	.string "The one our PRESIDENT gave you?$"

RustboroCity_Text_AddedMatchCallPleaseCallMrStone::
# 1486 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
	.string "I added a new feature named\n"
	.string "MATCH CALL to your POKéNAV.\p"
	.string "Using the MATCH CALL feature,\n"
	.string "you can chat with people who have\l"
	.string "been registered in your POKéNAV.\p"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
	.string "be registered in your POKéNAV.\p"
	.string "Test it out.\n"
	.string "Please give our PRESIDENT a call.$"

RustboroCity_Text_PleaseSelectPokenav::
# 1499 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"

RustboroCity_Text_IdBetterGetBackToWork::
# 1503 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
	.string "Please take care, {PLAYER}!$"

RustboroCity_Text_YouCanHave2On2Battle::
# 1508 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
	.string "You can have a 2-on-2 battle even\n"
	.string "if you're not with another TRAINER.\p"
	.string "If you catch the eyes of two TRAINERS\n"
	.string "when you have two or more POKéMON,\l"
	.string "they'll both challenge you.\p"
	.string "Don't you think it'd be cool if you\n"
	.string "could beat two TRAINERS by yourself?$"
