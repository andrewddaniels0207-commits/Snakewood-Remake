# 1 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 2 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_Frlg_MapScripts::
# 3 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 5 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 6 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_LeftBinoculars::
# 7 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 4 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 8 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lockall
# 9 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 5 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 10 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_WOKE_UP_ROUTE_12_SNORLAX, Route11_EastEntrance_2F_EventScript_LeftBinoculars_2
# 11 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_LeftBinoculars_1:
# 12 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 8 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 13 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad
# 14 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 9 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 15 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	releaseall
# 16 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 17 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 18 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_LeftBinoculars_2:
# 19 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 6 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 20 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_LeftBinocularsSnorlaxGone
# 21 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_LeftBinoculars_1
# 22 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 23 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 24 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_LeftBinocularsSnorlaxGone::
# 25 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 14 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 26 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_WhatABreathtakingView
# 27 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 15 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 28 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	releaseall
# 29 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 30 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 31 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 32 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_RightBinoculars::
# 33 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 20 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 34 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender, MSGBOX_SIGN
# 35 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 36 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 37 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 38 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner::
# 39 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 25 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 40 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lock
# 41 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 26 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 42 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 43 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 27 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 44 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORINOA
# 45 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 28 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 46 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 47 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 29 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 48 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_DID_NINA_TRADE, Route11_EastEntrance_2F_EventScript_Turner_2
# 49 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner_1:
# 50 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 32 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 51 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 52 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 33 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 53 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 54 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route11_EastEntrance_2F_EventScript_Turner_5
# 55 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner_4:
# 56 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 36 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 57 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 58 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 37 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 59 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 60 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_ge Route11_EastEntrance_2F_EventScript_Turner_8
# 61 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner_7:
# 62 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 40 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 63 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 64 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 41 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 65 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
# 66 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_ne Route11_EastEntrance_2F_EventScript_Turner_11
# 67 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner_10:
# 68 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 44 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 69 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 70 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 45 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 71 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 72 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 46 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 73 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_DID_NINA_TRADE
# 74 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 47 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 75 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
# 76 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 77 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 78 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner_2:
# 79 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 30 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 80 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_AlreadyTraded
# 81 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_Turner_1
# 82 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 83 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner_5:
# 84 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 34 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 85 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_DeclineTrade
# 86 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_Turner_4
# 87 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 88 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner_8:
# 89 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 38 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 90 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_DeclineTrade
# 91 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_Turner_7
# 92 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 93 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Turner_11:
# 94 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 42 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 95 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_NotRequestedMon
# 96 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_Turner_10
# 97 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 98 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 99 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_DeclineTrade::
# 100 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 52 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 101 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 102 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 53 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 103 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
# 104 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 105 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 106 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 107 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_NotRequestedMon::
# 108 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 58 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 109 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 110 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 59 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 111 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 112 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 60 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 113 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
# 114 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 115 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 116 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 117 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_AlreadyTraded::
# 118 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 65 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 119 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 120 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 66 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 121 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
# 122 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 123 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 124 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 125 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide::
# 126 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 71 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 127 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lock
# 128 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 72 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 129 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 130 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 73 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 131 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
# 132 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 74 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 133 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_ITEMFINDER, Route11_EastEntrance_2F_EventScript_Aide_2
# 134 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide_1:
# 135 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 77 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 136 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30, MSGBOX_YESNO
# 137 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 78 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 138 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 139 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route11_EastEntrance_2F_EventScript_Aide_5
# 140 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide_4:
# 141 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 81 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 142 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 143 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 82 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 144 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 145 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 83 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 146 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 147 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 84 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 148 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
# 149 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 85 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 150 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8006, REQUIRED_CAUGHT_MONS
# 151 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_lt Route11_EastEntrance_2F_EventScript_Aide_8
# 152 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide_7:
# 153 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 88 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 154 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_GreatHereYouGo
# 155 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 89 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 156 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	checkitemspace ITEM_ITEMFINDER
# 157 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 90 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 158 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 159 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_eq Route11_EastEntrance_2F_EventScript_Aide_11
# 160 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide_10:
# 161 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 93 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 162 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide, ITEM_ITEMFINDER
# 163 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 94 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 164 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_ITEMFINDER
# 165 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 95 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 166 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
# 167 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 96 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 168 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
# 169 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 170 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 171 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide_2:
# 172 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 75 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 173 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_AlreadyGotItemfinder
# 174 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_Aide_1
# 175 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 176 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide_5:
# 177 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 79 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 178 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
# 179 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_Aide_4
# 180 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 181 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide_8:
# 182 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 86 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 183 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
# 184 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_Aide_7
# 185 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 186 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_Aide_11:
# 187 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 91 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 188 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
# 189 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_Aide_10
# 190 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 191 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 192 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_AlreadyGotItemfinder::
# 193 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 101 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 194 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
# 195 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 102 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 196 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
# 197 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	end
# 198 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 199 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 200 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_EventScript_GetAideRequestInfo::
# 201 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 107 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 202 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
# 203 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 108 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 204 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ITEMFINDER
# 205 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	return
# 206 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 207 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 208 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30::
# 209 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 112 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 210 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
# 211 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "I'm one of PROF. OAK's AIDES.\p"
# 212 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 213 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "on {STR_VAR_1} species, I'm supposed to\l"
# 214 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "give you a reward.\p"
# 215 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "PROF. OAK entrusted me with the\n"
# 216 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_2} for you.\p"
# 217 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 218 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 219 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_1} kinds of POKéMON?$"
# 220 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 221 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_Text_GreatHereYouGo::
# 222 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 125 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 223 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 224 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 225 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 226 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Here you go!$"
# 227 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 228 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide::
# 229 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 132 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 230 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_2}\n"
# 231 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 232 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 233 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_Text_ExplainItemfinder::
# 234 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 137 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 235 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "There are items on the ground that\n"
# 236 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "may be hidden from view.\p"
# 237 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Use the ITEMFINDER to detect any\n"
# 238 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "hidden items close to you.\p"
# 239 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "The machine is a bit limited.\n"
# 240 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "It can't pinpoint item locations.\p"
# 241 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "What it does is show the direction\n"
# 242 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "where the item is.\p"
# 243 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Use it to get your bearings, then\n"
# 244 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "search the suspect area by hand.$"
# 245 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 246 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad::
# 247 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 150 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 248 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 249 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 250 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "A big POKéMON is asleep on a road!$"
# 251 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 252 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_Text_WhatABreathtakingView::
# 253 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 156 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 254 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 255 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 256 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "What a breathtaking view!$"
# 257 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"

# 258 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender::
# 259 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 162 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
# 260 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
# 261 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "to show…\p"
# 262 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "To get to LAVENDER TOWN from\n"
# 263 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "CERULEAN CITY…\p"
# 264 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "ROCK TUNNEL appears to be a good\n"
# 265 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "route to take.$"
