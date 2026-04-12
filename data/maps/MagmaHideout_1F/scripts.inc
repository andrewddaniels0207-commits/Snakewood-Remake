# 1 "data/maps/MagmaHideout_1F/scripts.pory"

# 2 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_MapScripts::
# 3 "data/maps/MagmaHideout_1F/scripts.pory"
# 2 "data/maps/MagmaHideout_1F/scripts.pory"
# 4 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
# 5 "data/maps/MagmaHideout_1F/scripts.pory"
	.byte 0
# 6 "data/maps/MagmaHideout_1F/scripts.pory"

# 7 "data/maps/MagmaHideout_1F/scripts.pory"

# 8 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnTransition::
# 9 "data/maps/MagmaHideout_1F/scripts.pory"
# 6 "data/maps/MagmaHideout_1F/scripts.pory"
# 10 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 11 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 12 "data/maps/MagmaHideout_1F/scripts.pory"

# 13 "data/maps/MagmaHideout_1F/scripts.pory"

# 14 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1::
# 15 "data/maps/MagmaHideout_1F/scripts.pory"
# 11 "data/maps/MagmaHideout_1F/scripts.pory"
# 16 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
# 17 "data/maps/MagmaHideout_1F/scripts.pory"
# 12 "data/maps/MagmaHideout_1F/scripts.pory"
# 18 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 20 "data/maps/MagmaHideout_1F/scripts.pory"

# 21 "data/maps/MagmaHideout_1F/scripts.pory"

# 22 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2::
# 23 "data/maps/MagmaHideout_1F/scripts.pory"
# 17 "data/maps/MagmaHideout_1F/scripts.pory"
# 24 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
# 25 "data/maps/MagmaHideout_1F/scripts.pory"
# 18 "data/maps/MagmaHideout_1F/scripts.pory"
# 26 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 28 "data/maps/MagmaHideout_1F/scripts.pory"

# 29 "data/maps/MagmaHideout_1F/scripts.pory"

# 30 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro::
# 31 "data/maps/MagmaHideout_1F/scripts.pory"
# 22 "data/maps/MagmaHideout_1F/scripts.pory"
# 32 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "When TEAM MAGMA has roll call, we get\n"
# 33 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "important guarding assignments in\l"
# 34 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "the order that we line up.\p"
# 35 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "That's why I'm stuck off in this corner.\n"
# 36 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late to roll call!$"
# 37 "data/maps/MagmaHideout_1F/scripts.pory"

# 38 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat::
# 39 "data/maps/MagmaHideout_1F/scripts.pory"
# 30 "data/maps/MagmaHideout_1F/scripts.pory"
# 40 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late for training sessions,\n"
# 41 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "too!\p"
# 42 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I hate to say it, but I'm wimpy…$"
# 43 "data/maps/MagmaHideout_1F/scripts.pory"

# 44 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle::
# 45 "data/maps/MagmaHideout_1F/scripts.pory"
# 36 "data/maps/MagmaHideout_1F/scripts.pory"
# 46 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Okay, I'll try to put a little more\n"
# 47 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "effort into things from now on…$"
# 48 "data/maps/MagmaHideout_1F/scripts.pory"

# 49 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro::
# 50 "data/maps/MagmaHideout_1F/scripts.pory"
# 41 "data/maps/MagmaHideout_1F/scripts.pory"
# 51 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Our leader told us to dig into\n"
# 52 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "MT. CHIMNEY, so we dug and dug.\p"
# 53 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "And in the course of digging, we came\n"
# 54 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "across something that blew our minds!\p"
# 55 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "What did we find?\p"
# 56 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Fuhahaha!\n"
# 57 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'll tell you if you beat me!$"
# 58 "data/maps/MagmaHideout_1F/scripts.pory"

# 59 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat::
# 60 "data/maps/MagmaHideout_1F/scripts.pory"
# 51 "data/maps/MagmaHideout_1F/scripts.pory"
# 61 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Arrgh!\n"
# 62 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Taken down!$"
# 63 "data/maps/MagmaHideout_1F/scripts.pory"

# 64 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle::
# 65 "data/maps/MagmaHideout_1F/scripts.pory"
# 56 "data/maps/MagmaHideout_1F/scripts.pory"
# 66 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I won't tell you after all.\n"
# 67 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "You'll find out when you get there!\p"
# 68 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "It'd be better if you saved surprises\n"
# 69 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "to the end, don't you think?$"
