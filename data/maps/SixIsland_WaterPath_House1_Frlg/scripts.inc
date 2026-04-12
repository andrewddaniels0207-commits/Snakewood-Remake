# 1 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 2 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Frlg_MapScripts::
# 3 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 5 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 6 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty::
# 7 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 4 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 8 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lock
# 9 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 5 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 10 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 6 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 12 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HERACROSS
# 13 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 7 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 14 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 15 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 8 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 16 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 17 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_2
# 18 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_1:
# 19 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 11 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 20 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 21 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 12 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 22 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_MayIMeasureHeracross
# 23 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 13 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 24 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special ChoosePartyMon
# 25 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 14 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 26 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	waitstate
# 27 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 15 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 28 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 29 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 16 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 31 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_ge SixIsland_WaterPath_House1_EventScript_Beauty_5
# 32 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_4:
# 33 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 19 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 34 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special CompareHeracrossSize
# 35 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 20 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 36 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 37 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_8
# 38 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_7:
# 39 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 23 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 40 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 41 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_11
# 42 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_10:
# 43 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 26 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 44 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, 3
# 45 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_14
# 46 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_13:
# 47 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 29 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 48 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, 4
# 49 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_17
# 50 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_16:
# 51 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 32 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 52 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 53 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 54 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 55 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_2:
# 56 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 9 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 57 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty
# 58 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_Beauty_1
# 59 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 60 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_5:
# 61 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 17 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 62 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_DontShowMon
# 63 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_Beauty_4
# 64 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 65 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_8:
# 66 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 21 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 67 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownNonHeracross
# 68 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_Beauty_7
# 69 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 70 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_11:
# 71 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 24 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 72 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross
# 73 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_Beauty_10
# 74 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 75 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_14:
# 76 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 27 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 77 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 78 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_Beauty_13
# 79 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 80 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_Beauty_17:
# 81 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 30 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 82 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross
# 83 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_Beauty_16
# 84 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 85 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 86 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty::
# 87 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 37 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 88 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross
# 89 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 38 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 90 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 91 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 92 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 93 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 94 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_DontShowMon::
# 95 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 43 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 96 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 97 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 98 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 99 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 100 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownNonHeracross::
# 101 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 48 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 102 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ThisWontDo
# 103 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 49 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 104 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 105 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 106 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 107 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 108 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross::
# 109 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 54 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 110 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross_2
# 111 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross_1:
# 112 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 57 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 113 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest
# 114 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 58 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 115 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 116 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 117 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 118 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross_2:
# 119 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 55 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 120 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 121 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross_1
# 122 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 123 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 124 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross::
# 125 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 63 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 126 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross_2
# 127 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross_1:
# 128 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 66 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 129 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore
# 130 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 67 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 131 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 132 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 133 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 134 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross_2:
# 135 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 64 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 136 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
# 137 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross_1
# 138 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 139 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 140 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownBigHeracross::
# 141 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 72 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 142 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
# 143 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 73 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 144 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward
# 145 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 74 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 146 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	giveitem ITEM_NEST_BALL
# 147 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 75 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 148 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 149 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_eq SixIsland_WaterPath_House1_EventScript_ShownBigHeracross_2
# 150 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownBigHeracross_1:
# 151 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 78 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 152 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne
# 153 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 79 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 154 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 155 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 156 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 157 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_ShownBigHeracross_2:
# 158 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 76 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 159 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall
# 160 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownBigHeracross_1
# 161 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 162 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 163 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall::
# 164 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 84 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 165 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_YourBagIsFull
# 166 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 85 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 167 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
# 168 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 169 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 170 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 171 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_SizeRecord::
# 172 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 90 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 173 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lockall
# 174 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 91 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 175 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_SizeRecord_2
# 176 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_SizeRecord_1:
# 177 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 94 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 178 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort
# 179 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 95 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 180 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
# 181 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 182 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 183 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_SizeRecord_2:
# 184 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 92 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 185 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty
# 186 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_SizeRecord_1
# 187 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 188 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 189 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty::
# 190 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 100 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 191 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 192 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 101 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 193 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches
# 194 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 102 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 195 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
# 196 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	end
# 197 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 198 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 199 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross::
# 200 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 106 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 201 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Hera, hera, HERACROSS!\n"
# 202 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Big and shiny, it's the bug boss!\l"
# 203 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Love it, need it, HERACROSS!$"
# 204 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 205 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_MayIMeasureHeracross::
# 206 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 112 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 207 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeeek!\n"
# 208 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "That's a HERACROSS!\p"
# 209 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Please, please, may I measure how\n"
# 210 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "big it is?$"
# 211 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 212 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward::
# 213 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 119 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 214 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeek, it's {STR_VAR_2} inches!\n"
# 215 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "I've never seen anything like this!\l"
# 216 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "You deserve a reward!$"
# 217 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 218 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne::
# 219 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 125 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 220 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "I want to see a much, much bigger\n"
# 221 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS than that one.\p"
# 222 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, how I adore them, big\n"
# 223 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS!$"
# 224 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 225 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore::
# 226 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 132 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 227 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Huh? This {STR_VAR_2}-inch measurement…\n"
# 228 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, boo! It's the same as before.$"
# 229 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 230 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest::
# 231 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 137 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 232 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, it's just {STR_VAR_2} inches.\n"
# 233 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "The HERACROSS before was bigger.\p"
# 234 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It was {STR_VAR_3} inches, the biggest\n"
# 235 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS you've brought me.$"
# 236 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 237 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_ThisWontDo::
# 238 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 144 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 239 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, no! This won't do!\p"
# 240 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "HERACROSS looks much more macho\n"
# 241 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "and cool, and has a lovely horn!$"
# 242 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 243 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_YourBagIsFull::
# 244 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 150 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 245 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Your BAG is full.\n"
# 246 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "My reward won't fit.$"
# 247 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 248 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches::
# 249 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 155 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 250 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "The biggest HERACROSS that I have\n"
# 251 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "ever seen measured so far is:\p"
# 252 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "{STR_VAR_3} inches!$"
# 253 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"

# 254 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort::
# 255 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 161 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
# 256 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
# 257 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It has spaces for writing in\n"
# 258 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "records of some kind.$"
