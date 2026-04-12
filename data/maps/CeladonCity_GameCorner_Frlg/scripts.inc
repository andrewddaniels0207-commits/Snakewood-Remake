CeladonCity_GameCorner_Frlg_MapScripts::
# 2 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CeladonCity_GameCorner_OnLoad
	.byte 0


CeladonCity_GameCorner_OnLoad::
# 6 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_OnLoad_2
CeladonCity_GameCorner_OnLoad_1:
	end

CeladonCity_GameCorner_OnLoad_2:
# 7 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call CeladonCity_GameCorner_EventScript_HideRocketHideout
	goto CeladonCity_GameCorner_OnLoad_1


CeladonCity_GameCorner_EventScript_HideRocketHideout::
# 13 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 14 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 15 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 16 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 17 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_Floor, 1
	return


CeladonCity_GameCorner_EventScript_InfoClerk::
# 22 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor, MSGBOX_NPC
	end


CeladonCity_GameCorner_EventScript_CoinsClerk::
# 27 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 28 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 29 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	showmoneybox 0, 0
# 30 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	showcoinsbox 1, 6
# 31 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	message CeladonCity_GameCorner_Text_WelcomeBuySomeCoins
# 32 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmessage
# 33 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	multichoice 13, 0, MULTI_GAME_CORNER_COIN_PURCHASE_COUNTER, FALSE
# 34 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 35 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_EventScript_CoinsClerk_3
# 38 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_EventScript_CoinsClerk_4
# 40 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_EventScript_CoinsClerk_5
# 42 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 127, CeladonCity_GameCorner_EventScript_CoinsClerk_6
CeladonCity_GameCorner_EventScript_CoinsClerk_1:
	end

CeladonCity_GameCorner_EventScript_CoinsClerk_3:
# 37 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BuyCoins
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1

CeladonCity_GameCorner_EventScript_CoinsClerk_4:
# 39 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BuyCoins
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1

CeladonCity_GameCorner_EventScript_CoinsClerk_5:
# 41 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1

CeladonCity_GameCorner_EventScript_CoinsClerk_6:
# 43 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkDeclineBuy
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1


CeladonCity_GameCorner_EventScript_BuyCoins::
# 49 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_BuyCoins_2
CeladonCity_GameCorner_EventScript_BuyCoins_1:
# 52 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_0x8009, 0
	goto_if_eq CeladonCity_GameCorner_EventScript_BuyCoins_5
CeladonCity_GameCorner_EventScript_BuyCoins_4:
# 55 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_0x8009, 1
	goto_if_eq CeladonCity_GameCorner_EventScript_BuyCoins_8
CeladonCity_GameCorner_EventScript_BuyCoins_7:
	end

CeladonCity_GameCorner_EventScript_BuyCoins_2:
# 50 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkNoCoinCase
	goto CeladonCity_GameCorner_EventScript_BuyCoins_1

CeladonCity_GameCorner_EventScript_BuyCoins_5:
# 53 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Buy50Coins
	goto CeladonCity_GameCorner_EventScript_BuyCoins_4

CeladonCity_GameCorner_EventScript_BuyCoins_8:
# 56 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_Buy500Coins
	goto CeladonCity_GameCorner_EventScript_BuyCoins_7


CeladonCity_GameCorner_EventScript_Buy500Coins::
# 62 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 63 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 500, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 64 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkmoney 10000
# 65 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_GameCorner_EventScript_Buy500Coins_2
CeladonCity_GameCorner_EventScript_Buy500Coins_1:
# 68 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 500
# 69 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removemoney 10000
# 70 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
	end

CeladonCity_GameCorner_EventScript_Buy500Coins_2:
# 66 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
	goto CeladonCity_GameCorner_EventScript_Buy500Coins_1


CeladonCity_GameCorner_EventScript_Buy50Coins::
# 75 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 76 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 50, CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins
# 77 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkmoney 1000
# 78 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_GameCorner_EventScript_Buy50Coins_2
CeladonCity_GameCorner_EventScript_Buy50Coins_1:
# 81 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 50
# 82 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removemoney 1000
# 83 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BoughtCoins
	end

