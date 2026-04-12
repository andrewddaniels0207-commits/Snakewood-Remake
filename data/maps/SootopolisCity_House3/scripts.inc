# 1 "data/maps/SootopolisCity_House3/scripts.pory"

# 2 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_MapScripts::
# 3 "data/maps/SootopolisCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House3/scripts.pory"

# 5 "data/maps/SootopolisCity_House3/scripts.pory"

# 6 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Woman::
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
# 4 "data/maps/SootopolisCity_House3/scripts.pory"
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
	lock
# 9 "data/maps/SootopolisCity_House3/scripts.pory"
# 5 "data/maps/SootopolisCity_House3/scripts.pory"
# 10 "data/maps/SootopolisCity_House3/scripts.pory"
	faceplayer
# 11 "data/maps/SootopolisCity_House3/scripts.pory"
# 6 "data/maps/SootopolisCity_House3/scripts.pory"
# 12 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
# 13 "data/maps/SootopolisCity_House3/scripts.pory"
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
# 14 "data/maps/SootopolisCity_House3/scripts.pory"
	compare VAR_RESULT, YES
# 15 "data/maps/SootopolisCity_House3/scripts.pory"
	goto_if_eq SootopolisCity_House3_EventScript_Woman_2
# 16 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Woman_1:
# 17 "data/maps/SootopolisCity_House3/scripts.pory"
# 10 "data/maps/SootopolisCity_House3/scripts.pory"
# 18 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
# 19 "data/maps/SootopolisCity_House3/scripts.pory"
# 11 "data/maps/SootopolisCity_House3/scripts.pory"
# 20 "data/maps/SootopolisCity_House3/scripts.pory"
	release
# 21 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_House3/scripts.pory"

# 23 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Woman_2:
# 24 "data/maps/SootopolisCity_House3/scripts.pory"
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
# 25 "data/maps/SootopolisCity_House3/scripts.pory"
	goto SootopolisCity_House3_EventScript_HaveFans
# 26 "data/maps/SootopolisCity_House3/scripts.pory"
	goto SootopolisCity_House3_EventScript_Woman_1
# 27 "data/maps/SootopolisCity_House3/scripts.pory"

# 28 "data/maps/SootopolisCity_House3/scripts.pory"

# 29 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_HaveFans::
# 30 "data/maps/SootopolisCity_House3/scripts.pory"
# 16 "data/maps/SootopolisCity_House3/scripts.pory"
# 31 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
# 32 "data/maps/SootopolisCity_House3/scripts.pory"
# 17 "data/maps/SootopolisCity_House3/scripts.pory"
# 33 "data/maps/SootopolisCity_House3/scripts.pory"
	release
# 34 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 35 "data/maps/SootopolisCity_House3/scripts.pory"

# 36 "data/maps/SootopolisCity_House3/scripts.pory"

# 37 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Girl::
# 38 "data/maps/SootopolisCity_House3/scripts.pory"
# 22 "data/maps/SootopolisCity_House3/scripts.pory"
# 39 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
# 40 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 41 "data/maps/SootopolisCity_House3/scripts.pory"

# 42 "data/maps/SootopolisCity_House3/scripts.pory"

# 43 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_JuanHasManyFansDoYou::
# 44 "data/maps/SootopolisCity_House3/scripts.pory"
# 26 "data/maps/SootopolisCity_House3/scripts.pory"
# 45 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\p"
# 46 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "SOOTOPOLIS's JUAN has many fans.\n"
# 47 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Even more than his student WALLACE!\p"
# 48 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Do you have any?$"
# 49 "data/maps/SootopolisCity_House3/scripts.pory"

# 50 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_YouMustBePrettyStrong::
# 51 "data/maps/SootopolisCity_House3/scripts.pory"
# 33 "data/maps/SootopolisCity_House3/scripts.pory"
# 52 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, then you must be pretty strong.$"
# 53 "data/maps/SootopolisCity_House3/scripts.pory"

# 54 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_LonesomeTryWorkingHarder::
# 55 "data/maps/SootopolisCity_House3/scripts.pory"
# 37 "data/maps/SootopolisCity_House3/scripts.pory"
# 56 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, dear…\n"
# 57 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "That's a little lonesome.\p"
# 58 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Try working a little harder to get\n"
# 59 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "a fan following.$"
# 60 "data/maps/SootopolisCity_House3/scripts.pory"

# 61 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_TrainerFanClubWasWild::
# 62 "data/maps/SootopolisCity_House3/scripts.pory"
# 44 "data/maps/SootopolisCity_House3/scripts.pory"
# 63 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Dedicated fans come over from even\n"
# 64 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "outside of HOENN.\p"
# 65 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "It was really wild when I went to the\n"
# 66 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "TRAINER FAN CLUB in LILYCOVE.$"
