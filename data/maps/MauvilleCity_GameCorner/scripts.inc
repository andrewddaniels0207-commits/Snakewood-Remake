MauvilleCity_GameCorner_MapScripts::
	.byte 0


MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_CoinsClerk_2
MauvilleCity_GameCorner_EventScript_CoinsClerk_1:
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
	return

MauvilleCity_GameCorner_EventScript_CoinsClerk_2:
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NeedCoinCase
	goto MauvilleCity_GameCorner_EventScript_CoinsClerk_1


MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_3
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_4
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_1:
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
	end

MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_3:
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy50Coins
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_1

MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_4:
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy500Coins
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50_1


MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_3
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_4
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_1:
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
	end

MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_3:
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy50Coins
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_1

MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_4:
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_Buy500Coins
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500_1


MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 - 50 ), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_Buy50Coins_2
MauvilleCity_GameCorner_EventScript_Buy50Coins_1:
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end

MauvilleCity_GameCorner_EventScript_Buy50Coins_2:
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughMoney
	goto MauvilleCity_GameCorner_EventScript_Buy50Coins_1


MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 - 500 ), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_Buy500Coins_2
MauvilleCity_GameCorner_EventScript_Buy500Coins_1:
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end

MauvilleCity_GameCorner_EventScript_Buy500Coins_2:
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughMoney
	goto MauvilleCity_GameCorner_EventScript_Buy500Coins_1


MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_2
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_1:
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end

MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_2:
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_1


MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
	return


MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
	return


MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_3
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_4
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_5
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_6
MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1:
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
	end

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_3:
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TreeckoDoll
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_4:
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TorchicDoll
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_5:
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_MudkipDoll
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_6:
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1


MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
	return


MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
	return


MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
	return


MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_2
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_1:
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_6
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_7
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_8
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4:
	end

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_2:
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_1

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_6:
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_7:
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_8:
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4


MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_2
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_1:
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_5
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_4:
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_2:
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	goto MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_1

MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_5:
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForDoll
	goto MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll_4


MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_2
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_1:
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_5
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_4:
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_2:
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	goto MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_1

MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_5:
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForDoll
	goto MauvilleCity_GameCorner_EventScript_BuyTorchicDoll_4


MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, DOLL_COINS
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_2
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_1:
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_5
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_4:
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_2:
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	goto MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_1

MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_5:
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForDoll
	goto MauvilleCity_GameCorner_EventScript_BuyMudkipDoll_4


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end


MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end


MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_2
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_1:
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end

MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_2:
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_1


MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
	return


MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
	return


MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_3
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_4
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_5
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_6
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_7
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_8
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1:
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
	end

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_3:
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMDoubleTeam
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_4:
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMPsychic
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_5:
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMFlamethrower
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_6:
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMThunderbolt
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_7:
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TMIceBeam
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_8:
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1


MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
	return


MauvilleCity_GameCorner_EventScript_TMPsychic::
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_PSYCHIC
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_PSYCHIC
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
	return


MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
	return


MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
	return


MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
	return


MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_2
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_1:
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_6
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_7
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_8
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_9
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_10
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4:
	end

MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_2:
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_1

MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_6:
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4

MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_7:
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMPsychic
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4

MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_8:
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4

MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_9:
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4

MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_10:
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize_4


MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_DOUBLE_TEAM_COINS
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_2
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_1:
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_DOUBLE_TEAM
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_5
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_4:
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_2:
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_1

MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_5:
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam_4


MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_PSYCHIC_COINS
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMPsychic_2
MauvilleCity_GameCorner_EventScript_BuyTMPsychic_1:
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_PSYCHIC
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMPsychic_5
MauvilleCity_GameCorner_EventScript_BuyTMPsychic_4:
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_PSYCHIC
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTMPsychic_2:
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMPsychic_1

MauvilleCity_GameCorner_EventScript_BuyTMPsychic_5:
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMPsychic_4


MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_FLAMETHROWER_COINS
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_2
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_1:
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_5
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_4:
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_2:
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_1

MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_5:
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower_4


MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_THUNDERBOLT_COINS
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_2
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_1:
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_5
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_4:
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_2:
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_1

MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_5:
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt_4


MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, TM_ICE_BEAM_COINS
	goto_if_lt MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_2
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_1:
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_5
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_4:
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_2:
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_1

MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_5:
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForTM
	goto MauvilleCity_GameCorner_EventScript_BuyTMIceBeam_4


MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end


MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
	end


MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_Woman2::
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
	end


MauvilleCity_GameCorner_EventScript_Gentleman::
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
	end


MauvilleCity_GameCorner_EventScript_Girl::
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_Girl_2
MauvilleCity_GameCorner_EventScript_Girl_1:
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_Girl_5
MauvilleCity_GameCorner_EventScript_Girl_4:
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Girl_9
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Girl_10
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_Girl_11
MauvilleCity_GameCorner_EventScript_Girl_7:
	end

MauvilleCity_GameCorner_EventScript_Girl_2:
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	goto MauvilleCity_GameCorner_EventScript_Girl_1

MauvilleCity_GameCorner_EventScript_Girl_5:
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
	goto MauvilleCity_GameCorner_EventScript_Girl_4

MauvilleCity_GameCorner_EventScript_Girl_9:
# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
	goto MauvilleCity_GameCorner_EventScript_Girl_7

MauvilleCity_GameCorner_EventScript_Girl_10:
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
	goto MauvilleCity_GameCorner_EventScript_Girl_7

MauvilleCity_GameCorner_EventScript_Girl_11:
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
	goto MauvilleCity_GameCorner_EventScript_Girl_7


MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll_2
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll_1:
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll_2:
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	goto MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll_1


MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_GiveTorchicDoll_2
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll_1:
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_GiveTorchicDoll_2:
# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	goto MauvilleCity_GameCorner_EventScript_GiveTorchicDoll_1


MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_GiveMudkipDoll_2
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll_1:
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_GiveMudkipDoll_2:
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	goto MauvilleCity_GameCorner_EventScript_GiveMudkipDoll_1


MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_PokefanM::
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PokefanM_2
MauvilleCity_GameCorner_EventScript_PokefanM_1:
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_PokefanM_2:
# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_TryGive20Coins
	goto MauvilleCity_GameCorner_EventScript_PokefanM_1


MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_TryGive20Coins_2
MauvilleCity_GameCorner_EventScript_TryGive20Coins_1:
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_ge MauvilleCity_GameCorner_EventScript_TryGive20Coins_5
MauvilleCity_GameCorner_EventScript_TryGive20Coins_4:
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
	end

MauvilleCity_GameCorner_EventScript_TryGive20Coins_2:
# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
	goto MauvilleCity_GameCorner_EventScript_TryGive20Coins_1

MauvilleCity_GameCorner_EventScript_TryGive20Coins_5:
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
	goto MauvilleCity_GameCorner_EventScript_TryGive20Coins_4


MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end


MauvilleCity_GameCorner_EventScript_OldMan::
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end


MauvilleCity_GameCorner_EventScript_Cook::
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end


MauvilleCity_GameCorner_EventScript_Man::
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end


MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
	end


MauvilleCity_GameCorner_EventScript_Maniac::
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end


MauvilleCity_GameCorner_EventScript_Woman::
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end


MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine0_2
MauvilleCity_GameCorner_EventScript_SlotMachine0_1:
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine0_2:
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine0_1


MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine1_2
MauvilleCity_GameCorner_EventScript_SlotMachine1_1:
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine1_2:
# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine1_1


MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine2_2
MauvilleCity_GameCorner_EventScript_SlotMachine2_1:
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine2_2:
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine2_1


MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine3_2
MauvilleCity_GameCorner_EventScript_SlotMachine3_1:
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine3_2:
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine3_1


MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine4_2
MauvilleCity_GameCorner_EventScript_SlotMachine4_1:
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine4_2:
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine4_1


MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine5_2
MauvilleCity_GameCorner_EventScript_SlotMachine5_1:
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine5_2:
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine5_1


MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine6_2
MauvilleCity_GameCorner_EventScript_SlotMachine6_1:
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine6_2:
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine6_1


MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine7_2
MauvilleCity_GameCorner_EventScript_SlotMachine7_1:
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine7_2:
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine7_1


MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine8_2
MauvilleCity_GameCorner_EventScript_SlotMachine8_1:
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine8_2:
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine8_1


MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine9_2
MauvilleCity_GameCorner_EventScript_SlotMachine9_1:
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine9_2:
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine9_1


MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine10_2
MauvilleCity_GameCorner_EventScript_SlotMachine10_1:
# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine10_2:
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine10_1


MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachine11_2
MauvilleCity_GameCorner_EventScript_SlotMachine11_1:
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine11_2:
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NoCoinCase
	goto MauvilleCity_GameCorner_EventScript_SlotMachine11_1


MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end


MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner::
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"

MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins::
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
	.string "the games?\p"
	.string "But you don't have a COIN CASE for\n"
	.string "stowing the COINS.$"

MauvilleCity_GameCorner_Text_WereYouLookingForCoins::
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
	.string "It's ¥1000 for 50 COINS.\n"
	.string "Would you like some?$"

MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins::
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
	.string "Here are your COINS!$"

MauvilleCity_GameCorner_Text_DontHaveEnoughMoney::
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
	.string "enough money…$"

MauvilleCity_GameCorner_Text_CoinCaseIsFull::
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
	.string "Your COIN CASE is full.$"

MauvilleCity_GameCorner_Text_DontNeedCoinsThen::
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
	.string "Good luck on your adventure!$"

MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes::
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
	.string "You can exchange your COINS for\n"
	.string "prizes here.$"

MauvilleCity_GameCorner_Text_WhichPrize::
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX::
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"

MauvilleCity_GameCorner_Text_SendToYourHomePC::
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

MauvilleCity_GameCorner_Text_NotEnoughCoins::
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"

MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor::
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
	.string "placing {STR_VAR_1}.$"

MauvilleCity_GameCorner_Text_OhIsThatSo::
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
	.string "You need to save some COINS before\l"
	.string "coming back here.$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsX::
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"

MauvilleCity_GameCorner_Text_HereYouGo::
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_Text_CantCarryAnyMore::
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"

MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne::
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
	.string "the same DOLLS.\p"
	.string "Would you like one of them?$"

MauvilleCity_GameCorner_Text_HereYouGo2::
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_Text_YouWantItButNotNow::
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
	.string "You want it, but not right now?$"

MauvilleCity_GameCorner_Text_DontBeNegative::
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
	.string "You can have this!$"

MauvilleCity_GameCorner_Text_CantWinJackpot::
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
	.string "the jackpot.$"

MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor::
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
	.string "you need a COIN CASE.\p"
	.string "I think the young lady next door\n"
	.string "had one. Go see her!$"

MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins::
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
	.string "This is too much for me.\l"
	.string "Here, take some COINS!$"

MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone::
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
	.string "everyone.\p"
	.string "For me, it's the GAME CORNER.$"

MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates::
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
	.string "rates.\p"
	.string "Check your COINS if you're going to\n"
	.string "pick a table.$"

MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime::
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
	.string "I should get back to work.$"

MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay::
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
	.string "in the GAME CORNER.$"

MauvilleCity_GameCorner_Text_RouletteOnlyLuck::
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
	.string "It's rather demanding.\p"
	.string "Win or lose, it's only by luck.$"

MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed::
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
	.string "the SLOTS.$"

MauvilleCity_GameCorner_Text_DifficultToStopOn7::
# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
	.string "right on “7.”\p"
	.string "If it stops on “7” during the REEL TIME\n"
	.string "bonus game, you'll receive extra COINS.$"

MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo::
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
	.string "about the SLOTS.\p"
	.string "The more lightning bolts you stock,\n"
	.string "the more REEL TIME chances you get.\p"
	.string "In a game with the maximum five\n"
	.string "REEL TIME chances…\p"
	.string "It is possible to receive four regular\n"
	.string "bonuses, then a big bonus.\p"
	.string "That would total 660 COINS, but it's\n"
	.string "very difficult to get.$"

MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase::
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
	.string "a COIN CASE.$"
