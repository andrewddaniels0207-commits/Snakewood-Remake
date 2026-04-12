AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 6 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1:
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_5
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4:
# 13 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_8
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_7:
# 16 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2:
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_5:
# 11 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_8:
# 14 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_7


AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 22 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 28 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
# 29 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end


AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner::
# 33 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I'm investigating this ship on behalf\n"
	.string "of CAPT. STERN.\p"
	.string "He also asked me to find a SCANNER,\n"
	.string "but I haven't had any success…$"

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner::
# 40 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That's a SCANNER!\p"
	.string "Listen, can I get you to deliver that\n"
	.string "to CAPT. STERN?\p"
	.string "I want to investigate this ship a\n"
	.string "little more.$"

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus::
# 48 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. CACTUS.\n"
	.string "It seems to be from an earlier era.$"
