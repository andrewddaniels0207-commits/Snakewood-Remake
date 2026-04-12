# 1 "data/maps/PacifidlogTown_House2/scripts.pory"

# 2 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_MapScripts::
# 3 "data/maps/PacifidlogTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"

# 5 "data/maps/PacifidlogTown_House2/scripts.pory"

# 6 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
# 7 "data/maps/PacifidlogTown_House2/scripts.pory"
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
# 10 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"
# 6 "data/maps/PacifidlogTown_House2/scripts.pory"
# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
	dotimebasedevents
# 13 "data/maps/PacifidlogTown_House2/scripts.pory"
# 7 "data/maps/PacifidlogTown_House2/scripts.pory"
# 14 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
# 16 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_FanClubYoungerBrother_2
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_1:
# 18 "data/maps/PacifidlogTown_House2/scripts.pory"
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FanClubYoungerBrother_5
# 20 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_4:
# 21 "data/maps/PacifidlogTown_House2/scripts.pory"
# 14 "data/maps/PacifidlogTown_House2/scripts.pory"
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FanClubYoungerBrother_8
# 23 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_7:
# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
# 25 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"
# 18 "data/maps/PacifidlogTown_House2/scripts.pory"
# 27 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
# 29 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FRIENDSHIP_150_TO_199
# 30 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge PacifidlogTown_House2_EventScript_FanClubYoungerBrother_11
# 31 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_10:
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"
# 33 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
# 23 "data/maps/PacifidlogTown_House2/scripts.pory"
# 35 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FRIENDSHIP_50_TO_99
# 36 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_ge PacifidlogTown_House2_EventScript_FanClubYoungerBrother_14
# 37 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_13:
# 38 "data/maps/PacifidlogTown_House2/scripts.pory"
# 26 "data/maps/PacifidlogTown_House2/scripts.pory"
# 39 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveFrustration
# 40 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 41 "data/maps/PacifidlogTown_House2/scripts.pory"

# 42 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_2:
# 43 "data/maps/PacifidlogTown_House2/scripts.pory"
# 9 "data/maps/PacifidlogTown_House2/scripts.pory"
# 44 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_ComeBackInXDays
# 45 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_1
# 46 "data/maps/PacifidlogTown_House2/scripts.pory"

# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_5:
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
# 49 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_MonAssessment
# 50 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_4
# 51 "data/maps/PacifidlogTown_House2/scripts.pory"

# 52 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_8:
# 53 "data/maps/PacifidlogTown_House2/scripts.pory"
# 15 "data/maps/PacifidlogTown_House2/scripts.pory"
# 54 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_FirstMonAssessment
# 55 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_7
# 56 "data/maps/PacifidlogTown_House2/scripts.pory"

# 57 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_11:
# 58 "data/maps/PacifidlogTown_House2/scripts.pory"
# 20 "data/maps/PacifidlogTown_House2/scripts.pory"
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveReturn
# 60 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_10
# 61 "data/maps/PacifidlogTown_House2/scripts.pory"

# 62 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_14:
# 63 "data/maps/PacifidlogTown_House2/scripts.pory"
# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
# 64 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_PutInEffort
# 65 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_13
# 66 "data/maps/PacifidlogTown_House2/scripts.pory"

# 67 "data/maps/PacifidlogTown_House2/scripts.pory"

# 68 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag::
# 69 "data/maps/PacifidlogTown_House2/scripts.pory"
# 31 "data/maps/PacifidlogTown_House2/scripts.pory"
# 70 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_2
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_1:
# 72 "data/maps/PacifidlogTown_House2/scripts.pory"
# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
# 73 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 74 "data/maps/PacifidlogTown_House2/scripts.pory"
# 35 "data/maps/PacifidlogTown_House2/scripts.pory"
# 75 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, 0
# 76 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_5
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_4:
# 78 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 79 "data/maps/PacifidlogTown_House2/scripts.pory"

# 80 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_2:
# 81 "data/maps/PacifidlogTown_House2/scripts.pory"
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"
# 82 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto Common_EventScript_NopReturn
# 83 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_1
# 84 "data/maps/PacifidlogTown_House2/scripts.pory"

# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_5:
# 86 "data/maps/PacifidlogTown_House2/scripts.pory"
# 36 "data/maps/PacifidlogTown_House2/scripts.pory"
# 87 "data/maps/PacifidlogTown_House2/scripts.pory"
	call PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM
# 88 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag_4
# 89 "data/maps/PacifidlogTown_House2/scripts.pory"

# 90 "data/maps/PacifidlogTown_House2/scripts.pory"

