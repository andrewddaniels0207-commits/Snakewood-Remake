# 1 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_MapScripts::
# 3 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman::
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 8 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 9 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 10 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 11 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 12 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_Chairman_2
# 13 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman_1:
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 9 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_Chairman_5
# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman_4:
# 17 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 12 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_SLATEPORT_FAN_CLUB_STATE
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 13 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_Chairman_9
# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 22 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_Chairman_10
# 23 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 17 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 24 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_Chairman_11
# 25 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman_7:
# 26 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 28 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 29 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 30 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman_2:
# 31 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 32 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
# 33 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_1
# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 35 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman_5:
# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 10 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 37 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_MeetChairman
# 38 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_4
# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 40 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman_9:
# 41 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
# 43 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_7
# 44 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman_10:
# 46 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 47 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_7
# 49 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 50 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman_11:
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 52 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 53 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_7
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 55 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 56 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
# 57 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 25 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 58 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
# 59 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 26 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 60 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 62 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 63 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 64 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 65 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 66 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 32 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 33 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 70 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_2
# 71 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_1:
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 73 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_5
# 74 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_4:
# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 76 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_8
# 77 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_7:
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 79 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_11
# 80 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_10:
# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 82 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_14
# 83 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_13:
# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_TEMP_2, CONTEST_CATEGORIES_COUNT
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_17
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_16:
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_SLATEPORT_FAN_CLUB_STATE, 2
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_20
# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_19:
# 92 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 93 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
# 94 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 55 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 95 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 96 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 97 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_2:
# 99 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 100 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 101 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_1
# 102 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_5:
# 104 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 37 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 105 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 106 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_4
# 107 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 108 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_8:
# 109 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 40 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 110 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 111 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_7
# 112 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_11:
# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 43 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 115 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 116 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_10
# 117 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 118 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_14:
# 119 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 46 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 121 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_13
# 122 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_17:
# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 49 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
# 126 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_16
# 127 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 128 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_20:
# 129 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 52 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 130 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 131 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_19
# 132 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
# 135 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 60 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
# 137 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 61 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 138 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 139 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 140 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 141 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 142 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
# 143 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 66 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 144 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 148 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_2
# 149 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_1:
# 150 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 71 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 151 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_5
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_4:
# 153 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 74 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 154 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_8
# 155 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_7:
# 156 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 77 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 157 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_11
# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_10:
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 80 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 160 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_14
# 161 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_13:
# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 83 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 163 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_TEMP_1
# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 167 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_18
# 168 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 169 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_19
# 170 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_20
# 172 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_21
# 174 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 93 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 175 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_22
# 176 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 95 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 177 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_23
# 178 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16:
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 180 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 181 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 182 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 183 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_2:
# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 185 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CheckMonTough
# 186 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_1
# 187 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 188 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_5:
# 189 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_4
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 193 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_8:
# 194 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 195 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CheckMonCute
# 196 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_7
# 197 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_11:
# 199 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 200 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
# 201 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_10
# 202 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 203 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_14:
# 204 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 205 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_CheckMonCool
# 206 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_13
# 207 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 208 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_18:
# 209 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 210 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoHighConditions
# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16
# 212 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 213 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_19:
# 214 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 215 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
# 216 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16
# 217 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 218 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_20:
# 219 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 220 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
# 221 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16
# 222 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 223 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_21:
# 224 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 92 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 225 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
# 226 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16
# 227 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 228 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_22:
# 229 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 94 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 230 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
# 231 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16
# 232 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 233 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_23:
# 234 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 96 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 235 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
# 236 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16
# 237 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 238 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 239 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
# 240 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 241 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
# 242 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 243 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 244 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 245 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
# 246 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 108 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 247 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
# 248 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 249 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 250 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 251 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
# 252 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 253 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
# 254 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 255 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 256 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 257 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 258 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 259 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
# 260 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 119 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 261 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_RED_SCARF
# 262 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 263 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 264 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveRedScarf_2
# 265 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf_1:
# 266 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 267 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 268 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 269 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_RED_SCARF
# 270 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 271 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_RED_SCARF
# 272 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 126 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 273 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
# 274 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 127 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 275 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 276 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 277 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 278 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf_2:
# 279 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 121 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 280 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 281 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveRedScarf_1
# 282 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 283 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 284 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
# 285 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 132 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 286 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF
# 287 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 288 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 289 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf_2
# 290 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf_1:
# 291 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 292 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 293 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 137 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 294 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_BLUE_SCARF
# 295 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 138 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 296 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 297 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 139 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 298 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
# 299 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 140 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 300 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 301 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 302 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 303 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf_2:
# 304 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 305 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 306 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf_1
# 307 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 308 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 309 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
# 310 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 311 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_PINK_SCARF
# 312 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 313 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 314 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GivePinkScarf_2
# 315 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf_1:
# 316 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 149 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 317 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 318 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 150 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 319 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_PINK_SCARF
# 320 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 151 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 321 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 322 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 323 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
# 324 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 153 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 326 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 327 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 328 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf_2:
# 329 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 330 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 331 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GivePinkScarf_1
# 332 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 333 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 334 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
# 335 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 336 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF
# 337 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 338 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf_2
# 340 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf_1:
# 341 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 342 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 343 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 163 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 344 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_GREEN_SCARF
# 345 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 346 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 347 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 348 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
# 349 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 350 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 351 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 352 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 353 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf_2:
# 354 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 160 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 355 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 356 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf_1
# 357 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 358 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 359 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
# 360 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 361 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF
# 362 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 172 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 363 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 364 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf_2
# 365 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf_1:
# 366 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 175 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 367 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 368 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 176 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 369 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_YELLOW_SCARF
# 370 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 177 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 371 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 372 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 178 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 373 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
# 374 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 375 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 376 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 377 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 378 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf_2:
# 379 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 380 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 381 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf_1
# 382 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 383 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 384 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
# 385 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 386 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
# 387 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 185 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 388 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 389 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 390 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 391 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 392 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
# 393 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 394 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 395 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 396 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 397 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_CheckMonCool_2
# 398 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool_1:
# 399 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 400 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 401 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool_2:
# 402 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 403 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_SetMonCool
# 404 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_CheckMonCool_1
# 405 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 406 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 407 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCool::
# 408 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 409 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
# 410 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 411 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 412 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 413 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
# 414 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 203 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 415 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 416 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 204 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 417 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 418 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty_2
# 419 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty_1:
# 420 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 421 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 422 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty_2:
# 423 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 205 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 424 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
# 425 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty_1
# 426 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 427 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 428 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
# 429 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 430 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
# 431 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 432 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 433 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 434 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
# 435 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 216 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 436 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 437 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 217 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 438 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 439 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_CheckMonCute_2
# 440 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute_1:
# 441 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 442 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 443 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute_2:
# 444 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 218 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 445 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_SetMonCute
# 446 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_CheckMonCute_1
# 447 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 448 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 449 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCute::
# 450 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 224 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 451 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
# 452 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 453 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 454 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 455 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
# 456 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 229 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 457 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 458 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 230 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 459 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 460 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_CheckMonSmart_2
# 461 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart_1:
# 462 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 463 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 464 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart_2:
# 465 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 231 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 466 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_SetMonSmart
# 467 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_CheckMonSmart_1
# 468 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 469 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 470 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
# 471 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 237 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 472 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
# 473 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 474 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 475 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 476 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
# 477 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 242 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 478 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 479 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 243 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 480 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
# 481 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_CheckMonTough_2
# 482 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough_1:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 484 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 485 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough_2:
# 486 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 244 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 487 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_SetMonTough
# 488 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_CheckMonTough_1
# 489 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 490 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 491 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonTough::
# 492 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 250 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 493 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
# 494 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 495 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 496 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 497 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
# 498 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 255 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 499 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest_2
# 500 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest_1:
# 501 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 258 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 502 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 503 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 259 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 504 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 505 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 260 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 506 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 507 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 508 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 509 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest_2:
# 510 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 256 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 511 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
# 512 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest_1
# 513 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 514 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 515 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
# 516 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 265 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 517 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
# 518 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 266 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 519 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 520 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 521 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 522 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 523 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_MeetChairman::
# 524 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 271 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 525 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 526 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 272 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 527 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 528 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 529 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 530 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 531 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
# 532 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 277 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 533 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 534 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 278 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 535 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 536 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 279 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 537 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_2
# 538 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_1:
# 539 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 282 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 540 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
# 541 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 283 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 542 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 543 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 284 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 544 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FRIENDSHIP_150_TO_199
# 545 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_ge SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_5
# 546 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_4:
# 547 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 287 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 548 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 549 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 550 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 551 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_2:
# 552 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 280 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 553 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
# 554 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_1
# 555 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 556 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_5:
# 557 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 285 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 558 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
# 559 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_4
# 560 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 561 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 562 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
# 563 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 292 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 564 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 565 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 293 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 566 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 567 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 294 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 568 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 569 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 295 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 570 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 571 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 296 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 572 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 573 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 297 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 574 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
# 575 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 298 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 576 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 577 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 299 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 578 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
# 579 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveSootheBell_2
# 580 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell_1:
# 581 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 302 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 582 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 583 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 303 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 584 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 585 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 586 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 587 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell_2:
# 588 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 300 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 589 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 590 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_GiveSootheBell_1
# 591 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 592 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 593 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
# 594 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 308 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 595 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
# 596 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 309 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 597 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 598 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 599 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 600 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 601 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Man::
# 602 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 314 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 603 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
# 604 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 605 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 606 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 607 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Twin::
# 608 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 319 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 609 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
# 610 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 611 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 612 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 613 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Skitty::
# 614 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 324 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 615 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 616 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 617 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 618 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 326 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 619 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 620 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 327 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 621 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 622 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 328 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 623 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
# 624 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 329 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 625 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 626 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 330 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 627 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 628 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 629 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 630 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 631 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
# 632 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 335 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 633 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 634 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 336 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 635 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 636 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 337 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 637 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 638 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 338 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 639 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 640 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 641 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
# 642 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 340 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 643 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 644 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 341 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 645 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 646 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 647 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 648 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 649 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Azumarill::
# 650 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 346 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 651 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 652 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 347 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 653 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 654 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 348 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 655 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 656 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 349 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 657 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 658 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 350 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 659 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
# 660 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 351 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 661 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 662 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 352 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 663 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 664 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 665 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 666 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 667 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MeetChairman::
# 668 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 356 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 669 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I am the CHAIRMAN of the\n"
# 670 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON FAN CLUB!\p"
# 671 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Being the CHAIRMAN, I am naturally\n"
# 672 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the most important!\p"
# 673 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "No one can best me when it comes\n"
# 674 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "to raising POKéMON. No one!\p"
# 675 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Well, let me tell you about\n"
# 676 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON CONTESTS.\p"
# 677 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "They're events where one can show off\n"
# 678 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON for the world to see!\p"
# 679 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "However, they're held in far-off towns,\n"
# 680 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "so I cannot participate often enough.\p"
# 681 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That is why we gather here to show\n"
# 682 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "off our POKéMON, and have others\l"
# 683 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "show us theirs.$"
# 684 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 685 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon::
# 686 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 374 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 687 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The POKéMON of a TRAINER who has\n"
# 688 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "entered a POKéMON CONTEST…\l"
# 689 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That, I would like to see.$"
# 690 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 691 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon::
# 692 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 380 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 693 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I see you've participated in\n"
# 694 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a POKéMON CONTEST!\p"
# 695 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Please! Allow me to examine how you\n"
# 696 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "have raised your POKéMON.\p"
# 697 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It delights me no end to see POKéMON\n"
# 698 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "raised by other TRAINERS.\p"
# 699 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The happy expressions of POKéMON\n"
# 700 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "raised with proper care…\p"
# 701 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The kindly eyes of the TRAINER that\n"
# 702 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "nurtured and raised the POKéMON…\p"
# 703 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The very thought fills my heart to\n"
# 704 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "overwhelming with joy.\p"
# 705 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh! I do beg your pardon!\n"
# 706 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Forgive me for prattling on so!\p"
# 707 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Please! Allow me to examine how much\n"
# 708 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "your POKéMON has grown!$"
# 709 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 710 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing::
# 711 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 399 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 712 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "How is your POKéMON growing?\n"
# 713 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Allow me to examine it.$"
# 714 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 715 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HmHmISee::
# 716 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 404 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 717 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hm, hm…\n"
# 718 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I see…$"
# 719 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 720 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks::
# 721 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 409 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 722 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hmmm… It's not bad, but it's not\n"
# 723 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "good, either…\p"
# 724 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "You, the TRAINER, must put more\n"
# 725 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "effort into raising this POKéMON!\p"
# 726 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "For instance, may I suggest that\n"
# 727 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "you give it more {POKEBLOCK}S?$"
# 728 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 729 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NoSpaceForReward::
# 730 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 418 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 731 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, my…\p"
# 732 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your POKéMON is growing quite well,\n"
# 733 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "so you deserve a reward.\p"
# 734 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Unfortunately, you have no space for\n"
# 735 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "this in your BAG.$"
# 736 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 737 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis::
# 738 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 426 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 739 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your {STR_VAR_1}, it is growing in\n"
# 740 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a most impressive manner!\l"
# 741 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It is one fine specimen!\p"
# 742 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "But! If you were to give it this,\n"
# 743 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "it would grow even better! Indeed!$"
# 744 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 745 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainRedScarf::
# 746 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 434 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 747 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that RED SCARF.\p"
# 748 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Everyone will recognize the coolness\n"
# 749 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of that POKéMON!$"
# 750 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 751 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainBlueScarf::
# 752 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 440 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 753 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that BLUE SCARF.\p"
# 754 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Its beauty will be accentuated much\n"
# 755 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "more than now!$"
# 756 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 757 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainPinkScarf::
# 758 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 446 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 759 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that PINK SCARF.\p"
# 760 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It will draw out the cuteness of\n"
# 761 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the POKéMON some more!$"
# 762 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 763 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainGreenScarf::
# 764 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 452 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 765 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that GREEN SCARF.\p"
# 766 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That will enhance the\n"
# 767 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "smartness of POKéMON!$"
# 768 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 769 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainYellowScarf::
# 770 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 458 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 771 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that YELLOW SCARF.\p"
# 772 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It will bolster your POKéMON's\n"
# 773 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "toughness so much more!$"
# 774 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 775 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou::
# 776 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 464 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 777 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I'm sorry, but I've nothing else to\n"
# 778 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "give you! None at all!\p"
# 779 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "After all, you're blessed with the gift\n"
# 780 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of raising POKéMON without resorting\l"
# 781 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "to any items!$"
# 782 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 783 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou::
# 784 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 472 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 785 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I love seeing POKéMON that love\n"
# 786 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "their TRAINERS.\p"
# 787 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON are very sensitive to\n"
# 788 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the feelings of their TRAINERS.\p"
# 789 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you treat your POKéMON with love\n"
# 790 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "and care, they'll love you back.\p"
# 791 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "When your POKéMON grow to love you,\n"
# 792 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "please come show me.$"
# 793 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 794 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonAdoresYou::
# 795 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 796 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your POKéMON really adores you.\p"
# 797 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "For you, a most compassionate\n"
# 798 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "TRAINER, a gift from the FAN CLUB!$"
# 799 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 800 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove::
# 801 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 489 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 802 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON are very sensitive to\n"
# 803 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the feelings of their TRAINERS.\p"
# 804 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you treat your POKéMON with love\n"
# 805 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "and care, they'll love you back.$"
# 806 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 807 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting::
# 808 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 496 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 809 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you keep letting a POKéMON faint\n"
# 810 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "in battle, it'll come to resent it.\p"
# 811 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Soon, it will become less trusting\n"
# 812 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of the TRAINER.\p"
# 813 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "In other words, it certainly won't\n"
# 814 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "like you very much.$"
# 815 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 816 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein::
# 817 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 505 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 818 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Do POKéMON enjoy having items used\n"
# 819 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "on them?\p"
# 820 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Mine acted really happy when I gave\n"
# 821 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "it some PROTEIN.$"
# 822 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 823 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Skitty::
# 824 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 512 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 825 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "SKITTY: Fffnyaaaah…$"
# 826 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 827 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Zigzagoon::
# 828 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 516 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 829 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "ZIGZAGOON: Kyuuu…$"
# 830 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 831 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Azumarill::
# 832 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 520 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
# 833 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "AZUMARILL: Marimari?$"
