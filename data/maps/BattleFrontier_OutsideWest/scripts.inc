BattleFrontier_OutsideWest_MapScripts::
# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
	.byte 0


BattleFrontier_OutsideWest_OnTransition::
# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	end


BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryAttendant_2
BattleFrontier_OutsideWest_EventScript_FerryAttendant_1:
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
	end

BattleFrontier_OutsideWest_EventScript_FerryAttendant_2:
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_NoSSTicket
	goto BattleFrontier_OutsideWest_EventScript_FerryAttendant_1


BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_3
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_4
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_5
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_6
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1:
	end

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_3:
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryToSlateport
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_4:
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryToLilycove
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_5:
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_6:
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1


BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryToSlateport_2
BattleFrontier_OutsideWest_EventScript_FerryToSlateport_1:
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_FerryToSlateport_2:
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
	goto BattleFrontier_OutsideWest_EventScript_FerryToSlateport_1


BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryToLilycove_2
BattleFrontier_OutsideWest_EventScript_FerryToLilycove_1:
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_FerryToLilycove_2:
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
	goto BattleFrontier_OutsideWest_EventScript_FerryToLilycove_1


BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
	end


BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
	return


BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
	end


BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Boy1::
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_Man1::
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Maniac1::
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
	end


BattleFrontier_OutsideWest_EventScript_Maniac2::
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
	end


BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_Camper::
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Camper_2
BattleFrontier_OutsideWest_EventScript_Camper_1:
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Camper_5
BattleFrontier_OutsideWest_EventScript_Camper_4:
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Camper_8
BattleFrontier_OutsideWest_EventScript_Camper_7:
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Camper_11
BattleFrontier_OutsideWest_EventScript_Camper_10:
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_Camper_2:
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	goto BattleFrontier_OutsideWest_EventScript_Camper_1

BattleFrontier_OutsideWest_EventScript_Camper_5:
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
	goto BattleFrontier_OutsideWest_EventScript_Camper_4

BattleFrontier_OutsideWest_EventScript_Camper_8:
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	goto BattleFrontier_OutsideWest_EventScript_Camper_7

BattleFrontier_OutsideWest_EventScript_Camper_11:
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	goto BattleFrontier_OutsideWest_EventScript_Camper_10


BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
	return


BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
	return


BattleFrontier_OutsideWest_EventScript_Girl::
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Girl_2
BattleFrontier_OutsideWest_EventScript_Girl_1:
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Girl_5
BattleFrontier_OutsideWest_EventScript_Girl_4:
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Girl_8
BattleFrontier_OutsideWest_EventScript_Girl_7:
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Girl_11
BattleFrontier_OutsideWest_EventScript_Girl_10:
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end

BattleFrontier_OutsideWest_EventScript_Girl_2:
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
	goto BattleFrontier_OutsideWest_EventScript_Girl_1

BattleFrontier_OutsideWest_EventScript_Girl_5:
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
	goto BattleFrontier_OutsideWest_EventScript_Girl_4

BattleFrontier_OutsideWest_EventScript_Girl_8:
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_GirlShudderWest
	goto BattleFrontier_OutsideWest_EventScript_Girl_7

BattleFrontier_OutsideWest_EventScript_Girl_11:
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_GirlShudderEast
	goto BattleFrontier_OutsideWest_EventScript_Girl_10


BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
	return


BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
	return


BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
	return


BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
	return


# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end

# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end

# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end

# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end

BattleFrontier_OutsideWest_EventScript_Woman2::
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Woman2_2
BattleFrontier_OutsideWest_EventScript_Woman2_1:
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
	end

BattleFrontier_OutsideWest_EventScript_Woman2_2:
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
	goto BattleFrontier_OutsideWest_EventScript_Woman2_1


BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Gentleman::
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Lass::
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_ExpertM::
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Man2::
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Woman1::
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_FatMan1::
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_FatMan2::
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Woman3::
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_Boy2::
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_OldMan::
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Man4::
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
	end


BattleFrontier_OutsideWest_EventScript_PokefanF::
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_Text_BattleDomeSign::
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
	.string "Your path to the invincible superstar!$"

BattleFrontier_OutsideWest_Text_BattleFactorySign::
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
	.string "Seek out the toughest POKéMON!$"

BattleFrontier_OutsideWest_Text_BattlePikeSign::
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
	.string "Choose one of three paths!$"

BattleFrontier_OutsideWest_Text_ThisIsBattleTower::
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
	.string "TRAINERS bring their best-raised\n"
	.string "POKéMON for elimination-style matches.$"

BattleFrontier_OutsideWest_Text_MayISeeYourTicket::
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
	.string "May I see your TICKET?$"

BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard::
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
	.string "I'm terribly sorry.\p"
	.string "You must have a TICKET to board\n"
	.string "the ferry.$"

BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo::
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
	.string "Perfect! That's all you need!\p"
	.string "And where would you like to go?$"

BattleFrontier_OutsideWest_Text_SlateportItIs::
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"

BattleFrontier_OutsideWest_Text_LilycoveItIs::
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"

BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime::
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"

