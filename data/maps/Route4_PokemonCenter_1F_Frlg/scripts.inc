# 1 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_1F_OnTransition
# 5 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_OnTransition::
# 11 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 13 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 8 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE4
# 15 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 16 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 17 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Boy::
# 19 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou, MSGBOX_NPC
# 21 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 22 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 23 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 24 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Gentleman::
# 25 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 26 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 27 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 19 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 28 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean
# 29 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 31 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman::
# 35 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 37 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 26 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 38 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 27 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 40 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BOUGHT_MAGIKARP, Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_2
# 41 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_1:
# 42 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	showmoneybox 0, 0
# 44 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 45 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	checkplayergender
# 46 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 32 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 47 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 48 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_5
# 49 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_4:
# 50 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 35 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 51 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 52 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_8
# 53 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_7:
# 54 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 55 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 56 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_2:
# 57 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 28 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp
# 59 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_1
# 60 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 61 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_5:
# 62 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 33 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 63 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale
# 64 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_4
# 65 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 66 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_8:
# 67 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 68 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale
# 69 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_7
# 70 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 71 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 72 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale::
# 73 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 74 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500, MSGBOX_YESNO
# 75 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 76 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
# 77 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 78 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 79 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 80 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale::
# 81 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 82 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500, MSGBOX_YESNO
# 83 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 49 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 84 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
# 85 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 86 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 87 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 88 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp::
# 89 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 54 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 90 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 91 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_2
# 92 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_1:
# 93 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 57 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 94 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	checkmoney MAGIKARP_PRICE
# 95 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 58 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 96 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 97 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_5
# 98 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_4:
# 99 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 100 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 101 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 102 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MAGIKARP
# 103 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 63 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 104 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 105 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 64 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 106 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 107 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_8
# 108 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_7:
# 109 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 67 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 110 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 111 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_11
# 112 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_10:
# 113 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 70 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 114 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 115 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_14
# 116 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_13:
# 117 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 118 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 119 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_2:
# 120 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 121 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_DeclineMagikarp
# 122 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_1
# 123 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 124 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_5:
# 125 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 59 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 126 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_NotEnoughMoney
# 127 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_4
# 128 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 129 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_8:
# 130 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 131 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty
# 132 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_7
# 133 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 134 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_11:
# 135 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 68 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 136 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC
# 137 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_10
# 138 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 139 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_14:
# 140 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 71 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 141 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp
# 142 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_13
# 143 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 144 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 145 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty::
# 146 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 77 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 147 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 148 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 78 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 149 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 150 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 79 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 151 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 152 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty_2
# 153 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty_1:
# 154 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 82 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 155 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 156 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 83 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 157 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 158 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 84 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 159 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 160 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 85 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 161 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	special ChangePokemonNickname
# 162 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 86 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 163 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	waitstate
# 164 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 87 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 165 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 166 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 167 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 168 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty_2:
# 169 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 80 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 170 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 171 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty_1
# 172 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 173 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 174 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC::
# 175 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 92 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 176 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 177 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 93 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 178 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 179 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 94 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 180 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 181 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC_2
# 182 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC_1:
# 183 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 97 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 184 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 185 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 98 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 186 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 187 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 99 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 188 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	special ChangePokemonNickname
# 189 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 100 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 190 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	waitstate
# 191 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 101 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 192 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 193 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 102 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 194 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 195 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 103 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 196 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TransferMagikarp
# 197 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 198 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 199 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC_2:
# 200 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 95 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 201 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox
# 202 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC_1
# 203 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 204 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 205 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox::
# 206 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 108 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 207 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 208 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 109 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 209 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 210 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 211 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 212 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 213 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TransferMagikarp::
# 214 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 114 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 215 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 216 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 115 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 217 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 218 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 219 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 220 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 221 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp::
# 222 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 120 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 223 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 224 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 121 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 225 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 226 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 227 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 228 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 229 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BoughtMagikarp::
# 230 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 126 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 231 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_BOUGHT_MAGIKARP
# 232 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 127 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 233 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 234 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 235 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 236 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 237 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_PayForMagikarp::
# 238 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 132 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 239 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	removemoney MAGIKARP_PRICE
# 240 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 133 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 241 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	updatemoneybox
# 242 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 134 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 243 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 244 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 135 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 245 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	message Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp
# 246 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 136 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 247 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 248 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 137 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 249 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 250 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 138 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 251 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 252 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 253 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 254 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 255 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_DeclineMagikarp::
# 256 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 143 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 257 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou
# 258 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 144 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 259 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 260 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 145 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 261 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 262 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 263 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 264 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 265 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_NotEnoughMoney::
# 266 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 150 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 267 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney
# 268 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 151 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 269 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 270 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 152 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 271 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 272 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 273 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 274 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 275 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp::
# 276 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 157 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 277 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_IDontGiveRefunds
# 278 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 158 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 279 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 280 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 281 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 282 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 283 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp::
# 284 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 163 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 285 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 286 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 164 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 287 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon
# 288 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 165 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 289 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 290 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 166 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 291 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 292 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 293 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 294 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 295 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Nurse::
# 296 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 171 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 297 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 298 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 172 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 299 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 300 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 173 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 301 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 302 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 174 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 303 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 304 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 305 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 306 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 307 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Youngster::
# 308 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 179 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 309 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC, MSGBOX_NPC
# 310 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 311 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 312 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 313 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Newspaper::
# 314 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 184 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 315 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 316 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 185 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 317 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ItsANewspaper
# 318 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 186 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 319 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 320 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 321 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 322 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 323 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou::
# 324 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 190 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 325 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Okay, set six POKé BALLS in my\n"
# 326 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "belt…\p"
# 327 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Yeah, that'll do it. At most, you\n"
# 328 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "can have six POKéMON with you.$"
# 329 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 330 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean::
# 331 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 197 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 332 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET attacks CERULEAN\n"
# 333 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "citizens…\p"
# 334 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Not a day goes by without TEAM\n"
# 335 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "ROCKET being in the news.$"
# 336 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 337 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500::
# 338 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 204 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 339 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Hello there, laddie!\n"
# 340 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have I got a deal just for you!\p"
# 341 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'll let you have a secret POKéMON\n"
# 342 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "- a MAGIKARP - for just ¥500!\p"
# 343 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, you'll buy it, am I right?$"
# 344 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 345 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500::
# 346 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 212 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 347 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Hello there, sweetie pie!\n"
# 348 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have I got a deal just for you!\p"
# 349 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'll let you have a secret POKéMON\n"
# 350 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "- a MAGIKARP - for just ¥500!\p"
# 351 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, you'll buy it, am I right?$"
# 352 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 353 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp::
# 354 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 220 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 355 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} paid an outrageous ¥500\n"
# 356 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "and bought the MAGIKARP…$"
# 357 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 358 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou::
# 359 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 225 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 360 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "No? You say no? I'm only doing this\n"
# 361 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "as a favor to you!$"
# 362 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 363 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon::
# 364 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 230 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 365 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's no more room for any more\n"
# 366 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON, it looks like.$"
# 367 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 368 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney::
# 369 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 235 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 370 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You'll need more money than that!$"
# 371 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 372 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_IDontGiveRefunds::
# 373 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 239 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 374 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Well, I don't give refunds.\n"
# 375 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You knew what you were getting!$"
# 376 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 377 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC::
# 378 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 244 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 379 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Sometimes, you'll have too many\n"
# 380 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON with you to add any more.\p"
# 381 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "In that case, you should just\n"
# 382 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "store some using any PC.$"
# 383 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"

# 384 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
Route4_PokemonCenter_1F_Text_ItsANewspaper::
# 385 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 251 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
# 386 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's a newspaper.$"
