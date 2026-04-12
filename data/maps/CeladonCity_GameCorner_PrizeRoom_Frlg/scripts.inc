# 1 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_BaldingMan::
# 7 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon, MSGBOX_NPC
# 9 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 10 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 11 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 12 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_OldMan::
# 13 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 9 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday, MSGBOX_NPC
# 15 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 16 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 17 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 18 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons::
# 19 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 21 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_2
# 25 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_1:
# 26 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 28 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 29 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 30 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon
# 32 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 33 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 34 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_2:
# 35 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 37 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_1
# 38 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 39 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 40 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon::
# 41 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 42 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 43 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 45 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 46 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_GAME_CORNER_POKEMON_PRIZES, FALSE
# 47 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 29 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_3
# 51 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_4
# 53 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 54 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_5
# 55 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_6
# 57 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_7
# 59 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 40 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 60 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_8
# 61 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 42 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 62 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_9
# 63 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1:
# 64 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 65 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 66 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_3:
# 67 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Abra
# 69 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1
# 70 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 71 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_4:
# 72 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 73 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy
# 74 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1
# 75 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 76 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_5:
# 77 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 35 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir
# 79 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1
# 80 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 81 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_6:
# 82 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini
# 84 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1
# 85 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 86 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_7:
# 87 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon
# 89 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1
# 90 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 91 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_8:
# 92 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 41 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 93 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 94 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1
# 95 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 96 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_9:
# 97 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 98 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 99 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1
# 100 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 101 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 102 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange::
# 103 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 104 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 105 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
# 107 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 108 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 109 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 110 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Abra::
# 111 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 112 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 113 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 57 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 114 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 180
# 115 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 60 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 116 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 117 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 118 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 120
# 119 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 64 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 120 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 121 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 122 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 123 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 124 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy::
# 125 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 70 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 126 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 127 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 71 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 128 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 500
# 129 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 74 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 130 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 131 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 75 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 132 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 750
# 133 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 134 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 135 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 136 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 137 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 138 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir::
# 139 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 84 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 140 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 141 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 85 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 142 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2800
# 143 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 144 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PINSIR
# 145 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 146 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2500
# 147 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 148 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 149 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 150 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 151 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 152 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini::
# 153 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 98 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 154 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SCYTHER
# 155 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 156 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 5500
# 157 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 102 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 158 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 159 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 103 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 160 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4600
# 161 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 162 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 163 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 164 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 165 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 166 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon::
# 167 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 112 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 168 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 169 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 113 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 170 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 9999
# 171 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 116 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 172 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 173 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 117 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 174 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 6500
# 175 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 120 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 176 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 177 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 178 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 179 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 180 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
# 181 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 125 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 182 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 183 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 126 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 184 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 185 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 127 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 186 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 187 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_2
# 188 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_1:
# 189 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 130 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 190 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkcoins VAR_RESULT
# 191 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 131 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 192 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_2
# 193 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_lt CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_5
# 194 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_4:
# 195 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 134 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 196 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 197 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 135 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 198 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 199 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 136 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 200 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_ABRA, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_9
# 201 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 138 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 202 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_CLEFAIRY, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_10
# 203 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 140 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 204 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_DRATINI, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_11
# 205 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 142 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 206 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_SCYTHER, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_12
# 207 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 144 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 208 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_PORYGON, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_13
# 209 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 146 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 210 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_PINSIR, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_14
# 211 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7:
# 212 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 213 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 214 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_2:
# 215 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 128 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 216 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 217 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_1
# 218 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 219 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_5:
# 220 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 132 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 221 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
# 222 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_4
# 223 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 224 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_9:
# 225 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 137 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 226 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra
# 227 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7
# 228 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 229 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_10:
# 230 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 139 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 231 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy
# 232 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7
# 233 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 234 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_11:
# 235 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 141 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 236 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini
# 237 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7
# 238 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 239 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_12:
# 240 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 143 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 241 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther
# 242 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7
# 243 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 244 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_13:
# 245 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 145 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 246 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon
# 247 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7
# 248 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 249 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_14:
# 250 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 147 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 251 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GivePinsir
# 252 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7
# 253 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 254 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 255 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra::
# 256 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 154 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 257 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 9
# 258 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 157 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 259 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 7
# 260 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 160 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 261 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 262 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 263 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 264 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 265 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy::
# 266 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 166 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 267 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 8
# 268 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 169 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 269 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 12
# 270 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 172 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 271 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 272 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 273 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 274 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 275 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini::
# 276 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 178 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 277 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 278 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 181 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 279 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 24
# 280 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 184 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 281 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 282 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 283 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 284 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 285 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther::
# 286 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 189 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 287 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 25
# 288 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 190 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 289 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 290 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 291 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 292 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 293 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon::
# 294 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 196 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 295 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 26
# 296 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 199 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 297 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 298 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 202 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 299 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 300 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 301 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 302 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 303 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GivePinsir::
# 304 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 207 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 305 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 306 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 208 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 307 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 308 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 309 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 310 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 311 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon::
# 312 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 213 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 313 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 314 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_2
# 315 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_1:
# 316 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 216 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 317 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 318 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_5
# 319 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_4:
# 320 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 219 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 321 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 322 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_8
# 323 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_7:
# 324 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 325 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 326 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_2:
# 327 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 214 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 328 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty
# 329 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_1
# 330 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 331 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_5:
# 332 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 217 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 333 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC
# 334 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_4
# 335 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 336 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_8:
# 337 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 220 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 338 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull
# 339 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_7
# 340 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 341 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 342 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull::
# 343 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 226 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 344 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 345 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 227 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 346 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NoMoreRoomForPokemon
# 347 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 228 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 348 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 349 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 229 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 350 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
# 351 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 352 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 353 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 354 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon::
# 355 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 234 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 356 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	getpartysize
# 357 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 235 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 358 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	subvar VAR_RESULT, 1
# 359 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 236 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 360 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 361 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 237 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 362 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 363 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 238 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 364 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 365 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 366 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 367 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 368 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase::
# 369 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 243 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 370 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 371 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 244 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 372 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired
# 373 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 245 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 374 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
# 375 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 376 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 377 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 378 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins::
# 379 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 250 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 380 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins
# 381 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 251 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 382 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 383 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 384 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 385 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 386 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty::
# 387 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 256 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 388 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 389 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 257 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 390 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 391 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 258 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 392 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 393 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 259 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 394 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 395 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 260 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 396 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message gText_PlayerObtainedTheMon
# 397 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 261 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 398 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 399 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 262 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 400 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitfanfare
# 401 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 263 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 402 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 403 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 264 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 404 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 405 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_2
# 406 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_1:
# 407 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 267 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 408 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 409 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 410 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 411 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_2:
# 412 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 265 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 413 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon
# 414 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_1
# 415 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 416 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 417 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC::
# 418 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 272 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 419 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 420 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 273 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 421 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 422 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 274 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 423 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 424 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 275 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 425 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 426 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 276 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 427 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message gText_PlayerObtainedTheMon
# 428 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 277 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 429 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 430 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 278 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 431 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitfanfare
# 432 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 279 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 433 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 434 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 280 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 435 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 436 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC_2
# 437 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC_1:
# 438 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 283 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 439 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 440 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 284 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 441 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
# 442 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 443 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 444 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC_2:
# 445 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 281 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 446 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
# 447 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC_1
# 448 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 449 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 450 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC::
# 451 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 289 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 452 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 453 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 290 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 454 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 455 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 456 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 457 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 458 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs::
# 459 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 295 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 460 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 461 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 296 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 462 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 463 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 297 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 464 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_2
# 465 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_1:
# 466 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 300 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 467 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 468 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 301 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 469 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 470 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 302 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 471 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM
# 472 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 473 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 474 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_2:
# 475 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 298 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 476 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 477 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_1
# 478 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 479 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 480 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM::
# 481 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 307 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 482 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 483 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 308 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 484 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 485 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 309 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 486 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_GAME_CORNER_TMPRIZES, FALSE
# 487 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 310 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 488 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 489 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 311 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 490 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_3
# 491 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 313 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 492 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_4
# 493 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 315 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 494 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_5
# 495 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 317 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 496 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_6
# 497 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 319 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 498 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_7
# 499 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 321 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 500 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_8
# 501 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 323 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 502 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_9
# 503 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1:
# 504 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 505 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 506 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_3:
# 507 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 312 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 508 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM13
# 509 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1
# 510 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 511 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_4:
# 512 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 314 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 513 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM23
# 514 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1
# 515 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 516 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_5:
# 517 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 316 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 518 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM24
# 519 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1
# 520 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 521 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_6:
# 522 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 318 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 523 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM30
# 524 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1
# 525 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 526 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_7:
# 527 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 320 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 528 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM35
# 529 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1
# 530 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 531 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_8:
# 532 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 322 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 533 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 534 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1
# 535 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 536 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_9:
# 537 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 324 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 538 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 539 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1
# 540 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 541 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 542 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM13::
# 543 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 330 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 544 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM13
# 545 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 331 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 546 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 547 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 332 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 548 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BEAM
# 549 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 333 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 550 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 551 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 552 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 553 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 554 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM23::
# 555 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 338 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 556 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM23
# 557 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 339 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 558 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 3500
# 559 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 340 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 560 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_IRON_TAIL
# 561 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 341 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 562 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 563 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 564 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 565 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 566 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM24::
# 567 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 346 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 568 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM24
# 569 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 347 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 570 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 571 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 348 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 572 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_THUNDERBOLT
# 573 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 349 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 574 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 575 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 576 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 577 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 578 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM30::
# 579 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 354 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 580 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM30
# 581 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 355 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 582 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4500
# 583 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 356 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 584 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_SHADOW_BALL
# 585 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 357 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 586 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 587 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 588 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 589 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 590 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM35::
# 591 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 362 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 592 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM35
# 593 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 363 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 594 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 595 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 364 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 596 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FLAMETHROWER
# 597 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 365 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 598 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 599 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 600 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 601 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 602 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM::
# 603 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 370 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 604 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM, MSGBOX_YESNO
# 605 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 371 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 606 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 607 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM_2
# 608 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM_1:
# 609 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 374 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 610 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
# 611 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 612 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 613 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM_2:
# 614 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 372 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 615 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 616 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM_1
# 617 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 618 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 619 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem::
# 620 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 379 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 621 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 622 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 380 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 623 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 624 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 381 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 625 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 626 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem_2
# 627 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem_1:
# 628 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 384 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 629 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
# 630 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 631 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 632 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem_2:
# 633 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 382 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 634 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 635 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem_1
# 636 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 637 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 638 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize::
# 639 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 389 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 640 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 641 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 390 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 642 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkcoins VAR_RESULT
# 643 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 391 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 644 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_2
# 645 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_lt CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_2
# 646 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_1:
# 647 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 394 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 648 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkitemspace VAR_TEMP_1
# 649 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 395 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 650 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 651 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_5
# 652 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_4:
# 653 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 398 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 654 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 655 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 399 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 656 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 657 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 400 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 658 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	giveitem VAR_TEMP_1
# 659 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 401 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 660 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 661 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 662 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 663 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_2:
# 664 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 392 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 665 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
# 666 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_1
# 667 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 668 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_5:
# 669 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 396 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 670 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull
# 671 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_4
# 672 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 673 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 674 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull::
# 675 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 406 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 676 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 677 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 407 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 678 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_TooBadBagIsFull
# 679 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 408 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 680 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 681 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 409 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 682 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
# 683 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 684 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 685 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 686 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems::
# 687 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 414 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 688 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 689 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 415 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 690 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 691 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 416 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 692 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_2
# 693 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_1:
# 694 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 419 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 695 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 696 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 420 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 697 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 698 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 421 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 699 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem
# 700 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 701 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 702 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_2:
# 703 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 417 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 704 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 705 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_1
# 706 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 707 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 708 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem::
# 709 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 426 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 710 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 711 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 427 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 712 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 713 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 428 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 714 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 10, 0, MULTI_GAME_CORNER_BATTLE_ITEM_PRIZES, FALSE
# 715 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 429 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 716 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 717 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 430 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 718 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_3
# 719 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 432 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 720 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_4
# 721 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 434 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 722 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_5
# 723 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 436 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 724 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_6
# 725 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 438 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 726 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_7
# 727 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 440 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 728 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_8
# 729 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 442 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 730 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_9
# 731 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1:
# 732 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 733 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 734 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_3:
# 735 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 431 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 736 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall
# 737 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1
# 738 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 739 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_4:
# 740 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 433 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 741 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed
# 742 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1
# 743 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 744 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_5:
# 745 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 435 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 746 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal
# 747 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1
# 748 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 749 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_6:
# 750 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 437 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 751 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater
# 752 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1
# 753 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 754 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_7:
# 755 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 439 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 756 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute
# 757 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1
# 758 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 759 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_8:
# 760 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 441 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 761 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 762 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1
# 763 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 764 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_9:
# 765 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 443 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 766 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 767 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1
# 768 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 769 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 770 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall::
# 771 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 449 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 772 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SMOKE_BALL
# 773 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 450 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 774 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 800
# 775 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 451 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 776 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 777 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 778 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 779 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 780 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed::
# 781 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 456 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 782 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MIRACLE_SEED
# 783 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 457 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 784 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 785 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 458 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 786 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 787 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 788 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 789 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 790 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal::
# 791 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 463 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 792 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_CHARCOAL
# 793 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 464 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 794 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 795 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 465 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 796 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 797 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 798 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 799 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 800 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater::
# 801 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 470 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 802 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MYSTIC_WATER
# 803 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 471 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 804 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 805 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 472 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 806 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 807 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 808 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 809 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 810 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute::
# 811 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 477 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 812 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_YELLOW_FLUTE
# 813 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 478 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 814 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1600
# 815 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 479 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 816 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 817 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 818 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 819 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 820 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon::
# 821 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 483 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 822 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "I sure do fancy that PORYGON!\n"
# 823 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "But, it's hard to win at slots!$"
# 824 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 825 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday::
# 826 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 488 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 827 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Gahaha! I raked it in today!\n"
# 828 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "If only every day were like this…$"
# 829 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 830 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired::
# 831 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 493 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 832 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "A COIN CASE is required…$"
# 833 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 834 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes::
# 835 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 497 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 836 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "We exchange your COINS for prizes.$"
# 837 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 838 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize::
# 839 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 501 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 840 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Which prize would you like?$"
# 841 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 842 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_HereYouGo::
# 843 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 505 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 844 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "はい どうぞ$"
# 845 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 846 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize::
# 847 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 509 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 848 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "So, you want the {STR_VAR_1}?$"
# 849 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 850 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM::
# 851 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 513 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 852 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Okay, a TM of {STR_VAR_2}\n"
# 853 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "is what you want?$"
# 854 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 855 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins::
# 856 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 518 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 857 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Sorry, you'll need more COINS\n"
# 858 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "than that.$"
# 859 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 860 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_OopsNotEnoughRoom::
# 861 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 523 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 862 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "おきゃくさん もう もてないよ$"
# 863 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 864 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_Text_OhFineThen::
# 865 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 527 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
# 866 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "あっ そう$"
