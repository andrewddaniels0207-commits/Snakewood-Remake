# 1 "data/maps/RustboroCity_House1/scripts.pory"

# 2 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 3 "data/maps/RustboroCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House1/scripts.pory"

# 5 "data/maps/RustboroCity_House1/scripts.pory"

# 6 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader::
# 7 "data/maps/RustboroCity_House1/scripts.pory"
# 4 "data/maps/RustboroCity_House1/scripts.pory"
# 8 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 9 "data/maps/RustboroCity_House1/scripts.pory"
# 5 "data/maps/RustboroCity_House1/scripts.pory"
# 10 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 11 "data/maps/RustboroCity_House1/scripts.pory"
# 6 "data/maps/RustboroCity_House1/scripts.pory"
# 12 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_Trader_2
# 13 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader_1:
# 14 "data/maps/RustboroCity_House1/scripts.pory"
# 9 "data/maps/RustboroCity_House1/scripts.pory"
# 15 "data/maps/RustboroCity_House1/scripts.pory"
	ingame_trade INGAME_TRADE_SEEDOT, RustboroCity_House1_Text_IllTradeIfYouWant, RustboroCity_House1_EventScript_DeclineTrade, RustboroCity_House1_EventScript_NotRequestedMon, RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
# 16 "data/maps/RustboroCity_House1/scripts.pory"
# 10 "data/maps/RustboroCity_House1/scripts.pory"
# 17 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 18 "data/maps/RustboroCity_House1/scripts.pory"
# 11 "data/maps/RustboroCity_House1/scripts.pory"
# 19 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 20 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 21 "data/maps/RustboroCity_House1/scripts.pory"

# 22 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader_2:
# 23 "data/maps/RustboroCity_House1/scripts.pory"
# 7 "data/maps/RustboroCity_House1/scripts.pory"
# 24 "data/maps/RustboroCity_House1/scripts.pory"
	goto RustboroCity_House1_EventScript_TradeCompleted
# 25 "data/maps/RustboroCity_House1/scripts.pory"
	goto RustboroCity_House1_EventScript_Trader_1
# 26 "data/maps/RustboroCity_House1/scripts.pory"

# 27 "data/maps/RustboroCity_House1/scripts.pory"

# 28 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 29 "data/maps/RustboroCity_House1/scripts.pory"
# 16 "data/maps/RustboroCity_House1/scripts.pory"
# 30 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 31 "data/maps/RustboroCity_House1/scripts.pory"
# 17 "data/maps/RustboroCity_House1/scripts.pory"
# 32 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 33 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 34 "data/maps/RustboroCity_House1/scripts.pory"

# 35 "data/maps/RustboroCity_House1/scripts.pory"

# 36 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 37 "data/maps/RustboroCity_House1/scripts.pory"
# 22 "data/maps/RustboroCity_House1/scripts.pory"
# 38 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 39 "data/maps/RustboroCity_House1/scripts.pory"
# 23 "data/maps/RustboroCity_House1/scripts.pory"
# 40 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_House1/scripts.pory"
# 24 "data/maps/RustboroCity_House1/scripts.pory"
# 42 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 43 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 44 "data/maps/RustboroCity_House1/scripts.pory"

# 45 "data/maps/RustboroCity_House1/scripts.pory"

# 46 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 47 "data/maps/RustboroCity_House1/scripts.pory"
# 29 "data/maps/RustboroCity_House1/scripts.pory"
# 48 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 49 "data/maps/RustboroCity_House1/scripts.pory"
# 30 "data/maps/RustboroCity_House1/scripts.pory"
# 50 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 51 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 52 "data/maps/RustboroCity_House1/scripts.pory"

# 53 "data/maps/RustboroCity_House1/scripts.pory"

# 54 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 55 "data/maps/RustboroCity_House1/scripts.pory"
# 35 "data/maps/RustboroCity_House1/scripts.pory"
# 56 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 57 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 58 "data/maps/RustboroCity_House1/scripts.pory"

# 59 "data/maps/RustboroCity_House1/scripts.pory"

# 60 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant::
# 61 "data/maps/RustboroCity_House1/scripts.pory"
# 39 "data/maps/RustboroCity_House1/scripts.pory"
# 62 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? My POKéMON is cute?\n"
# 63 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Sure, I knew that.\p"
# 64 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But if you really want, I'm willing\n"
# 65 "data/maps/RustboroCity_House1/scripts.pory"
	.string "to trade it to you.\p"
# 66 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I'll trade you my {STR_VAR_2} for\n"
# 67 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} if you want.$"
# 68 "data/maps/RustboroCity_House1/scripts.pory"

# 69 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon::
# 70 "data/maps/RustboroCity_House1/scripts.pory"
# 48 "data/maps/RustboroCity_House1/scripts.pory"
# 71 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
# 72 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Please be good to my POKéMON.$"
# 73 "data/maps/RustboroCity_House1/scripts.pory"

# 74 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe::
# 75 "data/maps/RustboroCity_House1/scripts.pory"
# 53 "data/maps/RustboroCity_House1/scripts.pory"
# 76 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 77 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 78 "data/maps/RustboroCity_House1/scripts.pory"

# 79 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay::
# 80 "data/maps/RustboroCity_House1/scripts.pory"
# 58 "data/maps/RustboroCity_House1/scripts.pory"
# 81 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
# 82 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But my POKéMON is cute, you know…$"
# 83 "data/maps/RustboroCity_House1/scripts.pory"

# 84 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute::
# 85 "data/maps/RustboroCity_House1/scripts.pory"
# 63 "data/maps/RustboroCity_House1/scripts.pory"
# 86 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Any POKéMON can be cute if you raise\n"
# 87 "data/maps/RustboroCity_House1/scripts.pory"
	.string "it with care and kindness.$"
# 88 "data/maps/RustboroCity_House1/scripts.pory"

# 89 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces::
# 90 "data/maps/RustboroCity_House1/scripts.pory"
# 68 "data/maps/RustboroCity_House1/scripts.pory"
# 91 "data/maps/RustboroCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
# 92 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of POKéMON and people.\p"
# 93 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I find that fascinating, so I go to all\n"
# 94 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of places.$"
