BattleFrontier_Lounge3_MapScripts::
	.byte 0


BattleFrontier_Lounge3_EventScript_Gambler::
# 5 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 6 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 7 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_Gambler_2
BattleFrontier_Lounge3_EventScript_Gambler_1:
# 10 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols
# 11 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_le BattleFrontier_Lounge3_EventScript_Gambler_5
BattleFrontier_Lounge3_EventScript_Gambler_4:
# 14 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
# 15 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling, MSGBOX_DEFAULT
# 16 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_Gambler_2:
# 8 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AlreadyMetGambler
	goto BattleFrontier_Lounge3_EventScript_Gambler_1

BattleFrontier_Lounge3_EventScript_Gambler_5:
# 12 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols
	goto BattleFrontier_Lounge3_EventScript_Gambler_4


BattleFrontier_Lounge3_EventScript_AskToEnterChallenge::
# 21 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerLookingMessage
# 22 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 23 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 24 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe, MSGBOX_YESNO
# 25 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_2
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_1:
# 28 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints, MSGBOX_YESNO
# 29 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_5
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_4:
# 32 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 33 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 34 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowBattlePointsWindow
# 35 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
	end

BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_2:
# 26 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_1

BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_5:
# 30 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_4


BattleFrontier_Lounge3_EventScript_ChooseBetAmount::
# 40 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
# 41 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
# 42 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_3
# 45 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_4
# 47 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_5
# 49 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_6
# 51 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_7
BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1:
	end

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_3:
# 44 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_Bet5
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_4:
# 46 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_Bet10
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_5:
# 48 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_Bet15
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_6:
# 50 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CancelBet
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_7:
# 52 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CancelBet
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1


BattleFrontier_Lounge3_EventScript_Bet5::
# 58 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_5
# 59 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end


BattleFrontier_Lounge3_EventScript_Bet10::
# 64 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_10
# 65 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end


BattleFrontier_Lounge3_EventScript_Bet15::
# 70 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_15
# 71 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end


BattleFrontier_Lounge3_EventScript_TryPlaceBet::
# 76 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 77 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_ge BattleFrontier_Lounge3_EventScript_TryPlaceBet_2
BattleFrontier_Lounge3_EventScript_TryPlaceBet_1:
# 80 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints, MSGBOX_DEFAULT
# 81 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 82 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 83 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
	end

BattleFrontier_Lounge3_EventScript_TryPlaceBet_2:
# 78 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_PlaceBet
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet_1


BattleFrontier_Lounge3_EventScript_PlaceBet::
# 88 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 89 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special TakeFrontierBattlePoints
# 90 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
# 91 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special UpdateBattlePointsWindow
# 92 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	playse SE_SHOP
# 93 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo, MSGBOX_DEFAULT
# 94 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FinishBet
	end


BattleFrontier_Lounge3_EventScript_FinishBet::
# 99 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 100 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 101 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 102 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 103 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
	end


BattleFrontier_Lounge3_EventScript_CountSilverSymbols::
# 108 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, 0
# 109 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_2
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_1:
# 112 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_5
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_4:
# 115 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_8
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_7:
# 118 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_11
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_10:
# 121 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_14
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_13:
# 124 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_17
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_16:
# 127 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_20
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_19:
	return

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_2:
# 110 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_1

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_5:
# 113 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_4

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_8:
# 116 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_7

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_11:
# 119 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_10

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_14:
# 122 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_13

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_17:
# 125 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_16

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_20:
# 128 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_19


BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount::
# 134 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
	return


BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols::
# 139 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere, MSGBOX_DEFAULT
# 140 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end


BattleFrontier_Lounge3_EventScript_AlreadyMetGambler::
# 145 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
	goto_if_ge BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_2
BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_1:
# 149 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_2:
# 147 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults
	goto BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_1


BattleFrontier_Lounge3_EventScript_CheckBetResults::
# 154 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
	goto_if_eq BattleFrontier_Lounge3_EventScript_CheckBetResults_2
BattleFrontier_Lounge3_EventScript_CheckBetResults_1:
# 157 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON
	goto_if_eq BattleFrontier_Lounge3_EventScript_CheckBetResults_5
