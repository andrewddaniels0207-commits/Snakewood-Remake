Route2_House_Frlg_MapScripts::
	.byte 0


Route2_House_EventScript_Scientist::
# 4 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Route2_House_Text_FaintedMonsCanUseFieldMoves, MSGBOX_NPC
	end


Route2_House_EventScript_Reyley::
# 9 "data/maps/Route2_House_Frlg/scripts.pory"
	lock
# 10 "data/maps/Route2_House_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/Route2_House_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MR_MIME
# 12 "data/maps/Route2_House_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 13 "data/maps/Route2_House_Frlg/scripts.pory"
	goto_if_set FLAG_DID_MIMIEN_TRADE, Route2_House_EventScript_Reyley_2
Route2_House_EventScript_Reyley_1:
# 16 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 17 "data/maps/Route2_House_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route2_House_EventScript_Reyley_5
Route2_House_EventScript_Reyley_4:
# 20 "data/maps/Route2_House_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 21 "data/maps/Route2_House_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Route2_House_EventScript_Reyley_8
Route2_House_EventScript_Reyley_7:
# 24 "data/maps/Route2_House_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 25 "data/maps/Route2_House_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Route2_House_EventScript_Reyley_11
Route2_House_EventScript_Reyley_10:
# 28 "data/maps/Route2_House_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 29 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 30 "data/maps/Route2_House_Frlg/scripts.pory"
	setflag FLAG_DID_MIMIEN_TRADE
# 31 "data/maps/Route2_House_Frlg/scripts.pory"
	release
	end

Route2_House_EventScript_Reyley_2:
# 14 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_AlreadyTraded
	goto Route2_House_EventScript_Reyley_1

Route2_House_EventScript_Reyley_5:
# 18 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_DeclineTrade
	goto Route2_House_EventScript_Reyley_4

Route2_House_EventScript_Reyley_8:
# 22 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_DeclineTrade
	goto Route2_House_EventScript_Reyley_7

Route2_House_EventScript_Reyley_11:
# 26 "data/maps/Route2_House_Frlg/scripts.pory"
	goto Route2_House_EventScript_NotRequestedMon
	goto Route2_House_EventScript_Reyley_10


Route2_House_EventScript_DeclineTrade::
# 36 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 37 "data/maps/Route2_House_Frlg/scripts.pory"
	release
	end


Route2_House_EventScript_NotRequestedMon::
# 42 "data/maps/Route2_House_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 43 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 44 "data/maps/Route2_House_Frlg/scripts.pory"
	release
	end


Route2_House_EventScript_AlreadyTraded::
# 49 "data/maps/Route2_House_Frlg/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 50 "data/maps/Route2_House_Frlg/scripts.pory"
	release
	end


Route2_House_Text_FaintedMonsCanUseFieldMoves::
# 54 "data/maps/Route2_House_Frlg/scripts.pory"
	.string "A fainted POKéMON just has no\n"
	.string "energy left to battle.\p"
	.string "It can still use moves like CUT\n"
	.string "outside of battle.$"
