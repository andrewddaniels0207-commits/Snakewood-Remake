# 1 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 2 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_MapScripts::
# 3 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater::
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lock
# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	faceplayer
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 12 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
# 13 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, YES
# 15 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_NameRater_2
# 16 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater_1:
# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, NO
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_NameRater_5
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater_4:
# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 22 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater_2:
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_NameRater_1
# 27 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 28 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater_5:
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_NameRater_4
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 33 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	chooseboxmon
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_ne SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate_2
# 44 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate_1:
# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate_5
# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate_4:
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate_2:
# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 53 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate_1
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate_5:
# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate_4
# 60 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
# 63 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 64 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
# 65 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 66 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 69 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 70 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
# 71 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 72 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_2
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_1:
# 77 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 78 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 79 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 82 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_5
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_4:
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 89 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 90 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_8
# 92 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_7:
# 93 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 94 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 95 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 96 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, YES
# 97 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_11
# 98 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_10:
# 99 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 100 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, NO
# 101 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_14
# 102 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_13:
# 103 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 104 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 105 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_2:
# 106 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 107 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_CantRateEgg
# 108 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname_1
# 109 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 110 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_5:
# 111 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 112 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 113 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname_4
# 114 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 115 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_8:
# 116 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 117 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 118 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname_7
# 119 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 120 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_11:
# 121 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 122 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ChangeNickname
# 123 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname_10
# 124 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 125 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_14:
# 126 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 127 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 128 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname_13
# 129 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 130 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 131 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
# 132 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 133 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 134 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 135 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 136 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 137 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 138 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 139 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
# 140 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 141 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
# 142 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 143 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 144 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 145 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 146 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 147 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
# 148 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 149 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 150 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 151 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 152 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 153 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 154 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 155 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 156 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 77 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 157 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 158 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_ChangeNickname_2
# 159 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname_1:
# 160 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 161 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 162 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 163 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 164 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 165 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 166 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname_2:
# 167 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 78 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 168 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
# 169 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ChangeNickname_1
# 170 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 171 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 172 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
# 173 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 174 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 175 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 176 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 177 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 178 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 179 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 180 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname::
# 181 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 182 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the NAME RATER!\n"
# 183 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I'm the fortune-teller of names!\p"
# 184 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I shall be pleased to rate your\n"
# 185 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "POKéMON's nickname.$"
# 186 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 187 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname::
# 188 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 98 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 189 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which POKéMON's nickname should\n"
# 190 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I critique?$"
# 191 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 192 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne::
# 193 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 103 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 194 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
# 195 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "quite a fine name you bestowed.\p"
# 196 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "But! What say you, if I were to\n"
# 197 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "suggest a slightly better name?$"
# 198 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 199 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe::
# 200 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 110 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 201 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
# 202 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "nickname be?$"
# 203 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 204 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName::
# 205 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 115 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 206 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 207 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 208 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is a better name than before!\n"
# 209 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 210 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 211 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_DoVisitAgain::
# 212 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 122 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 213 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see.\n"
# 214 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Do come visit again.$"
# 215 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 216 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior::
# 217 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 127 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 218 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
# 219 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "shall be known as {STR_VAR_1}!\p"
# 220 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It looks no different from before,\n"
# 221 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "and yet, this is vastly superior!\p"
# 222 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "How fortunate for you!$"
# 223 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 224 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MagnificentName::
# 225 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 135 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 226 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
# 227 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "This is a magnificent nickname!\n"
# 228 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is impeccably beyond reproach!\p"
# 229 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "You'll do well to cherish your\n"
# 230 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1} now and beyond.$"
# 231 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 232 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg::
# 233 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 143 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
# 234 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
# 235 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "That is merely an EGG!$"
