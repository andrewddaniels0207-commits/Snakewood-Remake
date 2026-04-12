CeruleanCity_House1_Frlg_MapScripts::
	.byte 0


CeruleanCity_House1_EventScript_BadgeGuy::
# 4 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	lock
# 5 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_BadgesHaveAmazingSecrets
# 7 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeAnotherBadge::
# 12 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	message CeruleanCity_House1_Text_DescribeWhichBadge
# 13 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	waitmessage
# 14 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BADGES
# 15 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 16 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	waitstate
# 17 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 0, CeruleanCity_House1_EventScript_DescribeAnotherBadge_3
# 20 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 1, CeruleanCity_House1_EventScript_DescribeAnotherBadge_4
# 22 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 2, CeruleanCity_House1_EventScript_DescribeAnotherBadge_5
# 24 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 3, CeruleanCity_House1_EventScript_DescribeAnotherBadge_6
# 26 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 4, CeruleanCity_House1_EventScript_DescribeAnotherBadge_7
# 28 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 5, CeruleanCity_House1_EventScript_DescribeAnotherBadge_8
# 30 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 6, CeruleanCity_House1_EventScript_DescribeAnotherBadge_9
# 32 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 7, CeruleanCity_House1_EventScript_DescribeAnotherBadge_10
# 34 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 8, CeruleanCity_House1_EventScript_DescribeAnotherBadge_11
# 36 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	case 127, CeruleanCity_House1_EventScript_DescribeAnotherBadge_12
CeruleanCity_House1_EventScript_DescribeAnotherBadge_1:
	end

CeruleanCity_House1_EventScript_DescribeAnotherBadge_3:
# 19 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeBoulderBadge
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_4:
# 21 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeCascadeBadge
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_5:
# 23 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeThunderBadge
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_6:
# 25 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeRainbowBadge
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_7:
# 27 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeSoulBadge
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_8:
# 29 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeMarshBadge
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_9:
# 31 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeVolcanoBadge
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_10:
# 33 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeEarthBadge
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_11:
# 35 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_StopDescribingBadges
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1

CeruleanCity_House1_EventScript_DescribeAnotherBadge_12:
# 37 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_StopDescribingBadges
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge_1


CeruleanCity_House1_EventScript_DescribeBoulderBadge::
# 43 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AttackStatFlash
# 44 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeCascadeBadge::
# 49 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv30Cut
# 50 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeThunderBadge::
# 55 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpeedStatFly
# 56 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeRainbowBadge::
# 61 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv50Strength
# 62 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeSoulBadge::
# 67 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DefenseStatSurf
# 68 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeMarshBadge::
# 73 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ObeyLv70RockSmash
# 74 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeVolcanoBadge::
# 79 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SpStatsWaterfall
# 80 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_DescribeEarthBadge::
# 85 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AllMonsWillObeyYou
# 86 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	goto CeruleanCity_House1_EventScript_DescribeAnotherBadge
	end


CeruleanCity_House1_EventScript_StopDescribingBadges::
# 91 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_ComeVisitAnytime
# 92 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	release
	end


CeruleanCity_House1_Text_BadgesHaveAmazingSecrets::
# 96 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Only skilled TRAINERS can collect\n"
	.string "POKéMON BADGES.\p"
	.string "I see you have at least one.\p"
	.string "Those BADGES have amazing secrets,\n"
	.string "did you know?$"

CeruleanCity_House1_Text_DescribeWhichBadge::
# 104 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Now then…\p"
	.string "Which of the eight BADGES should\n"
	.string "I describe?$"

CeruleanCity_House1_Text_ComeVisitAnytime::
# 110 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "Come visit me anytime you wish.$"

CeruleanCity_House1_Text_AttackStatFlash::
# 114 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The ATTACK stat of all your\n"
	.string "POKéMON increases a little bit.\p"
	.string "It also lets you use the move\n"
	.string "FLASH outside of battle.$"

CeruleanCity_House1_Text_ObeyLv30Cut::
# 121 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 30 will obey\n"
	.string "you.\p"
	.string "That includes even outsiders you\n"
	.string "obtain in trades.\p"
	.string "POKéMON of higher levels will\n"
	.string "be unruly in battle, however.\p"
	.string "It also lets you use the move\n"
	.string "CUT outside of battle.$"

CeruleanCity_House1_Text_SpeedStatFly::
# 132 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SPEED stat of all your\n"
	.string "POKéMON increases a little bit.\p"
	.string "It also lets you use the move\n"
	.string "FLY outside of battle.$"

CeruleanCity_House1_Text_ObeyLv50Strength::
# 139 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 50 will obey\n"
	.string "you.\p"
	.string "That includes even outsiders you\n"
	.string "obtain in trades.\p"
	.string "POKéMON of higher levels will\n"
	.string "be unruly in battle, however.\p"
	.string "It also lets you use the move\n"
	.string "STRENGTH outside of battle.$"

CeruleanCity_House1_Text_DefenseStatSurf::
# 150 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The DEFENSE stat of all your\n"
	.string "POKéMON increases a little bit.\p"
	.string "It also lets you use the move\n"
	.string "SURF outside of battle.$"

CeruleanCity_House1_Text_ObeyLv70RockSmash::
# 157 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 70 will obey\n"
	.string "you.\p"
	.string "That includes even outsiders you\n"
	.string "obtain in trades.\p"
	.string "POKéMON of higher levels will\n"
	.string "be unruly in battle, however.\p"
	.string "It also lets you use the move\n"
	.string "ROCK SMASH outside of battle.$"

CeruleanCity_House1_Text_SpStatsWaterfall::
# 168 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "The SP. ATK and SP. DEF stats of\n"
	.string "all your POKéMON rise a little bit.\p"
	.string "It also lets you use the move\n"
	.string "WATERFALL outside of battle.$"

CeruleanCity_House1_Text_AllMonsWillObeyYou::
# 175 "data/maps/CeruleanCity_House1_Frlg/scripts.pory"
	.string "All POKéMON will obey you!$"
