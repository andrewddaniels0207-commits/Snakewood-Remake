# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_CoinsClerk_2
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk_1:
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk_2:
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CoinsClerk_1
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_3
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_4
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_1:
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_3:
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy50Coins
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_1
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_4:
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy500Coins
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_1
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_3
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_4
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_1:
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_3:
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy50Coins
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_1
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_4:
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy500Coins
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_1
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 - 50 ), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_Buy50Coins_2
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins_1:
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins_2:
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy50Coins_1
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 - 500 ), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_Buy500Coins_2
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins_1:
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins_2:
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy500Coins_1
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_2
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_1:
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_2:
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_1
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_3
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_4
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_5
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_6
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1:
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize_3:
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize_4:
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TorchicDoll
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize_5:
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_MudkipDoll
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize_6:
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_2
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_1:
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_6
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_7
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_8
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4:
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_2:
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_1
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_6:
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_7:
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_8:
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_2
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_1:
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_5
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_4:
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_2:
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_1
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_5:
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_4
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_2
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_1:
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_5
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_4:
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_2:
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_1
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_5:
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_4
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_2
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_1:
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_5
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_4:
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_2:
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_1
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_5:
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_4
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_2
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_1:
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_2:
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_1
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_3
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_4
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_5
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_6
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_7
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_8
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1:
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_3:
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMDoubleTeam
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_4:
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMPsychic
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_5:
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMFlamethrower
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_6:
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMThunderbolt
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_7:
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMIceBeam
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_8:
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMPsychic::
# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_PSYCHIC
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_PSYCHIC
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_2
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_1:
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_6
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_7
# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_8
# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_9
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_10
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4:
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_2:
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_1
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_6:
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_7:
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMPsychic
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_8:
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_9:
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_10:
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_DOUBLE_TEAM_COINS
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_2
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_1:
# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_DOUBLE_TEAM
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_5
# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_4:
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_2:
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_1
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_5:
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_4
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_PSYCHIC_COINS
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMPsychic_2
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic_1:
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_PSYCHIC
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMPsychic_5
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic_4:
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_PSYCHIC
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic_2:
# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMPsychic_1
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic_5:
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMPsychic_4
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_FLAMETHROWER_COINS
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_2
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_1:
# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_5
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_4:
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_2:
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_1
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_5:
# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_4
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_THUNDERBOLT_COINS
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_2
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_1:
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_5
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_4:
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_2:
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_1
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_5:
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_4
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_ICE_BEAM_COINS
# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_2
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_1:
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_5
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_4:
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_2:
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_1
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_5:
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_4
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_Girl_2
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl_1:
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_Girl_5
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl_4:
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Girl_9
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Girl_10
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_Girl_11
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl_7:
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl_2:
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Girl_1
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl_5:
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Girl_4
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl_9:
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Girl_7
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl_10:
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Girl_7
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl_11:
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Girl_7
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll_2
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll_1:
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll_2:
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll_1
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_GiveTorchicDoll_2
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll_1:
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll_2:
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveTorchicDoll_1
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_GiveMudkipDoll_2
# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll_1:
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll_2:
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveMudkipDoll_1
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_PokefanM_2
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM_1:
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM_2:
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanM_1
# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_TryGive20Coins_2
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins_1:
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, 1
# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge MauvilleCity_GameCorner_EventScript_TryGive20Coins_5
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins_4:
# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins_2:
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TryGive20Coins_1
# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins_5:
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TryGive20Coins_4
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine0_2
# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0_1:
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0_2:
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine0_1
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine1_2
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1_1:
# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1_2:
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine1_1
# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine2_2
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2_1:
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2_2:
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine2_1
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine3_2
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3_1:
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3_2:
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine3_1
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine4_2
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4_1:
# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4_2:
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine4_1
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine5_2
# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5_1:
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5_2:
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine5_1
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine6_2
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6_1:
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6_2:
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine6_1
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine7_2
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7_1:
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7_2:
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine7_1
# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine8_2
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8_1:
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8_2:
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine8_1
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine9_2
# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9_1:
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9_2:
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine9_1
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine10_2
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10_1:
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1505 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10_2:
# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine10_1
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine11_2
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11_1:
# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11_2:
# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachine11_1
# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner::
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins::
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the games?\p"
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "But you don't have a COIN CASE for\n"
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "stowing the COINS.$"
# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins::
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's ¥1000 for 50 COINS.\n"
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like some?$"
# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins::
# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here are your COINS!$"
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney::
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "enough money…$"
# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull::
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Your COIN CASE is full.$"
# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen::
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Good luck on your adventure!$"
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes::
# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can exchange your COINS for\n"
# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "prizes here.$"
# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize::
# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"
# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX::
# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC::
# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins::
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor::
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo::
# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You need to save some COINS before\l"
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "coming back here.$"
# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX::
# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"
# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo::
# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore::
# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne::
# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the same DOLLS.\p"
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like one of them?$"
# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2::
# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"
# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow::
# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You want it, but not right now?$"
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative::
# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can have this!$"
# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot::
# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the jackpot.$"
# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor::
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "you need a COIN CASE.\p"
# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I think the young lady next door\n"
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "had one. Go see her!$"
# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins::
# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is too much for me.\l"
# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here, take some COINS!$"
# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone::
# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "everyone.\p"
# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "For me, it's the GAME CORNER.$"
# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates::
# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
# 1676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "rates.\p"
# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Check your COINS if you're going to\n"
# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "pick a table.$"
# 1679 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime::
# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I should get back to work.$"
# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay::
# 1686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
# 1688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "in the GAME CORNER.$"
# 1689 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck::
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's rather demanding.\p"
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Win or lose, it's only by luck.$"
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed::
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the SLOTS.$"
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7::
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "right on “7.”\p"
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If it stops on “7” during the REEL TIME\n"
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonus game, you'll receive extra COINS.$"
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo::
# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "about the SLOTS.\p"
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The more lightning bolts you stock,\n"
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "the more REEL TIME chances you get.\p"
# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In a game with the maximum five\n"
# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "REEL TIME chances…\p"
# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It is possible to receive four regular\n"
# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "bonuses, then a big bonus.\p"
# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "That would total 660 COINS, but it's\n"
# 1719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "very difficult to get.$"
# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase::
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "a COIN CASE.$"
