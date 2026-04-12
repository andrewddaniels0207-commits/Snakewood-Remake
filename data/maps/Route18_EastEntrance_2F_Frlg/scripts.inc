# 1 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 2 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_Frlg_MapScripts::
# 3 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 5 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 6 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_LeftBinoculars::
# 7 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 4 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 8 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route18_EastEntrance_2F_Text_PalletTownInWest, MSGBOX_SIGN
# 9 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	end
# 10 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 11 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 12 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_RightBinoculars::
# 13 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 9 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 14 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route18_EastEntrance_2F_Text_PeopleSwimming, MSGBOX_SIGN
# 15 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	end
# 16 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 17 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 18 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden::
# 19 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 14 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 20 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	lock
# 21 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 15 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 22 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 16 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 24 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_LICKITUNG
# 25 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 17 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 26 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 27 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 18 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 28 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_DID_MARC_TRADE, Route18_EastEntrance_2F_EventScript_Haden_2
# 29 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden_1:
# 30 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 21 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 31 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 32 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 22 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 33 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 34 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route18_EastEntrance_2F_EventScript_Haden_5
# 35 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden_4:
# 36 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 25 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 37 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 38 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 26 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 39 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 40 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_ge Route18_EastEntrance_2F_EventScript_Haden_8
# 41 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden_7:
# 42 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 29 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 43 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 44 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 30 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 45 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 46 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_ne Route18_EastEntrance_2F_EventScript_Haden_11
# 47 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden_10:
# 48 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 33 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 49 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 50 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 34 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 51 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 52 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 35 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 53 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_DID_MARC_TRADE
# 54 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 36 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 55 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	release
# 56 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	end
# 57 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 58 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden_2:
# 59 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 19 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 60 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto Route18_EastEntrance_2F_EventScript_AlreadyTraded
# 61 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto Route18_EastEntrance_2F_EventScript_Haden_1
# 62 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 63 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden_5:
# 64 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 23 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 65 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto Route18_EastEntrance_2F_EventScript_DeclineTrade
# 66 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto Route18_EastEntrance_2F_EventScript_Haden_4
# 67 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 68 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden_8:
# 69 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 27 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 70 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto Route18_EastEntrance_2F_EventScript_DeclineTrade
# 71 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto Route18_EastEntrance_2F_EventScript_Haden_7
# 72 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 73 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_Haden_11:
# 74 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 31 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 75 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto Route18_EastEntrance_2F_EventScript_NotRequestedMon
# 76 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	goto Route18_EastEntrance_2F_EventScript_Haden_10
# 77 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 78 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 79 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_DeclineTrade::
# 80 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 41 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 81 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 82 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 42 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 83 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	release
# 84 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	end
# 85 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 86 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 87 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_NotRequestedMon::
# 88 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 47 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 89 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 90 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 48 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 91 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 92 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 49 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 93 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	release
# 94 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	end
# 95 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 96 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 97 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_EventScript_AlreadyTraded::
# 98 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 54 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 99 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 100 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 55 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 101 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	release
# 102 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	end
# 103 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 104 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 105 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_Text_PalletTownInWest::
# 106 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 59 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 107 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 108 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 109 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	.string "PALLET TOWN is in the west.$"
# 110 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"

# 111 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
Route18_EastEntrance_2F_Text_PeopleSwimming::
# 112 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 65 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
# 113 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 114 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 115 "data/maps/Route18_EastEntrance_2F_Frlg/scripts.pory"
	.string "There are people swimming.$"
