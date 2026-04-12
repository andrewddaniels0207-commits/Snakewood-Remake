# 1 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 6 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_NameRater::
# 7 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 4 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 8 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	lock
# 9 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 5 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 10 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 6 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 12 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_WantMeToRateNicknames, MSGBOX_YESNO
# 13 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 7 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 14 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 15 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq LavenderTown_House2_EventScript_NameRater_2
# 16 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_NameRater_1:
# 17 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 10 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 18 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 19 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq LavenderTown_House2_EventScript_NameRater_5
# 20 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_NameRater_4:
# 21 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 22 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 23 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_NameRater_2:
# 24 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 8 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 25 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_ChooseMon
# 26 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_NameRater_1
# 27 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 28 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_NameRater_5:
# 29 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 11 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 30 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_DontRateNickname
# 31 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_NameRater_4
# 32 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 33 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 34 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseMon::
# 35 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 17 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 36 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_CritiqueWhichMonsNickname
# 37 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 18 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 38 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special ChoosePartyMon
# 39 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 19 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 40 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	waitstate
# 41 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 20 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 42 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 43 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_lt LavenderTown_House2_EventScript_ChooseMon_2
# 44 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseMon_1:
# 45 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 23 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 46 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 47 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_ge LavenderTown_House2_EventScript_ChooseMon_5
# 48 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseMon_4:
# 49 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 50 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 51 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseMon_2:
# 52 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 21 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 53 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CheckCanRateMon
# 54 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_ChooseMon_1
# 55 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 56 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseMon_5:
# 57 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 24 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 58 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_DontRateNickname
# 59 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_ChooseMon_4
# 60 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 61 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 62 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_DontRateNickname::
# 63 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 30 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 64 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_ISeeComeVisitAgain
# 65 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 31 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 66 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 67 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 68 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 69 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 70 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon::
# 71 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 36 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 72 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 73 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 37 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 74 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
# 75 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_2
# 76 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_1:
# 77 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 40 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 78 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 79 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 41 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 80 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special IsMonOTIDNotPlayers
# 81 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 42 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 82 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 83 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_5
# 84 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_4:
# 85 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 45 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 86 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 87 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 46 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 88 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 89 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 47 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 90 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 91 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_8
# 92 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_7:
# 93 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 50 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 94 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_GiveItANicerName, MSGBOX_YESNO
# 95 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 51 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 96 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 97 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_11
# 98 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_10:
# 99 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 54 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 100 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 101 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_14
# 102 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_13:
# 103 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 104 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 105 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_2:
# 106 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 38 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 107 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CantNicknameEgg
# 108 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CheckCanRateMon_1
# 109 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 110 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_5:
# 111 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 43 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 112 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CantNicknameTradeMon
# 113 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CheckCanRateMon_4
# 114 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 115 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_8:
# 116 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 48 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 117 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CantNicknameTradeMon
# 118 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CheckCanRateMon_7
# 119 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 120 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_11:
# 121 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 52 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 122 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_ChooseNewNickname
# 123 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CheckCanRateMon_10
# 124 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 125 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CheckCanRateMon_14:
# 126 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 55 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 127 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_DontRateNickname
# 128 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CheckCanRateMon_13
# 129 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 130 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 131 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CantNicknameEgg::
# 132 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 61 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 133 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_ThatIsMerelyAnEgg
# 134 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 62 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 135 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 136 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 137 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 138 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 139 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_CantNicknameTradeMon::
# 140 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 67 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 141 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_TrulyImpeccableName
# 142 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 68 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 143 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 144 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 145 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 146 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 147 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseNewNickname::
# 148 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 73 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 149 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_WhatShallNewNicknameBe
# 150 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 74 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 151 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 152 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 75 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 153 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 154 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 76 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 155 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 156 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 77 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 157 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 158 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto_if_eq LavenderTown_House2_EventScript_ChooseNewNickname_2
# 159 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseNewNickname_1:
# 160 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 80 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 161 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName
# 162 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 81 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 163 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 164 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 165 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 166 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChooseNewNickname_2:
# 167 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 78 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 168 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_ChoseNewNickname
# 169 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_ChooseNewNickname_1
# 170 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 171 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 172 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_EventScript_ChoseNewNickname::
# 173 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 86 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 174 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsName
# 175 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 87 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 176 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	release
# 177 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	end
# 178 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 179 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 180 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_WantMeToRateNicknames::
# 181 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 91 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 182 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Hello, hello!\n"
# 183 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I am the official NAME RATER!\p"
# 184 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Want me to rate the nicknames of\n"
# 185 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "your POKéMON?$"
# 186 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 187 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_CritiqueWhichMonsNickname::
# 188 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 98 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 189 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Which POKéMON's nickname should\n"
# 190 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I critique?$"
# 191 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 192 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_GiveItANicerName::
# 193 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 103 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 194 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "{STR_VAR_1}, is it?\n"
# 195 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is a decent nickname!\p"
# 196 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "But, would you like me to give it\n"
# 197 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "a nicer name?\p"
# 198 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How about it?$"
# 199 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 200 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_WhatShallNewNicknameBe::
# 201 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 111 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 202 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
# 203 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "nickname be?$"
# 204 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 205 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_FromNowOnShallBeKnownAsName::
# 206 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 116 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 207 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 208 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 209 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "It is a better name than before!\n"
# 210 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How fortunate for you!$"
# 211 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 212 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_ISeeComeVisitAgain::
# 213 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 123 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 214 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I see.\n"
# 215 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Do come visit again.$"
# 216 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 217 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName::
# 218 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 128 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 219 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 220 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 221 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "It looks no different from before,\n"
# 222 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "and yet, this is vastly superior!\p"
# 223 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "How fortunate for you!$"
# 224 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 225 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_TrulyImpeccableName::
# 226 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 136 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 227 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "{STR_VAR_1}, is it?\n"
# 228 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is a truly impeccable name!\p"
# 229 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Take good care of {STR_VAR_1}!$"
# 230 "data/maps/LavenderTown_House2_Frlg/scripts.pory"

# 231 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
LavenderTown_House2_Text_ThatIsMerelyAnEgg::
# 232 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 142 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
# 233 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Now, now.\n"
# 234 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "That is merely an EGG!$"