# 91 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_MonAssessment::
# 92 "data/maps/PacifidlogTown_House2/scripts.pory"
# 42 "data/maps/PacifidlogTown_House2/scripts.pory"
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 94 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 95 "data/maps/PacifidlogTown_House2/scripts.pory"

# 96 "data/maps/PacifidlogTown_House2/scripts.pory"

# 97 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_FirstMonAssessment::
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
# 99 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
# 100 "data/maps/PacifidlogTown_House2/scripts.pory"
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
# 101 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 102 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 103 "data/maps/PacifidlogTown_House2/scripts.pory"

# 104 "data/maps/PacifidlogTown_House2/scripts.pory"

# 105 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM::
# 106 "data/maps/PacifidlogTown_House2/scripts.pory"
# 53 "data/maps/PacifidlogTown_House2/scripts.pory"
# 107 "data/maps/PacifidlogTown_House2/scripts.pory"
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 108 "data/maps/PacifidlogTown_House2/scripts.pory"
	return
# 109 "data/maps/PacifidlogTown_House2/scripts.pory"

# 110 "data/maps/PacifidlogTown_House2/scripts.pory"

# 111 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveReturn::
# 112 "data/maps/PacifidlogTown_House2/scripts.pory"
# 58 "data/maps/PacifidlogTown_House2/scripts.pory"
# 113 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
# 114 "data/maps/PacifidlogTown_House2/scripts.pory"
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
# 115 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM_RETURN
# 116 "data/maps/PacifidlogTown_House2/scripts.pory"
# 60 "data/maps/PacifidlogTown_House2/scripts.pory"
# 117 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 118 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq PacifidlogTown_House2_EventScript_GiveReturn_2
# 119 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveReturn_1:
# 120 "data/maps/PacifidlogTown_House2/scripts.pory"
# 63 "data/maps/PacifidlogTown_House2/scripts.pory"
# 121 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 122 "data/maps/PacifidlogTown_House2/scripts.pory"
# 64 "data/maps/PacifidlogTown_House2/scripts.pory"
# 123 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 124 "data/maps/PacifidlogTown_House2/scripts.pory"
# 65 "data/maps/PacifidlogTown_House2/scripts.pory"
# 125 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 126 "data/maps/PacifidlogTown_House2/scripts.pory"
# 66 "data/maps/PacifidlogTown_House2/scripts.pory"
# 127 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 128 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 129 "data/maps/PacifidlogTown_House2/scripts.pory"

# 130 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveReturn_2:
# 131 "data/maps/PacifidlogTown_House2/scripts.pory"
# 61 "data/maps/PacifidlogTown_House2/scripts.pory"
# 132 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 133 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveReturn_1
# 134 "data/maps/PacifidlogTown_House2/scripts.pory"

# 135 "data/maps/PacifidlogTown_House2/scripts.pory"

# 136 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_PutInEffort::
# 137 "data/maps/PacifidlogTown_House2/scripts.pory"
# 71 "data/maps/PacifidlogTown_House2/scripts.pory"
# 138 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
# 139 "data/maps/PacifidlogTown_House2/scripts.pory"
# 72 "data/maps/PacifidlogTown_House2/scripts.pory"
# 140 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 141 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 142 "data/maps/PacifidlogTown_House2/scripts.pory"

# 143 "data/maps/PacifidlogTown_House2/scripts.pory"

# 144 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveFrustration::
# 145 "data/maps/PacifidlogTown_House2/scripts.pory"
# 77 "data/maps/PacifidlogTown_House2/scripts.pory"
# 146 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
# 147 "data/maps/PacifidlogTown_House2/scripts.pory"
# 78 "data/maps/PacifidlogTown_House2/scripts.pory"
# 148 "data/maps/PacifidlogTown_House2/scripts.pory"
	giveitem ITEM_TM_FRUSTRATION
# 149 "data/maps/PacifidlogTown_House2/scripts.pory"
# 79 "data/maps/PacifidlogTown_House2/scripts.pory"
# 150 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
# 151 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_eq PacifidlogTown_House2_EventScript_GiveFrustration_2
# 152 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveFrustration_1:
# 153 "data/maps/PacifidlogTown_House2/scripts.pory"
# 82 "data/maps/PacifidlogTown_House2/scripts.pory"
# 154 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 155 "data/maps/PacifidlogTown_House2/scripts.pory"
# 83 "data/maps/PacifidlogTown_House2/scripts.pory"
# 156 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 157 "data/maps/PacifidlogTown_House2/scripts.pory"
# 84 "data/maps/PacifidlogTown_House2/scripts.pory"
# 158 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
# 159 "data/maps/PacifidlogTown_House2/scripts.pory"
# 85 "data/maps/PacifidlogTown_House2/scripts.pory"
# 160 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 161 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 162 "data/maps/PacifidlogTown_House2/scripts.pory"