CeladonCity_GameCorner_EventScript_Buy50Coins_2:
# 79 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney
	goto CeladonCity_GameCorner_EventScript_Buy50Coins_1


CeladonCity_GameCorner_EventScript_BoughtCoins::
# 88 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	updatemoneybox
# 89 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 90 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 91 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreYourCoins
# 92 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_ClerkEnd::
# 97 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	hidemoneybox
# 98 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	hidecoinsbox 0, 5
# 99 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
	end


CeladonCity_GameCorner_EventScript_ClerkDeclineBuy::
# 104 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ComePlaySometime
# 105 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_ClerkNoCoinCase::
# 110 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SorryDontHaveCoinCase
# 111 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_ClerkNoRoomForCoins::
# 116 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsFull
# 117 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_ClerkNotEnoughMoney::
# 122 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CantAffordCoins
# 123 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end


CeladonCity_GameCorner_EventScript_BaldingMan::
# 128 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 129 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 130 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace
# 131 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_FaceSlotMachine::
# 136 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	closemessage
# 137 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 138 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
# 139 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
	end


CeladonCity_GameCorner_EventScript_Woman1::
# 144 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 145 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 146 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds
# 147 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_Fisher::
# 152 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 153 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 154 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_10_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_Fisher_2
CeladonCity_GameCorner_EventScript_Fisher_1:
# 157 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DoYouWantToPlay
# 158 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Fisher_5
CeladonCity_GameCorner_EventScript_Fisher_4:
# 161 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 162 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 10, CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins
# 163 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 10
# 164 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 165 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received10CoinsFromMan
# 166 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 167 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 168 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_10_COINS_FROM_GAMBLER
# 169 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end

CeladonCity_GameCorner_EventScript_Fisher_2:
# 155 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins
	goto CeladonCity_GameCorner_EventScript_Fisher_1

CeladonCity_GameCorner_EventScript_Fisher_5:
# 159 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
	goto CeladonCity_GameCorner_EventScript_Fisher_4


CeladonCity_GameCorner_EventScript_FisherNoRoomForCoins::
# 174 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontNeedMyCoins
# 175 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_GamblerNoCoinCase::
# 180 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 181 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontHaveCoinCase
# 182 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_FisherAlreadyGotCoins::
# 187 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinsComeAndGo
# 188 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_GymGuy::
# 193 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 194 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 195 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_GameCorner_EventScript_GymGuy_2
CeladonCity_GameCorner_EventScript_GymGuy_1:
# 198 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GymGuyAdvice
# 199 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end

CeladonCity_GameCorner_EventScript_GymGuy_2:
# 196 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GymGuyPostVictory
	goto CeladonCity_GameCorner_EventScript_GymGuy_1


CeladonCity_GameCorner_EventScript_GymGuyPostVictory::
# 204 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RareMonsForCoins
# 205 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_Woman2::
# 210 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 211 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 212 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck
# 213 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_OldMan::
# 218 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 219 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 220 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SoEasyToGetHooked
# 221 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_Scientist::
# 226 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 227 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 228 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_Scientist_2
CeladonCity_GameCorner_EventScript_Scientist_1:
# 231 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WantSomeCoins
# 232 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Scientist_5
CeladonCity_GameCorner_EventScript_Scientist_4:
# 235 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 236 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 20, CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins
# 237 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 20
# 238 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 239 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy
# 240 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 241 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 242 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER
# 243 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end

CeladonCity_GameCorner_EventScript_Scientist_2:
# 229 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins
	goto CeladonCity_GameCorner_EventScript_Scientist_1

CeladonCity_GameCorner_EventScript_Scientist_5:
# 233 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
	goto CeladonCity_GameCorner_EventScript_Scientist_4


