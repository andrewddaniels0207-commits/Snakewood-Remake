# 1 "data/maps/MauvilleCity_House2/scripts.pory"

# 2 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_MapScripts::
# 3 "data/maps/MauvilleCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House2/scripts.pory"

# 5 "data/maps/MauvilleCity_House2/scripts.pory"

# 6 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_Woman::
# 7 "data/maps/MauvilleCity_House2/scripts.pory"
# 4 "data/maps/MauvilleCity_House2/scripts.pory"
# 8 "data/maps/MauvilleCity_House2/scripts.pory"
	lock
# 9 "data/maps/MauvilleCity_House2/scripts.pory"
# 5 "data/maps/MauvilleCity_House2/scripts.pory"
# 10 "data/maps/MauvilleCity_House2/scripts.pory"
	faceplayer
# 11 "data/maps/MauvilleCity_House2/scripts.pory"
# 6 "data/maps/MauvilleCity_House2/scripts.pory"
# 12 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_Woman_2
# 13 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_Woman_1:
# 14 "data/maps/MauvilleCity_House2/scripts.pory"
# 9 "data/maps/MauvilleCity_House2/scripts.pory"
# 15 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
# 16 "data/maps/MauvilleCity_House2/scripts.pory"
# 10 "data/maps/MauvilleCity_House2/scripts.pory"
# 17 "data/maps/MauvilleCity_House2/scripts.pory"
	checkitem ITEM_HARBOR_MAIL
# 18 "data/maps/MauvilleCity_House2/scripts.pory"
# 11 "data/maps/MauvilleCity_House2/scripts.pory"
# 19 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
# 20 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_eq MauvilleCity_House2_EventScript_Woman_5
# 21 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_Woman_4:
# 22 "data/maps/MauvilleCity_House2/scripts.pory"
# 14 "data/maps/MauvilleCity_House2/scripts.pory"
# 23 "data/maps/MauvilleCity_House2/scripts.pory"
	release
# 24 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 25 "data/maps/MauvilleCity_House2/scripts.pory"

# 26 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_Woman_2:
# 27 "data/maps/MauvilleCity_House2/scripts.pory"
# 7 "data/maps/MauvilleCity_House2/scripts.pory"
# 28 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
# 29 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_Woman_1
# 30 "data/maps/MauvilleCity_House2/scripts.pory"

# 31 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_Woman_5:
# 32 "data/maps/MauvilleCity_House2/scripts.pory"
# 12 "data/maps/MauvilleCity_House2/scripts.pory"
# 33 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail
# 34 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_Woman_4
# 35 "data/maps/MauvilleCity_House2/scripts.pory"

# 36 "data/maps/MauvilleCity_House2/scripts.pory"

# 37 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AskToTradeForHarborMail::
# 38 "data/maps/MauvilleCity_House2/scripts.pory"
# 19 "data/maps/MauvilleCity_House2/scripts.pory"
# 39 "data/maps/MauvilleCity_House2/scripts.pory"
	playse SE_PIN
# 40 "data/maps/MauvilleCity_House2/scripts.pory"
# 20 "data/maps/MauvilleCity_House2/scripts.pory"
# 41 "data/maps/MauvilleCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 42 "data/maps/MauvilleCity_House2/scripts.pory"
# 21 "data/maps/MauvilleCity_House2/scripts.pory"
# 43 "data/maps/MauvilleCity_House2/scripts.pory"
	waitmovement 0
# 44 "data/maps/MauvilleCity_House2/scripts.pory"
# 22 "data/maps/MauvilleCity_House2/scripts.pory"
# 45 "data/maps/MauvilleCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 46 "data/maps/MauvilleCity_House2/scripts.pory"
# 23 "data/maps/MauvilleCity_House2/scripts.pory"
# 47 "data/maps/MauvilleCity_House2/scripts.pory"
	waitmovement 0
# 48 "data/maps/MauvilleCity_House2/scripts.pory"
# 24 "data/maps/MauvilleCity_House2/scripts.pory"
# 49 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_TradeHarborMailForCoinCase, MSGBOX_YESNO
# 50 "data/maps/MauvilleCity_House2/scripts.pory"
# 25 "data/maps/MauvilleCity_House2/scripts.pory"
# 51 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, YES
# 52 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_eq MauvilleCity_House2_EventScript_AskToTradeForHarborMail_2
# 53 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AskToTradeForHarborMail_1:
# 54 "data/maps/MauvilleCity_House2/scripts.pory"
# 28 "data/maps/MauvilleCity_House2/scripts.pory"
# 55 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, NO
# 56 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_eq MauvilleCity_House2_EventScript_AskToTradeForHarborMail_5
# 57 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AskToTradeForHarborMail_4:
# 58 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 59 "data/maps/MauvilleCity_House2/scripts.pory"

# 60 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AskToTradeForHarborMail_2:
# 61 "data/maps/MauvilleCity_House2/scripts.pory"
# 26 "data/maps/MauvilleCity_House2/scripts.pory"
# 62 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_AcceptTrade
# 63 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail_1
# 64 "data/maps/MauvilleCity_House2/scripts.pory"

# 65 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AskToTradeForHarborMail_5:
# 66 "data/maps/MauvilleCity_House2/scripts.pory"
# 29 "data/maps/MauvilleCity_House2/scripts.pory"
# 67 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_DeclineTrade
# 68 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail_4
# 69 "data/maps/MauvilleCity_House2/scripts.pory"

