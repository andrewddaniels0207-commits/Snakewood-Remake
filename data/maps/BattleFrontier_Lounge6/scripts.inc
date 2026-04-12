# 1 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 6 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_Trader::
# 7 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 4 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 5 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 6 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_Trader_2
# 13 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_Trader_1:
# 14 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 9 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 15 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	ingame_trade INGAME_TRADE_MEOWTH, BattleFrontier_Lounge6_Text_WouldYouLikeToTrade, BattleFrontier_Lounge6_EventScript_DeclineTrade, BattleFrontier_Lounge6_EventScript_NotRequestedMon, BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt
# 16 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 17 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
# 18 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 11 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 19 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 20 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 22 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_Trader_2:
# 23 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 7 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 24 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto BattleFrontier_Lounge6_EventScript_TradeCompleted
# 25 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto BattleFrontier_Lounge6_EventScript_Trader_1
# 26 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 27 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 28 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_DeclineTrade::
# 29 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 16 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 17 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 32 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 33 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 35 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 36 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_NotRequestedMon::
# 37 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 22 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 38 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 39 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 23 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 40 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 24 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 42 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 43 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 46 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_TradeCompleted::
# 47 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 29 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 48 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined, MSGBOX_DEFAULT
# 49 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 50 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 51 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 52 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 53 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 54 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_WouldYouLikeToTrade::
# 55 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 34 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 56 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "My POKéMON is a {STR_VAR_2}.\n"
# 57 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Do you know it?\l"
# 58 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "It's quite cute and rather nice.\p"
# 59 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "This little one, I could trade with\n"
# 60 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "pride!\p"
# 61 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Would you like to trade me a {STR_VAR_1}\n"
# 62 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "for my {STR_VAR_2}?$"
# 63 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 64 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt::
# 65 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 44 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 66 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, it's adorable!\n"
# 67 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Thank you!\l"
# 68 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "I promise I'll be good to it!\p"
# 69 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh! I hope you'll be good to\n"
# 70 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "my {STR_VAR_2}, too!$"
# 71 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 72 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon::
# 73 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 52 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 74 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, I'm sorry!\n"
# 75 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "I don't intend to trade for anything\l"
# 76 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "but a {STR_VAR_1}.$"
# 77 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 78 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_WellThatsFineToo::
# 79 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 58 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 80 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, you won't?\n"
# 81 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Well, that's fine, too.\l"
# 82 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Please come visit us again.$"
# 83 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 84 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined::
# 85 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 64 "data/maps/BattleFrontier_Lounge6/scripts.pory"
# 86 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Giggle!\n"
# 87 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "A SKITTY is so much cuter than I had\l"
# 88 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "imagined. I'm delighted!$"
