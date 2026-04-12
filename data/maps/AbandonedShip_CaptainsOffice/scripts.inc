# 1 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 2 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_MapScripts::
# 3 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 6 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 8 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 11 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 12 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2
# 13 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1:
# 14 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	return
# 15 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 16 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2:
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 18 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1
# 19 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1
# 20 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 21 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 22 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1::
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 24 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	return
# 26 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 27 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 28 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1::
# 29 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 30 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 31 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 32 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_RESULT, TRUE
# 33 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 27 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 34 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_eq AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_5
# 35 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	return
# 36 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 37 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 38 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4::
# 39 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 33 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 40 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4_2
# 41 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4_1:
# 42 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	return
# 43 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 44 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4_2:
# 45 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 34 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 46 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4_1
# 47 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4_1
# 48 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 49 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 50 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4_1::
# 51 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 41 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 52 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_8
# 53 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	return
# 54 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 55 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 56 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_7::
# 57 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 47 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 58 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
# 59 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 49 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 60 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 61 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 62 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 63 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 64 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2::
# 65 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 55 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 66 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 67 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 57 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 68 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1
# 69 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	return
# 70 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 71 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 72 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_5::
# 73 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 63 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 74 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
# 75 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 65 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 76 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_4
# 77 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	return
# 78 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 79 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 80 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_8::
# 81 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 71 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 82 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 83 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 73 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 84 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_7
# 85 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	return
# 86 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 87 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 88 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 89 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 79 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 90 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
# 91 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 81 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 92 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 93 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 94 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 95 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 96 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 97 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 87 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 98 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
# 99 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 89 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 100 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 101 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 102 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 103 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 104 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner::
# 105 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 93 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 106 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I'm investigating this ship on behalf\n"
# 107 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "of CAPT. STERN.\p"
# 108 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "He also asked me to find a SCANNER,\n"
# 109 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "but I haven't had any success…$"
# 110 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 111 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner::
# 112 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 100 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 113 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That's a SCANNER!\p"
# 114 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Listen, can I get you to deliver that\n"
# 115 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "to CAPT. STERN?\p"
# 116 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I want to investigate this ship a\n"
# 117 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "little more.$"
# 118 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 119 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus::
# 120 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 108 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
# 121 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. CACTUS.\n"
# 122 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "It seems to be from an earlier era.$"