# 163 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_GiveFrustration_2:
# 164 "data/maps/PacifidlogTown_House2/scripts.pory"
# 80 "data/maps/PacifidlogTown_House2/scripts.pory"
# 165 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 166 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto PacifidlogTown_House2_EventScript_GiveFrustration_1
# 167 "data/maps/PacifidlogTown_House2/scripts.pory"

# 168 "data/maps/PacifidlogTown_House2/scripts.pory"

# 169 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_ComeBackInXDays::
# 170 "data/maps/PacifidlogTown_House2/scripts.pory"
# 90 "data/maps/PacifidlogTown_House2/scripts.pory"
# 171 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 172 "data/maps/PacifidlogTown_House2/scripts.pory"
# 91 "data/maps/PacifidlogTown_House2/scripts.pory"
# 173 "data/maps/PacifidlogTown_House2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 174 "data/maps/PacifidlogTown_House2/scripts.pory"
# 92 "data/maps/PacifidlogTown_House2/scripts.pory"
# 175 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_GetGoodTMInXDays, MSGBOX_DEFAULT
# 176 "data/maps/PacifidlogTown_House2/scripts.pory"
# 93 "data/maps/PacifidlogTown_House2/scripts.pory"
# 177 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 178 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 179 "data/maps/PacifidlogTown_House2/scripts.pory"

# 180 "data/maps/PacifidlogTown_House2/scripts.pory"

# 181 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_HappyAzurill::
# 182 "data/maps/PacifidlogTown_House2/scripts.pory"
# 98 "data/maps/PacifidlogTown_House2/scripts.pory"
# 183 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 184 "data/maps/PacifidlogTown_House2/scripts.pory"
# 99 "data/maps/PacifidlogTown_House2/scripts.pory"
# 185 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 186 "data/maps/PacifidlogTown_House2/scripts.pory"
# 100 "data/maps/PacifidlogTown_House2/scripts.pory"
# 187 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 188 "data/maps/PacifidlogTown_House2/scripts.pory"
# 101 "data/maps/PacifidlogTown_House2/scripts.pory"
# 189 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 190 "data/maps/PacifidlogTown_House2/scripts.pory"
# 102 "data/maps/PacifidlogTown_House2/scripts.pory"
# 191 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
# 192 "data/maps/PacifidlogTown_House2/scripts.pory"
# 103 "data/maps/PacifidlogTown_House2/scripts.pory"
# 193 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 194 "data/maps/PacifidlogTown_House2/scripts.pory"
# 104 "data/maps/PacifidlogTown_House2/scripts.pory"
# 195 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
# 196 "data/maps/PacifidlogTown_House2/scripts.pory"
# 105 "data/maps/PacifidlogTown_House2/scripts.pory"
# 197 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 198 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 199 "data/maps/PacifidlogTown_House2/scripts.pory"

# 200 "data/maps/PacifidlogTown_House2/scripts.pory"

# 201 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_EventScript_UnhappyAzurill::
# 202 "data/maps/PacifidlogTown_House2/scripts.pory"
# 110 "data/maps/PacifidlogTown_House2/scripts.pory"
# 203 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock
# 204 "data/maps/PacifidlogTown_House2/scripts.pory"
# 111 "data/maps/PacifidlogTown_House2/scripts.pory"
# 205 "data/maps/PacifidlogTown_House2/scripts.pory"
	faceplayer
# 206 "data/maps/PacifidlogTown_House2/scripts.pory"
# 112 "data/maps/PacifidlogTown_House2/scripts.pory"
# 207 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 208 "data/maps/PacifidlogTown_House2/scripts.pory"
# 113 "data/maps/PacifidlogTown_House2/scripts.pory"
# 209 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 210 "data/maps/PacifidlogTown_House2/scripts.pory"
# 114 "data/maps/PacifidlogTown_House2/scripts.pory"
# 211 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
# 212 "data/maps/PacifidlogTown_House2/scripts.pory"
# 115 "data/maps/PacifidlogTown_House2/scripts.pory"
# 213 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 214 "data/maps/PacifidlogTown_House2/scripts.pory"
# 116 "data/maps/PacifidlogTown_House2/scripts.pory"
# 215 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
# 216 "data/maps/PacifidlogTown_House2/scripts.pory"
# 117 "data/maps/PacifidlogTown_House2/scripts.pory"
# 217 "data/maps/PacifidlogTown_House2/scripts.pory"
	release
# 218 "data/maps/PacifidlogTown_House2/scripts.pory"
	end
