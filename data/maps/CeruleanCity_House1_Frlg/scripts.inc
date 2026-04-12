# 1 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 6 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_BadgeGuy::
# 7 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	lock
# 9 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 5 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_BadgesHaveAmazingSecrets
# 13 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 15 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 16 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 17 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 18 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge::
# 19 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	message CeruleanCity_House1_Text_DescribeWhichBadge
# 21 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 13 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	waitmessage
# 23 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BADGES
# 25 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 27 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	waitstate
# 29 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 32 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 0, CeruleanCity_House1_EventScript_DescribeAnotherBadge_3
# 33 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 1, CeruleanCity_House1_EventScript_DescribeAnotherBadge_4
# 35 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 2, CeruleanCity_House1_EventScript_DescribeAnotherBadge_5
# 37 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 3, CeruleanCity_House1_EventScript_DescribeAnotherBadge_6
# 39 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 40 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 4, CeruleanCity_House1_EventScript_DescribeAnotherBadge_7
# 41 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 42 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 5, CeruleanCity_House1_EventScript_DescribeAnotherBadge_8
# 43 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 6, CeruleanCity_House1_EventScript_DescribeAnotherBadge_9
# 45 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 32 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 46 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 7, CeruleanCity_House1_EventScript_DescribeAnotherBadge_10
# 47 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 8, CeruleanCity_House1_EventScript_DescribeAnotherBadge_11
# 49 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 127, CeruleanCity_House1_EventScript_DescribeAnotherBadge_12
# 51 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_1:
# 52 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 53 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 54 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_3:
# 55 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 19 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 56 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeBoulderBadge
# 57 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 58 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 59 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_4:
# 60 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 21 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 61 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeCascadeBadge
# 62 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 63 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 64 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_5:
# 65 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 23 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 66 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeThunderBadge
# 67 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 68 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 69 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_6:
# 70 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 25 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 71 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeRainbowBadge
# 72 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 73 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 74 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_7:
# 75 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 27 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 76 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeSoulBadge
# 77 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 78 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 79 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_8:
# 80 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 29 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 81 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeMarshBadge
# 82 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 83 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 84 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_9:
# 85 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 31 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 86 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeVolcanoBadge
# 87 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 88 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 89 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_10:
# 90 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 33 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 91 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeEarthBadge
# 92 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 93 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 94 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_11:
# 95 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 35 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 96 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_StopDescribingBadges
# 97 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 98 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 99 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeAnotherBadge_12:
# 100 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 37 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 101 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_StopDescribingBadges
# 102 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1
# 103 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 104 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 105 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeBoulderBadge::
# 106 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 43 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 107 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AttackStatFlash
# 108 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 109 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 110 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 111 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 112 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 113 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeCascadeBadge::
# 114 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 49 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 115 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv30Cut
# 116 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 117 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 118 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 119 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 120 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 121 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeThunderBadge::
# 122 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 55 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 123 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpeedStatFly
# 124 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 56 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 125 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 126 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 127 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 128 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 129 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeRainbowBadge::
# 130 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 61 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 131 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv50Strength
# 132 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 133 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 134 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 135 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 136 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 137 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeSoulBadge::
# 138 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 67 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 139 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DefenseStatSurf
# 140 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 68 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 141 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 142 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 143 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 144 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 145 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeMarshBadge::
# 146 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 73 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 147 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv70RockSmash
# 148 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 74 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 149 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 150 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 151 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 152 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 153 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeVolcanoBadge::
# 154 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 79 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 155 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpStatsWaterfall
# 156 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 80 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 157 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 158 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 159 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 160 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 161 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_DescribeEarthBadge::
# 162 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 85 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 163 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AllMonsWillObeyYou
# 164 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 86 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 165 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
# 166 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 167 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 168 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 169 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_EventScript_StopDescribingBadges::
# 170 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 91 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 171 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ComeVisitAnytime
# 172 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 92 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 173 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	release
# 174 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	end
# 175 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 176 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 177 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_BadgesHaveAmazingSecrets::
# 178 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 96 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 179 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Only skilled TRAINERS can collect\n"
# 180 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON BADGES.\p"
# 181 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "I see you have at least one.\p"
# 182 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Those BADGES have amazing secrets,\n"
# 183 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "did you know?$"
# 184 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 185 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_DescribeWhichBadge::
# 186 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 187 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Now then…\p"
# 188 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Which of the eight BADGES should\n"
# 189 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "I describe?$"
# 190 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 191 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ComeVisitAnytime::
# 192 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 110 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 193 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Come visit me anytime you wish.$"
# 194 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 195 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_AttackStatFlash::
# 196 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 114 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 197 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The ATTACK stat of all your\n"
# 198 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 199 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 200 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "FLASH outside of battle.$"
# 201 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 202 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv30Cut::
# 203 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 121 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 204 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 30 will obey\n"
# 205 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 206 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 207 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 208 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 209 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 210 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 211 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "CUT outside of battle.$"
# 212 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 213 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_SpeedStatFly::
# 214 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 132 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 215 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SPEED stat of all your\n"
# 216 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 217 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 218 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "FLY outside of battle.$"
# 219 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 220 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv50Strength::
# 221 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 139 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 222 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 50 will obey\n"
# 223 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 224 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 225 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 226 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 227 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 228 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 229 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "STRENGTH outside of battle.$"
# 230 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 231 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_DefenseStatSurf::
# 232 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 150 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 233 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The DEFENSE stat of all your\n"
# 234 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON increases a little bit.\p"
# 235 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 236 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "SURF outside of battle.$"
# 237 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 238 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_ObeyLv70RockSmash::
# 239 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 157 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 240 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 70 will obey\n"
# 241 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "you.\p"
# 242 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 243 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "obtain in trades.\p"
# 244 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON of higher levels will\n"
# 245 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "be unruly in battle, however.\p"
# 246 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 247 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "ROCK SMASH outside of battle.$"
# 248 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 249 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_SpStatsWaterfall::
# 250 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 168 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 251 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SP. ATK and SP. DEF stats of\n"
# 252 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "all your POKéMON rise a little bit.\p"
# 253 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "It also lets you use the move\n"
# 254 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "WATERFALL outside of battle.$"
# 255 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"

# 256 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
CeruleanCity_House1_Text_AllMonsWillObeyYou::
# 257 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 175 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
# 258 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "All POKéMON will obey you!$"
