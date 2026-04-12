AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1
	return

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1:
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2
	return


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1::
# 16 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 18 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_RESULT, TRUE
# 19 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_eq AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_5
	return


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4::
# 24 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4_1
	return

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4_1:
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_8
	return


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_7::
# 31 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
# 33 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2::
# 39 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 40 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1
	return


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_5::
# 45 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
# 46 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4
	return


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_8::
# 51 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 52 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_7
	return


AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 57 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
# 59 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 65 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
# 67 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner::
# 71 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I'm investigating this ship on behalf\n"
	.string "of CAPT. STERN.\p"
	.string "He also asked me to find a SCANNER,\n"
	.string "but I haven't had any success…$"

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner::
# 78 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That's a SCANNER!\p"
	.string "Listen, can I get you to deliver that\n"
	.string "to CAPT. STERN?\p"
	.string "I want to investigate this ship a\n"
	.string "little more.$"

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus::
# 86 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. CACTUS.\n"
	.string "It seems to be from an earlier era.$"