BattleFrontier_Lounge3_EventScript_CheckBetResults_4:
# 160 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_LostChallenge
	end

BattleFrontier_Lounge3_EventScript_CheckBetResults_2:
# 155 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults_1

BattleFrontier_Lounge3_EventScript_CheckBetResults_5:
# 158 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_WonChallenge
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults_4


BattleFrontier_Lounge3_EventScript_WonChallenge::
# 165 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_2
BattleFrontier_Lounge3_EventScript_WonChallenge_1:
# 169 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_5
BattleFrontier_Lounge3_EventScript_WonChallenge_4:
# 172 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_8
BattleFrontier_Lounge3_EventScript_WonChallenge_7:
# 175 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints, MSGBOX_GETPOINTS
# 176 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special GiveFrontierBattlePoints
# 177 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge, MSGBOX_DEFAULT
# 178 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 179 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
	end

BattleFrontier_Lounge3_EventScript_WonChallenge_2:
# 167 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_RewardBet5
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_1

BattleFrontier_Lounge3_EventScript_WonChallenge_5:
# 170 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_RewardBet10
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_4

BattleFrontier_Lounge3_EventScript_WonChallenge_8:
# 173 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_RewardBet15
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_7


BattleFrontier_Lounge3_EventScript_LostChallenge::
# 184 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints, MSGBOX_DEFAULT
# 185 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 186 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
	end


BattleFrontier_Lounge3_EventScript_RewardBet5::
# 191 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( BET_AMOUNT_5 * 2 )
# 192 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( BET_AMOUNT_5 * 2 )
	return


BattleFrontier_Lounge3_EventScript_RewardBet10::
# 197 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( BET_AMOUNT_10 * 2 )
# 198 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( BET_AMOUNT_10 * 2 )
	return


BattleFrontier_Lounge3_EventScript_RewardBet15::
# 203 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( BET_AMOUNT_15 * 2 )
# 204 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( BET_AMOUNT_15 * 2 )
	return


BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted::
# 209 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 210 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 211 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 212 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
	end


BattleFrontier_Lounge3_EventScript_DeclineChallenge::
# 217 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NotInterested, MSGBOX_DEFAULT
# 218 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
	end


BattleFrontier_Lounge3_EventScript_CancelBet::
# 223 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 224 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
	end


BattleFrontier_Lounge3_EventScript_Man::
# 229 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges, MSGBOX_NPC
	end


BattleFrontier_Lounge3_EventScript_Woman::
# 234 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 235 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 236 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer, MSGBOX_DEFAULT
# 237 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end


BattleFrontier_Lounge3_EventScript_PokefanF::
# 242 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 243 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 244 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne, MSGBOX_DEFAULT
# 245 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end


BattleFrontier_Lounge3_EventScript_FatMan::
# 250 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 251 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 252 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled, MSGBOX_DEFAULT
# 253 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end


BattleFrontier_Lounge3_EventScript_FaceOriginalDirection::
# 258 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	closemessage
# 259 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 260 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmovement 0
# 261 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
	end


BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere::
# 265 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…What's that you want?\p"
	.string "Can't you see we're kind of busy here?\n"
	.string "Can't your business wait till later?$"

BattleFrontier_Lounge3_Text_YouLookToughExplainGambling::
# 271 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…Huh?\n"
	.string "You look to me like a tough TRAINER.\p"
	.string "Heheh…\n"
	.string "Listen, I have this proposition.\p"
	.string "We have a little group going here,\n"
	.string "and we play a little game with what\l"
	.string "goes on in the BATTLE FRONTIER.\p"
	.string "The rules are really simple.\p"
	.string "First, we pick one of the facilities\n"
	.string "in the BATTLE FRONTIER.\p"
	.string "Then, we each pick a different TRAINER\n"
	.string "who's taking that facility's challenge,\l"
	.string "and bet with our Battle Points.\p"
	.string "The guy who bet on the TRAINER with\n"
	.string "the best record takes all the Battle\l"
	.string "Points in the pool.\p"
	.string "Sounds simple, huh?\n"
	.string "So, anyway…$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle::
