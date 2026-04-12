SixIsland_WaterPath_House1_Frlg_MapScripts::
	.byte 0


SixIsland_WaterPath_House1_EventScript_Beauty::
# 4 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lock
# 5 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HERACROSS
# 7 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 8 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_2
SixIsland_WaterPath_House1_EventScript_Beauty_1:
# 11 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 12 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_MayIMeasureHeracross
# 13 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special ChoosePartyMon
# 14 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	waitstate
# 15 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 16 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ge SixIsland_WaterPath_House1_EventScript_Beauty_5
SixIsland_WaterPath_House1_EventScript_Beauty_4:
# 19 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special CompareHeracrossSize
# 20 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_8
SixIsland_WaterPath_House1_EventScript_Beauty_7:
# 23 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_11
SixIsland_WaterPath_House1_EventScript_Beauty_10:
# 26 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_14
SixIsland_WaterPath_House1_EventScript_Beauty_13:
# 29 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_17
SixIsland_WaterPath_House1_EventScript_Beauty_16:
# 32 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
	end

SixIsland_WaterPath_House1_EventScript_Beauty_2:
# 9 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty
	goto SixIsland_WaterPath_House1_EventScript_Beauty_1

SixIsland_WaterPath_House1_EventScript_Beauty_5:
# 17 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_DontShowMon
	goto SixIsland_WaterPath_House1_EventScript_Beauty_4

SixIsland_WaterPath_House1_EventScript_Beauty_8:
# 21 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownNonHeracross
	goto SixIsland_WaterPath_House1_EventScript_Beauty_7

SixIsland_WaterPath_House1_EventScript_Beauty_11:
# 24 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross
	goto SixIsland_WaterPath_House1_EventScript_Beauty_10

SixIsland_WaterPath_House1_EventScript_Beauty_14:
# 27 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	goto SixIsland_WaterPath_House1_EventScript_Beauty_13

SixIsland_WaterPath_House1_EventScript_Beauty_17:
# 30 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross
	goto SixIsland_WaterPath_House1_EventScript_Beauty_16


SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty::
# 37 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross
# 38 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_DontShowMon::
# 43 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_ShownNonHeracross::
# 48 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ThisWontDo
# 49 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross::
# 54 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross_2
SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross_1:
# 57 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest
# 58 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross_2:
# 55 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	goto SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross_1


SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross::
# 63 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross_2
SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross_1:
# 66 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore
# 67 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross_2:
# 64 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	goto SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross_1


SixIsland_WaterPath_House1_EventScript_ShownBigHeracross::
# 72 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
# 73 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward
# 74 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	giveitem ITEM_NEST_BALL
# 75 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SixIsland_WaterPath_House1_EventScript_ShownBigHeracross_2
SixIsland_WaterPath_House1_EventScript_ShownBigHeracross_1:
# 78 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne
# 79 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownBigHeracross_2:
# 76 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall
	goto SixIsland_WaterPath_House1_EventScript_ShownBigHeracross_1


SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall::
# 84 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_YourBagIsFull
# 85 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	release
	end


SixIsland_WaterPath_House1_EventScript_SizeRecord::
# 90 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lockall
# 91 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_SizeRecord_2
SixIsland_WaterPath_House1_EventScript_SizeRecord_1:
# 94 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort
# 95 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
	end

SixIsland_WaterPath_House1_EventScript_SizeRecord_2:
# 92 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty
	goto SixIsland_WaterPath_House1_EventScript_SizeRecord_1


SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty::
# 100 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 101 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches
# 102 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
	end


SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross::
# 106 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Hera, hera, HERACROSS!\n"
	.string "Big and shiny, it's the bug boss!\l"
	.string "Love it, need it, HERACROSS!$"

SixIsland_WaterPath_House1_Text_MayIMeasureHeracross::
# 112 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeeek!\n"
	.string "That's a HERACROSS!\p"
	.string "Please, please, may I measure how\n"
	.string "big it is?$"

SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward::
# 119 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeek, it's {STR_VAR_2} inches!\n"
	.string "I've never seen anything like this!\l"
	.string "You deserve a reward!$"

SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne::
# 125 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "I want to see a much, much bigger\n"
	.string "HERACROSS than that one.\p"
	.string "Oh, how I adore them, big\n"
	.string "HERACROSS!$"

SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore::
# 132 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Huh? This {STR_VAR_2}-inch measurement…\n"
	.string "Oh, boo! It's the same as before.$"

SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest::
# 137 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, it's just {STR_VAR_2} inches.\n"
	.string "The HERACROSS before was bigger.\p"
	.string "It was {STR_VAR_3} inches, the biggest\n"
	.string "HERACROSS you've brought me.$"

SixIsland_WaterPath_House1_Text_ThisWontDo::
# 144 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, no! This won't do!\p"
	.string "HERACROSS looks much more macho\n"
	.string "and cool, and has a lovely horn!$"

SixIsland_WaterPath_House1_Text_YourBagIsFull::
# 150 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Your BAG is full.\n"
	.string "My reward won't fit.$"

SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches::
# 155 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "The biggest HERACROSS that I have\n"
	.string "ever seen measured so far is:\p"
	.string "{STR_VAR_3} inches!$"

SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort::
# 161 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
	.string "It has spaces for writing in\n"
	.string "records of some kind.$"