CeladonCity_GameCorner_EventScript_ScientistNoRoomForCoins::
# 248 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouHaveLotsOfCoins
# 249 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_ScientistAlreadyGotCoins::
# 254 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant
# 255 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_Gentleman::
# 260 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock
# 261 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	faceplayer
# 262 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER_2, CeladonCity_GameCorner_EventScript_Gentleman_2
CeladonCity_GameCorner_EventScript_Gentleman_1:
# 265 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo
# 266 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Gentleman_5
CeladonCity_GameCorner_EventScript_Gentleman_4:
# 269 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	checkcoins VAR_TEMP_1
# 270 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_ge VAR_TEMP_1, ( MAX_COINS + 1 ) - 20, CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins
# 271 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 20
# 272 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 273 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromMan
# 274 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 275 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 276 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER_2
# 277 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end

CeladonCity_GameCorner_EventScript_Gentleman_2:
# 263 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins
	goto CeladonCity_GameCorner_EventScript_Gentleman_1

CeladonCity_GameCorner_EventScript_Gentleman_5:
# 267 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
	goto CeladonCity_GameCorner_EventScript_Gentleman_4


CeladonCity_GameCorner_EventScript_GentlemanNoRoomForCoins::
# 282 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouveGotPlentyCoins
# 283 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_GentlemanAlreadyGotCoins::
# 288 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WatchReelsClosely
# 289 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_FaceSlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine0::
# 294 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 295 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 296 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_DontPlaySlotMachine::
# 301 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_GameCorner_EventScript_SlotMachine::
# 306 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_SlotMachine_2
CeladonCity_GameCorner_EventScript_SlotMachine_1:
# 309 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SlotMachineWantToPlay, MSGBOX_YESNO
# 310 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_GameCorner_EventScript_SlotMachine_5
CeladonCity_GameCorner_EventScript_SlotMachine_4:
# 313 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 0, LOCALID_PLAYER
# 315 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_NUM ( MAP_CELADON_CITY_GAME_CORNER )
# 316 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP ( MAP_CELADON_CITY_GAME_CORNER )
# 318 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_GROUP ( MAP_CELADON_CITY_GAME_CORNER )
# 319 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_NUM ( MAP_CELADON_CITY_GAME_CORNER )
# 321 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	dofieldeffect FLDEFF_SMILEY_FACE_ICON
# 322 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_SMILEY_FACE_ICON
# 323 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetRandomSlotMachineId
# 324 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playslotmachine VAR_RESULT
# 325 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
	end

CeladonCity_GameCorner_EventScript_SlotMachine_2:
# 307 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase
	goto CeladonCity_GameCorner_EventScript_SlotMachine_1

CeladonCity_GameCorner_EventScript_SlotMachine_5:
# 311 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_DontPlaySlotMachine
	goto CeladonCity_GameCorner_EventScript_SlotMachine_4


CeladonCity_GameCorner_EventScript_SlotMachine1::
# 330 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 331 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 332 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine2::
# 337 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 338 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 339 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine3::
# 344 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 345 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 346 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine4::
# 351 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 352 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 353 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine5::
# 358 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 359 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 5
# 360 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine6::
# 365 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 366 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 367 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine7::
# 372 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 373 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 7
# 374 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine8::
# 379 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 380 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 8
# 381 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine9::
# 386 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 387 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 9
# 388 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine10::
# 393 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 394 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 10
# 395 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine11::
# 400 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 401 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 11
# 402 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine12::
# 407 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 12
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine13::
# 414 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 415 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 13
# 416 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine14::
# 421 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 422 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 14
# 423 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine15::
# 428 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 429 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 15
# 430 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine16::
# 435 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 436 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 16
# 437 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine17::
# 442 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 443 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 17
# 444 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine18::
# 449 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 450 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 18
# 451 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine19::
# 456 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 457 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 19
# 458 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine20::
# 463 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 464 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 20
# 465 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine21::
# 470 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 471 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 21
# 472 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase::
# 477 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsRequired
# 478 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_GameCorner_EventScript_Poster::
# 483 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 484 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt
# 485 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_Poster_2
CeladonCity_GameCorner_EventScript_Poster_1:
# 488 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
	end

