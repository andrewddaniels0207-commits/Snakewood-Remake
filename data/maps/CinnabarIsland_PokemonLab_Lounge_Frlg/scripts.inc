CinnabarIsland_PokemonLab_Lounge_Frlg_MapScripts::
	.byte 0


CinnabarIsland_PokemonLab_Lounge_EventScript_Scientist::
# 4 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon, MSGBOX_NPC
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton::
# 9 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	lock
# 10 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ELECTRODE
# 12 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 13 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_set FLAG_DID_ESPHERE_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_2
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_1:
# 16 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 17 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_5
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_4:
# 20 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 21 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_8
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_7:
# 24 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 25 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_11
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_10:
# 28 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 29 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_Thanks
# 30 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setflag FLAG_DID_ESPHERE_TRADE
# 31 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
	end

CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_2:
# 14 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_1

CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_5:
# 18 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_4

CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_8:
# 22 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_7

CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_11:
# 26 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_10


CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade::
# 36 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 37 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon::
# 42 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 43 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 44 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded::
# 49 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 50 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_Norma::
# 55 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	lock
# 56 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	faceplayer
# 57 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 58 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 59 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 60 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 61 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_set FLAG_DID_TANGENY_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_2
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_1:
# 64 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 65 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_5
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_4:
# 68 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special ChoosePartyMon
# 69 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	waitstate
# 70 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 71 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_8
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_7:
# 74 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 75 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 76 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 77 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_11
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_10:
# 80 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 81 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 82 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special CreateInGameTradePokemon
# 83 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special DoInGameTradeScene
# 84 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	waitstate
# 85 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 86 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setflag FLAG_DID_TANGENY_TRADE
# 87 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
	end

CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_2:
# 62 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_1

CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_5:
# 66 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_4

CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_8:
# 72 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_7

CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_11:
# 78 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_10


CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade::
# 92 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
# 93 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon::
# 98 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 99 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
# 100 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded::
# 105 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
# 106 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	release
	end


CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon::
# 110 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	.string "I found this most remarkable fossil\n"
	.string "inside MT. MOON.\p"
	.string "I think it's of a rare, prehistoric\n"
	.string "POKéMON.$"
