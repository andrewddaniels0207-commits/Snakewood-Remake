# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter::
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_Cutter_2
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter_1:
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter_2:
# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto RustboroCity_CuttersHouse_EventScript_ExplainCut
# 29 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto RustboroCity_CuttersHouse_EventScript_Cutter_1
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut::
# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse::
# 47 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 48 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That determined expression…\n"
# 49 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That limber way you move…\l"
# 50 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "And your well-trained POKéMON…\p"
# 51 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "You're obviously a skilled TRAINER!\p"
# 52 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No, wait, don't say a word.\n"
# 53 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I can tell just by looking at you.\p"
# 54 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I'm sure that you can put this\n"
# 55 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "HIDDEN MACHINE to good use.\p"
# 56 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No need to be modest or shy.\n"
# 57 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Go on, take it!$"
# 58 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 59 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_ExplainCut::
# 60 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 61 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That HIDDEN MACHINE, or HM for\n"
# 62 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "short, is CUT.\p"
# 63 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "An HM move is one that can be used\n"
# 64 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "by POKéMON outside of battle.\p"
# 65 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Any POKéMON that's learned CUT can\n"
# 66 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "chop down thin trees if the TRAINER\l"
# 67 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "has earned the STONE BADGE.\p"
# 68 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "And, unlike a TM, an HM can be used\n"
# 69 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "more than once.$"
# 70 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 71 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees::
# 72 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 53 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
# 73 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\n"
# 74 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "RUSTBORO, my dad helped out.\p"
# 75 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "He made his POKéMON use CUT to clear\n"
# 76 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "the land of trees.$"
