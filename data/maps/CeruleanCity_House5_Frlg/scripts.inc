CeruleanCity_House5_Frlg_MapScripts::
	.byte 0


CeruleanCity_House5_EventScript_BerryPowderMan::
# 4 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	lock
# 5 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POWDER_JAR, CeruleanCity_House5_EventScript_BerryPowderMan_2
CeruleanCity_House5_EventScript_BerryPowderMan_1:
# 9 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AnyInterestInBerries, MSGBOX_YESNO
# 10 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeruleanCity_House5_EventScript_BerryPowderMan_5
CeruleanCity_House5_EventScript_BerryPowderMan_4:
# 13 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GOT_BERRY_POUCH, CeruleanCity_House5_EventScript_BerryPowderMan_8
CeruleanCity_House5_EventScript_BerryPowderMan_7:
# 16 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveJustTheThing
# 17 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setflag FLAG_GOT_POWDER_JAR
# 18 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 19 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House5_EventScript_BerryPowderMan_11
CeruleanCity_House5_EventScript_BerryPowderMan_10:
# 22 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner
# 23 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
	end

CeruleanCity_House5_EventScript_BerryPowderMan_2:
# 7 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_AskToExchangePowder
	goto CeruleanCity_House5_EventScript_BerryPowderMan_1

CeruleanCity_House5_EventScript_BerryPowderMan_5:
# 11 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_NoInterestInBerries
	goto CeruleanCity_House5_EventScript_BerryPowderMan_4

CeruleanCity_House5_EventScript_BerryPowderMan_8:
# 14 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_NoBerries
	goto CeruleanCity_House5_EventScript_BerryPowderMan_7

CeruleanCity_House5_EventScript_BerryPowderMan_11:
# 20 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto EventScript_BagIsFull
	goto CeruleanCity_House5_EventScript_BerryPowderMan_10


CeruleanCity_House5_EventScript_NoBerries::
# 28 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_WhyMustYouLieNoBerries
# 29 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_NoInterestInBerries::
# 34 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings
# 35 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_AskToExchangePowder::
# 40 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 41 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveYouBroughtBerryPowder
# 42 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	end


CeruleanCity_House5_EventScript_ChooseExchangeItem::
# 47 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	message CeruleanCity_House5_Text_ExchangeWithWhat
# 48 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	waitmessage
# 49 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 50 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 51 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	waitstate
# 52 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 0, CeruleanCity_House5_EventScript_ChooseExchangeItem_3
# 55 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 1, CeruleanCity_House5_EventScript_ChooseExchangeItem_4
# 57 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 2, CeruleanCity_House5_EventScript_ChooseExchangeItem_5
# 59 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 3, CeruleanCity_House5_EventScript_ChooseExchangeItem_6
# 61 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 4, CeruleanCity_House5_EventScript_ChooseExchangeItem_7
# 63 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 5, CeruleanCity_House5_EventScript_ChooseExchangeItem_8
# 65 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 6, CeruleanCity_House5_EventScript_ChooseExchangeItem_9
# 67 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 7, CeruleanCity_House5_EventScript_ChooseExchangeItem_10
# 69 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 8, CeruleanCity_House5_EventScript_ChooseExchangeItem_11
# 71 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 9, CeruleanCity_House5_EventScript_ChooseExchangeItem_12
# 73 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 10, CeruleanCity_House5_EventScript_ChooseExchangeItem_13
# 75 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 11, CeruleanCity_House5_EventScript_ChooseExchangeItem_14
# 77 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 127, CeruleanCity_House5_EventScript_ChooseExchangeItem_15
CeruleanCity_House5_EventScript_ChooseExchangeItem_1:
	end

CeruleanCity_House5_EventScript_ChooseExchangeItem_3:
# 54 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_EnergyPowder
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_4:
# 56 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_EnergyRoot
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_5:
# 58 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_HealPowder
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_6:
# 60 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_RevivalHerb
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_7:
# 62 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Protein
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_8:
# 64 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Iron
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_9:
# 66 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Carbos
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_10:
# 68 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Calcium
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_11:
# 70 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_Zinc
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_12:
# 72 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_HPUp
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_13:
# 74 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_PPUp
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_14:
# 76 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExitMenu
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_15:
# 78 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExitMenu
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1


CeruleanCity_House5_EventScript_EnergyPowder::
# 84 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 85 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 86 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 50
# 87 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_EnergyRoot::
# 92 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 93 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 94 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 80
# 95 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_HealPowder::
# 100 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 101 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 102 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 50
# 103 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_RevivalHerb::
# 108 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 109 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 110 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 300
# 111 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Protein::
# 116 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 117 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 118 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 119 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Iron::
# 124 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 125 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 126 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 127 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Carbos::
# 132 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 133 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 134 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 135 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Calcium::
# 140 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 141 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 142 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 143 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_Zinc::
# 148 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 149 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 150 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 151 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_HPUp::
# 156 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 157 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 158 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 1000
# 159 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_PPUp::
# 164 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 165 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 166 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8009, 3000
# 167 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end


