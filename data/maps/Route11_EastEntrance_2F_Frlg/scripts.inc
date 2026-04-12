Route11_EastEntrance_2F_Frlg_MapScripts::
	.byte 0


Route11_EastEntrance_2F_EventScript_LeftBinoculars::
# 4 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lockall
# 5 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_WOKE_UP_ROUTE_12_SNORLAX, Route11_EastEntrance_2F_EventScript_LeftBinoculars_2
Route11_EastEntrance_2F_EventScript_LeftBinoculars_1:
# 8 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad
# 9 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	releaseall
	end

Route11_EastEntrance_2F_EventScript_LeftBinoculars_2:
# 6 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_LeftBinocularsSnorlaxGone
	goto Route11_EastEntrance_2F_EventScript_LeftBinoculars_1


Route11_EastEntrance_2F_EventScript_LeftBinocularsSnorlaxGone::
# 14 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_WhatABreathtakingView
# 15 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	releaseall
	end


Route11_EastEntrance_2F_EventScript_RightBinoculars::
# 20 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender, MSGBOX_SIGN
	end


Route11_EastEntrance_2F_EventScript_Turner::
# 25 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lock
# 26 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 27 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORINOA
# 28 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 29 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_DID_NINA_TRADE, Route11_EastEntrance_2F_EventScript_Turner_2
Route11_EastEntrance_2F_EventScript_Turner_1:
# 32 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 33 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route11_EastEntrance_2F_EventScript_Turner_5
Route11_EastEntrance_2F_EventScript_Turner_4:
# 36 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 37 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Route11_EastEntrance_2F_EventScript_Turner_8
Route11_EastEntrance_2F_EventScript_Turner_7:
# 40 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 41 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Route11_EastEntrance_2F_EventScript_Turner_11
Route11_EastEntrance_2F_EventScript_Turner_10:
# 44 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 45 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 46 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_DID_NINA_TRADE
# 47 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
	end

Route11_EastEntrance_2F_EventScript_Turner_2:
# 30 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_AlreadyTraded
	goto Route11_EastEntrance_2F_EventScript_Turner_1

Route11_EastEntrance_2F_EventScript_Turner_5:
# 34 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_DeclineTrade
	goto Route11_EastEntrance_2F_EventScript_Turner_4

Route11_EastEntrance_2F_EventScript_Turner_8:
# 38 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_DeclineTrade
	goto Route11_EastEntrance_2F_EventScript_Turner_7

Route11_EastEntrance_2F_EventScript_Turner_11:
# 42 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_NotRequestedMon
	goto Route11_EastEntrance_2F_EventScript_Turner_10


Route11_EastEntrance_2F_EventScript_DeclineTrade::
# 52 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_AwwOhWell
# 53 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_NotRequestedMon::
# 58 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 59 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
# 60 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_AlreadyTraded::
# 65 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 66 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_Aide::
# 71 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lock
# 72 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	faceplayer
# 73 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
# 74 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_ITEMFINDER, Route11_EastEntrance_2F_EventScript_Aide_2
Route11_EastEntrance_2F_EventScript_Aide_1:
# 77 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30, MSGBOX_YESNO
# 78 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route11_EastEntrance_2F_EventScript_Aide_5
Route11_EastEntrance_2F_EventScript_Aide_4:
# 81 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 82 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 83 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 84 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
# 85 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8006, REQUIRED_CAUGHT_MONS
	goto_if_lt Route11_EastEntrance_2F_EventScript_Aide_8
Route11_EastEntrance_2F_EventScript_Aide_7:
# 88 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_GreatHereYouGo
# 89 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	checkitemspace ITEM_ITEMFINDER
# 90 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route11_EastEntrance_2F_EventScript_Aide_11
Route11_EastEntrance_2F_EventScript_Aide_10:
# 93 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide, ITEM_ITEMFINDER
# 94 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_ITEMFINDER
# 95 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
# 96 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
	end

Route11_EastEntrance_2F_EventScript_Aide_2:
# 75 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_AlreadyGotItemfinder
	goto Route11_EastEntrance_2F_EventScript_Aide_1

Route11_EastEntrance_2F_EventScript_Aide_5:
# 79 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
	goto Route11_EastEntrance_2F_EventScript_Aide_4

Route11_EastEntrance_2F_EventScript_Aide_8:
# 86 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
	goto Route11_EastEntrance_2F_EventScript_Aide_7

Route11_EastEntrance_2F_EventScript_Aide_11:
# 91 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
	goto Route11_EastEntrance_2F_EventScript_Aide_10


Route11_EastEntrance_2F_EventScript_AlreadyGotItemfinder::
# 101 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
# 102 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	release
	end


Route11_EastEntrance_2F_EventScript_GetAideRequestInfo::
# 107 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
# 108 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ITEMFINDER
	return


Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30::
# 112 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
	.string "I'm one of PROF. OAK's AIDES.\p"
	.string "If your POKéDEX has complete data\n"
	.string "on {STR_VAR_1} species, I'm supposed to\l"
	.string "give you a reward.\p"
	.string "PROF. OAK entrusted me with the\n"
	.string "{STR_VAR_2} for you.\p"
	.string "So, {PLAYER}, let me ask you.\p"
	.string "Have you gathered data on at least\n"
	.string "{STR_VAR_1} kinds of POKéMON?$"

Route11_EastEntrance_2F_Text_GreatHereYouGo::
# 125 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
	.string "Congratulations!\n"
	.string "Here you go!$"

Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide::
# 132 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_2}\n"
	.string "from the AIDE.$"

Route11_EastEntrance_2F_Text_ExplainItemfinder::
# 137 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "There are items on the ground that\n"
	.string "may be hidden from view.\p"
	.string "Use the ITEMFINDER to detect any\n"
	.string "hidden items close to you.\p"
	.string "The machine is a bit limited.\n"
	.string "It can't pinpoint item locations.\p"
	.string "What it does is show the direction\n"
	.string "where the item is.\p"
	.string "Use it to get your bearings, then\n"
	.string "search the suspect area by hand.$"

Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad::
# 150 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "A big POKéMON is asleep on a road!$"

Route11_EastEntrance_2F_Text_WhatABreathtakingView::
# 156 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "What a breathtaking view!$"

Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender::
# 162 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "To get to LAVENDER TOWN from\n"
	.string "CERULEAN CITY…\p"
	.string "ROCK TUNNEL appears to be a good\n"
	.string "route to take.$"
