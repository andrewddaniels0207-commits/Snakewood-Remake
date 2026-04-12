CeladonCity_GameCorner_PrizeRoom_Frlg_MapScripts::
	.byte 0


CeladonCity_GameCorner_PrizeRoom_EventScript_BaldingMan::
# 4 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon, MSGBOX_NPC
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_OldMan::
# 9 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday, MSGBOX_NPC
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons::
# 14 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_2
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_1:
# 19 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 20 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 21 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_2:
# 17 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_1


CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon::
# 26 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 27 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 28 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_GAME_CORNER_POKEMON_PRIZES, FALSE
# 29 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_3
# 32 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_4
# 34 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_5
# 36 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_6
# 38 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_7
# 40 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_8
# 42 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_9
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1:
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_3:
# 31 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Abra
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_4:
# 33 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_5:
# 35 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_6:
# 37 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_7:
# 39 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_8:
# 41 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_9:
# 43 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon_1


CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange::
# 49 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 50 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_Abra::
# 56 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 57 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 180
# 60 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 61 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 120
# 64 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy::
# 70 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 71 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 500
# 74 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 75 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 750
# 78 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir::
# 84 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 85 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2800
# 88 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PINSIR
# 89 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2500
# 92 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini::
# 98 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SCYTHER
# 99 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 5500
# 102 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 103 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4600
# 106 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon::
# 112 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 113 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 9999
# 116 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 117 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 6500
# 120 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
# 125 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 126 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 127 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_2
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_1:
# 130 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkcoins VAR_RESULT
# 131 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_2
	goto_if_lt CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_5
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_4:
# 134 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 135 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 136 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_ABRA, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_9
# 138 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_CLEFAIRY, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_10
# 140 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_DRATINI, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_11
# 142 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_SCYTHER, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_12
# 144 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_PORYGON, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_13
# 146 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_PINSIR, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_14
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7:
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_2:
# 128 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_5:
# 132 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_4

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_9:
# 137 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_10:
# 139 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_11:
# 141 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_12:
# 143 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_13:
# 145 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_14:
# 147 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GivePinsir
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7


CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra::
# 154 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 9
# 157 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 7
# 160 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy::
# 166 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 8
# 169 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 12
# 172 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini::
# 178 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 181 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 24
# 184 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_GiveScyther::
# 189 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 25
# 190 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon::
# 196 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 26
# 199 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 202 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_GivePinsir::
# 207 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 18
# 208 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon::
# 213 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_2
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_1:
# 216 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_5
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_4:
# 219 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_8
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_7:
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_2:
# 214 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_5:
# 217 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_4

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_8:
# 220 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_7


CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull::
# 226 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 227 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NoMoreRoomForPokemon
# 228 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 229 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon::
# 234 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	getpartysize
# 235 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	subvar VAR_RESULT, 1
# 236 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 237 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 238 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase::
# 243 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 244 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired
# 245 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins::
# 250 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins
# 251 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty::
# 256 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 257 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 258 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 259 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 260 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message gText_PlayerObtainedTheMon
# 261 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 262 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitfanfare
# 263 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 264 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_2
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_1:
# 267 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_2:
# 265 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty_1


CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC::
# 272 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 273 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 274 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 275 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 276 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message gText_PlayerObtainedTheMon
# 277 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 278 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitfanfare
# 279 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 280 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC_2
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC_1:
# 283 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 284 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC_2:
# 281 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC_1


CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC::
# 289 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 290 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs::
# 295 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 296 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 297 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_2
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_1:
# 300 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 301 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 302 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_2:
# 298 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_1


CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM::
# 307 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 308 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 309 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_GAME_CORNER_TMPRIZES, FALSE
# 310 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 311 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_3
# 313 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_4
# 315 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_5
# 317 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_6
# 319 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_7
# 321 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_8
# 323 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_9
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1:
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_3:
# 312 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM13
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_4:
# 314 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM23
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_5:
# 316 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM24
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_6:
# 318 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM30
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_7:
# 320 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TM35
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_8:
# 322 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_9:
# 324 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM_1


CeladonCity_GameCorner_PrizeRoom_EventScript_TM13::
# 330 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM13
# 331 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 332 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BEAM
# 333 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM23::
# 338 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM23
# 339 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 3500
# 340 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_IRON_TAIL
# 341 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM24::
# 346 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM24
# 347 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 348 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_THUNDERBOLT
# 349 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM30::
# 354 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM30
# 355 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4500
# 356 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_SHADOW_BALL
# 357 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_TM35::
# 362 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM35
# 363 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 364 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FLAMETHROWER
# 365 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM::
# 370 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM, MSGBOX_YESNO
# 371 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM_2
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM_1:
# 374 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM_2:
# 372 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM_1


CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem::
# 379 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 380 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 381 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem_2
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem_1:
# 384 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem_2:
# 382 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem_1


CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize::
# 389 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 390 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkcoins VAR_RESULT
# 391 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_TEMP_2
	goto_if_lt CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_2
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_1:
# 394 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	checkitemspace VAR_TEMP_1
# 395 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_5
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_4:
# 398 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_TEMP_2
# 399 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 400 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	giveitem VAR_TEMP_1
# 401 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_2:
# 392 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_1

CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_5:
# 396 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_4


CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull::
# 406 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 407 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_TooBadBagIsFull
# 408 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
# 409 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	release
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems::
# 414 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock
# 415 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	faceplayer
# 416 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_2
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_1:
# 419 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 420 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 421 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_2:
# 417 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_1


CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem::
# 426 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 427 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 428 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 10, 0, MULTI_GAME_CORNER_BATTLE_ITEM_PRIZES, FALSE
# 429 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 430 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_3
# 432 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_4
# 434 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_5
# 436 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_6
# 438 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_7
# 440 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_8
# 442 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_9
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1:
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_3:
# 431 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_4:
# 433 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_5:
# 435 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_6:
# 437 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_7:
# 439 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_8:
# 441 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_9:
# 443 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem_1


CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall::
# 449 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SMOKE_BALL
# 450 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 800
# 451 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed::
# 456 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MIRACLE_SEED
# 457 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 458 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal::
# 463 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_CHARCOAL
# 464 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 465 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater::
# 470 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MYSTIC_WATER
# 471 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 472 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute::
# 477 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, ITEM_YELLOW_FLUTE
# 478 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1600
# 479 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
	end


CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon::
# 483 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "I sure do fancy that PORYGON!\n"
	.string "But, it's hard to win at slots!$"

CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday::
# 488 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Gahaha! I raked it in today!\n"
	.string "If only every day were like this…$"

CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired::
# 493 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "A COIN CASE is required…$"

CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes::
# 497 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "We exchange your COINS for prizes.$"

CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize::
# 501 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Which prize would you like?$"

CeladonCity_GameCorner_PrizeRoom_Text_HereYouGo::
# 505 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "はい どうぞ$"

CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize::
# 509 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "So, you want the {STR_VAR_1}?$"

CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM::
# 513 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Okay, a TM of {STR_VAR_2}\n"
	.string "is what you want?$"

CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins::
# 518 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Sorry, you'll need more COINS\n"
	.string "than that.$"

CeladonCity_GameCorner_PrizeRoom_Text_OopsNotEnoughRoom::
# 523 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "おきゃくさん もう もてないよ$"

CeladonCity_GameCorner_PrizeRoom_Text_OhFineThen::
# 527 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "あっ そう$"
