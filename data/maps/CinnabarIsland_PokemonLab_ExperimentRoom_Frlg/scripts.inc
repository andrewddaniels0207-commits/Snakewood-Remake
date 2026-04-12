# 1 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 5 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 6 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett::
# 7 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 4 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 8 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	lock
# 9 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 5 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 10 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 6 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 12 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEL
# 13 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 7 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 14 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 15 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 8 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 16 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DID_SEELOR_TRADE, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_2
# 17 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_1:
# 18 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 11 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 19 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 20 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 12 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 21 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 22 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_5
# 23 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_4:
# 24 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 15 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 26 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 16 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 27 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 28 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_ge CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_8
# 29 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_7:
# 30 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 19 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 31 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 32 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 20 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 33 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 34 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_ne CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_11
# 35 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_10:
# 36 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 23 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 37 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 38 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 24 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 39 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 40 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 41 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setflag FLAG_DID_SEELOR_TRADE
# 42 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 26 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 43 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 44 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 45 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 46 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_2:
# 47 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 9 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 48 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_AlreadyTraded
# 49 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_1
# 50 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 51 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_5:
# 52 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 13 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 53 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade
# 54 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_4
# 55 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 56 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_8:
# 57 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 17 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 58 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade
# 59 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_7
# 60 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 61 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_11:
# 62 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 21 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 63 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NotRequestedMon
# 64 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_Garett_10
# 65 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 66 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 67 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineTrade::
# 68 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 31 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 69 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 70 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 32 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 71 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 72 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 73 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 74 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 75 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NotRequestedMon::
# 76 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 37 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 77 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 78 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 38 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 79 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 80 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 39 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 81 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 82 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 83 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 84 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 85 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_AlreadyTraded::
# 86 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 44 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 87 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 88 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 45 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 89 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 90 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 91 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 92 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 93 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist::
# 94 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 50 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 95 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	lock
# 96 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 51 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 97 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	faceplayer
# 98 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 52 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 99 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, FALSE
# 100 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 53 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 101 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_set FLAG_REVIVED_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_2
# 102 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_1:
# 103 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 56 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 104 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 105 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_5
# 106 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_4:
# 107 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 59 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 108 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2
# 109 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_8
# 110 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_7:
# 111 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 62 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 112 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 113 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_11
# 114 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_10:
# 115 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 65 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 116 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList
# 117 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 66 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 118 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 119 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_14
# 120 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_13:
# 121 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 69 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 122 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList
# 123 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 70 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 124 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 125 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_17
# 126 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_16:
# 127 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 73 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 128 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 129 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 74 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 130 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 131 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_20
# 132 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_19:
# 133 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 77 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 134 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 135 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 78 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 136 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 137 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 138 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 139 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_2:
# 140 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 54 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 141 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil
# 142 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_1
# 143 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 144 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_5:
# 145 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 57 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 146 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_RevivedAllFossils
# 147 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_4
# 148 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 149 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_8:
# 150 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 60 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 151 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon
# 152 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_7
# 153 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 154 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_11:
# 155 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 63 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 156 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilStillReviving
# 157 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_10
# 158 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 159 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_14:
# 160 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 67 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 161 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix
# 162 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_13
# 163 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 164 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_17:
# 165 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 71 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 166 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome
# 167 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_16
# 168 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 169 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_20:
# 170 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 75 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 171 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber
# 172 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilScientist_19
# 173 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 174 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 175 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList::
# 176 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 83 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 177 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_HELIX_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList_2
# 178 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList_1:
# 179 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 86 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 180 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_set FLAG_REVIVED_HELIX, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList_5
# 181 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList_4:
# 182 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 89 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 183 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, TRUE
# 184 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	return
# 185 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 186 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList_2:
# 187 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 84 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 188 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 189 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList_1
# 190 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 191 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList_5:
# 192 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 87 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 193 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 194 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddHelixFossilToList_4
# 195 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 196 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 197 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList::
# 198 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 94 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 199 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_DOME_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList_2
# 200 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList_1:
# 201 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 97 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 202 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_set FLAG_REVIVED_DOME, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList_5
# 203 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList_4:
# 204 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 100 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 205 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, TRUE
# 206 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	return
# 207 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 208 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList_2:
# 209 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 95 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 210 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 211 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList_1
# 212 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 213 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList_5:
# 214 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 98 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 215 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 216 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddDomeFossilToList_4
# 217 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 218 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 219 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList::
# 220 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 105 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 221 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_OLD_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList_2
# 222 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList_1:
# 223 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 108 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 224 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_set FLAG_REVIVED_AMBER, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList_5
# 225 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList_4:
# 226 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 111 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 227 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, TRUE
# 228 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	return
# 229 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 230 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList_2:
# 231 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 106 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 232 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 233 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList_1
# 234 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 235 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList_5:
# 236 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 109 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 237 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 238 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList_4
# 239 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 240 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 241 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse::
# 242 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 116 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 243 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, FALSE
# 244 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	return
# 245 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 246 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 247 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil::
# 248 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 121 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 249 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_NoIsTooBad
# 250 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 122 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 251 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 252 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 253 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 254 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 255 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix::
# 256 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 127 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 257 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 258 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 128 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 259 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	waitmessage
# 260 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 129 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 261 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 262 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 130 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 263 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 264 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_2
# 265 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_1:
# 266 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 133 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 267 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_HELIX, FALSE
# 268 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 134 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 269 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 270 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 135 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 271 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_6
# 272 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 137 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 273 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_7
# 274 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 139 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 275 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_8
# 276 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_4:
# 277 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 278 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 279 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_2:
# 280 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 131 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 281 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber
# 282 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_1
# 283 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 284 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_6:
# 285 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 136 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 286 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil
# 287 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_4
# 288 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 289 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_7:
# 290 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 138 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 291 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 292 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_4
# 293 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 294 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_8:
# 295 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 140 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 296 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 297 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelix_4
# 298 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 299 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 300 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome::
# 301 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 146 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 302 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 303 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 147 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 304 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	waitmessage
# 305 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 148 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 306 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckAddOldAmberToList
# 307 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 149 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 308 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 309 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_2
# 310 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_1:
# 311 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 152 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 312 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_DOME, FALSE
# 313 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 153 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 314 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 315 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 154 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 316 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_6
# 317 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 156 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 318 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_7
# 319 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 158 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 320 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_8
# 321 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_4:
# 322 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 323 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 324 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_2:
# 325 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 150 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 326 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber
# 327 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_1
# 328 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 329 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_6:
# 330 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 155 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 331 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil
# 332 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_4
# 333 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 334 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_7:
# 335 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 157 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 336 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 337 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_4
# 338 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 339 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_8:
# 340 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 159 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 341 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 342 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDome_4
# 343 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 344 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 345 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber::
# 346 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 165 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 347 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe
# 348 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 166 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 349 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	waitmessage
# 350 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 167 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 351 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_AMBER, FALSE
# 352 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 168 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 353 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 354 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 169 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 355 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_3
# 356 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 171 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 357 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_4
# 358 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 173 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 359 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_5
# 360 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_1:
# 361 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 362 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 363 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_3:
# 364 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 170 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 365 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 366 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_1
# 367 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 368 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_4:
# 369 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 172 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 370 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 371 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_1
# 372 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 373 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_5:
# 374 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 174 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 375 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 376 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilAmber_1
# 377 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 378 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 379 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber::
# 380 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 180 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 381 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_HELIX_AMBER, FALSE
# 382 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 181 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 383 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 384 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 182 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 385 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_3
# 386 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 184 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 387 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_4
# 388 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 186 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 389 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_5
# 390 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 188 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 391 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_6
# 392 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_1:
# 393 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 394 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 395 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_3:
# 396 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 183 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 397 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil
# 398 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_1
# 399 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 400 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_4:
# 401 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 185 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 402 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 403 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_1
# 404 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 405 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_5:
# 406 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 187 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 407 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 408 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_1
# 409 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 410 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_6:
# 411 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 189 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 412 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 413 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilHelixAmber_1
# 414 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 415 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 416 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber::
# 417 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 195 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 418 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_DOME_AMBER, FALSE
# 419 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 196 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 420 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 421 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 197 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 422 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_3
# 423 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 199 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 424 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_4
# 425 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 201 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 426 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 2, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_5
# 427 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 203 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 428 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	case 127, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_6
# 429 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_1:
# 430 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 431 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 432 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_3:
# 433 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 198 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 434 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil
# 435 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_1
# 436 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 437 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_4:
# 438 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 200 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 439 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber
# 440 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_1
# 441 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 442 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_5:
# 443 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 202 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 444 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 445 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_1
# 446 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 447 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_6:
# 448 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 204 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 449 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DontShowFossil
# 450 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ChooseFossilDomeAmber_1
# 451 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 452 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 453 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil::
# 454 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 210 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 455 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 456 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 211 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 457 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HELIX_FOSSIL
# 458 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 212 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 459 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 460 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 213 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 461 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 462 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil_2
# 463 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil_1:
# 464 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 216 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 465 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 466 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 217 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 467 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 468 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 218 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 469 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 470 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 219 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 471 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 472 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 220 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 473 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 474 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 221 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 475 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, HELIX_FOSSIL
# 476 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 222 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 477 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 478 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 479 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 480 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil_2:
# 481 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 214 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 482 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 483 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowHelixFossil_1
# 484 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 485 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 486 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil::
# 487 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 227 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 488 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 489 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 228 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 490 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_DOME_FOSSIL
# 491 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 229 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 492 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 493 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 230 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 494 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 495 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil_2
# 496 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil_1:
# 497 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 233 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 498 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 499 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 234 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 500 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 501 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 235 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 502 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 503 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 236 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 504 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 505 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 237 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 506 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 507 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 238 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 508 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, DOME_FOSSIL
# 509 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 239 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 510 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 511 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 512 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 513 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil_2:
# 514 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 231 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 515 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 516 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowDomeFossil_1
# 517 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 518 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 519 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber::
# 520 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 244 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 521 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 522 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 245 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 523 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_OLD_AMBER
# 524 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 246 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 525 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain, MSGBOX_YESNO
# 526 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 247 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 527 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 528 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber_2
# 529 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber_1:
# 530 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 250 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 531 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor
# 532 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 251 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 533 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 534 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 252 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 535 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 536 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 253 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 537 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 538 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 254 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 539 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
# 540 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 255 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 541 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, OLD_AMBER
# 542 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 256 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 543 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 544 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 545 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 546 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber_2:
# 547 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 248 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 548 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil
# 549 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_ShowOldAmber_1
# 550 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 551 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 552 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_DeclineReviveFossil::
# 553 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 261 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 554 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_YouComeAgain
# 555 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 262 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 556 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 557 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 558 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 559 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 560 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_FossilStillReviving::
# 561 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 267 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 562 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk
# 563 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 268 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 564 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 565 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 566 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 567 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 568 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon::
# 569 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 273 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 570 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, HELIX_FOSSIL
# 571 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_2
# 572 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_1:
# 573 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 276 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 574 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, DOME_FOSSIL
# 575 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_5
# 576 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_4:
# 577 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 279 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 578 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_WHICH_FOSSIL, OLD_AMBER
# 579 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_8
# 580 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_7:
# 581 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 582 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 583 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_2:
# 584 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 274 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 585 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte
# 586 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_1
# 587 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 588 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_5:
# 589 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 277 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 590 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto
# 591 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_4
# 592 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 593 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_8:
# 594 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 280 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 595 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl
# 596 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveRevivedMon_7
# 597 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 598 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 599 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte::
# 600 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 286 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 601 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OMANYTE
# 602 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 287 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 603 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 604 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 288 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 605 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 606 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 289 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 607 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	givemon SPECIES_OMANYTE, 5
# 608 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 290 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 609 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 610 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_2
# 611 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_1:
# 612 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 293 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 613 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setflag FLAG_REVIVED_HELIX
# 614 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 294 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 615 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 616 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_5
# 617 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_4:
# 618 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 297 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 619 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 620 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_8
# 621 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_7:
# 622 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 623 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 624 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_2:
# 625 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 291 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 626 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 627 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_1
# 628 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 629 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_5:
# 630 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 295 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 631 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 632 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_4
# 633 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 634 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_8:
# 635 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 298 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 636 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
# 637 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveOmanyte_7
# 638 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 639 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 640 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto::
# 641 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 304 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 642 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KABUTO
# 643 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 305 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 644 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 645 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 306 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 646 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 647 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 307 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 648 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	givemon SPECIES_KABUTO, 5
# 649 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 308 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 650 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 651 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_2
# 652 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_1:
# 653 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 311 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 654 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setflag FLAG_REVIVED_DOME
# 655 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 312 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 656 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 657 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_5
# 658 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_4:
# 659 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 315 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 660 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 661 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_8
# 662 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_7:
# 663 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 664 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 665 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_2:
# 666 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 309 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 667 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 668 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_1
# 669 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 670 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_5:
# 671 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 313 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 672 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 673 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_4
# 674 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 675 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_8:
# 676 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 316 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 677 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
# 678 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveKabuto_7
# 679 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 680 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 681 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl::
# 682 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 322 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 683 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_AERODACTYL
# 684 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 323 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 685 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 686 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 324 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 687 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife
# 688 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 325 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 689 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	givemon SPECIES_AERODACTYL, 5
# 690 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 326 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 691 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 692 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_2
# 693 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_1:
# 694 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 329 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 695 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setflag FLAG_REVIVED_AMBER
# 696 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 330 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 697 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 698 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_5
# 699 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_4:
# 700 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 333 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 701 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 702 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_8
# 703 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_7:
# 704 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 705 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 706 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_2:
# 707 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 327 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 708 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 709 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_1
# 710 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 711 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_5:
# 712 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 331 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 713 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty
# 714 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_4
# 715 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 716 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_8:
# 717 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 334 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 718 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC
# 719 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_GiveAerodactyl_7
# 720 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 721 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 722 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty::
# 723 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 340 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 724 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 725 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 341 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 726 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 727 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 342 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 728 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_ReceivedMonFromDoctor
# 729 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 343 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 730 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	waitmessage
# 731 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 344 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 732 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	waitfanfare
# 733 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 345 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 734 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 0
# 735 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 346 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 736 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 737 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 347 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 738 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 739 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty_2
# 740 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty_1:
# 741 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 350 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 742 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 743 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 351 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 744 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 745 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 352 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 746 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
# 747 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 748 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 749 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty_2:
# 750 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 348 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 751 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
# 752 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonParty_1
# 753 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 754 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 755 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC::
# 756 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 357 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 757 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 758 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 358 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 759 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 760 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 359 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 761 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	message CinnabarIsland_PokemonLab_ExperimentRoom_Text_ReceivedMonFromDoctor
# 762 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 360 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 763 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	waitmessage
# 764 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 361 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 765 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	waitfanfare
# 766 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 362 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 767 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 0
# 768 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 363 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 769 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 770 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 364 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 771 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 772 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC_2
# 773 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC_1:
# 774 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 367 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 775 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 776 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 368 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 777 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC
# 778 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 779 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 780 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC_2:
# 781 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 365 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 782 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC
# 783 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_NicknameMonPC_1
# 784 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 785 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 786 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_MonSentToPC::
# 787 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 373 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 788 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 789 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 374 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 790 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon
# 791 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 792 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 793 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 794 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_EndGiveMon::
# 795 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 379 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 796 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 797 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 798 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 799 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 800 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_RevivedAllFossils::
# 801 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 384 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 802 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_ExperimentRoom_Text_YouComeAgain
# 803 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 385 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 804 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	release
# 805 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 806 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 807 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 808 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil::
# 809 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 390 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 810 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HELIX_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil_2
# 811 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil_1:
# 812 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 393 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 813 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil_5
# 814 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil_4:
# 815 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 396 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 816 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 817 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	end
# 818 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 819 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil_2:
# 820 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 391 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 821 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix
# 822 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil_1
# 823 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 824 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil_5:
# 825 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 394 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 826 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome
# 827 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedMtMoonFossil_4
# 828 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 829 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 830 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix::
# 831 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 401 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 832 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_REVIVED_HELIX, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix_2
# 833 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix_1:
# 834 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 404 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 835 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, TRUE
# 836 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	return
# 837 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 838 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix_2:
# 839 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 402 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 840 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 841 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedHelix_1
# 842 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 843 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 844 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome::
# 845 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 409 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 846 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_REVIVED_DOME, CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome_2
# 847 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome_1:
# 848 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 412 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 849 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	setvar VAR_RESULT, TRUE
# 850 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	return
# 851 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 852 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome_2:
# 853 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 410 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 854 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_SetResultFalse
# 855 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_ExperimentRoom_EventScript_CheckRevivedDome_1
# 856 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 857 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 858 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
Text_MetronomeTeach::
# 859 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 416 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 860 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Tch-tch-tch!\n"
# 861 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "I'll teach you a nifty move.\p"
# 862 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Teach it to a POKéMON, and watch\n"
# 863 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "the fun unfold!\p"
# 864 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "It's a move called METRONOME.\n"
# 865 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Does it strike your fancy?$"
# 866 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 867 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
Text_MetronomeDeclined::
# 868 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 425 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 869 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "I tell you, it's a lot of fun!$"
# 870 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 871 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
Text_MetronomeWhichMon::
# 872 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 429 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 873 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Okay!\n"
# 874 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Which POKéMON should I teach?$"
# 875 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 876 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
Text_MetronomeTaught::
# 877 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 434 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 878 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Tch-tch-tch!\n"
# 879 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "That's the sound of a METRONOME.\p"
# 880 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "It tweaks your POKéMON's brain into\n"
# 881 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "using moves it doesn't even know.$"
# 882 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 883 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_HaveYouAFossilForMe::
# 884 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 441 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 885 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Hiya!\p"
# 886 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "I am important doctor.\n"
# 887 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Yes, very much so, indeed.\p"
# 888 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Here, I study rare POKéMON fossils.\n"
# 889 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "All the time, I study.\p"
# 890 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "You!\n"
# 891 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Have you a fossil for me?$"
# 892 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 893 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_NoIsTooBad::
# 894 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 451 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 895 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "No!\n"
# 896 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Is too bad!$"
# 897 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 898 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalkJP::
# 899 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 456 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 900 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "ちょっと　じかん　かかるよ！\p"
# 901 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "そこらへんを　すこし\n"
# 902 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "ブラブラ　してくると　よろしー！$"
# 903 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 904 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_FossilMonBackToLife::
# 905 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 462 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 906 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "You late.\n"
# 907 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Where were you?\p"
# 908 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Your fossil is back to life!\n"
# 909 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "It was {STR_VAR_1} like I think!$"
# 910 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 911 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_ReceivedMonFromDoctor::
# 912 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 469 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 913 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 914 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "from the doctor.$"
# 915 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 916 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_NoRoomForPokemon::
# 917 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 474 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 918 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "ポケモン　いっぱいで　もてないね！$"
# 919 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 920 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_ThatFossilIsOfMonMakeItLiveAgain::
# 921 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 478 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 922 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Oh!\n"
# 923 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "That is {STR_VAR_2}, it is!\p"
# 924 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "It is fossil of {STR_VAR_1},\n"
# 925 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "a POKéMON that is already extinct!\p"
# 926 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "My Resurrection Machine will make\n"
# 927 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "that POKéMON live again!$"
# 928 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 929 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_HandedFossilToWeirdDoctor::
# 930 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 487 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 931 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "So!\n"
# 932 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "You hurry and give me that!\p"
# 933 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} handed over the\n"
# 934 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "{STR_VAR_2} to the weird doctor.$"
# 935 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 936 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_TakesTimeGoForWalk::
# 937 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 494 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 938 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "I take a little time!\n"
# 939 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "You go for walk a little while!$"
# 940 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"

# 941 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
CinnabarIsland_PokemonLab_ExperimentRoom_Text_YouComeAgain::
# 942 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 499 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
# 943 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "Aiyah!\n"
# 944 "data/maps/CinnabarIsland_PokemonLab_ExperimentRoom_Frlg/scripts.pory"
	.string "You come again!$"
