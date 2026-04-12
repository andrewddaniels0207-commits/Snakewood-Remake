CeruleanCity_House3_Frlg_MapScripts::
	.byte 0


CeruleanCity_House3_EventScript_OldWoman::
# 4 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox CeruleanCity_House3_Text_PleaseTradeWithMyHusband, MSGBOX_NPC
	end


CeruleanCity_House3_EventScript_Dontae::
# 9 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	lock
# 10 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_JYNX
# 12 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 13 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto_if_set FLAG_DID_ZYNX_TRADE, CeruleanCity_House3_EventScript_Dontae_2
CeruleanCity_House3_EventScript_Dontae_1:
# 16 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 17 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeruleanCity_House3_EventScript_Dontae_5
CeruleanCity_House3_EventScript_Dontae_4:
# 20 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 21 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge CeruleanCity_House3_EventScript_Dontae_8
CeruleanCity_House3_EventScript_Dontae_7:
# 24 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 25 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne CeruleanCity_House3_EventScript_Dontae_11
CeruleanCity_House3_EventScript_Dontae_10:
# 28 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 29 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_Thanks
# 30 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	setflag FLAG_DID_ZYNX_TRADE
# 31 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
	end

CeruleanCity_House3_EventScript_Dontae_2:
# 14 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_AlreadyTraded
	goto CeruleanCity_House3_EventScript_Dontae_1

CeruleanCity_House3_EventScript_Dontae_5:
# 18 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_DeclineTrade
	goto CeruleanCity_House3_EventScript_Dontae_4

CeruleanCity_House3_EventScript_Dontae_8:
# 22 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_DeclineTrade
	goto CeruleanCity_House3_EventScript_Dontae_7

CeruleanCity_House3_EventScript_Dontae_11:
# 26 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	goto CeruleanCity_House3_EventScript_NotRequestedMon
	goto CeruleanCity_House3_EventScript_Dontae_10


CeruleanCity_House3_EventScript_DeclineTrade::
# 36 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 37 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
	end


CeruleanCity_House3_EventScript_NotRequestedMon::
# 42 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 43 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 44 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
	end


CeruleanCity_House3_EventScript_AlreadyTraded::
# 49 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 50 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	release
	end


CeruleanCity_House3_Text_PleaseTradeWithMyHusband::
# 54 "data/maps/CeruleanCity_House3_Frlg/scripts.pory"
	.string "My husband likes trading POKéMON.\p"
	.string "You're collecting POKéMON for your\n"
	.string "POKéDEX, aren't you?\p"
	.string "Would you please trade with him?$"
