# 1 "data/maps/SootopolisCity_House1/scripts.pory"

# 2 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_MapScripts::
# 3 "data/maps/SootopolisCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House1/scripts.pory"

# 5 "data/maps/SootopolisCity_House1/scripts.pory"

# 6 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
# 7 "data/maps/SootopolisCity_House1/scripts.pory"
# 4 "data/maps/SootopolisCity_House1/scripts.pory"
# 8 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House1/scripts.pory"
# 5 "data/maps/SootopolisCity_House1/scripts.pory"
# 10 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 11 "data/maps/SootopolisCity_House1/scripts.pory"
# 6 "data/maps/SootopolisCity_House1/scripts.pory"
# 12 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BRICK_BREAK, SootopolisCity_House1_EventScript_BrickBreakBlackBelt_2
# 13 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt_1:
# 14 "data/maps/SootopolisCity_House1/scripts.pory"
# 9 "data/maps/SootopolisCity_House1/scripts.pory"
# 15 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
# 16 "data/maps/SootopolisCity_House1/scripts.pory"
# 10 "data/maps/SootopolisCity_House1/scripts.pory"
# 17 "data/maps/SootopolisCity_House1/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 18 "data/maps/SootopolisCity_House1/scripts.pory"
# 11 "data/maps/SootopolisCity_House1/scripts.pory"
# 19 "data/maps/SootopolisCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
# 20 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_eq SootopolisCity_House1_EventScript_BrickBreakBlackBelt_5
# 21 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt_4:
# 22 "data/maps/SootopolisCity_House1/scripts.pory"
# 14 "data/maps/SootopolisCity_House1/scripts.pory"
# 23 "data/maps/SootopolisCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRICK_BREAK
# 24 "data/maps/SootopolisCity_House1/scripts.pory"
# 15 "data/maps/SootopolisCity_House1/scripts.pory"
# 25 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 26 "data/maps/SootopolisCity_House1/scripts.pory"
# 16 "data/maps/SootopolisCity_House1/scripts.pory"
# 27 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 28 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 29 "data/maps/SootopolisCity_House1/scripts.pory"

# 30 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt_2:
# 31 "data/maps/SootopolisCity_House1/scripts.pory"
# 7 "data/maps/SootopolisCity_House1/scripts.pory"
# 32 "data/maps/SootopolisCity_House1/scripts.pory"
	goto SootopolisCity_House1_EventScript_ReceivedBrickBreak
# 33 "data/maps/SootopolisCity_House1/scripts.pory"
	goto SootopolisCity_House1_EventScript_BrickBreakBlackBelt_1
# 34 "data/maps/SootopolisCity_House1/scripts.pory"

# 35 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt_5:
# 36 "data/maps/SootopolisCity_House1/scripts.pory"
# 12 "data/maps/SootopolisCity_House1/scripts.pory"
# 37 "data/maps/SootopolisCity_House1/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 38 "data/maps/SootopolisCity_House1/scripts.pory"
	goto SootopolisCity_House1_EventScript_BrickBreakBlackBelt_4
# 39 "data/maps/SootopolisCity_House1/scripts.pory"

# 40 "data/maps/SootopolisCity_House1/scripts.pory"

# 41 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_ReceivedBrickBreak::
# 42 "data/maps/SootopolisCity_House1/scripts.pory"
# 21 "data/maps/SootopolisCity_House1/scripts.pory"
# 43 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 44 "data/maps/SootopolisCity_House1/scripts.pory"
# 22 "data/maps/SootopolisCity_House1/scripts.pory"
# 45 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 46 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 47 "data/maps/SootopolisCity_House1/scripts.pory"

# 48 "data/maps/SootopolisCity_House1/scripts.pory"

# 49 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_Kecleon::
# 50 "data/maps/SootopolisCity_House1/scripts.pory"
# 27 "data/maps/SootopolisCity_House1/scripts.pory"
# 51 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 52 "data/maps/SootopolisCity_House1/scripts.pory"
# 28 "data/maps/SootopolisCity_House1/scripts.pory"
# 53 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 54 "data/maps/SootopolisCity_House1/scripts.pory"
# 29 "data/maps/SootopolisCity_House1/scripts.pory"
# 55 "data/maps/SootopolisCity_House1/scripts.pory"
	waitse
# 56 "data/maps/SootopolisCity_House1/scripts.pory"
# 30 "data/maps/SootopolisCity_House1/scripts.pory"
# 57 "data/maps/SootopolisCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 58 "data/maps/SootopolisCity_House1/scripts.pory"
# 31 "data/maps/SootopolisCity_House1/scripts.pory"
# 59 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 60 "data/maps/SootopolisCity_House1/scripts.pory"
# 32 "data/maps/SootopolisCity_House1/scripts.pory"
# 61 "data/maps/SootopolisCity_House1/scripts.pory"
	waitmoncry
# 62 "data/maps/SootopolisCity_House1/scripts.pory"
# 33 "data/maps/SootopolisCity_House1/scripts.pory"
# 63 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 64 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 65 "data/maps/SootopolisCity_House1/scripts.pory"

# 66 "data/maps/SootopolisCity_House1/scripts.pory"

# 67 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_DevelopedThisTM::
# 68 "data/maps/SootopolisCity_House1/scripts.pory"
# 37 "data/maps/SootopolisCity_House1/scripts.pory"
# 69 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "For thirty years I've remained in\n"
# 70 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "SOOTOPOLIS honing my skills.\p"
# 71 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "I developed a shattering TM.\n"
# 72 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "I bequeath it to you!$"
# 73 "data/maps/SootopolisCity_House1/scripts.pory"

# 74 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_ExplainBrickBreak::
# 75 "data/maps/SootopolisCity_House1/scripts.pory"
# 44 "data/maps/SootopolisCity_House1/scripts.pory"
# 76 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "TM31 contains BRICK BREAK! It's a move\n"
# 77 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "so horrible that I can't describe it.$"
# 78 "data/maps/SootopolisCity_House1/scripts.pory"

# 79 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_Kecleon::
# 80 "data/maps/SootopolisCity_House1/scripts.pory"
# 49 "data/maps/SootopolisCity_House1/scripts.pory"
# 81 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "KECLEON: Puu puhyaah.$"
