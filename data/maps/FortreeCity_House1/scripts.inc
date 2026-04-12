# 1 "data/maps/FortreeCity_House1/scripts.pory"

# 2 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_MapScripts::
# 3 "data/maps/FortreeCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House1/scripts.pory"

# 5 "data/maps/FortreeCity_House1/scripts.pory"

# 6 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Trader::
# 7 "data/maps/FortreeCity_House1/scripts.pory"
# 4 "data/maps/FortreeCity_House1/scripts.pory"
# 8 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 9 "data/maps/FortreeCity_House1/scripts.pory"
# 5 "data/maps/FortreeCity_House1/scripts.pory"
# 10 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 11 "data/maps/FortreeCity_House1/scripts.pory"
# 6 "data/maps/FortreeCity_House1/scripts.pory"
# 12 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_Trader_2
# 13 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Trader_1:
# 14 "data/maps/FortreeCity_House1/scripts.pory"
# 9 "data/maps/FortreeCity_House1/scripts.pory"
# 15 "data/maps/FortreeCity_House1/scripts.pory"
	ingame_trade INGAME_TRADE_PLUSLE, FortreeCity_House1_Text_YouWillTradeWontYou, FortreeCity_House1_EventScript_DeclineTrade, FortreeCity_House1_EventScript_NotRequestedMon, FortreeCity_House1_Text_MonYouTakeCare
# 16 "data/maps/FortreeCity_House1/scripts.pory"
# 10 "data/maps/FortreeCity_House1/scripts.pory"
# 17 "data/maps/FortreeCity_House1/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 18 "data/maps/FortreeCity_House1/scripts.pory"
# 11 "data/maps/FortreeCity_House1/scripts.pory"
# 19 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 20 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 21 "data/maps/FortreeCity_House1/scripts.pory"

# 22 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Trader_2:
# 23 "data/maps/FortreeCity_House1/scripts.pory"
# 7 "data/maps/FortreeCity_House1/scripts.pory"
# 24 "data/maps/FortreeCity_House1/scripts.pory"
	goto FortreeCity_House1_EventScript_TradeCompleted
# 25 "data/maps/FortreeCity_House1/scripts.pory"
	goto FortreeCity_House1_EventScript_Trader_1
# 26 "data/maps/FortreeCity_House1/scripts.pory"

# 27 "data/maps/FortreeCity_House1/scripts.pory"

# 28 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_DeclineTrade::
# 29 "data/maps/FortreeCity_House1/scripts.pory"
# 16 "data/maps/FortreeCity_House1/scripts.pory"
# 30 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
# 31 "data/maps/FortreeCity_House1/scripts.pory"
# 17 "data/maps/FortreeCity_House1/scripts.pory"
# 32 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 33 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 34 "data/maps/FortreeCity_House1/scripts.pory"

# 35 "data/maps/FortreeCity_House1/scripts.pory"

# 36 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_NotRequestedMon::
# 37 "data/maps/FortreeCity_House1/scripts.pory"
# 22 "data/maps/FortreeCity_House1/scripts.pory"
# 38 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 39 "data/maps/FortreeCity_House1/scripts.pory"
# 23 "data/maps/FortreeCity_House1/scripts.pory"
# 40 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
# 41 "data/maps/FortreeCity_House1/scripts.pory"
# 24 "data/maps/FortreeCity_House1/scripts.pory"
# 42 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 43 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 44 "data/maps/FortreeCity_House1/scripts.pory"

# 45 "data/maps/FortreeCity_House1/scripts.pory"

# 46 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_TradeCompleted::
# 47 "data/maps/FortreeCity_House1/scripts.pory"
# 29 "data/maps/FortreeCity_House1/scripts.pory"
# 48 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
# 49 "data/maps/FortreeCity_House1/scripts.pory"
# 30 "data/maps/FortreeCity_House1/scripts.pory"
# 50 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 51 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 52 "data/maps/FortreeCity_House1/scripts.pory"

# 53 "data/maps/FortreeCity_House1/scripts.pory"

# 54 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_ExpertF::
# 55 "data/maps/FortreeCity_House1/scripts.pory"
# 35 "data/maps/FortreeCity_House1/scripts.pory"
# 56 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
# 57 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 58 "data/maps/FortreeCity_House1/scripts.pory"

# 59 "data/maps/FortreeCity_House1/scripts.pory"

# 60 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Zigzagoon::
# 61 "data/maps/FortreeCity_House1/scripts.pory"
# 40 "data/maps/FortreeCity_House1/scripts.pory"
# 62 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 63 "data/maps/FortreeCity_House1/scripts.pory"
# 41 "data/maps/FortreeCity_House1/scripts.pory"
# 64 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 65 "data/maps/FortreeCity_House1/scripts.pory"
# 42 "data/maps/FortreeCity_House1/scripts.pory"
# 66 "data/maps/FortreeCity_House1/scripts.pory"
	waitse
