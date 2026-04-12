# 1 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 6 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa::
# 7 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 8 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	lock
# 9 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 5 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 10 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 6 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 12 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 13 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 7 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 14 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 15 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 8 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 16 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto_if_set FLAG_DID_CH_DING_TRADE, VermilionCity_House2_EventScript_Elyssa_2
# 17 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa_1:
# 18 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 11 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon, MSGBOX_YESNO
# 20 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 12 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 21 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 22 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto_if_eq VermilionCity_House2_EventScript_Elyssa_5
# 23 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa_4:
# 24 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 15 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 26 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 16 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 27 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 28 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto_if_ge VermilionCity_House2_EventScript_Elyssa_8
# 29 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa_7:
# 30 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 31 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 32 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 33 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 34 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto_if_ne VermilionCity_House2_EventScript_Elyssa_11
# 35 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa_10:
# 36 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 23 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 37 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 38 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 24 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 39 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_ThankYou
# 40 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 41 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	setflag FLAG_DID_CH_DING_TRADE
# 42 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 26 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 43 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	release
# 44 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	end
# 45 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 46 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa_2:
# 47 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 9 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 48 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto VermilionCity_House2_EventScript_AlreadyTraded
# 49 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto VermilionCity_House2_EventScript_Elyssa_1
# 50 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 51 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa_5:
# 52 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 13 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 53 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto VermilionCity_House2_EventScript_DeclineTrade
# 54 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto VermilionCity_House2_EventScript_Elyssa_4
# 55 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 56 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa_8:
# 57 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 17 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 58 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto VermilionCity_House2_EventScript_DeclineTrade
# 59 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto VermilionCity_House2_EventScript_Elyssa_7
# 60 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 61 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_Elyssa_11:
# 62 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 21 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 63 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto VermilionCity_House2_EventScript_NotRequestedMon
# 64 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	goto VermilionCity_House2_EventScript_Elyssa_10
# 65 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 66 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 67 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_DeclineTrade::
# 68 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 31 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 69 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_ThatsTooBad
# 70 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 71 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	release
# 72 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	end
# 73 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 74 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 75 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_NotRequestedMon::
# 76 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 37 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 77 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 78 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 38 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 79 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_ThisIsNoMon
# 80 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 39 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 81 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	release
# 82 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	end
# 83 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 84 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 85 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_EventScript_AlreadyTraded::
# 86 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 44 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 87 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	msgbox VermilionCity_House2_Text_HowIsMyOldMon
# 88 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 45 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 89 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	release
# 90 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	end
# 91 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 92 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 93 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon::
# 94 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 49 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 95 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "Hi!\n"
# 96 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "Do you have a {STR_VAR_1}?\p"
# 97 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "Want to trade it for my\n"
# 98 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "{STR_VAR_2}?$"
# 99 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 100 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_ThatsTooBad::
# 101 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 56 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 102 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "That's too bad.$"
# 103 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 104 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_ThisIsNoMon::
# 105 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 60 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 106 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "…This is no {STR_VAR_1}.\p"
# 107 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "If you get one, please trade it\n"
# 108 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "to me!$"
# 109 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 110 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_ThankYou::
# 111 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 66 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 112 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "Thank you!$"
# 113 "data/maps/VermilionCity_House2_Frlg/scripts.pory"

# 114 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
VermilionCity_House2_Text_HowIsMyOldMon::
# 115 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 70 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
# 116 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "How is my old {STR_VAR_2}?\p"
# 117 "data/maps/VermilionCity_House2_Frlg/scripts.pory"
	.string "My {STR_VAR_1} is doing great!$"
