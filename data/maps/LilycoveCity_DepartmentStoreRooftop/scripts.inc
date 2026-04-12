# 1 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 2 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 4 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_OnTransition
# 5 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 7 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 8 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition::
# 9 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 6 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 10 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 7 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 12 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, TRUE
# 13 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_OnTransition_2
# 14 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition_1:
# 15 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 10 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 16 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_OnTransition_5
# 18 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition_4:
# 19 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 20 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 21 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition_2:
# 22 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 8 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 23 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman
# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_OnTransition_1
# 25 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 26 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_OnTransition_5:
# 27 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 11 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman
# 29 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_OnTransition_4
# 30 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 31 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 32 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ShowSaleWoman::
# 33 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 35 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 36 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 37 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 38 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_HideSaleWoman::
# 39 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 22 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 40 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 42 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 43 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 44 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
# 45 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 27 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 46 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 47 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 48 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 49 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 29 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 50 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message gText_HowMayIServeYou
# 51 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 30 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 52 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 53 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 31 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 54 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
# 55 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 32 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 56 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 57 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 33 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 58 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 59 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 61 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 62 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale::
# 63 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 38 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 64 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 65 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 66 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 67 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 43 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock
# 71 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 44 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 72 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	faceplayer
# 73 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 45 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 74 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 75 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 46 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 76 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, TRUE
# 77 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Man_2
# 78 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Man_1:
# 79 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 49 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 80 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
# 81 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 50 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 82 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 83 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 84 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 85 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Man_2:
# 86 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 47 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 87 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale
# 88 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Man_1
# 89 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 90 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 91 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ManClearOutSale::
# 92 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 55 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 93 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
# 94 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 56 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 95 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	release
# 96 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 98 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 99 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
# 100 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 61 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 101 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
# 102 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 103 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 104 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 105 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
# 106 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 66 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 107 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 108 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 67 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 109 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 110 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 111 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 112 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 113 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	showmoneybox 0, 0
# 114 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 115 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 116 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 117 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 118 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 119 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
# 120 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 75 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 121 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
# 122 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 76 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 123 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 124 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 77 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_1
# 126 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 78 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 127 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_3
# 128 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 80 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 129 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_4
# 130 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 82 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 131 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_5
# 132 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1:
# 133 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 85 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 134 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
# 135 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 86 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 136 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 137 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 138 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 139 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_3:
# 140 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 79 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 141 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater
# 142 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1
# 143 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 144 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_4:
# 145 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 81 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 146 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop
# 147 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1
# 148 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 149 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_5:
# 150 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 83 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 151 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade
# 152 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1
# 153 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 154 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 155 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_FreshWater::
# 156 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 91 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 157 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 158 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 92 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 159 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 160 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 161 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 162 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 163 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SodaPop::
# 164 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 165 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 166 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 98 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 167 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 168 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 169 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 170 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 171 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_Lemonade::
# 172 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 103 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 173 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 174 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 104 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 175 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink
# 176 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 177 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 178 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 179 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater::
# 180 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 109 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 181 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 200
# 182 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 183 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 184 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 185 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop::
# 186 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 114 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 187 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 300
# 188 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 189 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 190 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 191 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade::
# 192 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 119 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 193 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 350
# 194 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 195 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 196 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 197 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater::
# 198 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 124 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 199 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 200
# 200 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 201 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 202 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 203 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop::
# 204 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 129 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 205 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 300
# 206 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 207 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 208 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 209 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade::
# 210 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 134 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 211 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 350
# 212 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	return
# 213 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 214 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 215 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink::
# 216 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 139 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 217 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 0
# 218 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_2
# 219 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_1:
# 220 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 142 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 221 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 1
# 222 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_5
# 223 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_4:
# 224 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 145 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 225 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 2
# 226 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_8
# 227 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_7:
# 228 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 148 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 229 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
# 230 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_11
# 231 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_10:
# 232 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 151 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 233 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 234 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 152 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 235 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
# 236 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_14
# 237 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_13:
# 238 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 155 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 239 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 0
# 240 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_17
# 241 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_16:
# 242 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 158 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 1
# 244 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_20
# 245 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_19:
# 246 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 161 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 247 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_TEMP_1, 2
# 248 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_23
# 249 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_22:
# 250 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 164 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 251 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	updatemoneybox
# 252 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 165 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 253 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 254 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 166 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 255 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 256 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 167 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 257 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 258 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 168 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 259 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 260 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 169 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 261 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 262 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 170 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 263 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 264 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 171 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 265 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 266 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 172 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 267 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64
# 268 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 173 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 269 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, 0
# 270 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_26
# 271 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_25:
# 272 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 176 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 273 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 274 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 177 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 275 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
# 276 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_29
# 277 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_28:
# 278 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 180 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 279 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 280 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 181 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 281 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 282 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 182 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 283 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 284 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 183 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 285 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 286 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 184 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 287 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 288 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 185 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 289 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 290 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 186 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 291 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	random 64
# 292 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 187 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 293 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, 0
# 294 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_32
# 295 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_31:
# 296 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 190 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 297 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkitemspace VAR_TEMP_0
# 298 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 191 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 299 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, 0
# 300 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_35
# 301 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_34:
# 302 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 194 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 303 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 304 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 195 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 305 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 306 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 196 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 307 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 308 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 197 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 309 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 310 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 198 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 311 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 312 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 199 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 313 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
# 314 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 200 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 315 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 316 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 317 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 318 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_2:
# 319 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 140 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 320 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyFreshWater
# 321 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_1
# 322 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 323 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_5:
# 324 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 143 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 325 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneySodaPop
# 326 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_4
# 327 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 328 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_8:
# 329 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 146 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 330 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_CheckMoneyLemonade
# 331 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_7
# 332 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 333 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_11:
# 334 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 149 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 335 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink
# 336 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_10
# 337 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 338 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_14:
# 339 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 153 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 340 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 341 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_13
# 342 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 343 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_17:
# 344 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 156 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 345 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyFreshWater
# 346 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_16
# 347 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 348 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_20:
# 349 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 159 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 350 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneySodaPop
# 351 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_19
# 352 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 353 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_23:
# 354 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 162 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 355 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_RemoveMoneyLemonade
# 356 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_22
# 357 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 358 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_26:
# 359 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 174 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 360 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 361 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_25
# 362 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 363 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_29:
# 364 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 178 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 365 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 366 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_28
# 367 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 368 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_32:
# 369 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 188 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 370 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
# 371 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_31
# 372 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 373 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_35:
# 374 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 192 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 375 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
# 376 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_TryBuyDrink_34
# 377 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 378 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 379 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
# 380 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 205 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 381 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 382 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 206 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 383 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 384 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 207 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 385 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
# 386 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 387 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 388 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 389 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NotEnoughMoneyForDrink::
# 390 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 212 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 391 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 392 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 213 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 393 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 394 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 395 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 396 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 397 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
# 398 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 218 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 399 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 400 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 219 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 401 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
# 402 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 403 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 404 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 405 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
# 406 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 224 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 407 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemoneybox
# 408 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 225 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 409 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
# 410 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	end
# 411 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 412 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 413 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales::
# 414 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 229 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 415 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Don't they have set dates for their\n"
# 416 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "clear-out sales?\p"
# 417 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "I watch TV, but they never show any\n"
# 418 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "commercials.$"
# 419 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 420 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale::
# 421 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 236 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 422 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Yes! I've been waiting a long time for\n"
# 423 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "this clear-out sale.\p"
# 424 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "They have items that you can only get\n"
# 425 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "here. I'm going to load up, that I am!$"
# 426 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 427 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty::
# 428 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 243 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 429 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Ohh… I'm bone-dry thirsty!$"
# 430 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 431 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike::
# 432 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 247 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 433 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "It's a VENDING MACHINE.\n"
# 434 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Which drink would you like?$"
# 435 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 436 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown::
# 437 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 252 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 438 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 439 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "A can of {STR_VAR_1} dropped down.$"
# 440 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 441 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown::
# 442 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 257 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 443 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
# 444 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Score! An extra can of {STR_VAR_1}\n"
# 445 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "dropped down!$"
# 446 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 447 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney::
# 448 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 263 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 449 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Not enough money…$"
# 450 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"

# 451 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink::
# 452 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 267 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
# 453 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Decided against buying a drink.$"
