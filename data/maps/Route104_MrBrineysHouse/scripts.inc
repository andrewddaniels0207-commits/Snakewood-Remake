Route104_MrBrineysHouse_MapScripts::
# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_OnTransition
	.byte 0


Route104_MrBrineysHouse_OnTransition::
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_BRINEY_HOUSE_STATE, 1
	goto_if_eq Route104_MrBrineysHouse_OnTransition_2
Route104_MrBrineysHouse_OnTransition_1:
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_OnTransition_5
Route104_MrBrineysHouse_OnTransition_4:
	end

Route104_MrBrineysHouse_OnTransition_2:
# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos
	goto Route104_MrBrineysHouse_OnTransition_1

Route104_MrBrineysHouse_OnTransition_5:
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call Route104_MrBrineysHouse_EventScript_HideRustboroRival
	goto Route104_MrBrineysHouse_OnTransition_4


Route104_MrBrineysHouse_EventScript_HideRustboroRival::
# 17 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
	return


Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos::
# 22 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_BRINEY, 9, 3
# 23 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_PEEKO, 9, 6
# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
	return


Route104_MrBrineysHouse_EventScript_Briney::
# 30 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 32 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_Briney_2
Route104_MrBrineysHouse_EventScript_Briney_1:
# 35 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_Briney_5
Route104_MrBrineysHouse_EventScript_Briney_4:
# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_Briney_8
Route104_MrBrineysHouse_EventScript_Briney_7:
# 41 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound
	end

Route104_MrBrineysHouse_EventScript_Briney_2:
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call Route104_MrBrineysHouse_EventScript_SailingIntro
	goto Route104_MrBrineysHouse_EventScript_Briney_1

Route104_MrBrineysHouse_EventScript_Briney_5:
# 36 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailBothDeliveries
	goto Route104_MrBrineysHouse_EventScript_Briney_4

Route104_MrBrineysHouse_EventScript_Briney_8:
# 39 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailDeliverPackage
	goto Route104_MrBrineysHouse_EventScript_Briney_7


Route104_MrBrineysHouse_EventScript_SailingIntro::
# 46 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 47 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko, MSGBOX_DEFAULT
# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
# 49 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route104_MrBrineysHouse_EventScript_SailingIntro_2
Route104_MrBrineysHouse_EventScript_SailingIntro_1:
# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
	end

Route104_MrBrineysHouse_EventScript_SailingIntro_2:
# 50 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
	goto Route104_MrBrineysHouse_EventScript_SailingIntro_1


Route104_MrBrineysHouse_EventScript_WhereAreWeBound::
# 57 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	message Route104_MrBrineysHouse_Text_WhereAreWeBound
# 58 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 59 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	multichoicedefault 20, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 0, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_3
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 1, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_4
# 65 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case MULTI_B_PRESSED, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_5
Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1:
	end

Route104_MrBrineysHouse_EventScript_WhereAreWeBound_3:
# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1

Route104_MrBrineysHouse_EventScript_WhereAreWeBound_4:
# 64 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineSailing
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1

Route104_MrBrineysHouse_EventScript_WhereAreWeBound_5:
# 66 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineSailing
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1


Route104_MrBrineysHouse_EventScript_SailBothDeliveries::
# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route104_MrBrineysHouse_EventScript_SailBothDeliveries_2
Route104_MrBrineysHouse_EventScript_SailBothDeliveries_1:
# 76 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
	end

Route104_MrBrineysHouse_EventScript_SailBothDeliveries_2:
# 74 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
	goto Route104_MrBrineysHouse_EventScript_SailBothDeliveries_1


Route104_MrBrineysHouse_EventScript_SailDeliverPackage::
# 81 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route104_MrBrineysHouse_EventScript_SailDeliverPackage_2
Route104_MrBrineysHouse_EventScript_SailDeliverPackage_1:
# 85 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
	end

Route104_MrBrineysHouse_EventScript_SailDeliverPackage_2:
# 83 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
	goto Route104_MrBrineysHouse_EventScript_SailDeliverPackage_1


Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing::
# 90 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail, MSGBOX_DEFAULT
# 91 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
	end


Route104_MrBrineysHouse_EventScript_DeclineSailing::
# 96 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail, MSGBOX_DEFAULT
# 97 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
	end


Route104_MrBrineysHouse_EventScript_SailToDewford::
# 102 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford, MSGBOX_DEFAULT
# 103 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 104 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 106 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 107 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 108 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 109 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 110 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 111 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL
# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 13, 51
# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 114 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
	end


Route104_MrBrineysHouse_EventScript_Peeko::
# 119 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 121 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 123 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko, MSGBOX_DEFAULT
# 124 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
# 125 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
	end


Route104_MrBrineysHouse_Text_WaitUpPeeko::
# 129 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Hold on, lass!\n"
	.string "Wait up, PEEKO!$"

Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford::
# 134 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hm? You're {PLAYER}{KUN}!\n"
	.string "You saved my darling PEEKO!\l"
	.string "We owe so much to you!\p"
	.string "What's that?\n"
	.string "You want to sail with me?\p"
	.string "Hmhm…\p"
	.string "You have a LETTER bound for DEWFORD\n"
	.string "and a package for SLATEPORT, then?\p"
	.string "Quite the busy life you must lead!\p"
	.string "But, certainly, what you're asking is\n"
	.string "no problem at all.\p"
	.string "You've come to the right man!\n"
	.string "We'll set sail for DEWFORD.$"

Route104_MrBrineysHouse_Text_SetSailForDewford::
# 150 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

Route104_MrBrineysHouse_Text_DeclineDeliverySail::
# 156 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Is that so?\n"
	.string "Your deliveries can wait?\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail!$"

Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford::
# 163 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
	.string "I know exactly what you want to say!\p"
	.string "You're to deliver a LETTER to DEWFORD\n"
	.string "and a package to SLATEPORT.\p"
	.string "What you need me to do is no problem\n"
	.string "at all--I'm the man for the job!\p"
	.string "First, we'll set sail for DEWFORD.$"

Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford::
# 173 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
	.string "I know exactly what you want to say!\p"
	.string "You're to deliver a package to\n"
	.string "CAPT. STERN in SLATEPORT.\p"
	.string "What you need me to do is no problem\n"
	.string "at all--I'm the man for the job!\p"
	.string "First, we'll set sail for DEWFORD.$"

Route104_MrBrineysHouse_Text_WhereAreWeBound::
# 183 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail::
# 189 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "MR. BRINEY: Is that so?\n"
	.string "Well, PEEKO owes her life to you.\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail!$"

Route104_MrBrineysHouse_Text_Peeko::
# 196 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "PEEKO: Pii piihyoro!$"
