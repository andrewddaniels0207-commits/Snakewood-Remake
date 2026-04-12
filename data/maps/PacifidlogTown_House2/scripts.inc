PacifidlogTown_House2_MapScripts::
	.byte 0


PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 6 "data/maps/PacifidlogTown_House2/scripts.pory"
	dotimebasedevents
# 7 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_FanClubYoungerBrother_2
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_1:
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FanClubYoungerBrother_5
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_4:
# 14 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FanClubYoungerBrother_8
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_7:
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
# 18 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FRIENDSHIP_150_TO_199
	goto_if_ge PacifidlogTown_House2_EventScript_FanClubYoungerBrother_11
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_10:
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 23 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FRIENDSHIP_50_TO_99
	goto_if_ge PacifidlogTown_House2_EventScript_FanClubYoungerBrother_14
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_13:
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveFrustration
	end

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_2:
# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_ComeBackInXDays
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_1

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_5:
# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_MonAssessment
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_4

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_8:
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_FirstMonAssessment
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_7

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_11:
# 20 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveReturn
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_10

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_14:
# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_PutInEffort
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_13


PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag::
# 31 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_2
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_1:
# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 35 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_5
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_4:
	return

PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_2:
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto Common_EventScript_NopReturn
	goto PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_1

PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_5:
# 36 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM
	goto PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_4


PacifidlogTown_House2_EventScript_MonAssessment::
# 42 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
	return


PacifidlogTown_House2_EventScript_FirstMonAssessment::
# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
	return


PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM::
# 53 "data/maps/PacifidlogTown_House2/scripts.pory"
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	return


PacifidlogTown_House2_EventScript_GiveReturn::
# 58 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM_RETURN
# 60 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_House2_EventScript_GiveReturn_2
PacifidlogTown_House2_EventScript_GiveReturn_1:
# 63 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 64 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 65 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 66 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_GiveReturn_2:
# 61 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PacifidlogTown_House2_EventScript_GiveReturn_1


PacifidlogTown_House2_EventScript_PutInEffort::
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
# 72 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end


PacifidlogTown_House2_EventScript_GiveFrustration::
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
# 78 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM_FRUSTRATION
# 79 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_House2_EventScript_GiveFrustration_2
PacifidlogTown_House2_EventScript_GiveFrustration_1:
# 82 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 83 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 84 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end

PacifidlogTown_House2_EventScript_GiveFrustration_2:
# 80 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PacifidlogTown_House2_EventScript_GiveFrustration_1


PacifidlogTown_House2_EventScript_ComeBackInXDays::
# 90 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 91 "data/maps/PacifidlogTown_House2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 92 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_GetGoodTMInXDays, MSGBOX_DEFAULT
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end


PacifidlogTown_House2_EventScript_HappyAzurill::
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 99 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 100 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 101 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 102 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
# 103 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 104 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
# 105 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end


PacifidlogTown_House2_EventScript_UnhappyAzurill::
# 110 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 111 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 112 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 113 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 114 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
# 115 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 116 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
# 117 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
	end


PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation::
# 121 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Er-hem!\p"
	.string "I am the POKéMON FAN CLUB's most\n"
	.string "important person, the CHAIRMAN's\l"
	.string "younger brother.\p"
	.string "I'm here enjoying my vacation with\n"
	.string "POKéMON, yes, indeed.$"

PacifidlogTown_House2_Text_AhYourPokemon::
# 130 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Ah!\n"
	.string "Your POKéMON…$"

PacifidlogTown_House2_Text_AdoringPokemonTakeThis::
# 135 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It clearly likes you very much.\p"
	.string "A POKéMON that adoring and adorable\n"
	.string "deserves a TM like this, no?$"

PacifidlogTown_House2_Text_PutInSomeMoreEffort::
# 141 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Hmm…\n"
	.string "It's not bad, but it's also not good.\p"
	.string "You, as the TRAINER, need to put in\n"
	.string "some more effort.$"

PacifidlogTown_House2_Text_ViciousPokemonTakeThis::
# 148 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It has a vicious look to it.\p"
	.string "A frightening POKéMON like that\n"
	.string "deserves a TM like this.$"

PacifidlogTown_House2_Text_ExplainReturnFrustration::
# 154 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "If a POKéMON likes you a lot, RETURN's\n"
	.string "power is enhanced.\p"
	.string "If it doesn't like you, FRUSTRATION's\n"
	.string "power goes up.$"

PacifidlogTown_House2_Text_GetGoodTMInXDays::
# 161 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Oh, yes. In about {STR_VAR_1} or so days,\n"
	.string "I should be getting a good TM or two.\p"
	.string "You should come see me then.\n"
	.string "I'll give you a TM that's suitable for\l"
	.string "your POKéMON.$"

PacifidlogTown_House2_Text_Rurii::
# 169 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Rurii.$"

PacifidlogTown_House2_Text_VeryFriendlyWithTrainer::
# 173 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It appears to be very friendly with the\n"
	.string "TRAINER.$"

PacifidlogTown_House2_Text_Rururi::
# 178 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Rururi!$"

PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch::
# 182 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It doesn't appear to like the TRAINER\n"
	.string "very much.$"
