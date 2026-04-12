# 1 "data/maps/Route2_House_Frlg/scripts.pory"

# 2 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_Frlg_MapScripts::
# 3 "data/maps/Route2_House_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route2_House_Frlg/scripts.pory"

# 5 "data/maps/Route2_House_Frlg/scripts.pory"

# 6 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Scientist::
# 7 "data/maps/Route2_House_Frlg/scripts.pory"
# 4 "data/maps/Route2_House_Frlg/scripts.pory"
# 8 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Route2_House_Text_FaintedMonsCanUseFieldMoves, MSGBOX_NPC
# 9 "data/maps/Route2_House_Frlg/scripts.pory"
	end
# 10 "data/maps/Route2_House_Frlg/scripts.pory"

# 11 "data/maps/Route2_House_Frlg/scripts.pory"

# 12 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley::
# 13 "data/maps/Route2_House_Frlg/scripts.pory"
# 9 "data/maps/Route2_House_Frlg/scripts.pory"
# 14 "data/maps/Route2_House_Frlg/scripts.pory"
	lock
# 15 "data/maps/Route2_House_Frlg/scripts.pory"
# 10 "data/maps/Route2_House_Frlg/scripts.pory"
# 16 "data/maps/Route2_House_Frlg/scripts.pory"
	faceplayer
# 17 "data/maps/Route2_House_Frlg/scripts.pory"
# 11 "data/maps/Route2_House_Frlg/scripts.pory"
# 18 "data/maps/Route2_House_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MR_MIME
# 19 "data/maps/Route2_House_Frlg/scripts.pory"
# 12 "data/maps/Route2_House_Frlg/scripts.pory"
# 20 "data/maps/Route2_House_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 21 "data/maps/Route2_House_Frlg/scripts.pory"
# 13 "data/maps/Route2_House_Frlg/scripts.pory"
# 22 "data/maps/Route2_House_Frlg/scripts.pory"
	goto_if_set FLAG_DID_MIMIEN_TRADE, Route2_House_EventScript_Reyley_2
# 23 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley_1:
# 24 "data/maps/Route2_House_Frlg/scripts.pory"
# 16 "data/maps/Route2_House_Frlg/scripts.pory"
# 25 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 26 "data/maps/Route2_House_Frlg/scripts.pory"
# 17 "data/maps/Route2_House_Frlg/scripts.pory"
# 27 "data/maps/Route2_House_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 28 "data/maps/Route2_House_Frlg/scripts.pory"
	goto_if_eq Route2_House_EventScript_Reyley_5
# 29 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley_4:
# 30 "data/maps/Route2_House_Frlg/scripts.pory"
# 20 "data/maps/Route2_House_Frlg/scripts.pory"
# 31 "data/maps/Route2_House_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 32 "data/maps/Route2_House_Frlg/scripts.pory"
# 21 "data/maps/Route2_House_Frlg/scripts.pory"
# 33 "data/maps/Route2_House_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 34 "data/maps/Route2_House_Frlg/scripts.pory"
	goto_if_ge Route2_House_EventScript_Reyley_8
# 35 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley_7:
# 36 "data/maps/Route2_House_Frlg/scripts.pory"
# 24 "data/maps/Route2_House_Frlg/scripts.pory"
# 37 "data/maps/Route2_House_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 38 "data/maps/Route2_House_Frlg/scripts.pory"
# 25 "data/maps/Route2_House_Frlg/scripts.pory"
# 39 "data/maps/Route2_House_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 40 "data/maps/Route2_House_Frlg/scripts.pory"
	goto_if_ne Route2_House_EventScript_Reyley_11
# 41 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley_10:
# 42 "data/maps/Route2_House_Frlg/scripts.pory"
# 28 "data/maps/Route2_House_Frlg/scripts.pory"
# 43 "data/maps/Route2_House_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 44 "data/maps/Route2_House_Frlg/scripts.pory"
# 29 "data/maps/Route2_House_Frlg/scripts.pory"
# 45 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 46 "data/maps/Route2_House_Frlg/scripts.pory"
# 30 "data/maps/Route2_House_Frlg/scripts.pory"
# 47 "data/maps/Route2_House_Frlg/scripts.pory"
	setflag FLAG_DID_MIMIEN_TRADE
# 48 "data/maps/Route2_House_Frlg/scripts.pory"
# 31 "data/maps/Route2_House_Frlg/scripts.pory"
# 49 "data/maps/Route2_House_Frlg/scripts.pory"
	release
