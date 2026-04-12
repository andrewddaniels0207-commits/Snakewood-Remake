# 1 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 6 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_Greeter::
# 7 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 4 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 8 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
# 9 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 11 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 12 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk::
# 13 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 9 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 14 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock
# 15 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 10 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 16 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 17 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 11 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 18 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	dotimebasedevents
# 19 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 12 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 20 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
# 21 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_ne LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_2
# 22 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_1:
# 23 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 15 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 24 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_5
# 25 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_4:
# 26 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 18 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 27 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
# 28 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 19 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 29 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, NO
# 30 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_8
# 31 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_7:
# 32 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 22 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 33 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
# 34 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 23 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 35 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	message LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
# 36 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 24 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 37 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmessage
# 38 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 25 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 39 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special RetrieveLotteryNumber
# 40 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 26 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 41 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 42 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 27 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 43 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special BufferLottoTicketNumber
# 44 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 28 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 45 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
# 46 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 29 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 47 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_WalkInPlaceFasterRight
# 48 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 30 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 49 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 31 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 51 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playse SE_PC_ON
# 52 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 32 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 53 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special DoLotteryCornerComputerEffect
# 54 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 33 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 55 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special PickLotteryCornerTicket
# 56 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 34 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 57 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 220
# 58 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 35 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 59 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special EndLotteryCornerComputerEffect
# 60 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 36 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 61 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 10
# 62 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 37 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 63 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_FacePlayer
# 64 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 38 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 65 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 39 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 67 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 0
# 68 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_11
# 69 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_10:
# 70 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 42 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 71 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
# 72 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 43 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 73 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8006, 0
# 74 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_14
# 75 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_13:
# 76 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 46 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 77 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8006, 1
# 78 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_17
# 79 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_16:
# 80 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 49 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 81 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8005
# 82 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 50 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 83 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 1
# 84 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_20
# 85 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_19:
# 86 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 53 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 87 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 2
# 88 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_23
# 89 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_22:
# 90 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 56 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 91 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 3
# 92 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_26
# 93 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_25:
# 94 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 59 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 95 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 4
# 96 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_29
# 97 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_28:
# 98 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 62 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 99 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	giveitem VAR_0x8005
# 100 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 63 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 101 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 102 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_32
# 103 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_31:
# 104 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 66 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 105 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 106 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 67 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 107 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
# 108 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 109 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 110 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_2:
# 111 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 13 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 112 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier
# 113 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_1
# 114 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 115 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_5:
# 116 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 16 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 117 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow
# 118 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_4
# 119 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 120 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_8:
# 121 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 20 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 122 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain
# 123 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_7
# 124 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 125 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_11:
# 126 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 40 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 127 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoMatch
# 128 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_10
# 129 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 130 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_14:
# 131 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 44 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 132 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon
# 133 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_13
# 134 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 135 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_17:
# 136 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 47 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 137 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon
# 138 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_16
# 139 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 140 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_20:
# 141 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 51 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 142 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch
# 143 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_19
# 144 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 145 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_23:
# 146 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 54 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 147 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch
# 148 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_22
# 149 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 150 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_26:
# 151 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 57 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 152 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch
# 153 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_25
# 154 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 155 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_29:
# 156 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 60 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 157 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	call LilycoveCity_DepartmentStore_1F_EventScript_FullMatch
# 158 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_28
# 159 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 160 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_32:
# 161 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 64 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 162 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom
# 163 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_31
# 164 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 165 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 166 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon::
# 167 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 72 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 168 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
# 169 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 170 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 171 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 172 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon::
# 173 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 77 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 174 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
# 175 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 176 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 177 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 178 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow::
# 179 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 82 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 180 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
# 181 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 83 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 182 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 183 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 184 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 185 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 186 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain::
# 187 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 88 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 188 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
# 189 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 89 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 190 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 191 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 192 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 193 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 194 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_NoMatch::
# 195 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 94 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 196 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
# 197 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 95 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 198 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
# 199 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 200 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 201 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 202 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2::
# 203 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 100 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 204 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
# 205 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 101 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 206 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 207 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 208 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 209 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 210 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch::
# 211 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 106 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 212 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
# 213 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 214 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 215 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 216 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch::
# 217 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 111 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 218 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
# 219 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 220 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 221 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 222 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch::
# 223 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 116 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 224 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
# 225 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 226 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 227 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 228 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FullMatch::
# 229 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 121 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 230 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
# 231 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	return
# 232 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 233 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 234 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom::
# 235 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 126 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 236 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
# 237 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 127 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 238 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
# 239 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 128 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 240 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
# 241 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 242 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 243 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 244 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize::
# 245 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 133 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 246 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
# 247 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 134 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 248 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 249 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 250 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 251 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 252 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier::
# 253 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 139 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 254 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
# 255 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 140 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 256 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	giveitem VAR_POKELOT_PRIZE_ITEM
# 257 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 141 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 258 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 259 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier_2
# 260 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier_1:
# 261 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 144 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 262 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
# 263 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 145 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 264 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
# 265 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 146 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 266 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 267 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 147 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 268 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
# 269 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 148 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 270 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_PLACE, 0
# 271 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 149 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 272 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 273 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 274 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 275 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier_2:
# 276 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 142 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 277 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
# 278 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier_1
# 279 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 280 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 281 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PokefanF::
# 282 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 154 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 283 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings, MSGBOX_NPC
# 284 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 285 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 286 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 287 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_LittleGirl::
# 288 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 159 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 289 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture, MSGBOX_NPC
# 290 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 291 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 292 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 293 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_PokefanM::
# 294 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 164 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 295 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill, MSGBOX_NPC
# 296 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 297 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 298 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 299 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_Azumarill::
# 300 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 169 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 301 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock
# 302 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 170 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 303 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 304 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 171 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 305 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitse
# 306 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 172 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 307 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 308 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 173 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 309 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_Azumarill, MSGBOX_DEFAULT
# 310 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 174 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 311 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmoncry
# 312 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 175 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 313 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	release
# 314 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 315 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 316 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 317 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_EventScript_FloorNamesSign::
# 318 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 180 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 319 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign, MSGBOX_SIGN
# 320 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	end
# 321 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 322 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 323 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore::
# 324 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 184 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 325 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.$"
# 326 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 327 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings::
# 328 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 188 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 329 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Whenever I come to the DEPARTMENT\n"
# 330 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "STORE, I always end up buying all sorts\l"
# 331 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "of things because it's so fun.$"
# 332 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 333 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture::
# 334 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 194 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 335 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Today, my mom is going to buy me some\n"
# 336 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "nice furniture.$"
# 337 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 338 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill::
# 339 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 199 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 340 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I'm buying something for my AZUMARILL\n"
# 341 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "as a reward for winning a CONTEST.$"
# 342 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 343 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_Azumarill::
# 344 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 204 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 345 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "AZUMARILL: Maririroo!$"
# 346 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 347 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign::
# 348 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 208 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 349 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "1F: SERVICE COUNTER\n"
# 350 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "    LOTTERY CORNER\p"
# 351 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "2F: TRAINER'S ZONE\p"
# 352 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "3F: BATTLE COLLECTION\p"
# 353 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "4F: TM CORNER\p"
# 354 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "5F: POKé DOLL FLOOR\p"
# 355 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "ROOFTOP: ROOFTOP PLAZA$"
# 356 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 357 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun::
# 358 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 218 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 359 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Wireless Communication is a\n"
# 360 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "lot of fun, isn't it?\p"
# 361 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I think it lets you do things that\n"
# 362 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "weren't possible before.\p"
# 363 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "For instance, you can now trade\n"
# 364 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "with people you couldn't before.\p"
# 365 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I think it's going to be exciting!$"
# 366 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"

# 367 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm::
# 368 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 228 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
# 369 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I want to spread the word about how\n"
# 370 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "fun Wireless Communication can be.$"
