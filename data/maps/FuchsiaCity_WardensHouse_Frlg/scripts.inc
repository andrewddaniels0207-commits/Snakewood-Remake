# 1 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 5 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 6 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden::
# 7 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 4 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 8 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	lock
# 9 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 5 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 6 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM04, FuchsiaCity_WardensHouse_EventScript_Warden_2
# 13 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden_1:
# 14 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 9 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 15 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_set FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH, FuchsiaCity_WardensHouse_EventScript_Warden_5
# 16 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden_4:
# 17 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 12 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 18 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_HifFuffHefifoo, MSGBOX_YESNO
# 19 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 13 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 20 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 21 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_WardensHouse_EventScript_Warden_8
# 22 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden_7:
# 23 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 16 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 24 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 25 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_WardensHouse_EventScript_Warden_11
# 26 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden_10:
# 27 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 19 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 28 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	release
# 29 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 30 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 31 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden_2:
# 32 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 7 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_ExplainStrength
# 34 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_Warden_1
# 35 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 36 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden_5:
# 37 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 10 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth
# 39 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_Warden_4
# 40 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 41 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden_8:
# 42 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 14 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 43 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call FuchsiaCity_WardensHouse_EventScript_WardenYes
# 44 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_Warden_7
# 45 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 46 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_Warden_11:
# 47 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 17 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 48 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call FuchsiaCity_WardensHouse_EventScript_WardenNo
# 49 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_Warden_10
# 50 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 51 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 52 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth::
# 53 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 24 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 54 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 55 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 25 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 56 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 57 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 26 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 58 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	message FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden
# 59 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 27 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 60 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	waitmessage
# 61 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 28 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 62 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	waitfanfare
# 63 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 29 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 64 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth
# 65 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 30 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 66 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 67 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 31 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 68 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	checkplayergender
# 69 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 32 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 70 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 71 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_2
# 72 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_1:
# 73 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 35 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 74 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 75 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_eq FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_5
# 76 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_4:
# 77 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 38 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 78 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden, ITEM_HM04
# 79 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 39 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 80 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_HM04
# 81 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 40 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 82 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	removeitem ITEM_GOLD_TEETH
# 83 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 41 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 84 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	release
# 85 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 86 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 87 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_2:
# 88 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 33 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 89 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call FuchsiaCity_WardensHouse_EventScript_WardenThanksMale
# 90 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_1
# 91 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 92 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_5:
# 93 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 36 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 94 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale
# 95 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_4
# 96 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 97 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 98 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_WardenThanksMale::
# 99 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 46 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 100 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething
# 101 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	return
# 102 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 103 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 104 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale::
# 105 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 51 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 106 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething
# 107 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	return
# 108 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 109 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 110 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_WardenYes::
# 111 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 56 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 112 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo
# 113 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	return
# 114 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 115 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 116 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_WardenNo::
# 117 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 61 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 118 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo
# 119 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	return
# 120 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 121 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 122 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_ExplainStrength::
# 123 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 66 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 124 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ExplainStrength
# 125 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 67 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 126 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	release
# 127 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 128 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 129 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 130 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_DisplaySign1::
# 131 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 72 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 132 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay, MSGBOX_SIGN
# 133 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 134 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 135 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 136 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_EventScript_DisplaySign2::
# 137 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 77 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 138 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay, MSGBOX_SIGN
# 139 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	end
# 140 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 141 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 142 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_HifFuffHefifoo::
# 143 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 81 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 144 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Hif fuff hefifoo!\p"
# 145 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Ha lof ha feef ee hafahi ho.\n"
# 146 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Heff hee fwee!$"
# 147 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 148 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo::
# 149 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 87 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 150 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Ah howhee ho hoo!\n"
# 151 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Eef ee hafahi ho!$"
# 152 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 153 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo::
# 154 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 92 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 155 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Ha?\n"
# 156 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "He ohay heh ha hoo ee haheh!$"
# 157 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 158 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden::
# 159 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 97 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 160 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "{PLAYER} gave the GOLD TEETH\n"
# 161 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "to the WARDEN.$"
# 162 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 163 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth::
# 164 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 102 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 165 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "The WARDEN popped in his teeth!$"
# 166 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 167 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething::
# 168 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 106 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 169 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Thanks, son!\n"
# 170 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "You're a real lifesaver!\p"
# 171 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "No one could understand a word\n"
# 172 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "that I said, not a one!\p"
# 173 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "I was too ashamed to show my face\n"
# 174 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "around the OFFICE, even.\p"
# 175 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Let me give you something for your\n"
# 176 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "trouble.$"
# 177 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 178 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething::
# 179 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 117 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 180 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Thank you, lassie!\n"
# 181 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "You're a real lifesaver!\p"
# 182 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "No one could understand a word\n"
# 183 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "that I said, not a one!\p"
# 184 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "I was too ashamed to show my face\n"
# 185 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "around the OFFICE, even.\p"
# 186 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Let me give you something for your\n"
# 187 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "trouble.$"
# 188 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 189 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden::
# 190 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 128 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 191 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "{PLAYER} received HM04\n"
# 192 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "from the WARDEN.$"
# 193 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 194 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_ExplainStrength::
# 195 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 133 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 196 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Inside HM04 you'll find\n"
# 197 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "STRENGTH.\p"
# 198 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "It lets POKéMON move boulders when\n"
# 199 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "you're outside of battle.\p"
# 200 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Oh yes, did you find the SECRET\n"
# 201 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "HOUSE in the SAFARI ZONE?$"
# 202 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 203 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_YouHaveTooMuchStuff::
# 204 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 142 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 205 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "なんや　にもつ\n"
# 206 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "いっぱいやんけ！$"
# 207 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 208 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay::
# 209 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 147 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 210 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "POKéMON photos and fossils are on\n"
# 211 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "display.$"
# 212 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"

# 213 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay::
# 214 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 152 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
# 215 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Old POKéMON merchandise is on\n"
# 216 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "display.$"
