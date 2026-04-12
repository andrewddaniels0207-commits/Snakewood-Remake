# 1 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 6 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_OldWoman::
# 7 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox CeruleanCity_House3_Text_PleaseTradeWithMyHusband, MSGBOX_NPC
# 9 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 10 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 11 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 12 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae::
# 13 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 9 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	faceplayer
# 17 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 11 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_JYNX
# 19 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 21 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 13 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_set FLAG_DID_ZYNX_TRADE, CeruleanCity_House3_EventScript_Dontae_2
# 23 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae_1:
# 24 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 25 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 26 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 27 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 28 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_House3_EventScript_Dontae_5
# 29 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae_4:
# 30 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 31 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 32 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 21 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 33 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 34 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_ge CeruleanCity_House3_EventScript_Dontae_8
# 35 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae_7:
# 36 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 37 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 38 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 25 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 39 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 40 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_ne CeruleanCity_House3_EventScript_Dontae_11
# 41 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae_10:
# 42 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 43 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 44 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 29 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 45 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_Thanks
# 46 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 47 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	setflag FLAG_DID_ZYNX_TRADE
# 48 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 31 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 49 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
# 50 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 51 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 52 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae_2:
# 53 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 54 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_AlreadyTraded
# 55 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_Dontae_1
# 56 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 57 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae_5:
# 58 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 59 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_DeclineTrade
# 60 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_Dontae_4
# 61 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 62 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae_8:
# 63 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 64 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_DeclineTrade
# 65 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_Dontae_7
# 66 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 67 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_Dontae_11:
# 68 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 69 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_NotRequestedMon
# 70 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_Dontae_10
# 71 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 72 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 73 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_DeclineTrade::
# 74 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 75 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 76 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 37 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 77 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
# 78 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 79 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 80 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 81 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_NotRequestedMon::
# 82 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 42 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 83 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 84 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 43 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 85 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 86 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 87 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
# 88 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 89 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 90 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 91 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_EventScript_AlreadyTraded::
# 92 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 49 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 93 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 94 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 95 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
# 96 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	end
# 97 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 98 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"

# 99 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
CeruleanCity_House3_Text_PleaseTradeWithMyHusband::
# 100 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 54 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
# 101 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "My husband likes trading POKéMON.\p"
# 102 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "You're collecting POKéMON for your\n"
# 103 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "POKéDEX, aren't you?\p"
# 104 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "Would you please trade with him?$"
