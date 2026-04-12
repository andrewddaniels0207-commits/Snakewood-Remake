# 1 "data/maps/PacifidlogTown_House3/scripts.pory"

# 2 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts::
# 3 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"

# 5 "data/maps/PacifidlogTown_House3/scripts.pory"

# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader::
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"
# 8 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_Trader_2
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader_1:
# 14 "data/maps/PacifidlogTown_House3/scripts.pory"
# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
	ingame_trade INGAME_TRADE_HORSEA, PacifidlogTown_House3_Text_WillingToTradeIt, PacifidlogTown_House3_EventScript_DeclineTrade, PacifidlogTown_House3_EventScript_NotRequestedMon, PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 18 "data/maps/PacifidlogTown_House3/scripts.pory"
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"
# 19 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"

# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader_2:
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto PacifidlogTown_House3_EventScript_TradeCompleted
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto PacifidlogTown_House3_EventScript_Trader_1
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"

# 27 "data/maps/PacifidlogTown_House3/scripts.pory"

# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade::
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 31 "data/maps/PacifidlogTown_House3/scripts.pory"
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 34 "data/maps/PacifidlogTown_House3/scripts.pory"

# 35 "data/maps/PacifidlogTown_House3/scripts.pory"

# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon::
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"

# 45 "data/maps/PacifidlogTown_House3/scripts.pory"

# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted::
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 51 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"

# 53 "data/maps/PacifidlogTown_House3/scripts.pory"

# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl::
# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"

# 59 "data/maps/PacifidlogTown_House3/scripts.pory"

# 60 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt::
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Check out this {STR_VAR_2}!\p"
# 63 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's the {STR_VAR_2} that I caught\n"
# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "yesterday to celebrate my birthday!\p"
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, I can see that you want it!\n"
# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "After all, it's priceless!\p"
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I'll tell you what. I might be willing\n"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "to trade it for a {STR_VAR_1}.$"
# 69 "data/maps/PacifidlogTown_House3/scripts.pory"

# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou::
# 71 "data/maps/PacifidlogTown_House3/scripts.pory"
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"
# 72 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so this is a {STR_VAR_1}?\p"
# 73 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "It's sort of like a {STR_VAR_2},\n"
# 74 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "and yet it's subtly different.\p"
# 75 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Thank you!$"
# 76 "data/maps/PacifidlogTown_House3/scripts.pory"

# 77 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon::
# 78 "data/maps/PacifidlogTown_House3/scripts.pory"
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
# 79 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "No, no, no! I won't accept any\n"
# 80 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "less than a real {STR_VAR_1}!$"
# 81 "data/maps/PacifidlogTown_House3/scripts.pory"

# 82 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything::
# 83 "data/maps/PacifidlogTown_House3/scripts.pory"
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
# 84 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so you're not going to go through\n"
# 85 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "with this?\p"
# 86 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "That's cool. I'm not desperate to make\n"
# 87 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "a trade or anything.$"
# 88 "data/maps/PacifidlogTown_House3/scripts.pory"

# 89 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon::
# 90 "data/maps/PacifidlogTown_House3/scripts.pory"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
# 91 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I know I could go looking for one\n"
# 92 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "on my own, but…\p"
# 93 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "But I really wanted to get a BAGON\n"
# 94 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "that another TRAINER caught…$"
# 95 "data/maps/PacifidlogTown_House3/scripts.pory"

# 96 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex::
# 97 "data/maps/PacifidlogTown_House3/scripts.pory"
# 75 "data/maps/PacifidlogTown_House3/scripts.pory"
# 98 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Is that a POKéDEX?\p"
# 99 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Did you get to meet a lot of different\n"
# 100 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "POKéMON?\p"
# 101 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I wish I was like you.$"
