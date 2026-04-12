# 1 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 6 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan::
# 7 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	lock
# 9 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 5 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POWDER_JAR, CeruleanCity_House5_EventScript_BerryPowderMan_2
# 13 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan_1:
# 14 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 9 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AnyInterestInBerries, MSGBOX_YESNO
# 16 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 18 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House5_EventScript_BerryPowderMan_5
# 19 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan_4:
# 20 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 13 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 21 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GOT_BERRY_POUCH, CeruleanCity_House5_EventScript_BerryPowderMan_8
# 22 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan_7:
# 23 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveJustTheThing
# 25 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setflag FLAG_GOT_POWDER_JAR
# 27 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 29 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 19 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 31 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House5_EventScript_BerryPowderMan_11
# 32 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan_10:
# 33 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner
# 35 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 23 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 37 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 38 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 39 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan_2:
# 40 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 41 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_AskToExchangePowder
# 42 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_BerryPowderMan_1
# 43 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 44 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan_5:
# 45 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 11 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 46 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_NoInterestInBerries
# 47 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_BerryPowderMan_4
# 48 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 49 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan_8:
# 50 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 51 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_NoBerries
# 52 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_BerryPowderMan_7
# 53 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 54 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryPowderMan_11:
# 55 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 56 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto EventScript_BagIsFull
# 57 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_BerryPowderMan_10
# 58 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 59 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 60 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_NoBerries::
# 61 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_WhyMustYouLieNoBerries
# 63 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 29 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 64 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 65 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 66 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 67 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 68 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_NoInterestInBerries::
# 69 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 70 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings
# 71 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 35 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 72 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 73 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 74 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 75 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 76 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_AskToExchangePowder::
# 77 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 40 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 78 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 79 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 41 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 80 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveYouBroughtBerryPowder
# 81 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 42 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 82 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
# 83 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 84 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 85 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 86 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem::
# 87 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 47 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 88 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	message CeruleanCity_House5_Text_ExchangeWithWhat
# 89 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 90 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	waitmessage
# 91 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 49 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 92 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 93 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 94 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 95 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 51 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 96 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	waitstate
# 97 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 52 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 98 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 53 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 100 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 0, CeruleanCity_House5_EventScript_ChooseExchangeItem_3
# 101 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 55 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 102 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 1, CeruleanCity_House5_EventScript_ChooseExchangeItem_4
# 103 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 57 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 2, CeruleanCity_House5_EventScript_ChooseExchangeItem_5
# 105 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 59 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 106 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 3, CeruleanCity_House5_EventScript_ChooseExchangeItem_6
# 107 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 61 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 108 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 4, CeruleanCity_House5_EventScript_ChooseExchangeItem_7
# 109 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 63 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 110 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 5, CeruleanCity_House5_EventScript_ChooseExchangeItem_8
# 111 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 65 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 112 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 6, CeruleanCity_House5_EventScript_ChooseExchangeItem_9
# 113 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 67 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 114 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 7, CeruleanCity_House5_EventScript_ChooseExchangeItem_10
# 115 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 69 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 116 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 8, CeruleanCity_House5_EventScript_ChooseExchangeItem_11
# 117 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 71 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 118 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 9, CeruleanCity_House5_EventScript_ChooseExchangeItem_12
# 119 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 73 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 120 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 10, CeruleanCity_House5_EventScript_ChooseExchangeItem_13
# 121 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 75 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 122 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 11, CeruleanCity_House5_EventScript_ChooseExchangeItem_14
# 123 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 77 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 124 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 127, CeruleanCity_House5_EventScript_ChooseExchangeItem_15
# 125 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_1:
# 126 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 127 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 128 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_3:
# 129 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 54 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 130 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_EnergyPowder
# 131 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 132 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 133 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_4:
# 134 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 56 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 135 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_EnergyRoot
# 136 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 137 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 138 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_5:
# 139 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 58 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 140 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_HealPowder
# 141 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 142 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 143 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_6:
# 144 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 60 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 145 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_RevivalHerb
# 146 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 147 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 148 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_7:
# 149 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 150 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Protein
# 151 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 152 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 153 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_8:
# 154 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 64 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 155 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Iron
# 156 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 157 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 158 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_9:
# 159 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 66 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 160 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Carbos
# 161 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 162 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 163 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_10:
# 164 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 68 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 165 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Calcium
# 166 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 167 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 168 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_11:
# 169 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 70 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 170 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Zinc
# 171 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 172 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 173 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_12:
# 174 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 72 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 175 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_HPUp
# 176 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 177 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 178 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_13:
# 179 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 74 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 180 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_PPUp
# 181 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 182 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 183 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_14:
# 184 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 76 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 185 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExitMenu
# 186 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 187 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 188 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ChooseExchangeItem_15:
# 189 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 78 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 190 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExitMenu
# 191 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1
# 192 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 193 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 194 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_EnergyPowder::
# 195 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 84 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 196 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 197 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 85 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 198 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 199 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 86 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 200 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 50
# 201 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 87 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 202 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 203 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 204 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 205 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 206 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_EnergyRoot::
# 207 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 92 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 208 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 209 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 93 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 210 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 211 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 94 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 212 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 80
# 213 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 95 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 214 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 215 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 216 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 217 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 218 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_HealPowder::
# 219 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 100 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 220 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 221 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 101 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 222 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 223 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 102 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 224 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 50
# 225 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 103 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 226 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 227 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 228 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 229 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 230 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_RevivalHerb::
# 231 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 108 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 232 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 233 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 109 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 234 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 235 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 110 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 236 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 300
# 237 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 111 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 238 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 239 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 240 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 241 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 242 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Protein::
# 243 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 116 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 244 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 245 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 117 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 246 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 247 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 118 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 248 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 249 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 119 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 250 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 251 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 252 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 253 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 254 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Iron::
# 255 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 124 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 256 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 257 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 125 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 258 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 259 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 126 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 260 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 261 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 127 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 262 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 263 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 264 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 265 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 266 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Carbos::
# 267 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 132 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 268 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 269 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 133 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 270 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 271 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 134 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 272 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 273 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 135 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 274 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 275 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 276 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 277 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 278 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Calcium::
# 279 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 140 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 280 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 281 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 141 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 282 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 283 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 142 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 284 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 285 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 143 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 286 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 287 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 288 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 289 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 290 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_Zinc::
# 291 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 148 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 292 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 293 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 149 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 294 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 295 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 150 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 296 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 297 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 151 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 298 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 299 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 300 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 301 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 302 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_HPUp::
# 303 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 156 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 304 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 305 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 157 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 306 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 307 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 158 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 308 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 309 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 159 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 310 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 311 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 312 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 313 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 314 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_PPUp::
# 315 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 164 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 316 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 317 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 165 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 318 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 319 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 166 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 320 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 3000
# 321 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 167 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 322 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
# 323 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 324 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 325 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 326 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExitMenu::
# 327 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 172 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 328 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder
# 329 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 173 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 330 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 331 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 174 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 332 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 333 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 334 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 335 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 336 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem::
# 337 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 179 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 338 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem, MSGBOX_YESNO
# 339 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 180 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 340 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 341 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_2
# 342 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem_1:
# 343 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 183 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 344 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 345 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 184 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 346 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 347 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 185 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 348 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 349 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_5
# 350 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem_4:
# 351 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 188 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 352 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	giveitem VAR_0x8008
# 353 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 189 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 354 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 355 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_8
# 356 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem_7:
# 357 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 192 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 358 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 359 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 193 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 360 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special TakeBerryPowder
# 361 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 194 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 362 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 363 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 195 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 364 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_TradeMoreBerryPowder, MSGBOX_YESNO
# 365 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 196 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 366 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 367 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_11
# 368 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem_10:
# 369 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 199 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 370 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HopeToSeeYouAgain
# 371 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 200 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 372 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 373 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 201 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 374 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 375 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 376 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 377 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem_2:
# 378 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 181 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 379 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
# 380 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_1
# 381 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 382 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem_5:
# 383 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 186 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 384 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_NotEnoughBerryPowder
# 385 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_4
# 386 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 387 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem_8:
# 388 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 190 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 389 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_BagIsFull
# 390 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_7
# 391 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 392 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_ExchangePowderForItem_11:
# 393 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 197 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 394 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
# 395 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_10
# 396 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 397 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 398 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BagIsFull::
# 399 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 206 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 400 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox gText_TheBagIsFull
# 401 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 207 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 402 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 403 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 208 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 404 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
# 405 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 406 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 407 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 408 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_NotEnoughBerryPowder::
# 409 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 213 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 410 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DontHaveEnoughBerryPowder
# 411 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 214 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 412 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
# 413 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 414 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 415 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 416 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_EventScript_BerryCrushRankings::
# 417 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 219 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 418 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	lockall
# 419 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 220 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 420 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special ShowBerryCrushRankings
# 421 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 221 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 422 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	waitstate
# 423 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 222 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 424 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	releaseall
# 425 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	end
# 426 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 427 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 428 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_AnyInterestInBerries::
# 429 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 226 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 430 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I concoct a variety of medicine\n"
# 431 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "from BERRY POWDER.\p"
# 432 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Using good BERRY POWDER, I can\n"
# 433 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "make any kind of medicine.\p"
# 434 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Now tell me, have you any interest\n"
# 435 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "in BERRIES?$"
# 436 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 437 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_HaveJustTheThing::
# 438 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 235 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 439 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Ah, good! For you, then, I have\n"
# 440 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "just the thing.$"
# 441 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 442 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner::
# 443 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 240 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 444 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "There's something new on the second\n"
# 445 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "floor of POKéMON CENTERS, at the\l"
# 446 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "DIRECT CORNER.\p"
# 447 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "They installed a Wireless Adapter\n"
# 448 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "machine for crushing BERRIES.\p"
# 449 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "This is where you come in.\p"
# 450 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I have a favor to ask, one that\n"
# 451 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I can entrust only to you.\p"
# 452 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 453 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "me using that machine?\p"
# 454 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Don't forget, the machine is at the\n"
# 455 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "DIRECT CORNER of POKéMON CENTERS.\p"
# 456 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I'll concoct medicine for you if\n"
# 457 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "you bring me some BERRY POWDER.\p"
# 458 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Don't forget, crush BERRIES into\n"
# 459 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "BERRY POWDER and bring it to me.$"
# 460 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 461 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_WhyMustYouLieNoBerries::
# 462 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 259 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 463 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Why must you lie to me?\p"
# 464 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "How many BERRIES do you have?\n"
# 465 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Not a one!$"
# 466 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 467 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings::
# 468 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 265 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 469 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "You have no interest in BERRIES?\p"
# 470 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Young one, it's important to take an\n"
# 471 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "interest in all sorts of things.$"
# 472 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 473 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_HaveYouBroughtBerryPowder::
# 474 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 271 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 475 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Er-hem! Have you brought me some\n"
# 476 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "BERRY POWDER?$"
# 477 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 478 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House5_Text_ExchangeWithWhat::
# 479 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 276 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 480 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "With what would you like to \n"
# 481 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "exchange it?$"
# 482 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 483 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem::
# 484 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 281 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 485 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Fine, you'll exchange your BERRY\n"
# 486 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "POWDER for one {STR_VAR_1}?$"
# 487 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 488 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_DontHaveEnoughBerryPowder::
# 489 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 286 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 490 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Hm? You don't have enough\n"
# 491 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "BERRY POWDER.$"
# 492 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 493 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_TradeMoreBerryPowder::
# 494 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 291 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 495 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "This is fine BERRY POWDER indeed.\n"
# 496 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "It will make excellent medicine.\p"
# 497 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Would you like to trade more BERRY\n"
# 498 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "POWDER for something else?$"
# 499 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 500 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_HopeToSeeYouAgain::
# 501 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 298 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 502 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "That's fine, then.\n"
# 503 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I'll hope to see you back again.$"
# 504 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"

# 505 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder::
# 506 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 303 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
# 507 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Come see me if you'd like to trade\n"
# 508 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "your BERRY POWDER.$"
