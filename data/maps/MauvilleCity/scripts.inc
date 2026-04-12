MauvilleCity_MapScripts::
# 2 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
	.byte 0


MauvilleCity_OnTransition::
# 6 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 7 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 8 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 9 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 10 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 11 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 12 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_OnTransition_2
MauvilleCity_OnTransition_1:
	end

MauvilleCity_OnTransition_2:
# 13 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_MoveWattsonBackToGym
	goto MauvilleCity_OnTransition_1


MauvilleCity_EventScript_MoveWattsonBackToGym::
# 19 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 20 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 21 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	return


MauvilleCity_EventScript_Boy::
# 26 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
	end


MauvilleCity_EventScript_Maniac::
# 31 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
	end


MauvilleCity_EventScript_Woman::
# 36 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
	end


MauvilleCity_EventScript_RichBoy::
# 41 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
	end


MauvilleCity_EventScript_CitySign::
# 46 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_GymSign::
# 51 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BikeShopSign::
# 56 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_GameCornerSign::
# 61 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_SchoolKidM::
# 66 "data/maps/MauvilleCity/scripts.pory"
	lock
# 67 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 68 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_SchoolKidM_2
MauvilleCity_EventScript_SchoolKidM_1:
# 71 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 72 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 73 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_SchoolKidM_2:
# 69 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_TVExplained
	goto MauvilleCity_EventScript_SchoolKidM_1


MauvilleCity_EventScript_TVExplained::
# 78 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 79 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallysUncle::
# 84 "data/maps/MauvilleCity/scripts.pory"
	lock
# 85 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 86 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallysUncle_2
MauvilleCity_EventScript_WallysUncle_1:
# 89 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 90 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 91 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 92 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_WallysUncle_2:
# 87 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_UncleAskPlayerToBattleWally
	goto MauvilleCity_EventScript_WallysUncle_1


MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 98 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 100 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 101 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Wally::
# 107 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 108 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_Wally_2
MauvilleCity_EventScript_Wally_1:
# 111 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 112 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 114 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 115 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 116 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 117 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 119 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 120 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 121 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 122 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 124 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_Wally_2:
# 109 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyRequestBattleAgain
	goto MauvilleCity_EventScript_Wally_1


MauvilleCity_EventScript_BattleWallyPrompt::
# 129 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_EventScript_BattleWallyPrompt_2
MauvilleCity_EventScript_BattleWallyPrompt_1:
# 132 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_EventScript_BattleWallyPrompt_5
MauvilleCity_EventScript_BattleWallyPrompt_4:
# 135 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 136 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 137 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_9
# 139 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_10
MauvilleCity_EventScript_BattleWallyPrompt_7:
	end

MauvilleCity_EventScript_BattleWallyPrompt_2:
# 130 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_BattleWally
	goto MauvilleCity_EventScript_BattleWallyPrompt_1

MauvilleCity_EventScript_BattleWallyPrompt_5:
# 133 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DeclineWallyBattle
	goto MauvilleCity_EventScript_BattleWallyPrompt_4

MauvilleCity_EventScript_BattleWallyPrompt_9:
# 138 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitNorth
	goto MauvilleCity_EventScript_BattleWallyPrompt_7

MauvilleCity_EventScript_BattleWallyPrompt_10:
# 140 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleExitEast
	goto MauvilleCity_EventScript_BattleWallyPrompt_7


MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 148 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 149 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 151 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 152 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 155 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 157 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 159 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 160 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 161 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_WallyAndUncleExitEast::
# 167 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 168 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
# 169 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 170 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 171 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 172 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 173 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 174 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 175 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 177 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 178 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 179 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 180 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
# 181 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 182 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end


MauvilleCity_EventScript_DefeatedWally::
# 187 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 188 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 189 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 190 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 191 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 192 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 193 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 194 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MauvilleCity_EventScript_DefeatedWally_2
MauvilleCity_EventScript_DefeatedWally_1:
# 197 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq MauvilleCity_EventScript_DefeatedWally_5
MauvilleCity_EventScript_DefeatedWally_4:
# 200 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 201 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 202 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 203 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 204 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 205 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq MauvilleCity_EventScript_DefeatedWally_8
MauvilleCity_EventScript_DefeatedWally_7:
# 208 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq MauvilleCity_EventScript_DefeatedWally_11
MauvilleCity_EventScript_DefeatedWally_10:
# 211 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 212 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvilleCity_EventScript_DefeatedWally_2:
# 195 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottApproachPlayerNorth
	goto MauvilleCity_EventScript_DefeatedWally_1

MauvilleCity_EventScript_DefeatedWally_5:
# 198 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottApproachPlayerEast
	goto MauvilleCity_EventScript_DefeatedWally_4

MauvilleCity_EventScript_DefeatedWally_8:
# 206 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottExitNorth
	goto MauvilleCity_EventScript_DefeatedWally_7

MauvilleCity_EventScript_DefeatedWally_11:
# 209 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_ScottExitEast
	goto MauvilleCity_EventScript_DefeatedWally_10


MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 217 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 218 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 219 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottApproachPlayerEast::
# 224 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 225 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 226 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 227 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitNorth::
# 232 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 233 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 234 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_ScottExitEast::
# 239 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 240 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
# 241 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
	return


MauvilleCity_EventScript_BattleWally::
# 246 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 247 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 248 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 249 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 251 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 252 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 254 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
# 255 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return


MauvilleCity_EventScript_DeclineWallyBattle::
# 261 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 262 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 263 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WallyRequestBattleAgain::
# 268 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 269 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 270 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 271 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


# 275 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 278 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 279 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 280 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 281 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 284 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 285 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 286 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 287 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 288 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 289 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 290 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 293 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 294 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 295 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 296 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 297 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 298 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 299 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 300 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 301 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 302 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 304 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 305 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 308 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 309 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 310 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 311 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 312 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 313 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 317 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 318 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 319 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 320 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 323 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 324 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 325 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 326 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 327 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 330 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 331 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 332 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 333 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 334 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 335 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 338 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 339 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 340 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 341 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 344 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 345 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 346 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 351 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 352 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 354 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 357 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 358 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 360 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 363 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 369 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 372 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 378 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 381 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 382 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 383 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 384 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 386 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 389 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 393 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 396 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 399 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 402 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 414 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 418 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 419 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 420 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 422 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 424 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 427 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 429 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 430 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 431 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 432 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 433 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 434 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 435 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 436 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 437 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 438 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 439 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 442 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 443 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 444 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 445 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 446 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 447 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 448 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 449 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 450 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 451 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 452 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 453 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 454 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 457 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 458 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 459 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 460 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 461 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 462 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 463 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 464 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 465 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 466 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 467 "data/maps/MauvilleCity/scripts.pory"
	step_end

# 470 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 471 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 472 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 473 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 474 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 475 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 476 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 477 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 478 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 479 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 480 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 481 "data/maps/MauvilleCity/scripts.pory"
	step_end

MauvilleCity_EventScript_Wattson::
# 485 "data/maps/MauvilleCity/scripts.pory"
	lock
# 486 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 487 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_Wattson_2
MauvilleCity_EventScript_Wattson_1:
# 490 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq MauvilleCity_EventScript_Wattson_5
MauvilleCity_EventScript_Wattson_4:
# 493 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_Wattson_8
MauvilleCity_EventScript_Wattson_7:
# 496 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 497 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 498 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_Wattson_11
MauvilleCity_EventScript_Wattson_10:
# 501 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 502 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 503 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_Wattson_2:
# 488 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_ReceivedThunderbolt
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_5:
# 491 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_CompletedNewMauville
	goto MauvilleCity_EventScript_Wattson_4

MauvilleCity_EventScript_Wattson_8:
# 494 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BegunNewMauville
	goto MauvilleCity_EventScript_Wattson_7

MauvilleCity_EventScript_Wattson_11:
# 499 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_EventScript_Wattson_10


MauvilleCity_EventScript_BegunNewMauville::
# 508 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 509 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_CompletedNewMauville::
# 514 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 515 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 516 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_CompletedNewMauville_2
MauvilleCity_EventScript_CompletedNewMauville_1:
# 519 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 520 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 521 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_CompletedNewMauville_2:
# 517 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_EventScript_CompletedNewMauville_1


MauvilleCity_EventScript_ReceivedThunderbolt::
# 526 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 527 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_RegisterWallyCall::
# 532 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 533 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 534 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 535 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 536 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 537 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 538 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 539 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 540 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 541 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 542 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 543 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


MauvilleCity_Text_UncleHesTooPeppy::
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
	.string "this boy's got more pep, I suppose…\l"
	.string "But he's become a bit too peppy…$"

MauvilleCity_Text_WallyWantToChallengeGym::
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
	.string "I want to challenge this GYM and see\n"
	.string "how much better I've become.\p"
	.string "Please? May I, please?$"

MauvilleCity_Text_UncleYourePushingIt::
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
	.string "Since you started living with POKéMON,\n"
	.string "you have grown quite a lot stronger.\p"
	.string "But don't you think you're pushing it\n"
	.string "to suddenly challenge a GYM?$"

MauvilleCity_Text_WallyWeCanBeatAnyone::
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
	.string "If I combine forces with RALTS,\n"
	.string "we can beat anyone!$"

MauvilleCity_Text_WallyWillYouBattleMe::
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
	.string "I've gotten a lot stronger since\n"
	.string "we met.\p"
	.string "{PLAYER}, I want you and my UNCLE to\n"
	.string "understand that.\p"
	.string "{PLAYER}, please, will you have\n"
	.string "a battle with me?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong::
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
	.string "become really strong.$"

MauvilleCity_Text_UncleCanYouBattleWally::
# 590 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
	.string "On WALLY's behalf, can I ask you to\l"
	.string "battle with him just this once?\p"
	.string "I don't think he's going to listen to\n"
	.string "any reason the way he is now.$"

