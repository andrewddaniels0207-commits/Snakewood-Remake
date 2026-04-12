PewterCity_Museum_1F_Frlg_MapScripts::
	.byte 0


PewterCity_Museum_1F_EventScript_Scientist1::
# 4 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lock
# 5 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1_2
PewterCity_Museum_1F_EventScript_Scientist1_1:
# 9 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1_5
PewterCity_Museum_1F_EventScript_Scientist1_4:
# 12 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1_8
PewterCity_Museum_1F_EventScript_Scientist1_7:
# 15 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
# 16 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
	end

PewterCity_Museum_1F_EventScript_Scientist1_2:
# 7 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	goto PewterCity_Museum_1F_EventScript_Scientist1_1

PewterCity_Museum_1F_EventScript_Scientist1_5:
# 10 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	goto PewterCity_Museum_1F_EventScript_Scientist1_4

PewterCity_Museum_1F_EventScript_Scientist1_8:
# 13 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	goto PewterCity_Museum_1F_EventScript_Scientist1_7


PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
# 21 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
# 22 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_2
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_1:
# 25 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_5
PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_4:
	end

PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_2:
# 23 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_1

PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_5:
# 26 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_ExplainAmber
	goto PewterCity_Museum_1F_EventScript_Scientist1BehindCounter_4


PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
# 32 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
# 33 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 34 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_ExplainAmber::
# 40 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
# 41 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 42 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
# 48 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 49 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 50 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 51 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 52 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
# 57 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 58 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 59 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 60 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
# 66 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 67 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 68 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTrigger::
# 75 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 76 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	showmoneybox 0, 0
# 77 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
# 78 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_Museum_1F_EventScript_EntranceTrigger_2
PewterCity_Museum_1F_EventScript_EntranceTrigger_1:
# 81 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ComeAgain
# 82 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 83 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 84 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 85 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 86 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end

PewterCity_Museum_1F_EventScript_EntranceTrigger_2:
# 79 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger_1


PewterCity_Museum_1F_EventScript_TryPayForTicket::
# 91 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	checkmoney 50
# 92 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_2
PewterCity_Museum_1F_EventScript_TryPayForTicket_1:
# 95 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 96 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_5
PewterCity_Museum_1F_EventScript_TryPayForTicket_4:
# 99 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_8
PewterCity_Museum_1F_EventScript_TryPayForTicket_7:
# 102 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_11
PewterCity_Museum_1F_EventScript_TryPayForTicket_10:
# 105 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	playse SE_SHOP
# 106 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removemoney 50
# 107 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	updatemoneybox
# 108 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitse
# 109 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
# 110 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
# 111 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 112 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end

PewterCity_Museum_1F_EventScript_TryPayForTicket_2:
# 93 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_NotEnoughMoney
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_1

PewterCity_Museum_1F_EventScript_TryPayForTicket_5:
# 97 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_4

PewterCity_Museum_1F_EventScript_TryPayForTicket_8:
# 100 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_7

PewterCity_Museum_1F_EventScript_TryPayForTicket_11:
# 103 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	call PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_10


PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
# 117 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
# 118 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
# 123 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
# 124 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
# 129 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
# 130 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_Museum_1F_EventScript_NotEnoughMoney::
# 135 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
# 136 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 137 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 138 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
# 139 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end


# 144 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ForcePlayerExit:
# 145 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_down
# 146 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end

# 149 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterLeft:
# 150 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 151 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 152 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 153 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 154 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end

# 157 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterMid:
# 158 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 159 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 160 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 161 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end

# 164 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_ApproachCounterRight:
# 165 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 166 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_in_place_right
# 167 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_end

PewterCity_Museum_1F_EventScript_Scientist2::
# 171 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldMan::
# 176 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldAmberScientist::
# 181 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lock
# 182 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 183 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_OldAmberScientist_2
PewterCity_Museum_1F_EventScript_OldAmberScientist_1:
# 186 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
# 187 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	checkitemspace ITEM_OLD_AMBER
# 188 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PewterCity_Museum_1F_EventScript_OldAmberScientist_5
PewterCity_Museum_1F_EventScript_OldAmberScientist_4:
# 191 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_AMBER
# 192 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_OLD_AMBER
# 193 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 194 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
	end

