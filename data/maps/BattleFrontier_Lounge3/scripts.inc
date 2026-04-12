# 1 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 6 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Gambler::
# 7 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 5 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 6 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 11 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 7 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_Gambler_2
# 13 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Gambler_1:
# 14 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 10 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 15 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols
# 16 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 11 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 17 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_0x8004, 2
# 18 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_le BattleFrontier_Lounge3_EventScript_Gambler_5
# 19 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Gambler_4:
# 20 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 14 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 21 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
# 22 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 15 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 23 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 16 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 25 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
# 26 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 28 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Gambler_2:
# 29 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 8 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AlreadyMetGambler
# 31 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_Gambler_1
# 32 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 33 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Gambler_5:
# 34 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 12 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 35 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols
# 36 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_Gambler_4
# 37 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 38 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 39 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge::
# 40 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 21 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 41 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerLookingMessage
# 42 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 22 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 43 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 44 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 23 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 45 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 46 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 24 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 47 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe, MSGBOX_YESNO
# 48 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 25 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 49 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_RESULT, NO
# 50 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_2
# 51 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_1:
# 52 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 28 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 53 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints, MSGBOX_YESNO
# 54 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 29 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 55 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_RESULT, NO
# 56 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_5
# 57 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_4:
# 58 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 32 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 59 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 60 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 33 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 61 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 62 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 34 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 63 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowBattlePointsWindow
# 64 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 35 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 65 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
# 66 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 67 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 68 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_2:
# 69 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 26 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 70 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 71 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_1
# 72 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 73 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_5:
# 74 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 30 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 75 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 76 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_4
# 77 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 78 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 79 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount::
# 80 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 40 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 81 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
# 82 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 41 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 83 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
# 84 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 42 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 85 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 43 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 87 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_3
# 88 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 45 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 89 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_4
# 90 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 47 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 91 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_5
# 92 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 49 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 93 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_6
# 94 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 51 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 95 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_7
# 96 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1:
# 97 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 99 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount_3:
# 100 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 44 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 101 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_Bet5
# 102 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1
# 103 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 104 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount_4:
# 105 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 46 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 106 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_Bet10
# 107 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1
# 108 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 109 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount_5:
# 110 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 48 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 111 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_Bet15
# 112 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1
# 113 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 114 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount_6:
# 115 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 50 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 116 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CancelBet
# 117 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1
# 118 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 119 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount_7:
# 120 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 52 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 121 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CancelBet
# 122 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1
# 123 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 124 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 125 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet5::
# 126 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 58 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 127 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_5
# 128 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 59 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 129 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 130 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 131 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 132 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 133 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet10::
# 134 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 64 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 135 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_10
# 136 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 65 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 137 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 138 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 139 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 140 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 141 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet15::
# 142 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 70 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 143 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_15
# 144 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 71 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 145 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 146 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 147 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 148 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 149 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_TryPlaceBet::
# 150 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 76 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 151 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 152 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 77 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 153 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8008
# 154 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_ge BattleFrontier_Lounge3_EventScript_TryPlaceBet_2
# 155 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_TryPlaceBet_1:
# 156 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 80 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 157 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints, MSGBOX_DEFAULT
# 158 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 81 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 159 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 160 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 82 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 161 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 162 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 83 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 163 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
# 164 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 165 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 166 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_TryPlaceBet_2:
# 167 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 78 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 168 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_PlaceBet
# 169 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet_1
# 170 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 171 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 172 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_PlaceBet::
# 173 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 88 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 174 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 175 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 89 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 176 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special TakeFrontierBattlePoints
# 177 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 90 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 178 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
# 179 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 91 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 180 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special UpdateBattlePointsWindow
# 181 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 92 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 182 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	playse SE_SHOP
# 183 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 93 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 184 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo, MSGBOX_DEFAULT
# 185 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 94 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 186 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FinishBet
# 187 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 188 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 189 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 190 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FinishBet::
# 191 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 99 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 192 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 193 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 100 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 194 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 195 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 101 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 196 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 197 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 102 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 198 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 199 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 103 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 200 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 201 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 202 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 203 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 204 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols::
# 205 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 108 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 206 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, 0
# 207 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 109 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 208 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_2
# 209 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_1:
# 210 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 112 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 211 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_5
# 212 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_4:
# 213 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 115 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 214 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_8
# 215 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_7:
# 216 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 118 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 217 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_11
# 218 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_10:
# 219 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 121 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 220 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_14
# 221 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_13:
# 222 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 124 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 223 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_17
# 224 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_16:
# 225 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 127 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 226 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_20
# 227 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_19:
# 228 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 229 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 230 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_2:
# 231 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 110 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 232 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 233 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_1
# 234 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 235 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_5:
# 236 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 113 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 237 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 238 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_4
# 239 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 240 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_8:
# 241 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 116 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 242 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 243 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_7
# 244 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 245 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_11:
# 246 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 119 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 247 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 248 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_10
# 249 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 250 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_14:
# 251 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 122 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 252 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 253 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_13
# 254 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 255 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_17:
# 256 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 125 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 257 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 258 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_16
# 259 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 260 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_20:
# 261 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 128 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 262 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 263 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_19
# 264 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 265 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 266 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount::
# 267 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 134 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 268 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
# 269 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 270 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 271 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 272 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols::
# 273 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 139 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 274 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere, MSGBOX_DEFAULT
# 275 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 140 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 276 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 277 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 278 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 279 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 280 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AlreadyMetGambler::
# 281 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 145 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 282 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
# 283 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 146 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 284 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
# 285 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_ge BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_2
# 286 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_1:
# 287 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 149 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 288 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
# 289 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 290 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 291 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_2:
# 292 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 147 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 293 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults
# 294 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_1
# 295 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 296 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 297 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CheckBetResults::
# 298 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 154 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 299 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
# 300 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq BattleFrontier_Lounge3_EventScript_CheckBetResults_2
# 301 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CheckBetResults_1:
# 302 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 157 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 303 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON
# 304 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq BattleFrontier_Lounge3_EventScript_CheckBetResults_5
# 305 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CheckBetResults_4:
# 306 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 160 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 307 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_LostChallenge
# 308 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 309 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 310 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CheckBetResults_2:
# 311 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 155 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 312 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted
# 313 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults_1
# 314 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 315 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CheckBetResults_5:
# 316 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 158 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 317 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_WonChallenge
# 318 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults_4
# 319 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 320 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 321 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge::
# 322 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 165 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 323 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints, MSGBOX_DEFAULT
# 324 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 166 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 325 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5
# 326 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_2
# 327 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge_1:
# 328 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 169 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 329 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10
# 330 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_5
# 331 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge_4:
# 332 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 172 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 333 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15
# 334 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_8
# 335 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge_7:
# 336 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 175 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 337 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints, MSGBOX_GETPOINTS
# 338 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 176 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 339 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special GiveFrontierBattlePoints
# 340 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 177 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 341 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge, MSGBOX_DEFAULT
# 342 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 178 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 343 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 344 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 179 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 345 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 346 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 347 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 348 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge_2:
# 349 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 167 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 350 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_RewardBet5
# 351 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_1
# 352 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 353 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge_5:
# 354 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 170 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 355 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_RewardBet10
# 356 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_4
# 357 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 358 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge_8:
# 359 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 173 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 360 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_RewardBet15
# 361 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_7
# 362 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 363 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 364 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_LostChallenge::
# 365 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 184 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 366 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints, MSGBOX_DEFAULT
# 367 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 185 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 368 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 369 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 186 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 370 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 371 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 372 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 373 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 374 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet5::
# 375 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 191 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 376 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( BET_AMOUNT_5 * 2 )
# 377 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 192 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 378 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( BET_AMOUNT_5 * 2 )
# 379 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 380 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 381 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 382 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet10::
# 383 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 197 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 384 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( BET_AMOUNT_10 * 2 )
# 385 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 198 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 386 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( BET_AMOUNT_10 * 2 )
# 387 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 388 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 389 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 390 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet15::
# 391 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 203 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 392 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( BET_AMOUNT_15 * 2 )
# 393 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 204 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 394 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( BET_AMOUNT_15 * 2 )
# 395 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 396 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 397 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 398 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted::
# 399 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 209 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 400 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 401 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 210 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 402 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 403 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 211 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 404 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 405 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 212 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 406 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 407 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 408 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 409 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 410 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_DeclineChallenge::
# 411 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 217 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 412 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NotInterested, MSGBOX_DEFAULT
# 413 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 218 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 414 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 415 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 416 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 417 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 418 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CancelBet::
# 419 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 223 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 420 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 421 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 224 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 422 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 423 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 424 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 425 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 426 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Man::
# 427 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 229 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 428 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges, MSGBOX_NPC
# 429 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 430 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 431 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 432 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Woman::
# 433 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 234 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 434 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 435 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 235 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 436 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 437 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 236 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 438 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer, MSGBOX_DEFAULT
# 439 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 237 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 440 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 441 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 442 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 443 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 444 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_PokefanF::
# 445 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 242 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 446 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 447 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 243 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 448 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 449 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 244 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 450 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne, MSGBOX_DEFAULT
# 451 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 245 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 452 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 453 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 454 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 455 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 456 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FatMan::
# 457 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 250 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 458 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 459 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 251 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 460 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 461 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 252 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 462 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled, MSGBOX_DEFAULT
# 463 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 253 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 464 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 465 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 466 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 467 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 468 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FaceOriginalDirection::
# 469 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 258 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 470 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	closemessage
# 471 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 259 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 472 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 473 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 260 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 474 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmovement 0
# 475 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 261 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 476 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 477 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 478 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 479 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 480 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere::
# 481 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 265 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 482 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…What's that you want?\p"
# 483 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Can't you see we're kind of busy here?\n"
# 484 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Can't your business wait till later?$"
# 485 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 486 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_YouLookToughExplainGambling::
# 487 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 271 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 488 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…Huh?\n"
# 489 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "You look to me like a tough TRAINER.\p"
# 490 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Heheh…\n"
# 491 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Listen, I have this proposition.\p"
# 492 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "We have a little group going here,\n"
# 493 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "and we play a little game with what\l"
# 494 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "goes on in the BATTLE FRONTIER.\p"
# 495 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "The rules are really simple.\p"
# 496 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "First, we pick one of the facilities\n"
# 497 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "in the BATTLE FRONTIER.\p"
# 498 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Then, we each pick a different TRAINER\n"
# 499 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "who's taking that facility's challenge,\l"
# 500 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "and bet with our Battle Points.\p"
# 501 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "The guy who bet on the TRAINER with\n"
# 502 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "the best record takes all the Battle\l"
# 503 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Points in the pool.\p"
# 504 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Sounds simple, huh?\n"
# 505 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So, anyway…$"
# 506 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 507 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle::
# 508 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 292 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 509 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 510 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 511 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "TOWER's SINGLE BATTLE ROOMS.\p"
# 512 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 513 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 514 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 515 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble::
# 516 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 300 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 517 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 518 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 519 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "TOWER's DOUBLE BATTLE ROOMS.\p"
# 520 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 521 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 522 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 523 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti::
# 524 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 308 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 525 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 526 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 527 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "TOWER's MULTI BATTLE ROOMS.\p"
# 528 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 529 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 530 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 531 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle::
# 532 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 316 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 533 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 534 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 535 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOME's SINGLE BATTLE Tourney.\p"
# 536 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 537 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 538 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 539 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble::
# 540 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 324 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 541 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 542 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 543 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOME's DOUBLE BATTLE Tourney.\p"
# 544 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 545 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 546 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 547 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle::
# 548 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 332 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 549 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 550 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 551 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "FACTORY's Battle Swap Single Tourney.\p"
# 552 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 553 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 554 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 555 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble::
# 556 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 340 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 557 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 558 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 559 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "FACTORY's Battle Swap Double Tourney.\p"
# 560 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 561 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 562 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 563 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle::
# 564 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 348 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 565 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 566 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 567 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "PALACE's SINGLE BATTLE HALLS.\p"
# 568 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 569 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 570 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 571 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble::
# 572 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 356 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 573 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 574 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be challenging the BATTLE\l"
# 575 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "PALACE's DOUBLE BATTLE HALLS.\p"
# 576 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 577 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 578 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 579 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleArena::
# 580 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 364 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 581 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 582 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 583 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ARENA's Set KO Tourney.\p"
# 584 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 585 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 586 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 587 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePike::
# 588 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 372 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 589 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 590 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE PIKE's\l"
# 591 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Choice.\p"
# 592 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 593 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 594 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 595 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePyramid::
# 596 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 380 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 597 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
# 598 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "going to be entering the BATTLE\l"
# 599 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "PYRAMID's Battle Quest.\p"
# 600 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "But so far, I haven't seen a TRAINER\n"
# 601 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "that has that winning quality.$"
# 602 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 603 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe::
# 604 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 388 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 605 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I'll see to it that you benefit, too.\n"
# 606 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So how about it?\l"
# 607 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "How about entering that event for me?$"
# 608 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 609 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints::
# 610 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 394 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 611 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "All right, that's perfect.\n"
# 612 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So, uh… How about spotting me some\l"
# 613 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "of your Battle Points?\p"
# 614 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Trust me, I'll show you my gratitude\n"
# 615 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "afterward.$"
# 616 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 617 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HowMuchCanYouSpot::
# 618 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 402 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 619 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Great, great!\n"
# 620 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So, how much can you spot me?$"
# 621 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 622 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints::
# 623 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 407 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 624 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, no, no, no!\n"
# 625 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "You don't have enough Battle Points!\p"
# 626 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I wish you wouldn't monkey around and\n"
# 627 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "waste everyone's time!$"
# 628 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 629 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ThanksOffYouGo::
# 630 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 414 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 631 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Heheh! Thanks much!\n"
# 632 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "So, off you go!$"
# 633 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 634 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerSingle::
# 635 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 419 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 636 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
# 637 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "SINGLE BATTLE ROOMS pronto!\p"
# 638 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 639 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 640 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 641 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 642 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerDouble::
# 643 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 427 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 644 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
# 645 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOUBLE BATTLE ROOMS pronto!\p"
# 646 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 647 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 648 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 649 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 650 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerMulti::
# 651 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 435 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 652 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
# 653 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "MULTI BATTLE ROOMS pronto!\p"
# 654 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 655 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 656 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 657 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 658 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleDomeSingle::
# 659 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 443 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 660 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE DOME's\n"
# 661 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "SINGLE BATTLE Tourney pronto!\p"
# 662 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 663 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 664 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 665 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 666 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleDomeDouble::
# 667 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 451 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 668 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE DOME's\n"
# 669 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOUBLE BATTLE Tourney pronto!\p"
# 670 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 671 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 672 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 673 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 674 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleFactorySingle::
# 675 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 459 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 676 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE FACTORY's\n"
# 677 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Swap Single Tourney pronto!\p"
# 678 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 679 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 680 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 681 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 682 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble::
# 683 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 467 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 684 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE FACTORY's\n"
# 685 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Swap Double Tourney pronto!\p"
# 686 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 687 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 688 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 689 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 690 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle::
# 691 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 475 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 692 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PALACE's\n"
# 693 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "SINGLE BATTLE HALLS pronto!\p"
# 694 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 695 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 696 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 697 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 698 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble::
# 699 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 483 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 700 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PALACE's\n"
# 701 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "DOUBLE BATTLE HALLS pronto!\p"
# 702 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 703 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 704 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 705 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 706 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleArena::
# 707 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 491 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 708 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE ARENA's\n"
# 709 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Set KO Tourney pronto!\p"
# 710 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 711 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 712 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 713 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 714 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePike::
# 715 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 499 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 716 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PIKE's\n"
# 717 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Choice pronto!\p"
# 718 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 719 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 720 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 721 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 722 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePyramid::
# 723 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 507 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 724 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PYRAMID's\n"
# 725 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Battle Quest pronto!\p"
# 726 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "It's a must-win situation!\n"
# 727 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Don't blow your chance!\l"
# 728 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Both of our futures depend on you!$"
# 729 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 730 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints::
# 731 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 515 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 732 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, it's you…\n"
# 733 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Nice try…\p"
# 734 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I hate to break it to you, but I can't\n"
# 735 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "return your Battle Points…\p"
# 736 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I guess we'll have to let it motivate\n"
# 737 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "us to try harder next time!$"
# 738 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 739 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints::
# 740 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 524 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 741 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, yes!\n"
# 742 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Hello there, champ!\p"
# 743 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I knew you could!\n"
# 744 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I knew you would!\l"
# 745 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "We're both big winners!\p"
# 746 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I'll return your Battle Points and,\n"
# 747 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "of course, a little extra from me!$"
# 748 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 749 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ObtainedBattlePoints::
# 750 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 534 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 751 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{PLAYER} obtained\n"
# 752 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{STR_VAR_1} Battle Points.$"
# 753 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 754 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge::
# 755 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 539 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 756 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "If you're up for another challenge,\n"
# 757 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "please do think of me!$"
# 758 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 759 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_NotInterested::
# 760 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 544 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 761 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Not interested?! You shouldn't be\n"
# 762 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "so afraid to take a chance!$"
# 763 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 764 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_Oh::
# 765 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 549 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 766 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh…$"
# 767 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 768 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_BackedWrongTrainer::
# 769 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 553 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 770 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I backed the wrong TRAINER again!\p"
# 771 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Maybe I should be battling normally\n"
# 772 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "like everyone else…$"
# 773 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 774 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_TrainerGoodButRattled::
# 775 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 559 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 776 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "That TRAINER…\p"
# 777 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "He's good, but he gets rattled too\n"
# 778 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "easily to survive the BATTLE DOME…$"
# 779 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 780 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne::
# 781 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 565 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 782 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Giggle!\n"
# 783 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I know a winner when I see one!$"
# 784 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 785 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges::
# 786 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 570 "data/maps/BattleFrontier_Lounge3/scripts.pory"
# 787 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Those TRAINERS…\n"
# 788 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What are they doing?\l"
# 789 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "They should be taking challenges.$"