# 50 "data/maps/Route2_House_Frlg/scripts.pory"
	end
# 51 "data/maps/Route2_House_Frlg/scripts.pory"

# 52 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley_2:
# 53 "data/maps/Route2_House_Frlg/scripts.pory"
# 14 "data/maps/Route2_House_Frlg/scripts.pory"
# 54 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_AlreadyTraded
# 55 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_Reyley_1
# 56 "data/maps/Route2_House_Frlg/scripts.pory"

# 57 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley_5:
# 58 "data/maps/Route2_House_Frlg/scripts.pory"
# 18 "data/maps/Route2_House_Frlg/scripts.pory"
# 59 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_DeclineTrade
# 60 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_Reyley_4
# 61 "data/maps/Route2_House_Frlg/scripts.pory"

# 62 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley_8:
# 63 "data/maps/Route2_House_Frlg/scripts.pory"
# 22 "data/maps/Route2_House_Frlg/scripts.pory"
# 64 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_DeclineTrade
# 65 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_Reyley_7
# 66 "data/maps/Route2_House_Frlg/scripts.pory"

# 67 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_Reyley_11:
# 68 "data/maps/Route2_House_Frlg/scripts.pory"
# 26 "data/maps/Route2_House_Frlg/scripts.pory"
# 69 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_NotRequestedMon
# 70 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_Reyley_10
# 71 "data/maps/Route2_House_Frlg/scripts.pory"

# 72 "data/maps/Route2_House_Frlg/scripts.pory"

# 73 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_DeclineTrade::
# 74 "data/maps/Route2_House_Frlg/scripts.pory"
# 36 "data/maps/Route2_House_Frlg/scripts.pory"
# 75 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 76 "data/maps/Route2_House_Frlg/scripts.pory"
# 37 "data/maps/Route2_House_Frlg/scripts.pory"
# 77 "data/maps/Route2_House_Frlg/scripts.pory"
	release
# 78 "data/maps/Route2_House_Frlg/scripts.pory"
	end
# 79 "data/maps/Route2_House_Frlg/scripts.pory"

# 80 "data/maps/Route2_House_Frlg/scripts.pory"

# 81 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_NotRequestedMon::
# 82 "data/maps/Route2_House_Frlg/scripts.pory"
# 42 "data/maps/Route2_House_Frlg/scripts.pory"
# 83 "data/maps/Route2_House_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 84 "data/maps/Route2_House_Frlg/scripts.pory"
# 43 "data/maps/Route2_House_Frlg/scripts.pory"
# 85 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 86 "data/maps/Route2_House_Frlg/scripts.pory"
# 44 "data/maps/Route2_House_Frlg/scripts.pory"
# 87 "data/maps/Route2_House_Frlg/scripts.pory"
	release
# 88 "data/maps/Route2_House_Frlg/scripts.pory"
	end
# 89 "data/maps/Route2_House_Frlg/scripts.pory"

# 90 "data/maps/Route2_House_Frlg/scripts.pory"

# 91 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_EventScript_AlreadyTraded::
# 92 "data/maps/Route2_House_Frlg/scripts.pory"
# 49 "data/maps/Route2_House_Frlg/scripts.pory"
# 93 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 94 "data/maps/Route2_House_Frlg/scripts.pory"
# 50 "data/maps/Route2_House_Frlg/scripts.pory"
# 95 "data/maps/Route2_House_Frlg/scripts.pory"
	release
# 96 "data/maps/Route2_House_Frlg/scripts.pory"
	end
# 97 "data/maps/Route2_House_Frlg/scripts.pory"

# 98 "data/maps/Route2_House_Frlg/scripts.pory"

# 99 "data/maps/Route2_House_Frlg/scripts.pory"
Route2_House_Text_FaintedMonsCanUseFieldMoves::
# 100 "data/maps/Route2_House_Frlg/scripts.pory"
# 54 "data/maps/Route2_House_Frlg/scripts.pory"
# 101 "data/maps/Route2_House_Frlg/scripts.pory"
	.string "A fainted POKéMON just has no\n"
# 102 "data/maps/Route2_House_Frlg/scripts.pory"
	.string "energy left to battle.\p"
# 103 "data/maps/Route2_House_Frlg/scripts.pory"
	.string "It can still use moves like CUT\n"
# 104 "data/maps/Route2_House_Frlg/scripts.pory"
	.string "outside of battle.$"
