# 1 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 2 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_Frlg_MapScripts::
# 3 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 5 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 6 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige::
# 7 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 4 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 8 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	lock
# 9 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 5 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 10 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 6 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 12 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN
# 13 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 7 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 14 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 15 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 8 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 16 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto_if_set FLAG_DID_MS_NIDO_TRADE, UndergroundPath_NorthEntrance_EventScript_Saige_2
# 17 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige_1:
# 18 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 11 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 19 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 20 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 12 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 21 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 22 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto_if_eq UndergroundPath_NorthEntrance_EventScript_Saige_5
# 23 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige_4:
# 24 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 15 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 25 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 26 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 16 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 27 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 28 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto_if_ge UndergroundPath_NorthEntrance_EventScript_Saige_8
# 29 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige_7:
# 30 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 19 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 31 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 32 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 20 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 33 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 34 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto_if_ne UndergroundPath_NorthEntrance_EventScript_Saige_11
# 35 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige_10:
# 36 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 23 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 37 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 38 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 24 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 39 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 40 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 25 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 41 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	setflag FLAG_DID_MS_NIDO_TRADE
# 42 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 26 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 43 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	release
# 44 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	end
# 45 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 46 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige_2:
# 47 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 9 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 48 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_AlreadyTraded
# 49 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_Saige_1
# 50 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 51 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige_5:
# 52 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 13 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 53 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_DeclineTrade
# 54 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_Saige_4
# 55 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 56 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige_8:
# 57 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 17 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 58 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_DeclineTrade
# 59 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_Saige_7
# 60 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 61 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_Saige_11:
# 62 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 21 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 63 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_NotRequestedMon
# 64 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_Saige_10
# 65 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 66 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 67 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_DeclineTrade::
# 68 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 31 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 69 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
# 70 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 32 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 71 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	release
# 72 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	end
# 73 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 74 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 75 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_NotRequestedMon::
# 76 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 37 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 77 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 78 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 38 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 79 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
# 80 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 39 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 81 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	release
# 82 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	end
# 83 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 84 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"

# 85 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
UndergroundPath_NorthEntrance_EventScript_AlreadyTraded::
# 86 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 44 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 87 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
# 88 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 45 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
# 89 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	release
# 90 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	end