# 292 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's SINGLE BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble::
# 300 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's DOUBLE BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti::
# 308 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's MULTI BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle::
# 316 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "DOME's SINGLE BATTLE Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble::
# 324 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "DOME's DOUBLE BATTLE Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle::
# 332 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "FACTORY's Battle Swap Single Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble::
# 340 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "FACTORY's Battle Swap Double Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle::
# 348 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "PALACE's SINGLE BATTLE HALLS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble::
# 356 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "PALACE's DOUBLE BATTLE HALLS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleArena::
# 364 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "ARENA's Set KO Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePike::
# 372 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE PIKE's\l"
	.string "Battle Choice.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePyramid::
# 380 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "PYRAMID's Battle Quest.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe::
# 388 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I'll see to it that you benefit, too.\n"
	.string "So how about it?\l"
	.string "How about entering that event for me?$"

BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints::
# 394 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "All right, that's perfect.\n"
	.string "So, uh… How about spotting me some\l"
	.string "of your Battle Points?\p"
	.string "Trust me, I'll show you my gratitude\n"
	.string "afterward.$"

BattleFrontier_Lounge3_Text_HowMuchCanYouSpot::
# 402 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Great, great!\n"
	.string "So, how much can you spot me?$"

BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints::
# 407 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, no, no, no!\n"
	.string "You don't have enough Battle Points!\p"
	.string "I wish you wouldn't monkey around and\n"
	.string "waste everyone's time!$"

BattleFrontier_Lounge3_Text_ThanksOffYouGo::
# 414 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Heheh! Thanks much!\n"
	.string "So, off you go!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerSingle::
# 419 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
	.string "SINGLE BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerDouble::
# 427 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
	.string "DOUBLE BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerMulti::
# 435 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
	.string "MULTI BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeSingle::
# 443 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE DOME's\n"
	.string "SINGLE BATTLE Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeDouble::
# 451 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE DOME's\n"
	.string "DOUBLE BATTLE Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleFactorySingle::
# 459 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE FACTORY's\n"
	.string "Battle Swap Single Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble::
# 467 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE FACTORY's\n"
	.string "Battle Swap Double Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle::
# 475 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PALACE's\n"
	.string "SINGLE BATTLE HALLS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble::
# 483 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PALACE's\n"
	.string "DOUBLE BATTLE HALLS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleArena::
# 491 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE ARENA's\n"
	.string "Set KO Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattlePike::
# 499 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PIKE's\n"
	.string "Battle Choice pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattlePyramid::
# 507 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PYRAMID's\n"
	.string "Battle Quest pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints::
# 515 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, it's you…\n"
	.string "Nice try…\p"
	.string "I hate to break it to you, but I can't\n"
	.string "return your Battle Points…\p"
	.string "I guess we'll have to let it motivate\n"
	.string "us to try harder next time!$"

BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints::
# 524 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, yes!\n"
	.string "Hello there, champ!\p"
	.string "I knew you could!\n"
	.string "I knew you would!\l"
	.string "We're both big winners!\p"
	.string "I'll return your Battle Points and,\n"
	.string "of course, a little extra from me!$"

BattleFrontier_Lounge3_Text_ObtainedBattlePoints::
# 534 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Points.$"

BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge::
# 539 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "If you're up for another challenge,\n"
	.string "please do think of me!$"

BattleFrontier_Lounge3_Text_NotInterested::
# 544 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Not interested?! You shouldn't be\n"
	.string "so afraid to take a chance!$"

BattleFrontier_Lounge3_Text_Oh::
# 549 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh…$"

BattleFrontier_Lounge3_Text_BackedWrongTrainer::
# 553 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I backed the wrong TRAINER again!\p"
	.string "Maybe I should be battling normally\n"
	.string "like everyone else…$"

BattleFrontier_Lounge3_Text_TrainerGoodButRattled::
# 559 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "That TRAINER…\p"
	.string "He's good, but he gets rattled too\n"
	.string "easily to survive the BATTLE DOME…$"

BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne::
# 565 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Giggle!\n"
	.string "I know a winner when I see one!$"

BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges::
# 570 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Those TRAINERS…\n"
	.string "What are they doing?\l"
	.string "They should be taking challenges.$"
