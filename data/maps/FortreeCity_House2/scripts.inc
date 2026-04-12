# 1 "data/maps/FortreeCity_House2/scripts.pory"

# 2 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_MapScripts::
# 3 "data/maps/FortreeCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House2/scripts.pory"

# 5 "data/maps/FortreeCity_House2/scripts.pory"

# 6 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver::
# 7 "data/maps/FortreeCity_House2/scripts.pory"
# 4 "data/maps/FortreeCity_House2/scripts.pory"
# 8 "data/maps/FortreeCity_House2/scripts.pory"
	lock
# 9 "data/maps/FortreeCity_House2/scripts.pory"
# 5 "data/maps/FortreeCity_House2/scripts.pory"
# 10 "data/maps/FortreeCity_House2/scripts.pory"
	faceplayer
# 11 "data/maps/FortreeCity_House2/scripts.pory"
# 6 "data/maps/FortreeCity_House2/scripts.pory"
# 12 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FortreeCity_House2_EventScript_HiddenPowerGiver_2
# 13 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_1:
# 14 "data/maps/FortreeCity_House2/scripts.pory"
# 9 "data/maps/FortreeCity_House2/scripts.pory"
# 15 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_HiddenPowerGiver_5
# 16 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_4:
# 17 "data/maps/FortreeCity_House2/scripts.pory"
# 12 "data/maps/FortreeCity_House2/scripts.pory"
# 18 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_House2/scripts.pory"
# 13 "data/maps/FortreeCity_House2/scripts.pory"
# 20 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 21 "data/maps/FortreeCity_House2/scripts.pory"
# 14 "data/maps/FortreeCity_House2/scripts.pory"
# 22 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/FortreeCity_House2/scripts.pory"
# 15 "data/maps/FortreeCity_House2/scripts.pory"
# 24 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_HiddenPowerGiver_9
# 25 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_7:
# 26 "data/maps/FortreeCity_House2/scripts.pory"
# 18 "data/maps/FortreeCity_House2/scripts.pory"
# 27 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
# 28 "data/maps/FortreeCity_House2/scripts.pory"
# 19 "data/maps/FortreeCity_House2/scripts.pory"
# 29 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 30 "data/maps/FortreeCity_House2/scripts.pory"
# 20 "data/maps/FortreeCity_House2/scripts.pory"
# 31 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/FortreeCity_House2/scripts.pory"
# 21 "data/maps/FortreeCity_House2/scripts.pory"
# 33 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_HiddenPowerGiver_12
# 34 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_10:
# 35 "data/maps/FortreeCity_House2/scripts.pory"
# 24 "data/maps/FortreeCity_House2/scripts.pory"
# 36 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity_House2/scripts.pory"
# 25 "data/maps/FortreeCity_House2/scripts.pory"
# 38 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 39 "data/maps/FortreeCity_House2/scripts.pory"
# 26 "data/maps/FortreeCity_House2/scripts.pory"
# 40 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/FortreeCity_House2/scripts.pory"
# 27 "data/maps/FortreeCity_House2/scripts.pory"
# 42 "data/maps/FortreeCity_House2/scripts.pory"
	case 0, FortreeCity_House2_EventScript_HiddenPowerGiver_15
# 43 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_13:
# 44 "data/maps/FortreeCity_House2/scripts.pory"
# 30 "data/maps/FortreeCity_House2/scripts.pory"
# 45 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
# 46 "data/maps/FortreeCity_House2/scripts.pory"
# 31 "data/maps/FortreeCity_House2/scripts.pory"
# 47 "data/maps/FortreeCity_House2/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 48 "data/maps/FortreeCity_House2/scripts.pory"
# 32 "data/maps/FortreeCity_House2/scripts.pory"
# 49 "data/maps/FortreeCity_House2/scripts.pory"
	compare VAR_RESULT, 0
# 50 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_eq FortreeCity_House2_EventScript_HiddenPowerGiver_17
# 51 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_16:
# 52 "data/maps/FortreeCity_House2/scripts.pory"
# 35 "data/maps/FortreeCity_House2/scripts.pory"
# 53 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 54 "data/maps/FortreeCity_House2/scripts.pory"
# 36 "data/maps/FortreeCity_House2/scripts.pory"
# 55 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 56 "data/maps/FortreeCity_House2/scripts.pory"
# 37 "data/maps/FortreeCity_House2/scripts.pory"
# 57 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 58 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 59 "data/maps/FortreeCity_House2/scripts.pory"

# 60 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_2:
# 61 "data/maps/FortreeCity_House2/scripts.pory"
# 7 "data/maps/FortreeCity_House2/scripts.pory"
# 62 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_ExplainHiddenPower
# 63 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_1
# 64 "data/maps/FortreeCity_House2/scripts.pory"

# 65 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_5:
# 66 "data/maps/FortreeCity_House2/scripts.pory"
# 10 "data/maps/FortreeCity_House2/scripts.pory"
# 67 "data/maps/FortreeCity_House2/scripts.pory"
	call FortreeCity_House2_EventScript_Greeting
# 68 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_4
# 69 "data/maps/FortreeCity_House2/scripts.pory"

# 70 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_9:
# 71 "data/maps/FortreeCity_House2/scripts.pory"
# 16 "data/maps/FortreeCity_House2/scripts.pory"
# 72 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
# 73 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_7
# 74 "data/maps/FortreeCity_House2/scripts.pory"

# 75 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_12:
# 76 "data/maps/FortreeCity_House2/scripts.pory"
# 22 "data/maps/FortreeCity_House2/scripts.pory"
# 77 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
# 78 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_10
# 79 "data/maps/FortreeCity_House2/scripts.pory"

