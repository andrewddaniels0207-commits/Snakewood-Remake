# 1 "data/maps/SootopolisCity_House2/scripts.pory"

# 2 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_MapScripts::
# 3 "data/maps/SootopolisCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House2/scripts.pory"

# 5 "data/maps/SootopolisCity_House2/scripts.pory"

# 6 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_ExpertF::
# 7 "data/maps/SootopolisCity_House2/scripts.pory"
# 4 "data/maps/SootopolisCity_House2/scripts.pory"
# 8 "data/maps/SootopolisCity_House2/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House2/scripts.pory"
# 5 "data/maps/SootopolisCity_House2/scripts.pory"
# 10 "data/maps/SootopolisCity_House2/scripts.pory"
	faceplayer
# 11 "data/maps/SootopolisCity_House2/scripts.pory"
# 6 "data/maps/SootopolisCity_House2/scripts.pory"
# 12 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
# 13 "data/maps/SootopolisCity_House2/scripts.pory"
# 7 "data/maps/SootopolisCity_House2/scripts.pory"
# 14 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, YES
# 15 "data/maps/SootopolisCity_House2/scripts.pory"
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_2
# 16 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_ExpertF_1:
# 17 "data/maps/SootopolisCity_House2/scripts.pory"
# 10 "data/maps/SootopolisCity_House2/scripts.pory"
# 18 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, NO
# 19 "data/maps/SootopolisCity_House2/scripts.pory"
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_5
# 20 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_ExpertF_4:
# 21 "data/maps/SootopolisCity_House2/scripts.pory"
# 13 "data/maps/SootopolisCity_House2/scripts.pory"
# 22 "data/maps/SootopolisCity_House2/scripts.pory"
	release
# 23 "data/maps/SootopolisCity_House2/scripts.pory"
	end
# 24 "data/maps/SootopolisCity_House2/scripts.pory"

# 25 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_ExpertF_2:
# 26 "data/maps/SootopolisCity_House2/scripts.pory"
# 8 "data/maps/SootopolisCity_House2/scripts.pory"
# 27 "data/maps/SootopolisCity_House2/scripts.pory"
	call SootopolisCity_House2_EventScript_KnowAboutOrbs
# 28 "data/maps/SootopolisCity_House2/scripts.pory"
	goto SootopolisCity_House2_EventScript_ExpertF_1
# 29 "data/maps/SootopolisCity_House2/scripts.pory"

# 30 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_ExpertF_5:
# 31 "data/maps/SootopolisCity_House2/scripts.pory"
# 11 "data/maps/SootopolisCity_House2/scripts.pory"
# 32 "data/maps/SootopolisCity_House2/scripts.pory"
	call SootopolisCity_House2_EventScript_DontKnowAboutOrbs
# 33 "data/maps/SootopolisCity_House2/scripts.pory"
	goto SootopolisCity_House2_EventScript_ExpertF_4
# 34 "data/maps/SootopolisCity_House2/scripts.pory"

# 35 "data/maps/SootopolisCity_House2/scripts.pory"

# 36 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_KnowAboutOrbs::
# 37 "data/maps/SootopolisCity_House2/scripts.pory"
# 18 "data/maps/SootopolisCity_House2/scripts.pory"
# 38 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
# 39 "data/maps/SootopolisCity_House2/scripts.pory"
	return
# 40 "data/maps/SootopolisCity_House2/scripts.pory"

# 41 "data/maps/SootopolisCity_House2/scripts.pory"

# 42 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
# 43 "data/maps/SootopolisCity_House2/scripts.pory"
# 23 "data/maps/SootopolisCity_House2/scripts.pory"
# 44 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
# 45 "data/maps/SootopolisCity_House2/scripts.pory"
	return
# 46 "data/maps/SootopolisCity_House2/scripts.pory"

# 47 "data/maps/SootopolisCity_House2/scripts.pory"

# 48 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs::
# 49 "data/maps/SootopolisCity_House2/scripts.pory"
# 27 "data/maps/SootopolisCity_House2/scripts.pory"
# 50 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "MT. PYRE…\p"
# 51 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "At its peak are two orbs placed side\n"
# 52 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "by side. Did you know?$"
# 53 "data/maps/SootopolisCity_House2/scripts.pory"

# 54 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_YesTwoOrbsSideBySide::
# 55 "data/maps/SootopolisCity_House2/scripts.pory"
# 33 "data/maps/SootopolisCity_House2/scripts.pory"
# 56 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Yes, two orbs side by side…\p"
# 57 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "The sight of them together…\n"
# 58 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "It is somehow soothing…$"
# 59 "data/maps/SootopolisCity_House2/scripts.pory"

# 60 "data/maps/SootopolisCity_House2/scripts.pory"
SootopolisCity_House2_Text_OughtToVisitAndSee::
# 61 "data/maps/SootopolisCity_House2/scripts.pory"
# 39 "data/maps/SootopolisCity_House2/scripts.pory"
# 62 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Is that so?\n"
# 63 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Perhaps you ought to visit and see…$"
