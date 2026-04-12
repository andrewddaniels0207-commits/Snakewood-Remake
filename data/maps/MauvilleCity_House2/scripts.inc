MauvilleCity_House2_MapScripts::
	.byte 0


MauvilleCity_House2_EventScript_Woman::
# 4 "data/maps/MauvilleCity_House2/scripts.pory"
	lock
# 5 "data/maps/MauvilleCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_Woman_2
MauvilleCity_House2_EventScript_Woman_1:
# 9 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_House2/scripts.pory"
	checkitem ITEM_HARBOR_MAIL
# 11 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_House2_EventScript_Woman_5
MauvilleCity_House2_EventScript_Woman_4:
# 14 "data/maps/MauvilleCity_House2/scripts.pory"
	release
	end

MauvilleCity_House2_EventScript_Woman_2:
# 7 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
	goto MauvilleCity_House2_EventScript_Woman_1

MauvilleCity_House2_EventScript_Woman_5:
# 12 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail
	goto MauvilleCity_House2_EventScript_Woman_4


MauvilleCity_House2_EventScript_AskToTradeForHarborMail::
# 19 "data/maps/MauvilleCity_House2/scripts.pory"
	playse SE_PIN
# 20 "data/maps/MauvilleCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 21 "data/maps/MauvilleCity_House2/scripts.pory"
	waitmovement 0
# 22 "data/maps/MauvilleCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 23 "data/maps/MauvilleCity_House2/scripts.pory"
	waitmovement 0
# 24 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_TradeHarborMailForCoinCase, MSGBOX_YESNO
# 25 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_House2_EventScript_AskToTradeForHarborMail_2
MauvilleCity_House2_EventScript_AskToTradeForHarborMail_1:
# 28 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_House2_EventScript_AskToTradeForHarborMail_5
MauvilleCity_House2_EventScript_AskToTradeForHarborMail_4:
	end

MauvilleCity_House2_EventScript_AskToTradeForHarborMail_2:
# 26 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_AcceptTrade
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail_1

MauvilleCity_House2_EventScript_AskToTradeForHarborMail_5:
# 29 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_DeclineTrade
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail_4


MauvilleCity_House2_EventScript_AcceptTrade::
# 35 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
# 36 "data/maps/MauvilleCity_House2/scripts.pory"
	giveitem ITEM_COIN_CASE
# 37 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_House2_EventScript_AcceptTrade_2
MauvilleCity_House2_EventScript_AcceptTrade_1:
# 40 "data/maps/MauvilleCity_House2/scripts.pory"
	removeitem ITEM_HARBOR_MAIL
# 41 "data/maps/MauvilleCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 42 "data/maps/MauvilleCity_House2/scripts.pory"
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
	end

MauvilleCity_House2_EventScript_AcceptTrade_2:
# 38 "data/maps/MauvilleCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_House2_EventScript_AcceptTrade_1


MauvilleCity_House2_EventScript_ReceivedCoinCase::
# 47 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
# 48 "data/maps/MauvilleCity_House2/scripts.pory"
	release
	end


MauvilleCity_House2_EventScript_DeclineTrade::
# 53 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
# 54 "data/maps/MauvilleCity_House2/scripts.pory"
	release
	end


MauvilleCity_House2_Text_BuyHarborMailAtSlateport::
# 58 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "If I had a BIKE, it'd be easy to cycle to\n"
	.string "SLATEPORT for some shopping.\p"
	.string "I'd be able to buy HARBOR MAIL at the\n"
	.string "POKéMON MART in SLATEPORT…$"

MauvilleCity_House2_Text_TradeHarborMailForCoinCase::
# 65 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh! You have HARBOR MAIL?\n"
	.string "Will you trade it for a COIN CASE?$"

MauvilleCity_House2_Text_IllTradeYouCoinCase::
# 70 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, I'm so happy!\n"
	.string "Okay, I'll trade you a COIN CASE!$"

MauvilleCity_House2_Text_UseCoinCaseAtGameCorner::
# 75 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "That COIN CASE can be used\n"
	.string "at the GAME CORNER.$"

MauvilleCity_House2_Text_ThatsDisappointing::
# 80 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, that's disappointing.\p"
	.string "A COIN CASE is needed for the\n"
	.string "GAME CORNER.$"
