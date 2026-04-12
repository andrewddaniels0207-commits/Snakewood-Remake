LilycoveCity_DepartmentStore_1F_MapScripts::
	.byte 0


LilycoveCity_DepartmentStore_1F_EventScript_Greeter::
# 4 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk::
# 9 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock
# 10 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 11 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	dotimebasedevents
# 12 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
	goto_if_ne LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_2
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_1:
# 15 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_5
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_4:
# 18 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
# 19 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_8
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_7:
# 22 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
# 23 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	message LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
# 24 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmessage
# 25 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special RetrieveLotteryNumber
# 26 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 27 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special BufferLottoTicketNumber
# 28 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_WalkInPlaceFasterRight
# 30 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playse SE_PC_ON
# 32 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special DoLotteryCornerComputerEffect
# 33 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special PickLotteryCornerTicket
# 34 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 220
# 35 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special EndLotteryCornerComputerEffect
# 36 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 10
# 37 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_FacePlayer
# 38 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_11
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_10:
# 42 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
# 43 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8006, 0
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_14
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_13:
# 46 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8006, 1
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_17
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_16:
# 49 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8005
# 50 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 1
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_20
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_19:
# 53 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_23
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_22:
# 56 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 3
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_26
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_25:
# 59 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 4
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_29
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_28:
# 62 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	giveitem VAR_0x8005
# 63 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_32
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_31:
# 66 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 67 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
	end

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_2:
# 13 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_1

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_5:
# 16 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_4

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_8:
# 20 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_7

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_11:
# 40 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoMatch
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_10

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_14:
# 44 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_13

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_17:
# 47 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_16

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_20:
# 51 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_19

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_23:
# 54 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_22

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_26:
# 57 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_25

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_29:
# 60 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_FullMatch
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_28

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_32:
# 64 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_31


LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon::
# 72 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
	return


LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon::
# 77 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
	return


LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow::
# 82 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain::
# 88 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
# 89 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1F_EventScript_NoMatch::
# 94 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
# 95 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
	end


LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2::
# 100 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch::
# 106 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
	return


LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch::
# 111 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
	return


LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch::
# 116 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
	return


LilycoveCity_DepartmentStore_1F_EventScript_FullMatch::
# 121 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
	return


LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom::
# 126 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
# 127 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
# 128 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
	end


LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize::
# 133 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
# 134 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier::
# 139 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
# 140 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	giveitem VAR_POKELOT_PRIZE_ITEM
# 141 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier_2
LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier_1:
# 144 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
# 145 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
# 146 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 147 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
# 148 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_PLACE, 0
# 149 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
	end

LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier_2:
# 142 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
	goto LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier_1


LilycoveCity_DepartmentStore_1F_EventScript_PokefanF::
# 154 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_1F_EventScript_LittleGirl::
# 159 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_1F_EventScript_PokefanM::
# 164 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_1F_EventScript_Azumarill::
# 169 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock
# 170 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 171 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitse
# 172 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 173 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_Azumarill, MSGBOX_DEFAULT
# 174 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmoncry
# 175 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1F_EventScript_FloorNamesSign::
# 180 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign, MSGBOX_SIGN
	end


LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore::
# 184 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.$"

LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings::
# 188 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Whenever I come to the DEPARTMENT\n"
	.string "STORE, I always end up buying all sorts\l"
	.string "of things because it's so fun.$"

LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture::
# 194 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Today, my mom is going to buy me some\n"
	.string "nice furniture.$"

LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill::
# 199 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I'm buying something for my AZUMARILL\n"
	.string "as a reward for winning a CONTEST.$"

LilycoveCity_DepartmentStore_1F_Text_Azumarill::
# 204 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "AZUMARILL: Maririroo!$"

LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign::
# 208 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "1F: SERVICE COUNTER\n"
	.string "    LOTTERY CORNER\p"
	.string "2F: TRAINER'S ZONE\p"
	.string "3F: BATTLE COLLECTION\p"
	.string "4F: TM CORNER\p"
	.string "5F: POKé DOLL FLOOR\p"
	.string "ROOFTOP: ROOFTOP PLAZA$"

LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun::
# 218 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Wireless Communication is a\n"
	.string "lot of fun, isn't it?\p"
	.string "I think it lets you do things that\n"
	.string "weren't possible before.\p"
	.string "For instance, you can now trade\n"
	.string "with people you couldn't before.\p"
	.string "I think it's going to be exciting!$"

LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm::
# 228 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I want to spread the word about how\n"
	.string "fun Wireless Communication can be.$"