MauvilleCity_Text_WallyPleaseBattleMe::
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
	.string "Battle with me, please.$"

MauvilleCity_Text_WallyHereICome::
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
	.string "Okay… Here I come!$"

MauvilleCity_Text_WallyDefeat::
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "I lost…$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf::
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
	.string "I'll go back to VERDANTURF…$"

MauvilleCity_Text_ThankYouNotEnoughToBattle::
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
	.string "Being a TRAINER is tough, isn't it?\p"
	.string "It's not enough just to have POKéMON\n"
	.string "and make them battle. That isn't what\l"
	.string "being a real TRAINER is about.$"

MauvilleCity_Text_UncleNoNeedToBeDown::
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
	.string "down on yourself.\p"
	.string "Why, what's keeping you from becoming\n"
	.string "stronger and stronger?\p"
	.string "Come on, let's go home.\n"
	.string "Everyone's waiting for you.$"

MauvilleCity_Text_UncleVisitUsSometime::
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
	.string "that you must be the TRAINER who kept\l"
	.string "an eye out for WALLY when he caught\l"
	.string "his POKéMON.\p"
	.string "Why don't you visit us in VERDANTURF\n"
	.string "sometime?\l"
	.string "I'm sure WALLY would enjoy it.$"

MauvilleCity_Text_WallyPokenavCall::
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
	.string "I just wanted to tell you that\n"
	.string "my uncle bought me a POKéNAV!\p"
	.string "Now I can get in touch with you\n"
	.string "anytime, {PLAYER}!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MauvilleCity_Text_RegisteredWally::
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
	.string "in the POKéNAV.$"

MauvilleCity_Text_ScottYouDidntHoldBack::
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
	.string "I was watching that match!\p"
	.string "You're friends with that boy WALLY,\n"
	.string "aren't you?\p"
	.string "But you didn't hold anything back\n"
	.string "and beat him impressively.\p"
	.string "Yeah! That's what a real POKéMON\n"
	.string "battle is all about!\p"
	.string "I idolize TRAINERS like that!\p"
	.string "… … … … … …\n"
	.string "I'll be cheering for you!$"

MauvilleCity_Text_WattsonNeedFavorTakeKey::
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
	.string "You look like you have a lot of zip!\l"
	.string "That's a good thing, wahahahaha!\p"
	.string "Fine! I've decided!\n"
	.string "I need a favor, {PLAYER}{KUN}!\p"
	.string "MAUVILLE CITY has an underground\n"
	.string "sector called NEW MAUVILLE.\p"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
	.string "switch off the GENERATOR.\p"
	.string "The GENERATOR has been running a bit\n"
	.string "haywire. It's getting unsafe.\p"
	.string "Here, this is the KEY to get into\n"
	.string "NEW MAUVILLE.$"

MauvilleCity_Text_WattsonWontBeChallenge::
# 693 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
	.string "It won't be a challenge to you.\p"
	.string "The entrance to NEW MAUVILLE is just\n"
	.string "a short SURF away from ROUTE 110.\p"
	.string "That's it, then, you have my trust!\n"
	.string "Wahahahaha!$"

MauvilleCity_Text_WattsonThanksTakeTM::
# 702 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
	.string "the right choice asking you!\p"
	.string "This is my thanks--a TM containing\n"
	.string "THUNDERBOLT!\p"
	.string "Go on, you've earned it!$"

MauvilleCity_Text_WattsonYoungTakeCharge::
# 711 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "It pleases me to no end to see\n"
	.string "the young step up and take charge!$"

MauvilleCity_Text_NurseHurtMonBackToHealth::
# 717 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
	.string "battles and stuff…\p"
	.string "But if your POKéMON gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough::
# 724 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_RydelVeryGenerous::
# 731 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
	.string "RYDEL, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike::
# 737 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
	.string "wild POKéMON could jump you.$"

MauvilleCity_Text_CitySign::
# 742 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
	.string "“The bright and shiny city of fun!”$"

MauvilleCity_Text_GymSign::
# 747 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
	.string "LEADER: WATTSON\l"
	.string "“The cheerfully electrifying man!”$"

MauvilleCity_Text_BikeShopSign::
# 753 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
	.string "soul!”\l"
	.string "RYDEL'S CYCLES$"

MauvilleCity_Text_GameCornerSign::
# 759 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
	.string "MAUVILLE GAME CORNER$"

MauvilleCity_Text_ExplainTV::
# 764 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
	.string "They've added a bunch of cool new\n"
	.string "shows recently.\p"
	.string "TV is so cool. I've seen my friends on\n"
	.string "TV just out of the blue.\p"
	.string "And, sometimes, they even put you on TV\n"
	.string "without telling you.\p"
	.string "I wish I would be on TV sometime.\p"
	.string "That's why I think you should check\n"
	.string "out TVs whenever you can.$"

MauvilleCity_Text_BeenCheckingOutTV::
# 777 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
