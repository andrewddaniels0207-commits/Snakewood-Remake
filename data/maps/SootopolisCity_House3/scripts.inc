SootopolisCity_House3_MapScripts::
	.byte 0


SootopolisCity_House3_EventScript_Woman::
# 4 "data/maps/SootopolisCity_House3/scripts.pory"
	lock
# 5 "data/maps/SootopolisCity_House3/scripts.pory"
	faceplayer
# 6 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SootopolisCity_House3_EventScript_Woman_2
SootopolisCity_House3_EventScript_Woman_1:
# 10 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
# 11 "data/maps/SootopolisCity_House3/scripts.pory"
	release
	end

SootopolisCity_House3_EventScript_Woman_2:
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
	goto SootopolisCity_House3_EventScript_HaveFans
	goto SootopolisCity_House3_EventScript_Woman_1


SootopolisCity_House3_EventScript_HaveFans::
# 16 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
# 17 "data/maps/SootopolisCity_House3/scripts.pory"
	release
	end


SootopolisCity_House3_EventScript_Girl::
# 22 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
	end


SootopolisCity_House3_Text_JuanHasManyFansDoYou::
# 26 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\p"
	.string "SOOTOPOLIS's JUAN has many fans.\n"
	.string "Even more than his student WALLACE!\p"
	.string "Do you have any?$"

SootopolisCity_House3_Text_YouMustBePrettyStrong::
# 33 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, then you must be pretty strong.$"

SootopolisCity_House3_Text_LonesomeTryWorkingHarder::
# 37 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, dear…\n"
	.string "That's a little lonesome.\p"
	.string "Try working a little harder to get\n"
	.string "a fan following.$"

SootopolisCity_House3_Text_TrainerFanClubWasWild::
# 44 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Dedicated fans come over from even\n"
	.string "outside of HOENN.\p"
	.string "It was really wild when I went to the\n"
	.string "TRAINER FAN CLUB in LILYCOVE.$"