CeladonCity_GameCorner_EventScript_Poster_2:
# 486 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call CeladonCity_GameCorner_EventScript_OpenRocketHideout
	goto CeladonCity_GameCorner_EventScript_Poster_1


CeladonCity_GameCorner_EventScript_OpenRocketHideout::
# 493 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_UNLOCK
# 494 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_StairsTop, 0
# 495 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_StairsTop, 1
# 496 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_StairsBottom, 1
# 497 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_StairsTop, 1
# 498 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_stairsBottom, 1
# 499 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	special DrawWholeMapView
# 500 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_OPENED_ROCKET_HIDEOUT
	return


CeladonCity_GameCorner_EventScript_RocketGrunt::
# 505 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_7, CeladonCity_GameCorner_Text_GruntIntro, CeladonCity_GameCorner_Text_GruntDefeat, CeladonCity_GameCorner_Text_DefeatedGrunt
# 506 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_GameCorner_Text_DefeatedGrunt::
# 511 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle
# 512 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	closemessage
# 513 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq CeladonCity_GameCorner_Text_DefeatedGrunt_2
CeladonCity_GameCorner_Text_DefeatedGrunt_1:
# 516 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_ne CeladonCity_GameCorner_Text_DefeatedGrunt_5
CeladonCity_GameCorner_Text_DefeatedGrunt_4:
# 519 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removeobject LOCALID_GAME_CORNER_GRUNT
# 520 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	release
	end

CeladonCity_GameCorner_Text_DefeatedGrunt_2:
# 514 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call CeladonCity_GameCorner_Text_GruntExitWest
	goto CeladonCity_GameCorner_Text_DefeatedGrunt_1

CeladonCity_GameCorner_Text_DefeatedGrunt_5:
# 517 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	call CeladonCity_GameCorner_Text_GruntExit
	goto CeladonCity_GameCorner_Text_DefeatedGrunt_4


CeladonCity_GameCorner_Text_GruntExitWest::
# 525 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExitWest
# 526 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
	return


CeladonCity_GameCorner_Text_GruntExit::
# 531 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_Movement_GruntExit
# 532 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
	return


# 536 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExitWest:
# 537 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_down
# 538 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 539 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 540 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_up
# 541 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 542 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 543 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 544 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 545 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	step_end

# 548 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_Movement_GruntExit:
# 549 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 550 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 551 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 552 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 553 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 554 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 555 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	step_end

CeladonCity_GameCorner_EventScript_UnusableSlotMachine1::
# 559 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutOfOrder, MSGBOX_SIGN
	end


CeladonCity_GameCorner_EventScript_UnusableSlotMachine2::
# 564 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutToLunch, MSGBOX_SIGN
	end


CeladonCity_GameCorner_EventScript_UnusableSlotMachine3::
# 569 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SomeonesKeys, MSGBOX_SIGN
	end


CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor::
# 573 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Welcome!\p"
	.string "You can exchange your COINS for\n"
	.string "fabulous prizes next door.$"

CeladonCity_GameCorner_Text_WelcomeBuySomeCoins::
# 579 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Welcome to ROCKET GAME CORNER!\p"
	.string "Do you need some game COINS?\n"
	.string "Would you like to buy some?$"

CeladonCity_GameCorner_Text_ComePlaySometime::
# 585 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "No?\n"
	.string "Please come play sometime!$"

CeladonCity_GameCorner_Text_SorryDontHaveCoinCase::
# 590 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Oh, I'm sorry.\n"
	.string "You don't have a COIN CASE.$"

CeladonCity_GameCorner_Text_CoinCaseIsFull::
# 595 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Whoops!\n"
	.string "Your COIN CASE is full.$"

CeladonCity_GameCorner_Text_CantAffordCoins::
# 600 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You can't afford the COINS.$"

CeladonCity_GameCorner_Text_HereAreYourCoins::
# 604 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Thank you.\n"
	.string "Here are your COINS!$"

CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace::
# 609 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Keep this quiet.\p"
	.string "It's rumored that this place is run\n"
	.string "by TEAM ROCKET.$"

CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds::
# 615 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I think these machines have\n"
	.string "different odds.$"

CeladonCity_GameCorner_Text_DoYouWantToPlay::
# 620 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Kid, do you want to play?$"

CeladonCity_GameCorner_Text_Received10CoinsFromMan::
# 624 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 10 COINS\n"
	.string "from the man.$"

CeladonCity_GameCorner_Text_DontNeedMyCoins::
# 629 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You don't need my COINS!$"

CeladonCity_GameCorner_Text_WinsComeAndGo::
# 633 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Wins seem to come and go.\n"
	.string "Nothing's a sure thing.$"

CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck::
# 638 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "These slot games…\n"
	.string "Win or lose, it's only by luck.$"

CeladonCity_GameCorner_Text_GymGuyAdvice::
# 643 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey!\p"
	.string "You have better things to do,\n"
	.string "champ in the making!\p"
	.string "CELADON GYM's LEADER is ERIKA.\p"
	.string "She is a user of GRASS-type\n"
	.string "POKéMON, and at one with nature.\p"
	.string "She might appear docile because of\n"
	.string "her flower arranging…\p"
	.string "But she's not one to be taken\n"
	.string "lightly!$"

CeladonCity_GameCorner_Text_RareMonsForCoins::
# 656 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "They offer rare POKéMON that can\n"
	.string "be exchanged for your COINS.\p"
	.string "But, I just can't seem to win!$"

CeladonCity_GameCorner_Text_SoEasyToGetHooked::
# 662 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Games are scary!\n"
	.string "It's so easy to get hooked!$"

CeladonCity_GameCorner_Text_WantSomeCoins::
# 667 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "What's up?\n"
	.string "Want some COINS?$"

CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy::
# 672 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 20 COINS\n"
	.string "from the nice guy.$"

CeladonCity_GameCorner_Text_YouHaveLotsOfCoins::
# 677 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You have lots of COINS!$"

CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant::
# 681 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Darn! I need more COINS for the\n"
	.string "POKéMON I want!$"

CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo::
# 686 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey, what? You're throwing me off!\n"
	.string "Here are some COINS, so shoo!$"

CeladonCity_GameCorner_Text_Received20CoinsFromMan::
# 691 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 20 COINS\n"
	.string "from the man.$"

CeladonCity_GameCorner_Text_YouveGotPlentyCoins::
# 696 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You've got plenty of your own\n"
	.string "COINS!$"

CeladonCity_GameCorner_Text_WatchReelsClosely::
# 701 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "The trick is to watch the reels\n"
	.string "closely.$"

CeladonCity_GameCorner_Text_GruntIntro::
# 706 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I'm guarding this poster!\n"
	.string "Go away, or else!$"

CeladonCity_GameCorner_Text_GruntDefeat::
# 711 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Dang!$"

CeladonCity_GameCorner_Text_GruntPostBattle::
# 715 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "The TEAM ROCKET HIDEOUT might\n"
	.string "be discovered!\p"
	.string "I better tell BOSS!$"

CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt::
# 721 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey!\p"
	.string "A switch behind the poster!?\n"
	.string "Let's push it!$"

CeladonCity_GameCorner_Text_CoinCaseIsRequired::
# 727 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A COIN CASE is required…$"

CeladonCity_GameCorner_Text_DontHaveCoinCase::
# 731 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Oops!\n"
	.string "Don't have the COIN CASE!$"

CeladonCity_GameCorner_Text_SlotMachineWantToPlay::
# 736 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A slot machine!\n"
	.string "Want to play?$"

CeladonCity_GameCorner_Text_OutOfOrder::
# 741 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "OUT OF ORDER\n"
	.string "This is broken.$"

CeladonCity_GameCorner_Text_OutToLunch::
# 746 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "OUT TO LUNCH\n"
	.string "This is reserved.$"

CeladonCity_GameCorner_Text_SomeonesKeys::
# 751 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Someone's keys!\n"
	.string "They'll be back.$"
