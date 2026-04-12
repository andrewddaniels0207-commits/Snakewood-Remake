# 1 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 2 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_MapScripts::
# 3 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 5 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 6 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
# 7 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 5 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 8 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
# 9 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 6 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 10 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowBattlePointsWindow
# 11 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 12 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 13 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 14 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
# 15 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 11 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 16 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 12 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 18 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 19 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 13 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 20 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 21 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 23 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 24 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
# 25 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 18 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 26 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 27 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 19 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 28 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8008
# 29 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_ge BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_2
# 30 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_1:
# 31 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 22 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 32 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 23 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 34 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
# 35 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_5
# 36 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_4:
# 37 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 26 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 38 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
# 39 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_8
# 40 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_7:
# 41 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 29 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 42 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
# 43 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_11
# 44 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_10:
# 45 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 32 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 46 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 47 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 49 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_2:
# 50 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 20 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 51 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize
# 52 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_1
# 53 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 54 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_5:
# 55 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 24 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 56 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 57 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_4
# 58 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 59 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_8:
# 60 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 27 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 61 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 62 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_7
# 63 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 64 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_11:
# 65 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 30 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 66 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 67 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_10
# 68 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 69 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 70 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize::
# 71 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 37 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 72 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
# 73 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize_2
# 74 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize_1:
# 75 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 40 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 76 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
# 77 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize_5
# 78 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize_4:
# 79 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 43 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 80 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem
# 81 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 82 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 83 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize_2:
# 84 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 38 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 85 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
# 86 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize_1
# 87 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 88 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize_5:
# 89 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 41 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 90 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
# 91 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize_4
# 92 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 93 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 94 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor::
# 95 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 48 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 96 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkdecorspace VAR_0x8009
# 97 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 49 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 98 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 99 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_2
# 100 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_1:
# 101 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 52 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 102 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 103 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 53 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 104 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 105 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 54 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 106 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	adddecoration VAR_0x8009
# 107 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 55 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 108 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 109 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 56 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 110 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 111 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 57 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 112 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
# 113 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 58 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 114 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
# 115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_5
# 116 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_4:
# 117 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 61 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 118 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 119 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 121 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_2:
# 122 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 50 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor
# 124 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_1
# 125 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 126 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_5:
# 127 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 59 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 128 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 129 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_4
# 130 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 131 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 132 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor::
# 133 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 66 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 134 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 67 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 136 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 137 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 68 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 138 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 139 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 140 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 141 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 142 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem::
# 143 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 73 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 144 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkitemspace VAR_0x8009
# 145 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 74 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 146 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, FALSE
# 147 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_2
# 148 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_1:
# 149 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 77 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 150 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 151 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 78 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 152 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 153 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 79 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 154 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	additem VAR_0x8009
# 155 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 80 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 156 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 157 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 81 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 158 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 159 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 82 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 160 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 83 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 162 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
# 163 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_5
# 164 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_4:
# 165 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 86 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 166 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 167 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 169 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_2:
# 170 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 75 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 171 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_BagFull
# 172 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_1
# 173 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 174 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_5:
# 175 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 84 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 176 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 177 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_4
# 178 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 179 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 180 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BagFull::
# 181 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 91 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 182 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
# 183 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 92 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 184 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 185 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 93 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 186 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 187 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 188 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 189 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 190 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1::
# 191 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 98 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 192 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 193 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 99 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 194 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 195 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 100 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 196 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
# 197 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 101 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 198 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 199 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 102 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 200 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 201 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 202 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 203 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 204 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1::
# 205 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 107 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 206 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
# 207 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 108 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 208 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 209 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 109 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 210 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 211 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 110 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 212 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 213 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 111 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 214 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 215 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 112 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 216 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 217 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 113 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 218 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_3
# 219 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 220 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_4
# 221 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 117 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 222 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_5
# 223 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 119 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 224 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_6
# 225 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 121 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 226 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_7
# 227 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 228 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_8
# 229 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 125 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 230 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_9
# 231 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 127 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 232 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_10
# 233 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 129 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 234 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_11
# 235 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 131 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 236 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_12
# 237 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 133 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 238 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_13
# 239 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 135 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 240 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_14
# 241 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1:
# 242 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 244 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_3:
# 245 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 114 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 246 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster
# 247 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 248 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 249 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_4:
# 250 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 116 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 251 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion
# 252 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 253 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 254 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_5:
# 255 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 118 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 256 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll
# 257 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 258 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 259 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_6:
# 260 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 120 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 261 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll
# 262 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 263 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 264 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_7:
# 265 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 122 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 266 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll
# 267 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 268 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 269 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_8:
# 270 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 124 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 271 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll
# 272 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 273 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 274 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_9:
# 275 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 126 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 276 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll
# 277 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 278 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 279 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_10:
# 280 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 128 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 281 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll
# 282 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 283 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 284 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_11:
# 285 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 130 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 286 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll
# 287 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 288 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 289 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_12:
# 290 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 132 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 291 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll
# 292 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 293 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 294 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_13:
# 295 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 134 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 296 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 297 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 298 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 299 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_14:
# 300 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 136 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 301 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 302 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1
# 303 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 304 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 305 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1::
# 306 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 142 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 307 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8009
# 308 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 143 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 309 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 310 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 144 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 311 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, NO
# 312 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1_2
# 313 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1_1:
# 314 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 147 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 315 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 316 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 317 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 318 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1_2:
# 319 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 145 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 320 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 321 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1_1
# 322 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 323 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 324 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster::
# 325 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 152 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 326 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_KISS_POSTER, 16
# 327 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 153 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 328 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 329 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 330 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 331 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 332 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion::
# 333 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 157 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 334 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_KISS_CUSHION, 32
# 335 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 158 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 336 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 337 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 338 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 339 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 340 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll::
# 341 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 162 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 342 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_SMOOCHUM_DOLL, 32
# 343 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 163 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 344 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 345 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 346 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 347 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 348 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll::
# 349 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 167 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 350 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_TOGEPI_DOLL, 48
# 351 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 168 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 352 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 353 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 354 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 355 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 356 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll::
# 357 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 172 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 358 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_MEOWTH_DOLL, 48
# 359 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 173 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 360 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 361 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 362 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 363 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 364 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll::
# 365 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 177 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 366 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CLEFAIRY_DOLL, 48
# 367 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 178 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 368 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 369 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 370 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 371 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 372 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll::
# 373 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 182 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 374 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_DITTO_DOLL, 48
# 375 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 183 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 376 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 377 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 378 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 379 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 380 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll::
# 381 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 187 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 382 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CYNDAQUIL_DOLL, 80
# 383 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 188 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 384 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 385 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 386 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 387 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 388 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll::
# 389 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 192 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 390 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CHIKORITA_DOLL, 80
# 391 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 193 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 392 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 393 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 394 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 395 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 396 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll::
# 397 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 197 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 398 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_TOTODILE_DOLL, 80
# 399 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 198 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 400 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 401 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 402 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 403 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 404 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2::
# 405 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 202 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 406 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 407 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 203 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 408 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 409 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 204 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 410 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
# 411 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 205 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 412 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 413 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 206 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 414 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 415 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 416 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 417 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 418 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2::
# 419 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 211 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 420 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
# 421 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 212 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 422 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 423 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 213 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 424 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 425 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 214 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 426 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 427 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 215 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 428 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 429 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 216 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 430 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 431 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 217 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 432 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_3
# 433 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 219 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 434 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_4
# 435 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 221 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 436 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_5
# 437 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 223 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 438 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_6
# 439 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 225 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 440 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_7
# 441 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 227 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 442 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_8
# 443 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 229 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 444 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_9
# 445 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1:
# 446 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 447 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 448 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_3:
# 449 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 218 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 450 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll
# 451 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1
# 452 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 453 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_4:
# 454 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 220 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 455 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll
# 456 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1
# 457 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 458 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_5:
# 459 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 222 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 460 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll
# 461 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1
# 462 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 463 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_6:
# 464 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 224 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 465 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll
# 466 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1
# 467 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 468 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_7:
# 469 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 226 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 470 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll
# 471 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1
# 472 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 473 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_8:
# 474 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 228 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 475 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 476 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1
# 477 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 478 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_9:
# 479 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 230 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 480 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 481 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1
# 482 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 483 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 484 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2::
# 485 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 236 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 486 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8009
# 487 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 237 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 488 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 489 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 238 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 490 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, NO
# 491 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2_2
# 492 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2_1:
# 493 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 241 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 494 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 495 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 496 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 497 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2_2:
# 498 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 239 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 499 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 500 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2_1
# 501 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 502 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 503 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll::
# 504 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 246 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 505 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_LAPRAS_DOLL, 128
# 506 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 247 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 507 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 508 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 509 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 510 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 511 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll::
# 512 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 251 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 513 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_SNORLAX_DOLL, 128
# 514 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 252 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 515 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 516 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 517 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 518 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 519 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll::
# 520 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 256 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 521 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_VENUSAUR_DOLL, 256
# 522 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 257 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 523 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 524 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 525 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 526 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 527 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll::
# 528 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 261 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 529 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CHARIZARD_DOLL, 256
# 530 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 262 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 531 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 532 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 533 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 534 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 535 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll::
# 536 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 266 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 537 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_BLASTOISE_DOLL, 256
# 538 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 267 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 539 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 540 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 541 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 542 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 543 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_VitaminClerk::
# 544 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 271 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 545 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 546 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 272 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 547 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 548 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 273 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 549 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
# 550 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 274 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 551 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 552 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 275 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 553 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 554 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 555 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 556 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 557 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin::
# 558 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 280 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 559 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
# 560 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 281 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 561 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 562 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 282 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 563 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 564 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 283 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 565 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 566 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 284 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 567 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 568 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 285 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 569 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 570 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 286 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 571 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_3
# 572 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 288 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 573 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_4
# 574 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 290 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 575 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_5
# 576 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 292 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 577 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_6
# 578 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 294 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 579 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_7
# 580 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 296 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 581 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_8
# 582 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 298 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 583 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_9
# 584 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 300 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 585 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_10
# 586 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1:
# 587 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 588 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 589 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_3:
# 590 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 287 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 591 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_Protein
# 592 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1
# 593 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 594 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_4:
# 595 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 289 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 596 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_Calcium
# 597 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1
# 598 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 599 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_5:
# 600 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 291 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 601 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_Iron
# 602 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1
# 603 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 604 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_6:
# 605 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 293 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 606 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_Zinc
# 607 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1
# 608 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 609 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_7:
# 610 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 295 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 611 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_Carbos
# 612 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1
# 613 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 614 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_8:
# 615 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 297 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 616 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_HPUp
# 617 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1
# 618 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 619 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_9:
# 620 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 299 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 621 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 622 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1
# 623 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 624 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_10:
# 625 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 301 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 626 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 627 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1
# 628 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 629 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 630 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin::
# 631 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 307 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 632 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8009
# 633 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 308 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 634 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 635 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 309 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 636 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, NO
# 637 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin_2
# 638 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin_1:
# 639 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 312 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 640 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 641 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 642 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 643 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin_2:
# 644 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 310 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 645 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 646 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin_1
# 647 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 648 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 649 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Protein::
# 650 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 317 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 651 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_PROTEIN, 1
# 652 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 318 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 653 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 654 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 655 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 656 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 657 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Calcium::
# 658 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 322 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 659 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CALCIUM, 1
# 660 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 323 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 661 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 662 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 663 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 664 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 665 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Iron::
# 666 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 327 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 667 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_IRON, 1
# 668 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 328 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 669 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 670 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 671 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 672 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 673 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Zinc::
# 674 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 332 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 675 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_ZINC, 1
# 676 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 333 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 677 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 678 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 679 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 680 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 681 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Carbos::
# 682 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 337 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 683 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CARBOS, 1
# 684 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 338 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 685 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 686 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 687 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 688 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 689 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HPUp::
# 690 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 342 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 691 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_HP_UP, 1
# 692 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 343 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 693 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 694 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 695 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 696 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 697 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HoldItemClerk::
# 698 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 347 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 699 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 700 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 348 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 701 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 702 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 349 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 703 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
# 704 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 350 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 705 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 706 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 351 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 707 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 708 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 709 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 710 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 711 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem::
# 712 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 356 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 713 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
# 714 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 357 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 715 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 716 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 358 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 717 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 718 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 359 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 719 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 720 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 360 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 721 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 722 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 361 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 723 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 724 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 362 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 725 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_3
# 726 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 364 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 727 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_4
# 728 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 366 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 729 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_5
# 730 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 368 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 731 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_6
# 732 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 370 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 733 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_7
# 734 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 372 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 735 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_8
# 736 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 374 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 737 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_9
# 738 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 376 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 739 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_10
# 740 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 378 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 741 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_11
# 742 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 380 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 743 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_12
# 744 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 382 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 745 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_13
# 746 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1:
# 747 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 748 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 749 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_3:
# 750 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 363 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 751 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers
# 752 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 753 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 754 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_4:
# 755 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 365 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 756 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb
# 757 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 758 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 759 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_5:
# 760 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 367 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 761 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw
# 762 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 763 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 764 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_6:
# 765 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 369 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 766 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb
# 767 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 768 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 769 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_7:
# 770 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 371 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 771 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder
# 772 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 773 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 774 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_8:
# 775 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 373 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 776 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand
# 777 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 778 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 779 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_9:
# 780 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 375 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 781 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock
# 782 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 783 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 784 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_10:
# 785 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 377 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 786 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand
# 787 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 788 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 789 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_11:
# 790 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 379 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 791 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens
# 792 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 793 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 794 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_12:
# 795 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 381 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 796 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 797 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 798 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 799 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_13:
# 800 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 383 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 801 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 802 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1
# 803 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 804 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 805 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem::
# 806 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 389 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 807 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8009
# 808 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 390 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 809 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 810 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 391 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 811 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, NO
# 812 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem_2
# 813 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem_1:
# 814 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 394 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 815 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 816 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 817 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 818 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem_2:
# 819 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 392 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 820 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 821 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem_1
# 822 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 823 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 824 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers::
# 825 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 399 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 826 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_LEFTOVERS, 48
# 827 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 400 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 828 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 829 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 830 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 831 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 832 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb::
# 833 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 404 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 834 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_WHITE_HERB, 48
# 835 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 405 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 836 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 837 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 838 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 839 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 840 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw::
# 841 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 409 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 842 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_QUICK_CLAW, 48
# 843 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 410 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 844 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 845 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 846 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 847 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 848 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb::
# 849 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 414 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 850 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_MENTAL_HERB, 48
# 851 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 415 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 852 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 853 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 854 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 855 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 856 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder::
# 857 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 419 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 858 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_BRIGHT_POWDER, 64
# 859 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 420 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 860 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 861 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 862 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 863 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 864 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand::
# 865 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 424 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 866 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CHOICE_BAND, 64
# 867 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 425 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 868 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 869 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 870 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 871 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 872 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock::
# 873 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 429 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 874 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_KINGS_ROCK, 64
# 875 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 430 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 876 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 877 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 878 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 879 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 880 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand::
# 881 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 434 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 882 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_FOCUS_BAND, 64
# 883 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 435 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 884 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 885 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 886 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 887 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 888 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens::
# 889 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 439 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 890 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_SCOPE_LENS, 64
# 891 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 440 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 892 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 893 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 894 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 895 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 896 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Man::
# 897 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 444 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 898 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
# 899 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 900 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 901 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 902 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
# 903 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 449 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 904 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
# 905 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 906 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 907 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 908 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
# 909 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 454 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 910 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 911 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 455 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 912 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
# 913 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 456 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 914 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 915 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 916 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 917 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 918 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
# 919 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 461 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 920 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
# 921 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 922 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 923 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 924 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
# 925 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 466 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 926 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
# 927 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 928 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 929 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 930 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize::
# 931 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 470 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 932 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hello, this is the EXCHANGE SERVICE\n"
# 933 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "CORNER.\p"
# 934 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "We exchange the Battle Points you\n"
# 935 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "have collected for lovely prizes.\p"
# 936 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please choose a prize from this list.$"
# 937 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 938 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PleaseChoosePrize::
# 939 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 478 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 940 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please choose a prize from this list.$"
# 941 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 942 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase::
# 943 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 482 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 944 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the {STR_VAR_1}.\n"
# 945 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Is that correct?$"
# 946 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 947 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC::
# 948 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 487 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 949 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Thank you!\n"
# 950 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 951 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 952 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize::
# 953 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 492 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 954 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Here is your prize!$"
# 955 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 956 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints::
# 957 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 496 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 958 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
# 959 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You don't have enough Battle Points…$"
# 960 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 961 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PCIsFull::
# 962 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 501 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 963 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
# 964 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Your PC appears to be full…$"
# 965 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 966 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt::
# 967 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 506 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 968 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
# 969 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You don't have space to hold it…$"
# 970 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 971 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints::
# 972 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 511 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 973 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Thank you very much.\p"
# 974 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please visit us when you have\n"
# 975 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "saved up Battle Points.$"
# 976 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 977 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls::
# 978 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 517 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 979 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Oh, they're so nice!\n"
# 980 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I wish I had them!\l"
# 981 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Cute cushions!\l"
# 982 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Big plush DOLLS!\l"
# 983 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Little plush DOLLS!\l"
# 984 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I wish I had them all!$"
# 985 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 986 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant::
# 987 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 526 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 988 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Leave it to your mommy!\p"
# 989 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If it's anything you want, I'll go\n"
# 990 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "through anything to get it, honey!$"
# 991 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 992 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher::
# 993 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 532 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 994 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If I can get hold of the items here,\n"
# 995 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "my POKéMON will get tougher.\p"
# 996 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You bet they will!\n"
# 997 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "No question about it!$"
# 998 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 999 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll::
# 1000 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 539 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1001 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hah?\n"
# 1002 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "What are you gawking at?\p"
# 1003 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I don't like you staring at my plush\n"
# 1004 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "doll like that.\p"
# 1005 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If you want it, go get one yourself!\n"
# 1006 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Isn't that right, SMOOCHUM?$"
# 1007 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1008 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord::
# 1009 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 548 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1010 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Did you know?\p"
# 1011 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If you stretch your record at any of\n"
# 1012 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "the BATTLE facilities, they start\l"
# 1013 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "giving you more and more Battle Points.$"
# 1014 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1015 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc::
# 1016 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 555 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1017 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A large poster with a SMOOCHUM print.$"
# 1018 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1019 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc::
# 1020 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 559 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1021 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A SMOOCHUM cushion.\n"
# 1022 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1023 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1024 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc::
# 1025 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 564 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1026 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A SMOOCHUM DOLL.\n"
# 1027 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1028 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1029 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc::
# 1030 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 569 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1031 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A TOGEPI DOLL.\n"
# 1032 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1033 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1034 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc::
# 1035 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 574 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1036 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A MEOWTH DOLL.\n"
# 1037 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1038 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1039 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc::
# 1040 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 579 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1041 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A CLEFAIRY DOLL.\n"
# 1042 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1043 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1044 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc::
# 1045 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 584 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1046 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A DITTO DOLL.\n"
# 1047 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1048 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1049 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc::
# 1050 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 589 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1051 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A CYNDAQUIL DOLL.\n"
# 1052 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1053 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1054 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc::
# 1055 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 594 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1056 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A CHIKORITA DOLL.\n"
# 1057 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1058 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1059 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc::
# 1060 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 599 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1061 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A TOTODILE DOLL.\n"
# 1062 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1063 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1064 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc::
# 1065 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 604 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1066 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A large DOLL.\n"
# 1067 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 1068 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1069 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc::
# 1070 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 609 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1071 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat ATTACK of one\n"
# 1072 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "POKéMON.$"
# 1073 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1074 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc::
# 1075 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 614 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1076 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SP. ATK of one\n"
# 1077 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "POKéMON.$"
# 1078 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1079 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_IronDesc::
# 1080 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 619 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1081 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat DEFENSE of one\n"
# 1082 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "POKéMON.$"
# 1083 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1084 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ZincDesc::
# 1085 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 624 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1086 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SP. DEF of one\n"
# 1087 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "POKéMON.$"
# 1088 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1089 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc::
# 1090 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 629 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1091 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SPEED of one\n"
# 1092 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "POKéMON.$"
# 1093 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1094 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc::
# 1095 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 634 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1096 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the HP of one POKéMON.$"
# 1097 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1098 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc::
# 1099 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 638 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1100 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that gradually restores\n"
# 1101 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "HP in battle.$"
# 1102 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1103 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc::
# 1104 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 643 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1105 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that restores any\n"
# 1106 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "lowered stat.$"
# 1107 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1108 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc::
# 1109 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 648 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1110 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that occasionally allows\n"
# 1111 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "the first strike.$"
# 1112 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1113 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc::
# 1114 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 653 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that snaps POKéMON out\n"
# 1116 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "of infatuation.$"
# 1117 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1118 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc::
# 1119 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 658 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1120 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that casts a glare to\n"
# 1121 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "reduce accuracy.$"
# 1122 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc::
# 1124 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 663 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1125 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises a move's power, but permits\n"
# 1126 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "only that move.$"
# 1127 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1128 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc::
# 1129 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 668 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1130 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that may cause flinching\n"
# 1131 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "when the foe is hit.$"
# 1132 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1133 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc::
# 1134 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 673 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1135 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that occasionally\n"
# 1136 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "prevents fainting.$"
# 1137 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 1138 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc::
# 1139 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 678 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
# 1140 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that raises the\n"
# 1141 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "critical-hit rate.$"
