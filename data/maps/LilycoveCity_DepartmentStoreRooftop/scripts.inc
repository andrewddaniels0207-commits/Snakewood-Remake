LilycoveCity_DepartmentStoreRooftop_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
	.byte 0


LilycoveCity_DepartmentStoreRooftop_OnTransition::
# 6 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 7 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_OnTransition_2
LilycoveCity_DepartmentStoreRooftop_OnTransition_1:
# 10 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_OnTransition_5
LilycoveCity_DepartmentStoreRooftop_OnTransition_4:
	end

LilycoveCity_DepartmentStoreRooftop_OnTransition_2:
# 8 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
	goto LilycoveCity_DepartmentStoreRooftop_OnTransition_1

LilycoveCity_DepartmentStoreRooftop_OnTransition_5:
# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
	goto LilycoveCity_DepartmentStoreRooftop_OnTransition_4


LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman::
# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman::
# 22 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
# 27 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 29 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message gText_HowMayIServeYou
# 30 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 31 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
# 32 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 33 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end


LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale::
# 38 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
# 43 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 44 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 45 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 46 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Man_2
LilycoveCity_DepartmentStoreRooftop_EventScript_Man_1:
# 49 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
# 50 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_Man_2:
# 47 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Man_1


LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale::
# 55 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
# 56 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
# 61 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
# 66 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 67 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	showmoneybox 0, 0
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
# 75 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
# 76 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 77 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_1
# 78 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_3
# 80 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_4
# 82 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_5
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1:
# 85 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
# 86 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_3:
# 79 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_4:
# 81 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_5:
# 83 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1


LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater::
# 91 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 92 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop::
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 98 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade::
# 103 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 104 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater::
# 109 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 200
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop::
# 114 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 300
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade::
# 119 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 350
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater::
# 124 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 200
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop::
# 129 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 300
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade::
# 134 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 350
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink::
# 139 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_2
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_1:
# 142 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_5
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_4:
# 145 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_8
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_7:
# 148 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_11
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_10:
# 151 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 152 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_14
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_13:
# 155 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_17
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_16:
# 158 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_20
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_19:
# 161 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_23
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_22:
# 164 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	updatemoneybox
# 165 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 166 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 167 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 168 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 169 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 170 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 171 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 172 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64
# 173 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_26
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_25:
# 176 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 177 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_29
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_28:
# 180 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 181 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 182 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 183 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 184 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 185 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 186 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64
# 187 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_32
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_31:
# 190 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 191 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_35
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_34:
# 194 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 195 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 196 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 197 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 198 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 199 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 200 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_2:
# 140 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_1

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_5:
# 143 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_4

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_8:
# 146 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_7

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_11:
# 149 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_10

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_14:
# 153 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_13

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_17:
# 156 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_16

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_20:
# 159 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_19

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_23:
# 162 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_22

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_26:
# 174 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_25

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_29:
# 178 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_28

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_32:
# 188 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_31

LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_35:
# 192 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_34


LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
# 205 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 206 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 207 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink::
# 212 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 213 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
# 218 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 219 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
# 224 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemoneybox
# 225 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
	end


LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales::
# 229 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Don't they have set dates for their\n"
	.string "clear-out sales?\p"
	.string "I watch TV, but they never show any\n"
	.string "commercials.$"

LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale::
# 236 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Yes! I've been waiting a long time for\n"
	.string "this clear-out sale.\p"
	.string "They have items that you can only get\n"
	.string "here. I'm going to load up, that I am!$"

LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty::
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Ohh… I'm bone-dry thirsty!$"

LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike::
# 247 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "It's a VENDING MACHINE.\n"
	.string "Which drink would you like?$"

LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown::
# 252 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
	.string "A can of {STR_VAR_1} dropped down.$"

LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown::
# 257 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
	.string "Score! An extra can of {STR_VAR_1}\n"
	.string "dropped down!$"

LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney::
# 263 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Not enough money…$"

LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink::
# 267 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Decided against buying a drink.$"