# 80 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_15:
# 81 "data/maps/FortreeCity_House2/scripts.pory"
# 28 "data/maps/FortreeCity_House2/scripts.pory"
# 82 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
# 83 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_13
# 84 "data/maps/FortreeCity_House2/scripts.pory"

# 85 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver_17:
# 86 "data/maps/FortreeCity_House2/scripts.pory"
# 33 "data/maps/FortreeCity_House2/scripts.pory"
# 87 "data/maps/FortreeCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 88 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_16
# 89 "data/maps/FortreeCity_House2/scripts.pory"

# 90 "data/maps/FortreeCity_House2/scripts.pory"

# 91 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_Greeting::
# 92 "data/maps/FortreeCity_House2/scripts.pory"
# 42 "data/maps/FortreeCity_House2/scripts.pory"
# 93 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
# 94 "data/maps/FortreeCity_House2/scripts.pory"
# 43 "data/maps/FortreeCity_House2/scripts.pory"
# 95 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_MET_HIDDEN_POWER_GIVER
# 96 "data/maps/FortreeCity_House2/scripts.pory"
	return
# 97 "data/maps/FortreeCity_House2/scripts.pory"

# 98 "data/maps/FortreeCity_House2/scripts.pory"

# 99 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_ExplainHiddenPower::
# 100 "data/maps/FortreeCity_House2/scripts.pory"
# 48 "data/maps/FortreeCity_House2/scripts.pory"
# 101 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 102 "data/maps/FortreeCity_House2/scripts.pory"
# 49 "data/maps/FortreeCity_House2/scripts.pory"
# 103 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 104 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 105 "data/maps/FortreeCity_House2/scripts.pory"

# 106 "data/maps/FortreeCity_House2/scripts.pory"

# 107 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_WrongGuess::
# 108 "data/maps/FortreeCity_House2/scripts.pory"
# 54 "data/maps/FortreeCity_House2/scripts.pory"
# 109 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
# 110 "data/maps/FortreeCity_House2/scripts.pory"
# 55 "data/maps/FortreeCity_House2/scripts.pory"
# 111 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 112 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 113 "data/maps/FortreeCity_House2/scripts.pory"

# 114 "data/maps/FortreeCity_House2/scripts.pory"

# 115 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_HiddenPowersArousedByNature::
# 116 "data/maps/FortreeCity_House2/scripts.pory"
# 59 "data/maps/FortreeCity_House2/scripts.pory"
# 117 "data/maps/FortreeCity_House2/scripts.pory"
	.string "People… POKéMON…\p"
# 118 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Their hidden powers are aroused by\n"
# 119 "data/maps/FortreeCity_House2/scripts.pory"
	.string "living in natural environments…$"
# 120 "data/maps/FortreeCity_House2/scripts.pory"

# 121 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CoinInWhichHand::
# 122 "data/maps/FortreeCity_House2/scripts.pory"
# 65 "data/maps/FortreeCity_House2/scripts.pory"
# 123 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Let this old woman see if your hidden\n"
# 124 "data/maps/FortreeCity_House2/scripts.pory"
	.string "power has awoken…\p"
# 125 "data/maps/FortreeCity_House2/scripts.pory"
	.string "I hold a coin in my hand.\p"
# 126 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Now, tell me, have I palmed it in\n"
# 127 "data/maps/FortreeCity_House2/scripts.pory"
	.string "the right hand? Or in the left?$"
# 128 "data/maps/FortreeCity_House2/scripts.pory"

# 129 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand::
# 130 "data/maps/FortreeCity_House2/scripts.pory"
# 73 "data/maps/FortreeCity_House2/scripts.pory"
# 131 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
# 132 "data/maps/FortreeCity_House2/scripts.pory"
	.string "We shall try again.\p"
# 133 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In which hand have I palmed the coin?\n"
# 134 "data/maps/FortreeCity_House2/scripts.pory"
	.string "The right or left?$"
# 135 "data/maps/FortreeCity_House2/scripts.pory"

# 136 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand2::
# 137 "data/maps/FortreeCity_House2/scripts.pory"
# 80 "data/maps/FortreeCity_House2/scripts.pory"
# 138 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
# 139 "data/maps/FortreeCity_House2/scripts.pory"
	.string "We shall try again.\p"
# 140 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In which hand have I palmed the coin?\n"
# 141 "data/maps/FortreeCity_House2/scripts.pory"
	.string "The right or left?$"
# 142 "data/maps/FortreeCity_House2/scripts.pory"

# 143 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YourHiddenPowerHasAwoken::
# 144 "data/maps/FortreeCity_House2/scripts.pory"
# 87 "data/maps/FortreeCity_House2/scripts.pory"
# 145 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Splendid!\n"
# 146 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Your hidden power has awoken!\p"
# 147 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Here, take this and awaken the hidden\n"
# 148 "data/maps/FortreeCity_House2/scripts.pory"
	.string "power of your POKéMON.$"
# 149 "data/maps/FortreeCity_House2/scripts.pory"

# 150 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_ExplainHiddenPower::
# 151 "data/maps/FortreeCity_House2/scripts.pory"
# 94 "data/maps/FortreeCity_House2/scripts.pory"
# 152 "data/maps/FortreeCity_House2/scripts.pory"
	.string "HIDDEN POWER is a move that changes\n"
# 153 "data/maps/FortreeCity_House2/scripts.pory"
	.string "with the POKéMON.$"
# 154 "data/maps/FortreeCity_House2/scripts.pory"

# 155 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YouGuessedWrong::
# 156 "data/maps/FortreeCity_House2/scripts.pory"
# 99 "data/maps/FortreeCity_House2/scripts.pory"
# 157 "data/maps/FortreeCity_House2/scripts.pory"
	.string "No, too bad.\n"
# 158 "data/maps/FortreeCity_House2/scripts.pory"
	.string "You guessed wrong.$"