BattleFrontier_OutsideWest_Text_PleaseBoardFerry::
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
	.string "departure.$"

BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo::
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"

BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends::
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
	.string "But here…\l"
	.string "I've been useless!$"

BattleFrontier_OutsideWest_Text_CantFindBattleTower::
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
	.string "but I can't find it even though I have\l"
	.string "a map of the BATTLE FRONTIER.\p"
	.string "This place is just too big!$"

BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere::
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
	.string "as I arrived here.\p"
	.string "But on the way, I got seasick…\n"
	.string "Urrrrp…$"

BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere::
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
	.string "here, you know?\p"
	.string "Only those TRAINERS who've been\n"
	.string "recognized as tough are brought here.\p"
	.string "That's why many TRAINERS don't even\n"
	.string "know about the BATTLE FRONTIER.$"

BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons::
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
	.string "Are you sure we can make challenges\n"
	.string "even if we don't have any POKéMON?$"

BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons::
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
	.string "I'm sure it'll be okay.\p"
	.string "I think…\p"
	.string "But remember that big scary guy?\n"
	.string "He said, “I'll lend you POKéMON!”$"

BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons::
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
	.string "You can rent strong POKéMON there.\p"
	.string "But it makes me wonder.\n"
	.string "Who's raising those rental POKéMON?$"

BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper::
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
	.string "PIKE because of SEVIPER…\p"
	.string "B-but I came all the way here, so I will\n"
	.string "try to conquer everything!\l"
	.string "…Shudder…$"

BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors::
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
	.string "One, two, three!\p"
	.string "… … … … … …$"

BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge::
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
	.string "I will take the BATTLE PIKE challenge!$"

BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge::
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
	.string "I lost.\p"
	.string "I guess I'm not very lucky today.\n"
	.string "I'll put off my BATTLE PIKE challenge\l"
	.string "until tomorrow.$"

BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling::
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
	.string "for some unknown reason, would choose\l"
	.string "fishing over battling.\p"
	.string "Huh? You can't catch anything here?\n"
	.string "That's disappointing…$"

BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol::
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
	.string "matter what, until I get a Symbol.$"

BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome::
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
	.string "the BATTLE DOME?\p"
	.string "I'll wish you the best of luck.\n"
	.string "Let us both win our way up and meet\l"
	.string "in challenges.$"

BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa::
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
	.string "The BATTLE DOME is here!\l"
	.string "Go get 'em, Grandpa!$"

BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe::
# 540 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
	.string "I won't let GENTLEMEN beat me!\p"
	.string "But where is the entrance?$"

BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo::
# 546 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
	.string "that long ago.\p"
	.string "But, now look at this place! Amazing!\n"
	.string "I'll bring my mother out to see this.$"

BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier::
# 553 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
	.string "FRONTIER!\p"
	.string "I'm sure to grab attention with\n"
	.string "my looks and ability!$"

BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople::
# 560 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
	.string "It looks like this square's filled with\n"
	.string "tough people.\p"
	.string "Munch, munch…$"

BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike::
# 567 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
	.string "A while back, I met this older girl\n"
	.string "at the BATTLE PIKE.\p"
	.string "She had these eyes that were scary\n"
	.string "in a real ornery way.\p"
	.string "Crunch, munch…\p"
	.string "She got all furious: “Will you quit\n"
	.string "eating!” Then she whaled on me.\p"
	.string "It was a hair-raising kind of\n"
	.string "scary experience, sure enough.\p"
	.string "Crunch, munch…$"

BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet::
# 581 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
	.string "That's nothing!\p"
	.string "Why, the last time I cheered for him,\n"
	.string "our eyes met and sparks flew!$"

BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering::
# 588 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
	.string "Pfft!\p"
	.string "That only happened because\n"
	.string "I happened to be sitting next to you!\p"
	.string "The DOME ACE only looked our way\n"
	.string "because my cheering was so loud!$"

BattleFrontier_OutsideWest_Text_DomeAceIsMine::
# 597 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
	.string "Keep that racket down!\p"
	.string "You fair-weather fans should stick\n"
	.string "to cheering for some GYM LEADER!\p"
	.string "The DOME ACE is mine!\n"
	.string "The only idol for me!$"

BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers::
# 606 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
	.string "It's hard to believe, but they once\n"
	.string "were TRAINERS, and good ones, too.\p"
	.string "They used to be incredibly tough,\n"
	.string "and they were famous, too.\p"
	.string "But they were obliterated by this\n"
	.string "certain TRAINER at a tournament.\p"
	.string "They were so thoroughly whipped,\n"
	.string "they became smitten by the TRAINER.\p"
	.string "Now they're just fans of the TRAINER.\n"
	.string "They go cheer for their idol at the\l"
	.string "BATTLE DOME every day now.$"

BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier::
# 621 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
	.string "a POKéMON with an unusually long tail\l"
	.string "somewhere in the BATTLE FRONTIER.\p"
	.string "It must be adorable. I'm sure of it…\p"
	.string "Oh, challenges can wait. I feel driven\n"
	.string "to find the delightful creature!$"