# 219 "data/maps/PacifidlogTown_House2/scripts.pory"

# 220 "data/maps/PacifidlogTown_House2/scripts.pory"

# 221 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation::
# 222 "data/maps/PacifidlogTown_House2/scripts.pory"
# 121 "data/maps/PacifidlogTown_House2/scripts.pory"
# 223 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Er-hem!\p"
# 224 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I am the POKéMON FAN CLUB's most\n"
# 225 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "important person, the CHAIRMAN's\l"
# 226 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "younger brother.\p"
# 227 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I'm here enjoying my vacation with\n"
# 228 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "POKéMON, yes, indeed.$"
# 229 "data/maps/PacifidlogTown_House2/scripts.pory"

# 230 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AhYourPokemon::
# 231 "data/maps/PacifidlogTown_House2/scripts.pory"
# 130 "data/maps/PacifidlogTown_House2/scripts.pory"
# 232 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Ah!\n"
# 233 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Your POKéMON…$"
# 234 "data/maps/PacifidlogTown_House2/scripts.pory"

# 235 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_AdoringPokemonTakeThis::
# 236 "data/maps/PacifidlogTown_House2/scripts.pory"
# 135 "data/maps/PacifidlogTown_House2/scripts.pory"
# 237 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It clearly likes you very much.\p"
# 238 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A POKéMON that adoring and adorable\n"
# 239 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "deserves a TM like this, no?$"
# 240 "data/maps/PacifidlogTown_House2/scripts.pory"

# 241 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_PutInSomeMoreEffort::
# 242 "data/maps/PacifidlogTown_House2/scripts.pory"
# 141 "data/maps/PacifidlogTown_House2/scripts.pory"
# 243 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Hmm…\n"
# 244 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It's not bad, but it's also not good.\p"
# 245 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You, as the TRAINER, need to put in\n"
# 246 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "some more effort.$"
# 247 "data/maps/PacifidlogTown_House2/scripts.pory"

# 248 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ViciousPokemonTakeThis::
# 249 "data/maps/PacifidlogTown_House2/scripts.pory"
# 148 "data/maps/PacifidlogTown_House2/scripts.pory"
# 250 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It has a vicious look to it.\p"
# 251 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "A frightening POKéMON like that\n"
# 252 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "deserves a TM like this.$"
# 253 "data/maps/PacifidlogTown_House2/scripts.pory"

# 254 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_ExplainReturnFrustration::
# 255 "data/maps/PacifidlogTown_House2/scripts.pory"
# 154 "data/maps/PacifidlogTown_House2/scripts.pory"
# 256 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "If a POKéMON likes you a lot, RETURN's\n"
# 257 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "power is enhanced.\p"
# 258 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "If it doesn't like you, FRUSTRATION's\n"
# 259 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "power goes up.$"
# 260 "data/maps/PacifidlogTown_House2/scripts.pory"

# 261 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_GetGoodTMInXDays::
# 262 "data/maps/PacifidlogTown_House2/scripts.pory"
# 161 "data/maps/PacifidlogTown_House2/scripts.pory"
# 263 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Oh, yes. In about {STR_VAR_1} or so days,\n"
# 264 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I should be getting a good TM or two.\p"
# 265 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "You should come see me then.\n"
# 266 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "I'll give you a TM that's suitable for\l"
# 267 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "your POKéMON.$"
# 268 "data/maps/PacifidlogTown_House2/scripts.pory"

# 269 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rurii::
# 270 "data/maps/PacifidlogTown_House2/scripts.pory"
# 169 "data/maps/PacifidlogTown_House2/scripts.pory"
# 271 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Rurii.$"
# 272 "data/maps/PacifidlogTown_House2/scripts.pory"

# 273 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_VeryFriendlyWithTrainer::
# 274 "data/maps/PacifidlogTown_House2/scripts.pory"
# 173 "data/maps/PacifidlogTown_House2/scripts.pory"
# 275 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It appears to be very friendly with the\n"
# 276 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "TRAINER.$"
# 277 "data/maps/PacifidlogTown_House2/scripts.pory"

# 278 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_Rururi::
# 279 "data/maps/PacifidlogTown_House2/scripts.pory"
# 178 "data/maps/PacifidlogTown_House2/scripts.pory"
# 280 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Rururi!$"
# 281 "data/maps/PacifidlogTown_House2/scripts.pory"

# 282 "data/maps/PacifidlogTown_House2/scripts.pory"
PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch::
# 283 "data/maps/PacifidlogTown_House2/scripts.pory"
# 182 "data/maps/PacifidlogTown_House2/scripts.pory"
# 284 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It doesn't appear to like the TRAINER\n"
# 285 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "very much.$"