CeruleanCity_House5_EventScript_ExitMenu::
# 172 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder
# 173 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 174 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_ExchangePowderForItem::
# 179 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem, MSGBOX_YESNO
# 180 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_2
CeruleanCity_House5_EventScript_ExchangePowderForItem_1:
# 183 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 184 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 185 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_5
CeruleanCity_House5_EventScript_ExchangePowderForItem_4:
# 188 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	giveitem VAR_0x8008
# 189 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_8
CeruleanCity_House5_EventScript_ExchangePowderForItem_7:
# 192 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 193 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special TakeBerryPowder
# 194 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 195 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_TradeMoreBerryPowder, MSGBOX_YESNO
# 196 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_11
CeruleanCity_House5_EventScript_ExchangePowderForItem_10:
# 199 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HopeToSeeYouAgain
# 200 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 201 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
	end

CeruleanCity_House5_EventScript_ExchangePowderForItem_2:
# 181 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_1

CeruleanCity_House5_EventScript_ExchangePowderForItem_5:
# 186 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_NotEnoughBerryPowder
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_4

CeruleanCity_House5_EventScript_ExchangePowderForItem_8:
# 190 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_BagIsFull
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_7

CeruleanCity_House5_EventScript_ExchangePowderForItem_11:
# 197 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_10


CeruleanCity_House5_EventScript_BagIsFull::
# 206 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox gText_TheBagIsFull
# 207 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 208 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	release
	end


CeruleanCity_House5_EventScript_NotEnoughBerryPowder::
# 213 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DontHaveEnoughBerryPowder
# 214 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	end


CeruleanCity_House5_EventScript_BerryCrushRankings::
# 219 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	lockall
# 220 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special ShowBerryCrushRankings
# 221 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	waitstate
# 222 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	releaseall
	end


CeruleanCity_House1_Text_AnyInterestInBerries::
# 226 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I concoct a variety of medicine\n"
	.string "from BERRY POWDER.\p"
	.string "Using good BERRY POWDER, I can\n"
	.string "make any kind of medicine.\p"
	.string "Now tell me, have you any interest\n"
	.string "in BERRIES?$"

CeruleanCity_House1_Text_HaveJustTheThing::
# 235 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Ah, good! For you, then, I have\n"
	.string "just the thing.$"

CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner::
# 240 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "There's something new on the second\n"
	.string "floor of POKéMON CENTERS, at the\l"
	.string "DIRECT CORNER.\p"
	.string "They installed a Wireless Adapter\n"
	.string "machine for crushing BERRIES.\p"
	.string "This is where you come in.\p"
	.string "I have a favor to ask, one that\n"
	.string "I can entrust only to you.\p"
	.string "Could you make BERRY POWDER for\n"
	.string "me using that machine?\p"
	.string "Don't forget, the machine is at the\n"
	.string "DIRECT CORNER of POKéMON CENTERS.\p"
	.string "I'll concoct medicine for you if\n"
	.string "you bring me some BERRY POWDER.\p"
	.string "Don't forget, crush BERRIES into\n"
	.string "BERRY POWDER and bring it to me.$"

CeruleanCity_House1_Text_WhyMustYouLieNoBerries::
# 259 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Why must you lie to me?\p"
	.string "How many BERRIES do you have?\n"
	.string "Not a one!$"

CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings::
# 265 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "You have no interest in BERRIES?\p"
	.string "Young one, it's important to take an\n"
	.string "interest in all sorts of things.$"

CeruleanCity_House1_Text_HaveYouBroughtBerryPowder::
# 271 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Er-hem! Have you brought me some\n"
	.string "BERRY POWDER?$"

CeruleanCity_House5_Text_ExchangeWithWhat::
# 276 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "With what would you like to \n"
	.string "exchange it?$"

CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem::
# 281 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Fine, you'll exchange your BERRY\n"
	.string "POWDER for one {STR_VAR_1}?$"

CeruleanCity_House1_Text_DontHaveEnoughBerryPowder::
# 286 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Hm? You don't have enough\n"
	.string "BERRY POWDER.$"

CeruleanCity_House1_Text_TradeMoreBerryPowder::
# 291 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "This is fine BERRY POWDER indeed.\n"
	.string "It will make excellent medicine.\p"
	.string "Would you like to trade more BERRY\n"
	.string "POWDER for something else?$"

CeruleanCity_House1_Text_HopeToSeeYouAgain::
# 298 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "That's fine, then.\n"
	.string "I'll hope to see you back again.$"

CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder::
# 303 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Come see me if you'd like to trade\n"
	.string "your BERRY POWDER.$"
