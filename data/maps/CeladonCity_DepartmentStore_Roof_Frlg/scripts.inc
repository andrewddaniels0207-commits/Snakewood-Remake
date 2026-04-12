# 1 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl::
# 7 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	lock
# 9 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 5 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 6 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks
# 13 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 7 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 15 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_2
# 16 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_1:
# 17 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink
# 19 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 20 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 21 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_2:
# 22 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 23 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_IWantDrink
# 24 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_1
# 25 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 26 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 27 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks::
# 28 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 29 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 30 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitem ITEM_FRESH_WATER
# 32 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 34 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_2
# 35 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_1:
# 36 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitem ITEM_SODA_POP
# 38 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 40 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_5
# 41 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_4:
# 42 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitem ITEM_LEMONADE
# 44 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 25 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 45 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 46 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_8
# 47 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_7:
# 48 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 49 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 50 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_2:
# 51 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_SetHasFreshWater
# 53 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_1
# 54 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 55 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_5:
# 56 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_SetHasSodaPop
# 58 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_4
# 59 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 60 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_8:
# 61 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 62 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_SetHasLemonade
# 63 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_CheckPlayerHasDrinks_7
# 64 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 65 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 66 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasFreshWater::
# 67 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 1
# 69 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 70 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 71 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 72 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasSodaPop::
# 73 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 74 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 2
# 75 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 76 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 77 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 78 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_SetHasLemonade::
# 79 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 42 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 80 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 4
# 81 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 82 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 83 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 84 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink::
# 85 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 47 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 86 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyGiveHerDrink, MSGBOX_YESNO
# 87 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 89 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_2
# 90 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_1:
# 91 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 51 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 93 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 94 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_GiveWhichDrink
# 95 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 53 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 96 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 97 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 54 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 98 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 99 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 100 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 101 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 102 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_6
# 103 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 104 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_7
# 105 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 60 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_8
# 107 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 62 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 108 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 4, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_9
# 109 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 64 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 110 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 5, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_10
# 111 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 66 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 112 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 6, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_11
# 113 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 114 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 7, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_12
# 115 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_4:
# 116 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 117 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 118 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_2:
# 119 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 120 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 121 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_1
# 122 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 123 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_6:
# 124 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 125 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater
# 126 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_4
# 127 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 128 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_7:
# 129 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 59 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 130 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop
# 131 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_4
# 132 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 133 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_8:
# 134 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 135 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop
# 136 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_4
# 137 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 138 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_9:
# 139 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 140 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade
# 141 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_4
# 142 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 143 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_10:
# 144 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 145 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade
# 146 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_4
# 147 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 148 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_11:
# 149 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 67 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 150 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade
# 151 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_4
# 152 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 153 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_12:
# 154 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 69 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 155 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks
# 156 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveDrink_4
# 157 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 158 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 159 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater::
# 160 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 75 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 161 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_FRESH_WATER, FALSE
# 162 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 76 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 163 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 164 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 77 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 165 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_3
# 166 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 79 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 167 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_4
# 168 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 81 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 169 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_5
# 170 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_1:
# 171 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 172 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 173 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_3:
# 174 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 175 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 176 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_1
# 177 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 178 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_4:
# 179 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 80 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 180 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 181 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_1
# 182 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 183 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_5:
# 184 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 185 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 186 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWater_1
# 187 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 188 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 189 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop::
# 190 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 191 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_SODA_POP, FALSE
# 192 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 193 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 194 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 90 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 195 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_3
# 196 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 197 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_4
# 198 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 94 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 199 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_5
# 200 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_1:
# 201 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 202 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 203 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_3:
# 204 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 91 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 205 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 206 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_1
# 207 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 208 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_4:
# 209 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 93 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 210 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 211 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_1
# 212 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 213 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_5:
# 214 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 95 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 215 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 216 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPop_1
# 217 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 218 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 219 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop::
# 220 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 101 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 221 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_FRESH_WATER_SODA_POP, FALSE
# 222 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 102 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 223 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 103 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 225 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_3
# 226 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 105 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 227 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_4
# 228 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 107 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 229 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_5
# 230 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 109 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 231 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_6
# 232 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_1:
# 233 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 234 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 235 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_3:
# 236 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 104 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 237 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 238 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_1
# 239 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 240 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_4:
# 241 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 242 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 243 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_1
# 244 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 245 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_5:
# 246 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 108 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 247 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 248 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_1
# 249 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 250 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_6:
# 251 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 110 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 252 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 253 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterSodaPop_1
# 254 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 255 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 256 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade::
# 257 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 116 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 258 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_LEMONADE, FALSE
# 259 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 117 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 260 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 261 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 118 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 262 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_3
# 263 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 120 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 264 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_4
# 265 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 122 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 266 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_5
# 267 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_1:
# 268 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 269 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 270 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_3:
# 271 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 119 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 272 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 273 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_1
# 274 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 275 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_4:
# 276 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 121 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 277 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 278 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_1
# 279 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 280 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_5:
# 281 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 123 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 282 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 283 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveLemonade_1
# 284 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 285 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 286 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade::
# 287 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 129 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 288 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_FRESH_WATER_LEMONADE, FALSE
# 289 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 130 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 290 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 291 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 131 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 292 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_3
# 293 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 133 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 294 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_4
# 295 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 135 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 296 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_5
# 297 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 137 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 298 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_6
# 299 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_1:
# 300 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 301 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 302 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_3:
# 303 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 132 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 304 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 305 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_1
# 306 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 307 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_4:
# 308 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 134 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 309 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 310 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_1
# 311 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 312 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_5:
# 313 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 136 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 314 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 315 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_1
# 316 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 317 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_6:
# 318 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 138 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 319 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 320 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveFreshWaterLemonade_1
# 321 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 322 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 323 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade::
# 324 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 144 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 325 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_SODA_POP_LEMONADE, FALSE
# 326 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 145 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 327 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 146 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 329 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_3
# 330 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 148 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 331 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_4
# 332 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 150 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 333 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_5
# 334 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 152 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 335 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_6
# 336 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_1:
# 337 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 338 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 339 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_3:
# 340 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 147 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 341 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 342 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_1
# 343 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 344 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_4:
# 345 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 149 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 346 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 347 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_1
# 348 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 349 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_5:
# 350 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 151 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 351 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 352 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_1
# 353 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 354 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_6:
# 355 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 153 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 356 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 357 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveSodaPopLemonade_1
# 358 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 359 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 360 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks::
# 361 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 159 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 362 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_THIRSTY_GIRL_FRESH_WATER_SODA_POP_LEMONADE, FALSE
# 363 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 160 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 364 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 365 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 161 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 366 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_3
# 367 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 163 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 368 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_4
# 369 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 165 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 370 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_5
# 371 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 167 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 372 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_6
# 373 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 169 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 374 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_7
# 375 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_1:
# 376 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 377 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 378 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_3:
# 379 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 162 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 380 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater
# 381 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_1
# 382 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 383 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_4:
# 384 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 164 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 385 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop
# 386 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_1
# 387 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 388 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_5:
# 389 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 166 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 390 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade
# 391 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_1
# 392 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 393 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_6:
# 394 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 168 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 395 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 396 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_1
# 397 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 398 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_7:
# 399 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 170 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 400 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink
# 401 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_AskGiveAllDrinks_1
# 402 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 403 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 404 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater::
# 405 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 176 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 406 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_FRESH_WATER
# 407 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 177 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 408 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8009, ITEM_TM16
# 409 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 178 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 410 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM16_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater_2
# 411 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater_1:
# 412 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 181 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 413 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayFreshWaterHaveThis
# 414 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 182 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 415 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 416 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 417 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 418 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater_2:
# 419 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 179 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 420 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 421 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveFreshWater_1
# 422 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 423 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 424 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop::
# 425 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 187 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 426 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_SODA_POP
# 427 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 188 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 428 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8009, ITEM_TM20
# 429 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 189 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 430 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM20_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop_2
# 431 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop_1:
# 432 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 192 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 433 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YaySodaPopHaveThis
# 434 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 193 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 435 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 436 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 437 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 438 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop_2:
# 439 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 190 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 440 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 441 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveSodaPop_1
# 442 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 443 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 444 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade::
# 445 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 198 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 446 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8008, ITEM_LEMONADE
# 447 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 199 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 448 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_0x8009, ITEM_TM33
# 449 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 200 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 450 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM33_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade_2
# 451 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade_1:
# 452 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 203 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 453 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayLemonadeHaveThis
# 454 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 204 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 455 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
# 456 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 457 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 458 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade_2:
# 459 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 201 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 460 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
# 461 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveLemonade_1
# 462 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 463 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 464 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink::
# 465 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 209 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 466 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 467 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 210 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 468 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, VAR_0x8009
# 469 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 211 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 470 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removeitem VAR_0x8008
# 471 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 212 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 472 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitemspace VAR_0x8009
# 473 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 213 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 474 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 475 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_2
# 476 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_1:
# 477 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 216 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 478 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	additem VAR_0x8009
# 479 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 217 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 480 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 481 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 218 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 482 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 483 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 219 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 484 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message Text_ReceivedItemFromLittleGirl
# 485 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 220 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 486 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 487 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 221 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 488 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitfanfare
# 489 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 222 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 490 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	putitemaway VAR_0x8009
# 491 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 223 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 492 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 493 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 224 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 494 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_0x8008, ITEM_FRESH_WATER
# 495 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_5
# 496 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_4:
# 497 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 227 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 498 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_0x8008, ITEM_SODA_POP
# 499 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_8
# 500 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_7:
# 501 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 230 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 502 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_0x8008, ITEM_LEMONADE
# 503 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_11
# 504 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_10:
# 505 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 233 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 506 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 507 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 508 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 509 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_2:
# 510 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 214 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 511 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForReward
# 512 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_1
# 513 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 514 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_5:
# 515 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 225 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 516 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM16
# 517 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_4
# 518 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 519 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_8:
# 520 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 228 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 521 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM20
# 522 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_7
# 523 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 524 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_11:
# 525 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 231 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 526 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM33
# 527 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_10
# 528 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 529 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 530 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM16::
# 531 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 238 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 532 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM16_FROM_THIRSTY_GIRL
# 533 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 239 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 534 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM16
# 535 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 536 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 537 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 538 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM20::
# 539 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 244 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 540 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM20_FROM_THIRSTY_GIRL
# 541 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 245 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 542 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM20
# 543 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 544 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 545 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 546 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExplainTM33::
# 547 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 250 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 548 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM33_FROM_THIRSTY_GIRL
# 549 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 251 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 550 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM33
# 551 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 552 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 553 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 554 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForReward::
# 555 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 256 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 556 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DontHaveSpaceForThis
# 557 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 257 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 558 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 559 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 560 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 561 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 562 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_DontGiveDrink::
# 563 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 262 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 564 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 565 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 566 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 567 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 568 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_IWantDrink::
# 569 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 267 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 570 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyIWantDrink
# 571 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 268 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 572 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 573 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 574 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 575 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 576 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll::
# 577 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 273 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 578 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImNotThirstyAfterAll
# 579 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 274 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 580 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	release
# 581 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 582 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 583 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 584 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_CooltrainerM::
# 585 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 279 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 586 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_MySisterIsImmature, MSGBOX_NPC
# 587 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 588 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 589 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 590 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_FloorSign::
# 591 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 284 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 592 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_FloorSign, MSGBOX_SIGN
# 593 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 594 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 595 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 596 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_VendingMachine::
# 597 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 289 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 598 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	lockall
# 599 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 290 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 600 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 601 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 291 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 602 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 603 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 292 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 604 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	showmoneybox 0, 0
# 605 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 293 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 606 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
# 607 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 608 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 609 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 610 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink::
# 611 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 298 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 612 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 12, 0, MULTI_CELADON_VENDING_MACHINE, FALSE
# 613 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 299 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 614 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 615 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 300 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 616 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 617 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 301 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 618 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_3
# 619 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 303 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 620 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_4
# 621 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 305 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 622 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_5
# 623 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_1:
# 624 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 308 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 625 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotThirsty
# 626 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 309 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 627 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 628 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 629 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 630 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_3:
# 631 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 302 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 632 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_BuyFreshWater
# 633 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_1
# 634 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 635 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_4:
# 636 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 304 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 637 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_BuySodaPop
# 638 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_1
# 639 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 640 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_5:
# 641 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 306 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 642 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_BuyLemonade
# 643 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_1
# 644 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 645 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 646 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuyFreshWater::
# 647 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 314 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 648 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
# 649 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 315 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 650 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkmoney 200
# 651 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 316 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 652 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 653 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 654 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 655 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 656 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuySodaPop::
# 657 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 321 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 658 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
# 659 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 322 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 660 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkmoney 300
# 661 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 323 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 662 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 663 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 664 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 665 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 666 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_BuyLemonade::
# 667 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 328 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 668 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
# 669 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 329 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 670 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkmoney 350
# 671 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 330 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 672 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink
# 673 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 674 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 675 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 676 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyFreshWater::
# 677 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 335 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 678 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removemoney 200
# 679 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 680 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 681 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 682 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneySodaPop::
# 683 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 340 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 684 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removemoney 300
# 685 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 686 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 687 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 688 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyLemonade::
# 689 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 345 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 690 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removemoney 350
# 691 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	return
# 692 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 693 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 694 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink::
# 695 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 350 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 696 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 697 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_2
# 698 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_1:
# 699 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 353 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 700 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	checkitemspace VAR_TEMP_0
# 701 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 354 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 702 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 703 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_5
# 704 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_4:
# 705 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 357 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 706 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 707 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_8
# 708 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_7:
# 709 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 360 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 710 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 711 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_11
# 712 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_10:
# 713 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 363 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 714 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
# 715 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_14
# 716 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_13:
# 717 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 366 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 718 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	updatemoneybox
# 719 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 367 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 720 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 721 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 368 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 722 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	playse SE_VEND
# 723 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 369 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 724 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DrinkCanPoppedOut
# 725 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 370 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 726 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	additem VAR_TEMP_0
# 727 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 371 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 728 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseNewDrink
# 729 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 730 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 731 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_2:
# 732 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 351 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 733 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NotEnoughMoney
# 734 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_1
# 735 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 736 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_5:
# 737 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 355 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 738 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForDrink
# 739 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_4
# 740 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 741 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_8:
# 742 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 358 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 743 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyFreshWater
# 744 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_7
# 745 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 746 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_11:
# 747 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 361 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 748 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneySodaPop
# 749 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_10
# 750 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 751 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_14:
# 752 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 364 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 753 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Roof_EventScript_RemoveMoneyLemonade
# 754 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_TryBuyDrink_13
# 755 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 756 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 757 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ChooseNewDrink::
# 758 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 376 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 759 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 760 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 377 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 761 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 762 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 378 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 763 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
# 764 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 765 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 766 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 767 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NotEnoughMoney::
# 768 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 383 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 769 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotEnoughMoney
# 770 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 384 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 771 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 772 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 773 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 774 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 775 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_NoRoomForDrink::
# 776 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 389 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 777 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NoMoreRoomForStuff
# 778 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 390 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 779 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
# 780 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 781 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 782 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 783 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine::
# 784 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 395 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 785 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	hidemoneybox
# 786 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 396 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 787 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	releaseall
# 788 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	end
# 789 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 790 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 791 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ImThirstyGiveHerDrink::
# 792 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 400 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 793 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I'm thirsty!\n"
# 794 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I want something to drink!\p"
# 795 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "{FONT_NORMAL}Give her a drink?$"
# 796 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 797 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_GiveWhichDrink::
# 798 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 406 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 799 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Give her which drink?$"
# 800 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 801 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_YayFreshWaterHaveThis::
# 802 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 410 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 803 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
# 804 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "FRESH WATER!\p"
# 805 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Thank you!\n"
# 806 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You can have this from me!$"
# 807 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 808 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
Text_ReceivedItemFromLittleGirl::
# 809 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 417 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 810 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "{PLAYER} received a {STR_VAR_2}\n"
# 811 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "from the little girl.$"
# 812 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 813 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ExplainTM16::
# 814 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 422 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 815 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM16 contains LIGHT SCREEN.\p"
# 816 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "It's a move that weakens the power\n"
# 817 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "of special attacks by your foe.$"
# 818 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 819 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_YaySodaPopHaveThis::
# 820 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 428 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 821 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
# 822 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "SODA POP!\p"
# 823 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Thank you!\n"
# 824 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You can have this from me!$"
# 825 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 826 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ExplainTM20::
# 827 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 435 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 828 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM20 contains SAFEGUARD.\p"
# 829 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "It's a move that prevents status\n"
# 830 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "problems among your POKéMON.$"
# 831 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 832 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_YayLemonadeHaveThis::
# 833 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 441 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 834 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
# 835 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "LEMONADE!\p"
# 836 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Thank you!\n"
# 837 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You can have this from me!$"
# 838 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 839 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ExplainTM33::
# 840 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 448 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 841 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM33 contains REFLECT.\p"
# 842 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "It's a move that weakens the power\n"
# 843 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "of physical attacks by your foe.$"
# 844 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 845 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_DontHaveSpaceForThis::
# 846 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 454 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 847 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You don't have space for this!$"
# 848 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 849 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ImNotThirstyAfterAll::
# 850 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 458 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 851 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "No, thank you!\n"
# 852 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I'm not thirsty after all!$"
# 853 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 854 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_MySisterIsImmature::
# 855 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 463 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 856 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "My sister is a TRAINER, believe it\n"
# 857 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "or not.\p"
# 858 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "But, she's so immature, she drives\n"
# 859 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "me nuts!$"
# 860 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 861 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_ImThirstyIWantDrink::
# 862 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 470 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 863 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I'm thirsty!\n"
# 864 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I want something to drink!$"
# 865 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 866 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_FloorSign::
# 867 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 475 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 868 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "ROOFTOP SQUARE:\n"
# 869 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "VENDING MACHINES$"
# 870 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 871 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave::
# 872 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 480 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 873 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "A vending machine!\n"
# 874 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "What does it have?$"
# 875 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 876 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_NotEnoughMoney::
# 877 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 485 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 878 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Oops, not enough money!$"
# 879 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 880 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_DrinkCanPoppedOut::
# 881 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 489 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 882 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "A can of {STR_VAR_1} popped out!$"
# 883 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 884 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_NoMoreRoomForStuff::
# 885 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 493 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 886 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "There's no more room for stuff!$"
# 887 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"

# 888 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Roof_Text_NotThirsty::
# 889 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 497 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
# 890 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Not thirsty!$"
