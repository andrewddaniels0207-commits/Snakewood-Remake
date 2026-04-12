FortreeCity_House2_MapScripts::
	.byte 0


FortreeCity_House2_EventScript_HiddenPowerGiver::
# 4 "data/maps/FortreeCity_House2/scripts.pory"
	lock
# 5 "data/maps/FortreeCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FortreeCity_House2_EventScript_HiddenPowerGiver_2
FortreeCity_House2_EventScript_HiddenPowerGiver_1:
# 9 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_HiddenPowerGiver_5
FortreeCity_House2_EventScript_HiddenPowerGiver_4:
# 12 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
# 13 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 14 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_HiddenPowerGiver_9
FortreeCity_House2_EventScript_HiddenPowerGiver_7:
# 18 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 20 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_HiddenPowerGiver_12
FortreeCity_House2_EventScript_HiddenPowerGiver_10:
# 24 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
# 25 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 26 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/FortreeCity_House2/scripts.pory"
	case 0, FortreeCity_House2_EventScript_HiddenPowerGiver_15
FortreeCity_House2_EventScript_HiddenPowerGiver_13:
# 30 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
# 31 "data/maps/FortreeCity_House2/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 32 "data/maps/FortreeCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FortreeCity_House2_EventScript_HiddenPowerGiver_17
FortreeCity_House2_EventScript_HiddenPowerGiver_16:
# 35 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 36 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity_House2/scripts.pory"
	release
	end

FortreeCity_House2_EventScript_HiddenPowerGiver_2:
# 7 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_ExplainHiddenPower
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_1

FortreeCity_House2_EventScript_HiddenPowerGiver_5:
# 10 "data/maps/FortreeCity_House2/scripts.pory"
	call FortreeCity_House2_EventScript_Greeting
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_4

FortreeCity_House2_EventScript_HiddenPowerGiver_9:
# 16 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_7

FortreeCity_House2_EventScript_HiddenPowerGiver_12:
# 22 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_10

FortreeCity_House2_EventScript_HiddenPowerGiver_15:
# 28 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_13

FortreeCity_House2_EventScript_HiddenPowerGiver_17:
# 33 "data/maps/FortreeCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_16


FortreeCity_House2_EventScript_Greeting::
# 42 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
# 43 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	return


FortreeCity_House2_EventScript_ExplainHiddenPower::
# 48 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 49 "data/maps/FortreeCity_House2/scripts.pory"
	release
	end


FortreeCity_House2_EventScript_WrongGuess::
# 54 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
# 55 "data/maps/FortreeCity_House2/scripts.pory"
	release
	end


FortreeCity_House2_Text_HiddenPowersArousedByNature::
# 59 "data/maps/FortreeCity_House2/scripts.pory"
	.string "People… POKéMON…\p"
	.string "Their hidden powers are aroused by\n"
	.string "living in natural environments…$"

FortreeCity_House2_Text_CoinInWhichHand::
# 65 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Let this old woman see if your hidden\n"
	.string "power has awoken…\p"
	.string "I hold a coin in my hand.\p"
	.string "Now, tell me, have I palmed it in\n"
	.string "the right hand? Or in the left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand::
# 73 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand2::
# 80 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

FortreeCity_House2_Text_YourHiddenPowerHasAwoken::
# 87 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Splendid!\n"
	.string "Your hidden power has awoken!\p"
	.string "Here, take this and awaken the hidden\n"
	.string "power of your POKéMON.$"

FortreeCity_House2_Text_ExplainHiddenPower::
# 94 "data/maps/FortreeCity_House2/scripts.pory"
	.string "HIDDEN POWER is a move that changes\n"
	.string "with the POKéMON.$"

FortreeCity_House2_Text_YouGuessedWrong::
# 99 "data/maps/FortreeCity_House2/scripts.pory"
	.string "No, too bad.\n"
	.string "You guessed wrong.$"
