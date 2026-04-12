# 1 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 2 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CeladonCity_GameCorner_OnLoad
# 5 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 7 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 8 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_OnLoad::
# 9 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 6 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_OnLoad_2
# 11 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_OnLoad_1:
# 12 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 13 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 14 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_OnLoad_2:
# 15 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 7 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call CeladonCity_GameCorner_EventScript_HideRocketHideout
# 17 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_OnLoad_1
# 18 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 19 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 20 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_HideRocketHideout::
# 21 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 13 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 23 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 25 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 27 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 29 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 31 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	return
# 32 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 33 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 34 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_InfoClerk::
# 35 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor, MSGBOX_NPC
# 37 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 38 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 39 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 40 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_CoinsClerk::
# 41 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 42 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 43 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 29 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 46 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	showmoneybox 0, 0
# 47 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	showcoinsbox 1, 6
# 49 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	message CeladonCity_GameCorner_Text_WelcomeBuySomeCoins
# 51 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmessage
# 53 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 54 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	multichoice 13, 0, MULTI_GAME_CORNER_COIN_PURCHASE_COUNTER, FALSE
# 55 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 57 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 35 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 60 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_EventScript_CoinsClerk_3
# 61 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 62 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_EventScript_CoinsClerk_4
# 63 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 40 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 64 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_EventScript_CoinsClerk_5
# 65 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 42 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 66 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_EventScript_CoinsClerk_6
# 67 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_CoinsClerk_1:
# 68 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 69 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 70 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_CoinsClerk_3:
# 71 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 72 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BuyCoins
# 73 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1
# 74 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 75 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_CoinsClerk_4:
# 76 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 77 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BuyCoins
# 78 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1
# 79 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 80 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_CoinsClerk_5:
# 81 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 41 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
# 83 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1
# 84 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 85 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_CoinsClerk_6:
# 86 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 87 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
# 88 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1
# 89 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 90 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 91 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins::
# 92 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 93 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_BuyCoins_2
# 94 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins_1:
# 95 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 96 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_0x8009, 0
# 97 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_EventScript_BuyCoins_5
# 98 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins_4:
# 99 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 100 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_0x8009, 1
# 101 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_EventScript_BuyCoins_8
# 102 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins_7:
# 103 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 104 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 105 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins_2:
# 106 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 107 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkNoCoinCase
# 108 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BuyCoins_1
# 109 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 110 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins_5:
# 111 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 53 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 112 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Buy50Coins
# 113 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BuyCoins_4
# 114 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 115 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BuyCoins_8:
# 116 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 117 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Buy500Coins
# 118 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BuyCoins_7
# 119 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 120 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 121 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy500Coins::
# 122 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 62 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 123 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 124 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 125 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 500, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 126 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 64 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 127 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkmoney 10000
# 128 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 129 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 130 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_EventScript_Buy500Coins_2
# 131 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy500Coins_1:
# 132 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 133 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 500
# 134 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 69 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 135 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removemoney 10000
# 136 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 70 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 137 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
# 138 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 139 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 140 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy500Coins_2:
# 141 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 66 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 142 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
# 143 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Buy500Coins_1
# 144 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 145 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 146 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy50Coins::
# 147 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 75 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 148 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 149 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 76 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 150 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 50, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 151 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 77 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 152 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkmoney 1000
# 153 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 154 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 155 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_EventScript_Buy50Coins_2
# 156 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy50Coins_1:
# 157 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 81 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 158 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 50
# 159 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 160 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removemoney 1000
# 161 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 162 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
# 163 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 164 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 165 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Buy50Coins_2:
# 166 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 79 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 167 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
# 168 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Buy50Coins_1
# 169 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 170 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 171 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BoughtCoins::
# 172 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 173 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	updatemoneybox
# 174 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 175 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 176 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 90 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 177 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 178 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 91 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 179 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreYourCoins
# 180 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 181 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 182 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 183 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 184 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 185 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkEnd::
# 186 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 97 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 187 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	hidemoneybox
# 188 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 98 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 189 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	hidecoinsbox 0, 5
# 190 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 191 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
# 192 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 193 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 194 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 195 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkDeclineBuy::
# 196 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 104 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 197 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ComePlaySometime
# 198 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 105 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 199 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 200 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 201 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 202 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 203 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNoCoinCase::
# 204 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 110 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 205 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SorryDontHaveCoinCase
# 206 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 111 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 207 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 208 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 209 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 210 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 211 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins::
# 212 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 116 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 213 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsFull
# 214 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 117 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 215 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 216 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 217 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 218 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 219 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney::
# 220 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 122 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 221 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CantAffordCoins
# 222 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 123 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 223 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
# 224 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 225 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 226 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 227 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_BaldingMan::
# 228 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 128 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 229 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 230 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 129 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 231 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 232 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 130 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 233 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace
# 234 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 131 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 235 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 236 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 237 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 238 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 239 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_FaceSlotMachine::
# 240 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 136 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 241 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	closemessage
# 242 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 137 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 243 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 244 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 138 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 245 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
# 246 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 139 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 247 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
# 248 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 249 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 250 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 251 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Woman1::
# 252 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 144 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 253 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 254 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 145 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 255 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 256 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 146 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 257 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds
# 258 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 147 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 259 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 260 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 261 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 262 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 263 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Fisher::
# 264 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 152 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 265 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 266 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 153 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 267 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 268 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 154 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 269 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_10_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_Fisher_2
# 270 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Fisher_1:
# 271 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 157 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 272 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DoYouWantToPlay
# 273 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 158 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 274 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Fisher_5
# 275 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Fisher_4:
# 276 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 161 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 277 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 278 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 162 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 279 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 10, CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins
# 280 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 163 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 281 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 10
# 282 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 164 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 283 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 284 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 165 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 285 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received10CoinsFromMan
# 286 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 166 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 287 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 288 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 167 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 289 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 290 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 168 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 291 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_10_COINS_FROM_GAMBLER
# 292 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 169 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 293 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 294 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 295 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 296 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Fisher_2:
# 297 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 155 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 298 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins
# 299 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Fisher_1
# 300 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 301 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Fisher_5:
# 302 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 159 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 303 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 304 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Fisher_4
# 305 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 306 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 307 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins::
# 308 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 174 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 309 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontNeedMyCoins
# 310 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 175 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 311 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 312 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 313 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 314 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 315 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GamblerNoCoinCase::
# 316 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 180 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 317 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 318 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 181 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 319 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontHaveCoinCase
# 320 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 182 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 321 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 322 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 323 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 324 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 325 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins::
# 326 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 187 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 327 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinsComeAndGo
# 328 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 188 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 329 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 330 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 331 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 332 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 333 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GymGuy::
# 334 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 193 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 335 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 336 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 194 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 337 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 338 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 195 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 339 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_GameCorner_EventScript_GymGuy_2
# 340 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GymGuy_1:
# 341 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 198 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 342 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GymGuyAdvice
# 343 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 199 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 344 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 345 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 346 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 347 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GymGuy_2:
# 348 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 196 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 349 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GymGuyPostVictory
# 350 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GymGuy_1
# 351 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 352 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 353 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GymGuyPostVictory::
# 354 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 204 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 355 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RareMonsForCoins
# 356 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 205 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 357 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 358 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 359 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 360 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 361 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Woman2::
# 362 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 210 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 363 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 364 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 211 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 365 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 366 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 212 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 367 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck
# 368 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 213 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 369 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 370 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 371 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 372 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 373 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_OldMan::
# 374 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 218 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 375 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 376 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 219 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 377 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 378 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 220 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 379 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SoEasyToGetHooked
# 380 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 221 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 381 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 382 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 383 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 384 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 385 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Scientist::
# 386 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 226 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 387 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 388 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 227 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 389 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 390 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 228 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 391 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_Scientist_2
# 392 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Scientist_1:
# 393 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 231 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 394 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WantSomeCoins
# 395 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 232 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 396 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Scientist_5
# 397 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Scientist_4:
# 398 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 235 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 399 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 400 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 236 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 401 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 20, CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins
# 402 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 237 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 403 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 20
# 404 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 238 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 405 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 406 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 239 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 407 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 240 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 410 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 241 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 411 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 412 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 242 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 413 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER
# 414 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 243 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 415 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 416 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 417 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 418 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Scientist_2:
# 419 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 229 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 420 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins
# 421 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Scientist_1
# 422 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 423 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Scientist_5:
# 424 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 233 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 425 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 426 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Scientist_4
# 427 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 428 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 429 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins::
# 430 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 248 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 431 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouHaveLotsOfCoins
# 432 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 249 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 433 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 434 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 435 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 436 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 437 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins::
# 438 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 254 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 439 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant
# 440 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 255 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 441 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 442 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 443 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 444 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 445 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Gentleman::
# 446 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 260 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 447 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 448 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 261 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 449 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 450 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 262 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 451 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER_2, CeladonCity_GameCorner_EventScript_Gentleman_2
# 452 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Gentleman_1:
# 453 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 265 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 454 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo
# 455 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 266 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 456 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Gentleman_5
# 457 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Gentleman_4:
# 458 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 269 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 459 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 460 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 270 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 461 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 20, CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins
# 462 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 271 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 463 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 20
# 464 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 272 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 465 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 466 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 273 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 467 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromMan
# 468 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 274 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 469 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 470 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 275 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 471 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 472 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 276 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 473 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER_2
# 474 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 277 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 475 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 476 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 477 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 478 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Gentleman_2:
# 479 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 263 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 480 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins
# 481 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Gentleman_1
# 482 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 483 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Gentleman_5:
# 484 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 267 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 485 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
# 486 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Gentleman_4
# 487 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 488 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 489 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins::
# 490 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 282 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 491 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouveGotPlentyCoins
# 492 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 283 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 493 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 494 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 495 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 496 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 497 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins::
# 498 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 288 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 499 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WatchReelsClosely
# 500 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 289 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 501 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
# 502 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 503 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 504 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 505 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine0::
# 506 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 294 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 507 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 508 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 295 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 509 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 510 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 296 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 511 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 512 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 513 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 514 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 515 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_DontPlaySlotMachine::
# 516 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 301 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 517 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 518 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 519 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 520 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 521 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine::
# 522 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 306 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 523 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_SlotMachine_2
# 524 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine_1:
# 525 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 309 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 526 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SlotMachineWantToPlay, MSGBOX_YESNO
# 527 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 310 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 528 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 529 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_EventScript_SlotMachine_5
# 530 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine_4:
# 531 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 313 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 532 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 0, LOCALID_PLAYER
# 533 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 315 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 534 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_NUM ( MAP_CELADON_CITY_GAME_CORNER )
# 535 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 316 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 536 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP ( MAP_CELADON_CITY_GAME_CORNER )
# 537 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 318 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 538 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_GROUP ( MAP_CELADON_CITY_GAME_CORNER )
# 539 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 319 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 540 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_NUM ( MAP_CELADON_CITY_GAME_CORNER )
# 541 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 321 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 542 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	dofieldeffect FLDEFF_SMILEY_FACE_ICON
# 543 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 322 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 544 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_SMILEY_FACE_ICON
# 545 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 323 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 546 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetRandomSlotMachineId
# 547 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 324 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 548 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playslotmachine VAR_RESULT
# 549 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 325 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 550 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 551 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 552 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 553 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine_2:
# 554 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 307 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 555 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase
# 556 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine_1
# 557 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 558 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine_5:
# 559 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 311 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 560 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_DontPlaySlotMachine
# 561 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine_4
# 562 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 563 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 564 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine1::
# 565 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 330 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 566 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 567 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 331 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 568 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 569 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 332 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 570 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 571 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 572 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 573 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 574 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine2::
# 575 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 337 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 576 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 577 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 338 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 578 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 579 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 339 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 580 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 581 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 582 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 583 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 584 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine3::
# 585 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 344 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 586 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 587 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 345 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 588 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 589 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 346 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 590 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 591 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 592 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 593 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 594 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine4::
# 595 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 351 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 596 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 597 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 352 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 598 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 599 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 353 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 600 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 601 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 602 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 603 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 604 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine5::
# 605 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 358 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 606 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 607 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 359 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 608 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 5
# 609 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 360 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 610 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 611 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 612 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 613 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 614 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine6::
# 615 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 365 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 616 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 617 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 366 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 618 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 619 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 367 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 620 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 621 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 622 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 623 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 624 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine7::
# 625 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 372 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 626 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 627 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 373 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 628 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 7
# 629 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 374 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 630 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 631 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 632 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 633 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 634 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine8::
# 635 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 379 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 636 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 637 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 380 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 638 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 8
# 639 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 381 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 640 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 641 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 642 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 643 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 644 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine9::
# 645 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 386 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 646 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 647 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 387 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 648 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 9
# 649 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 388 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 650 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 651 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 652 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 653 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 654 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine10::
# 655 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 393 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 656 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 657 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 394 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 658 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 10
# 659 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 395 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 660 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 661 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 662 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 663 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 664 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine11::
# 665 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 400 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 666 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 667 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 401 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 668 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 11
# 669 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 402 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 670 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 671 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 672 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 673 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 674 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine12::
# 675 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 407 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 676 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 677 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 678 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 12
# 679 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 680 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 681 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 682 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 683 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 684 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine13::
# 685 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 414 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 686 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 687 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 415 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 688 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 13
# 689 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 416 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 690 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 691 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 692 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 693 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 694 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine14::
# 695 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 421 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 696 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 697 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 422 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 698 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 14
# 699 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 423 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 700 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 701 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 702 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 703 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 704 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine15::
# 705 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 428 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 706 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 707 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 429 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 708 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 15
# 709 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 430 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 710 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 711 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 712 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 713 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 714 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine16::
# 715 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 435 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 716 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 717 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 436 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 718 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 16
# 719 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 437 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 720 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 721 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 722 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 723 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 724 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine17::
# 725 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 442 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 726 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 727 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 443 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 728 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 17
# 729 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 444 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 730 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 731 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 732 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 733 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 734 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine18::
# 735 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 449 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 736 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 737 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 450 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 738 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 18
# 739 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 451 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 740 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 741 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 742 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 743 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 744 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine19::
# 745 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 456 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 746 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 747 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 457 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 748 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 19
# 749 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 458 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 750 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 751 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 752 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 753 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 754 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine20::
# 755 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 463 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 756 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 757 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 464 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 758 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 20
# 759 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 465 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 760 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 761 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 762 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 763 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 764 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine21::
# 765 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 470 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 766 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 767 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 471 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 768 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 21
# 769 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 472 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 770 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
# 771 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 772 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 773 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 774 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase::
# 775 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 477 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 776 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsRequired
# 777 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 478 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 778 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 779 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 780 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 781 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 782 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Poster::
# 783 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 483 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 784 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 785 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 484 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 786 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt
# 787 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 485 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 788 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_Poster_2
# 789 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Poster_1:
# 790 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 488 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 791 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 792 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 793 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 794 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_Poster_2:
# 795 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 486 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 796 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call CeladonCity_GameCorner_EventScript_OpenRocketHideout
# 797 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Poster_1
# 798 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 799 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 800 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_OpenRocketHideout::
# 801 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 493 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 802 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_UNLOCK
# 803 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 494 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 804 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_StairsTop, 0
# 805 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 495 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 806 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_StairsTop, 1
# 807 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 496 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 808 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_StairsBottom, 1
# 809 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 497 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 810 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_StairsTop, 1
# 811 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 498 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 812 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_stairsBottom, 1
# 813 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 499 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 814 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	special DrawWholeMapView
# 815 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 500 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 816 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_OPENED_ROCKET_HIDEOUT
# 817 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	return
# 818 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 819 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 820 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_RocketGrunt::
# 821 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 505 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 822 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_7, CeladonCity_GameCorner_Text_GruntIntro, CeladonCity_GameCorner_Text_GruntDefeat, CeladonCity_GameCorner_Text_DefeatedGrunt
# 823 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 506 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 824 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 825 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 826 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 827 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 828 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DefeatedGrunt::
# 829 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 511 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 830 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle
# 831 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 512 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 832 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	closemessage
# 833 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 513 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 834 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 835 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq CeladonCity_GameCorner_Text_DefeatedGrunt_2
# 836 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DefeatedGrunt_1:
# 837 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 516 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 838 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 839 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ne CeladonCity_GameCorner_Text_DefeatedGrunt_5
# 840 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DefeatedGrunt_4:
# 841 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 519 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 842 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removeobject LOCALID_GAME_CORNER_GRUNT
# 843 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 520 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 844 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
# 845 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 846 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 847 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DefeatedGrunt_2:
# 848 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 514 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 849 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call CeladonCity_GameCorner_Text_GruntExitWest
# 850 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_Text_DefeatedGrunt_1
# 851 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 852 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DefeatedGrunt_5:
# 853 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 517 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 854 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call CeladonCity_GameCorner_Text_GruntExit
# 855 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_Text_DefeatedGrunt_4
# 856 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 857 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 858 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntExitWest::
# 859 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 525 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 860 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExitWest
# 861 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 526 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 862 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
# 863 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	return
# 864 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 865 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 866 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntExit::
# 867 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 531 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 868 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExit
# 869 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 532 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 870 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
# 871 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	return
# 872 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 873 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 874 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 536 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 875 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExitWest:
# 876 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 537 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 877 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_down
# 878 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 538 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 879 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 880 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 539 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 881 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 882 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 540 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 883 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_up
# 884 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 541 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 885 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 886 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 542 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 887 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 888 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 543 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 889 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 890 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 544 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 891 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 892 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 545 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 893 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	step_end
# 894 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 895 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 548 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 896 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExit:
# 897 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 549 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 898 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 899 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 550 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 900 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 901 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 551 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 902 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 903 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 552 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 904 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 905 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 553 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 906 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 907 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 554 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 908 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 909 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 555 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 910 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	step_end
# 911 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 912 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine1::
# 913 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 559 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 914 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutOfOrder, MSGBOX_SIGN
# 915 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 916 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 917 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 918 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine2::
# 919 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 564 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 920 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutToLunch, MSGBOX_SIGN
# 921 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 922 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 923 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 924 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_UnusableSlotMachine3::
# 925 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 569 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 926 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SomeonesKeys, MSGBOX_SIGN
# 927 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end
# 928 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 929 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 930 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor::
# 931 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 573 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 932 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Welcome!\p"
# 933 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You can exchange your COINS for\n"
# 934 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "fabulous prizes next door.$"
# 935 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 936 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WelcomeBuySomeCoins::
# 937 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 579 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 938 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Welcome to ROCKET GAME CORNER!\p"
# 939 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Do you need some game COINS?\n"
# 940 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Would you like to buy some?$"
# 941 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 942 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_ComePlaySometime::
# 943 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 585 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 944 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "No?\n"
# 945 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Please come play sometime!$"
# 946 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 947 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SorryDontHaveCoinCase::
# 948 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 590 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 949 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Oh, I'm sorry.\n"
# 950 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You don't have a COIN CASE.$"
# 951 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 952 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_CoinCaseIsFull::
# 953 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 595 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 954 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Whoops!\n"
# 955 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Your COIN CASE is full.$"
# 956 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 957 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_CantAffordCoins::
# 958 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 600 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 959 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You can't afford the COINS.$"
# 960 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 961 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_HereAreYourCoins::
# 962 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 604 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 963 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Thank you.\n"
# 964 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Here are your COINS!$"
# 965 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 966 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace::
# 967 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 609 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 968 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Keep this quiet.\p"
# 969 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "It's rumored that this place is run\n"
# 970 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "by TEAM ROCKET.$"
# 971 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 972 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds::
# 973 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 615 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 974 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I think these machines have\n"
# 975 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "different odds.$"
# 976 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 977 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DoYouWantToPlay::
# 978 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 620 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 979 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Kid, do you want to play?$"
# 980 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 981 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_Received10CoinsFromMan::
# 982 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 624 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 983 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 10 COINS\n"
# 984 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "from the man.$"
# 985 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 986 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DontNeedMyCoins::
# 987 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 629 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 988 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You don't need my COINS!$"
# 989 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 990 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WinsComeAndGo::
# 991 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 633 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 992 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Wins seem to come and go.\n"
# 993 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Nothing's a sure thing.$"
# 994 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 995 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck::
# 996 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 638 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 997 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "These slot games…\n"
# 998 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 999 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1000 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GymGuyAdvice::
# 1001 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 643 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1002 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey!\p"
# 1003 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You have better things to do,\n"
# 1004 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "champ in the making!\p"
# 1005 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "CELADON GYM's LEADER is ERIKA.\p"
# 1006 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "She is a user of GRASS-type\n"
# 1007 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "POKéMON, and at one with nature.\p"
# 1008 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "She might appear docile because of\n"
# 1009 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "her flower arranging…\p"
# 1010 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "But she's not one to be taken\n"
# 1011 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "lightly!$"
# 1012 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1013 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_RareMonsForCoins::
# 1014 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 656 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1015 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "They offer rare POKéMON that can\n"
# 1016 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "be exchanged for your COINS.\p"
# 1017 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "But, I just can't seem to win!$"
# 1018 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1019 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SoEasyToGetHooked::
# 1020 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 662 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1021 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Games are scary!\n"
# 1022 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "It's so easy to get hooked!$"
# 1023 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1024 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WantSomeCoins::
# 1025 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 667 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1026 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "What's up?\n"
# 1027 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Want some COINS?$"
# 1028 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1029 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy::
# 1030 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 672 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1031 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 20 COINS\n"
# 1032 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "from the nice guy.$"
# 1033 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1034 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_YouHaveLotsOfCoins::
# 1035 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 677 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1036 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You have lots of COINS!$"
# 1037 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1038 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant::
# 1039 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 681 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1040 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Darn! I need more COINS for the\n"
# 1041 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "POKéMON I want!$"
# 1042 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1043 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo::
# 1044 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 686 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1045 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey, what? You're throwing me off!\n"
# 1046 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Here are some COINS, so shoo!$"
# 1047 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1048 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_Received20CoinsFromMan::
# 1049 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 691 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1050 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 20 COINS\n"
# 1051 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "from the man.$"
# 1052 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1053 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_YouveGotPlentyCoins::
# 1054 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 696 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1055 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You've got plenty of your own\n"
# 1056 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "COINS!$"
# 1057 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1058 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_WatchReelsClosely::
# 1059 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 701 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1060 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "The trick is to watch the reels\n"
# 1061 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "closely.$"
# 1062 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1063 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntIntro::
# 1064 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 706 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1065 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I'm guarding this poster!\n"
# 1066 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Go away, or else!$"
# 1067 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1068 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntDefeat::
# 1069 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 711 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1070 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Dang!$"
# 1071 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1072 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_GruntPostBattle::
# 1073 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 715 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1074 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "The TEAM ROCKET HIDEOUT might\n"
# 1075 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "be discovered!\p"
# 1076 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I better tell BOSS!$"
# 1077 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1078 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt::
# 1079 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 721 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1080 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey!\p"
# 1081 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A switch behind the poster!?\n"
# 1082 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Let's push it!$"
# 1083 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1084 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_CoinCaseIsRequired::
# 1085 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 727 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1086 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A COIN CASE is required…$"
# 1087 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1088 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_DontHaveCoinCase::
# 1089 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 731 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1090 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Oops!\n"
# 1091 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Don't have the COIN CASE!$"
# 1092 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1093 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SlotMachineWantToPlay::
# 1094 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 736 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1095 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A slot machine!\n"
# 1096 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Want to play?$"
# 1097 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1098 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_OutOfOrder::
# 1099 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 741 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1100 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "OUT OF ORDER\n"
# 1101 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "This is broken.$"
# 1102 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1103 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_OutToLunch::
# 1104 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 746 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1105 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "OUT TO LUNCH\n"
# 1106 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "This is reserved.$"
# 1107 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 1108 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Text_SomeonesKeys::
# 1109 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 751 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
# 1110 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Someone's keys!\n"
# 1111 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "They'll be back.$"