# 70 "data/maps/MauvilleCity_House2/scripts.pory"

# 71 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AcceptTrade::
# 72 "data/maps/MauvilleCity_House2/scripts.pory"
# 35 "data/maps/MauvilleCity_House2/scripts.pory"
# 73 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
# 74 "data/maps/MauvilleCity_House2/scripts.pory"
# 36 "data/maps/MauvilleCity_House2/scripts.pory"
# 75 "data/maps/MauvilleCity_House2/scripts.pory"
	giveitem ITEM_COIN_CASE
# 76 "data/maps/MauvilleCity_House2/scripts.pory"
# 37 "data/maps/MauvilleCity_House2/scripts.pory"
# 77 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 78 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_eq MauvilleCity_House2_EventScript_AcceptTrade_2
# 79 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AcceptTrade_1:
# 80 "data/maps/MauvilleCity_House2/scripts.pory"
# 40 "data/maps/MauvilleCity_House2/scripts.pory"
# 81 "data/maps/MauvilleCity_House2/scripts.pory"
	removeitem ITEM_HARBOR_MAIL
# 82 "data/maps/MauvilleCity_House2/scripts.pory"
# 41 "data/maps/MauvilleCity_House2/scripts.pory"
# 83 "data/maps/MauvilleCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 84 "data/maps/MauvilleCity_House2/scripts.pory"
# 42 "data/maps/MauvilleCity_House2/scripts.pory"
# 85 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
# 86 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 87 "data/maps/MauvilleCity_House2/scripts.pory"

# 88 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_AcceptTrade_2:
# 89 "data/maps/MauvilleCity_House2/scripts.pory"
# 38 "data/maps/MauvilleCity_House2/scripts.pory"
# 90 "data/maps/MauvilleCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 91 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_AcceptTrade_1
# 92 "data/maps/MauvilleCity_House2/scripts.pory"

# 93 "data/maps/MauvilleCity_House2/scripts.pory"

# 94 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_ReceivedCoinCase::
# 95 "data/maps/MauvilleCity_House2/scripts.pory"
# 47 "data/maps/MauvilleCity_House2/scripts.pory"
# 96 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
# 97 "data/maps/MauvilleCity_House2/scripts.pory"
# 48 "data/maps/MauvilleCity_House2/scripts.pory"
# 98 "data/maps/MauvilleCity_House2/scripts.pory"
	release
# 99 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 100 "data/maps/MauvilleCity_House2/scripts.pory"

# 101 "data/maps/MauvilleCity_House2/scripts.pory"

# 102 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_EventScript_DeclineTrade::
# 103 "data/maps/MauvilleCity_House2/scripts.pory"
# 53 "data/maps/MauvilleCity_House2/scripts.pory"
# 104 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
# 105 "data/maps/MauvilleCity_House2/scripts.pory"
# 54 "data/maps/MauvilleCity_House2/scripts.pory"
# 106 "data/maps/MauvilleCity_House2/scripts.pory"
	release
# 107 "data/maps/MauvilleCity_House2/scripts.pory"
	end
# 108 "data/maps/MauvilleCity_House2/scripts.pory"

# 109 "data/maps/MauvilleCity_House2/scripts.pory"

# 110 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_BuyHarborMailAtSlateport::
# 111 "data/maps/MauvilleCity_House2/scripts.pory"
# 58 "data/maps/MauvilleCity_House2/scripts.pory"
# 112 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "If I had a BIKE, it'd be easy to cycle to\n"
# 113 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "SLATEPORT for some shopping.\p"
# 114 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "I'd be able to buy HARBOR MAIL at the\n"
# 115 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "POKéMON MART in SLATEPORT…$"
# 116 "data/maps/MauvilleCity_House2/scripts.pory"

# 117 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_TradeHarborMailForCoinCase::
# 118 "data/maps/MauvilleCity_House2/scripts.pory"
# 65 "data/maps/MauvilleCity_House2/scripts.pory"
# 119 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh! You have HARBOR MAIL?\n"
# 120 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Will you trade it for a COIN CASE?$"
# 121 "data/maps/MauvilleCity_House2/scripts.pory"

# 122 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_IllTradeYouCoinCase::
# 123 "data/maps/MauvilleCity_House2/scripts.pory"
# 70 "data/maps/MauvilleCity_House2/scripts.pory"
# 124 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, I'm so happy!\n"
# 125 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Okay, I'll trade you a COIN CASE!$"
# 126 "data/maps/MauvilleCity_House2/scripts.pory"

# 127 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_UseCoinCaseAtGameCorner::
# 128 "data/maps/MauvilleCity_House2/scripts.pory"
# 75 "data/maps/MauvilleCity_House2/scripts.pory"
# 129 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "That COIN CASE can be used\n"
# 130 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "at the GAME CORNER.$"
# 131 "data/maps/MauvilleCity_House2/scripts.pory"

# 132 "data/maps/MauvilleCity_House2/scripts.pory"
MauvilleCity_House2_Text_ThatsDisappointing::
# 133 "data/maps/MauvilleCity_House2/scripts.pory"
# 80 "data/maps/MauvilleCity_House2/scripts.pory"
# 134 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, that's disappointing.\p"
# 135 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "A COIN CASE is needed for the\n"
# 136 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "GAME CORNER.$"