PewterCity_Museum_1F_EventScript_OldAmberScientist_2:
# 184 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber
	goto PewterCity_Museum_1F_EventScript_OldAmberScientist_1

PewterCity_Museum_1F_EventScript_OldAmberScientist_5:
# 189 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_NoRoomForOldAmber
	goto PewterCity_Museum_1F_EventScript_OldAmberScientist_4


PewterCity_Museum_1F_EventScript_NoRoomForOldAmber::
# 199 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
# 200 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber::
# 205 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
# 206 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	release
	end


PewterCity_Museum_1F_EventScript_OldAmber::
# 211 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 216 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 217 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_AERODACTYL
# 218 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8005, 10
# 219 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 220 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special OpenMuseumFossilPic
# 221 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 222 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special CloseMuseumFossilPic
# 223 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 228 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 229 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTOPS
# 230 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8005, 10
# 231 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 232 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special OpenMuseumFossilPic
# 233 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 234 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special CloseMuseumFossilPic
# 235 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_Text_Its50YForChildsTicket::
# 239 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Yes, yes.\n"
	.string "It's ¥50 for a child's ticket.\p"
	.string "Would you like to come in?$"

PewterCity_Museum_1F_Text_ComeAgain::
# 245 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Come again!$"

PewterCity_Museum_1F_Text_Right50YThankYou::
# 249 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Right, ¥50!\n"
	.string "Thank you!$"

PewterCity_Museum_1F_Text_DontHaveEnoughMoney::
# 254 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You don't have enough money.$"

PewterCity_Museum_1F_Text_PleaseEnjoyYourself::
# 258 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Please enjoy yourself.$"

PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs::
# 262 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You can't sneak in the back way!\n"
	.string "Nice try, kid, but no.\p"
	.string "Oh, whatever!\n"
	.string "Do you know what AMBER is?$"

PewterCity_Museum_1F_Text_AmberContainsGeneticMatter::
# 269 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER contains the genetic matter\n"
	.string "of ancient POKéMON.\p"
	.string "There's a LAB somewhere trying to\n"
	.string "resurrect POKéMON from AMBER.$"

PewterCity_Museum_1F_Text_AmberIsFossilizedSap::
# 276 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER is actually sap, that gooey\n"
	.string "stuff that oozes from trees.\p"
	.string "The ancient sap fossilized over\n"
	.string "time to become rock-hard AMBER.$"

PewterCity_Museum_1F_Text_PleaseGoAround::
# 283 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "あちらへ　おまわりください$"

PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife::
# 287 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I should be grateful for my long\n"
	.string "life.\p"
	.string "Never did I think I would get to\n"
	.string "see the bones of a dragon!$"

PewterCity_Museum_1F_Text_WantYouToGetAmberExamined::
# 294 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Ssh! Listen, I need to share a\n"
	.string "secret with someone.\p"
	.string "I think that this chunk of AMBER\n"
	.string "contains POKéMON DNA!\p"
	.string "It would be a shattering scientific\n"
	.string "breakthrough if POKéMON could be\l"
	.string "resurrected from it.\p"
	.string "But, my colleagues just ignore\n"
	.string "what I have to say.\p"
	.string "So, I have a favor to ask!\p"
	.string "I want you to get this examined at\n"
	.string "a POKéMON LAB somewhere.$"

PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan::
# 309 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "{PLAYER} received the OLD AMBER\n"
	.string "from the man.$"

PewterCity_Museum_1F_Text_GetOldAmberChecked::
# 314 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Ssh!\n"
	.string "Get the OLD AMBER checked!$"

PewterCity_Museum_1F_Text_DontHaveSpaceForThis::
# 319 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You don't have space for this.$"

PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit::
# 323 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "We have two fossils of rare,\n"
	.string "prehistoric POKéMON on exhibit.$"

PewterCity_Museum_1F_Text_BeautifulPieceOfAmber::
# 328 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "There is a beautiful piece of\n"
	.string "AMBER in a clear gold color.$"

PewterCity_Museum_1F_Text_AerodactylFossil::
# 333 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AERODACTYL Fossil\n"
	.string "A primitive and rare POKéMON.$"

PewterCity_Museum_1F_Text_KabutopsFossil::
# 338 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "KABUTOPS Fossil\n"
	.string "A primitive and rare POKéMON.$"