# 67 "data/maps/FortreeCity_House1/scripts.pory"
# 43 "data/maps/FortreeCity_House1/scripts.pory"
# 68 "data/maps/FortreeCity_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 69 "data/maps/FortreeCity_House1/scripts.pory"
# 44 "data/maps/FortreeCity_House1/scripts.pory"
# 70 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 71 "data/maps/FortreeCity_House1/scripts.pory"
# 45 "data/maps/FortreeCity_House1/scripts.pory"
# 72 "data/maps/FortreeCity_House1/scripts.pory"
	waitmoncry
# 73 "data/maps/FortreeCity_House1/scripts.pory"
# 46 "data/maps/FortreeCity_House1/scripts.pory"
# 74 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 75 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 76 "data/maps/FortreeCity_House1/scripts.pory"

# 77 "data/maps/FortreeCity_House1/scripts.pory"

# 78 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWillTradeWontYou::
# 79 "data/maps/FortreeCity_House1/scripts.pory"
# 50 "data/maps/FortreeCity_House1/scripts.pory"
# 80 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Wrooooaaar! I need it!\n"
# 81 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I have to get me a {STR_VAR_1}!\l"
# 82 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'll do anything for it!\p"
# 83 "data/maps/FortreeCity_House1/scripts.pory"
	.string "…Uh… Did you hear that?\n"
# 84 "data/maps/FortreeCity_House1/scripts.pory"
	.string "My shout from the bottom of my heart?\p"
# 85 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Having heard that, you will trade\n"
# 86 "data/maps/FortreeCity_House1/scripts.pory"
	.string "your {STR_VAR_1} for my {STR_VAR_2},\l"
# 87 "data/maps/FortreeCity_House1/scripts.pory"
	.string "won't you?$"
# 88 "data/maps/FortreeCity_House1/scripts.pory"

# 89 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_MonYouTakeCare::
# 90 "data/maps/FortreeCity_House1/scripts.pory"
# 61 "data/maps/FortreeCity_House1/scripts.pory"
# 91 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Oh, yeah, right on!\p"
# 92 "data/maps/FortreeCity_House1/scripts.pory"
	.string "{STR_VAR_1}, welcome!\n"
# 93 "data/maps/FortreeCity_House1/scripts.pory"
	.string "{STR_VAR_2}, you take care!$"
# 94 "data/maps/FortreeCity_House1/scripts.pory"

# 95 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_ThisIsntAMon::
# 96 "data/maps/FortreeCity_House1/scripts.pory"
# 67 "data/maps/FortreeCity_House1/scripts.pory"
# 97 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Uh, no, I don't think so.\n"
# 98 "data/maps/FortreeCity_House1/scripts.pory"
	.string "That isn't a {STR_VAR_1}.$"
# 99 "data/maps/FortreeCity_House1/scripts.pory"

# 100 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWontTradeMe::
# 101 "data/maps/FortreeCity_House1/scripts.pory"
# 72 "data/maps/FortreeCity_House1/scripts.pory"
# 102 "data/maps/FortreeCity_House1/scripts.pory"
	.string "No? You won't trade me?\n"
# 103 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Even after I bared my heart to you?$"
# 104 "data/maps/FortreeCity_House1/scripts.pory"

# 105 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_GoingToMakeVolbeatStrong::
# 106 "data/maps/FortreeCity_House1/scripts.pory"
# 77 "data/maps/FortreeCity_House1/scripts.pory"
# 107 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'm going to make VOLBEAT super\n"
# 108 "data/maps/FortreeCity_House1/scripts.pory"
	.string "strong from this moment on!\p"
# 109 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I hope you do the same with PLUSLE!$"
# 110 "data/maps/FortreeCity_House1/scripts.pory"

# 111 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_TradingMemoriesWithOthers::
# 112 "data/maps/FortreeCity_House1/scripts.pory"
# 83 "data/maps/FortreeCity_House1/scripts.pory"
# 113 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Trading POKéMON with others…\p"
# 114 "data/maps/FortreeCity_House1/scripts.pory"
	.string "It's as if you're trading your own\n"
# 115 "data/maps/FortreeCity_House1/scripts.pory"
	.string "memories with other people.$"
# 116 "data/maps/FortreeCity_House1/scripts.pory"

# 117 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_Zigzagoon::
# 118 "data/maps/FortreeCity_House1/scripts.pory"
# 89 "data/maps/FortreeCity_House1/scripts.pory"
# 119 "data/maps/FortreeCity_House1/scripts.pory"
	.string "ZIGZAGOON: Gumomoh?$"
