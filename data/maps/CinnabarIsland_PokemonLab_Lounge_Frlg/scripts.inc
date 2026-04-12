# 1 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 5 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 6 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Scientist::
# 7 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 4 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 8 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon, MSGBOX_NPC
# 9 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 10 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 11 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 12 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton::
# 13 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 9 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 14 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	lock
# 15 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 10 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 16 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	faceplayer
# 17 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 11 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 18 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ELECTRODE
# 19 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 12 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 20 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 21 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 13 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 22 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_set FLAG_DID_ESPHERE_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_2
# 23 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_1:
# 24 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 16 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 26 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 17 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 27 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 28 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_5
# 29 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_4:
# 30 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 20 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 31 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 32 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 21 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 33 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 34 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_ge CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_8
# 35 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_7:
# 36 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 24 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 37 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 38 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 39 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 40 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_ne CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_11
# 41 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_10:
# 42 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 28 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 43 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 44 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 29 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 45 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_Thanks
# 46 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 30 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 47 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setflag FLAG_DID_ESPHERE_TRADE
# 48 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 31 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 49 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
# 50 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 51 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 52 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_2:
# 53 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 14 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 54 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded
# 55 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_1
# 56 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 57 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_5:
# 58 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 18 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 59 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
# 60 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_4
# 61 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 62 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_8:
# 63 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 22 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 64 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
# 65 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_7
# 66 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 67 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_11:
# 68 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 26 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 69 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon
# 70 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_10
# 71 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 72 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 73 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade::
# 74 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 36 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 75 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 76 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 37 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 77 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
# 78 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 79 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 80 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 81 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon::
# 82 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 42 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 83 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 84 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 43 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 85 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 86 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 44 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 87 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
# 88 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 89 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 90 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 91 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded::
# 92 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 49 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 93 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 94 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 50 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 95 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
# 96 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 97 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 98 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 99 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma::
# 100 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 55 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 101 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	lock
# 102 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 56 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 103 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	faceplayer
# 104 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 57 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 105 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 106 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 58 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 107 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 108 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 59 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 109 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 110 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 60 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 111 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 112 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 61 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 113 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_set FLAG_DID_TANGENY_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_2
# 114 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_1:
# 115 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 64 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 116 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 117 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 65 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 118 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 119 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_5
# 120 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_4:
# 121 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 68 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 122 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special ChoosePartyMon
# 123 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 69 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 124 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	waitstate
# 125 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 70 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 126 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 127 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 71 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 128 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 129 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_ge CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_8
# 130 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_7:
# 131 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 74 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 132 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 133 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 75 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 134 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 135 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 76 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 136 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 137 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 77 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 138 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 139 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_ne CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_11
# 140 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_10:
# 141 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 80 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 142 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 143 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 81 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 144 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 145 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 82 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 146 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special CreateInGameTradePokemon
# 147 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 83 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 148 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special DoInGameTradeScene
# 149 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 84 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 150 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	waitstate
# 151 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 85 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 152 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 153 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 86 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 154 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setflag FLAG_DID_TANGENY_TRADE
# 155 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 87 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 156 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
# 157 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 158 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 159 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_2:
# 160 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 62 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 161 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded
# 162 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_1
# 163 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 164 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_5:
# 165 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 66 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 166 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
# 167 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_4
# 168 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 169 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_8:
# 170 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 72 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 171 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
# 172 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_7
# 173 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 174 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_11:
# 175 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 78 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 176 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon
# 177 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_10
# 178 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 179 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 180 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade::
# 181 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 92 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 182 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
# 183 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 93 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 184 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
# 185 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 186 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 187 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 188 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon::
# 189 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 98 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 190 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 191 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 99 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 192 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
# 193 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 100 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 194 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
# 195 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 196 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 197 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 198 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded::
# 199 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 105 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 200 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
# 201 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 106 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 202 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
# 203 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	end
# 204 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 205 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"

# 206 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon::
# 207 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 110 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
# 208 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	.string "I found this most remarkable fossil\n"
# 209 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	.string "inside MT. MOON.\p"
# 210 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	.string "I think it's of a rare, prehistoric\n"
# 211 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	.string "POKéMON.$"
