SootopolisCity_House2_MapScripts::
	.byte 0


SootopolisCity_House2_EventScript_ExpertF::
# 4 "data/maps/SootopolisCity_House2/scripts.pory"
	lock
# 5 "data/maps/SootopolisCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
# 7 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_2
SootopolisCity_House2_EventScript_ExpertF_1:
# 10 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_5
SootopolisCity_House2_EventScript_ExpertF_4:
# 13 "data/maps/SootopolisCity_House2/scripts.pory"
	release
	end

SootopolisCity_House2_EventScript_ExpertF_2:
# 8 "data/maps/SootopolisCity_House2/scripts.pory"
	call SootopolisCity_House2_EventScript_KnowAboutOrbs
	goto SootopolisCity_House2_EventScript_ExpertF_1

SootopolisCity_House2_EventScript_ExpertF_5:
# 11 "data/maps/SootopolisCity_House2/scripts.pory"
	call SootopolisCity_House2_EventScript_DontKnowAboutOrbs
	goto SootopolisCity_House2_EventScript_ExpertF_4


SootopolisCity_House2_EventScript_KnowAboutOrbs::
# 18 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	return


SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
# 23 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
	return


SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs::
# 27 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "MT. PYRE…\p"
	.string "At its peak are two orbs placed side\n"
	.string "by side. Did you know?$"

SootopolisCity_House2_Text_YesTwoOrbsSideBySide::
# 33 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Yes, two orbs side by side…\p"
	.string "The sight of them together…\n"
	.string "It is somehow soothing…$"

SootopolisCity_House2_Text_OughtToVisitAndSee::
# 39 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Is that so?\n"
	.string "Perhaps you ought to visit and see…$"
