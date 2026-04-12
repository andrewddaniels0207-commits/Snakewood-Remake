# 1 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_8F_OnLoad
# 5 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_OnLoad::
# 9 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_8F_DOOR, SilphCo_8F_OnLoad_2
# 11 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_OnLoad_1:
# 12 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 13 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 14 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_OnLoad_2:
# 15 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	call EventScript_Close8FDoor
# 17 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	goto SilphCo_8F_OnLoad_1
# 18 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 19 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 20 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_WorkerM::
# 21 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	lock
# 23 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 14 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 15 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 26 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 27 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	goto_if_ge SilphCo_8F_EventScript_WorkerM_2
# 28 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_WorkerM_1:
# 29 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 18 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_WonderIfSilphIsFinished
# 31 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	release
# 33 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 34 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 35 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_WorkerM_2:
# 36 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 37 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	goto SilphCo_8F_EventScript_WorkerMRocketsGone
# 38 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	goto SilphCo_8F_EventScript_WorkerM_1
# 39 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 40 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 41 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_WorkerMRocketsGone::
# 42 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 43 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_ThanksForSavingUs
# 44 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	release
# 46 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 47 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 49 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_FloorSign::
# 50 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_FloorSign, MSGBOX_SIGN
# 52 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 53 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 54 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 55 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_Parker::
# 56 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 35 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 57 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_PARKER, SilphCo_8F_Text_ParkerIntro, SilphCo_8F_Text_ParkerDefeat
# 58 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 36 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 61 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 63 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_Grunt1::
# 64 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 41 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 65 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_32, SilphCo_8F_Text_Grunt1Intro, SilphCo_8F_Text_Grunt1Defeat
# 66 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 42 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 69 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_EventScript_Grunt2::
# 72 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 47 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_36, SilphCo_8F_Text_Grunt2Intro, SilphCo_8F_Text_Grunt2Defeat
# 74 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 48 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 75 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	end
# 77 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 78 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 79 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_WonderIfSilphIsFinished::
# 80 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 52 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I wonder if SILPH is finished…$"
# 82 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 83 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ThanksForSavingUs::
# 84 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 56 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 85 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Thanks for saving us!$"
# 86 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 87 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt1Intro::
# 88 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 60 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 89 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "That's as far as you'll go!$"
# 90 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 91 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt1Defeat::
# 92 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 64 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 93 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Not enough grit!$"
# 94 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 95 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt1PostBattle::
# 96 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 68 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 97 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "If you don't turn back…\n"
# 98 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I'll call for backup!$"
# 99 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 100 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ParkerIntro::
# 101 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 102 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "You're causing us problems!$"
# 103 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 104 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ParkerDefeat::
# 105 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 77 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 106 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Huh?\n"
# 107 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I lost?$"
# 108 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 109 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ParkerPostBattle::
# 110 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 82 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 111 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "So, what do you think of SILPH\n"
# 112 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "BUILDING's maze?$"
# 113 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 114 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt2Intro::
# 115 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 87 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 116 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
# 117 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "BROTHERS!$"
# 118 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 119 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt2Defeat::
# 120 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 92 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 121 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Whoo!\n"
# 122 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Oh, Brothers!$"
# 123 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 124 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_Grunt2PostBattle::
# 125 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 97 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 126 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I'll leave you up to my brothers.$"
# 127 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 128 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_FloorSign::
# 129 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 101 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 130 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 131 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "8F$"
# 132 "data/maps/SilphCo_8F_Frlg/scripts.pory"

# 133 "data/maps/SilphCo_8F_Frlg/scripts.pory"
SilphCo_8F_Text_ToRocketBossMonsAreTools::
# 134 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 106 "data/maps/SilphCo_8F_Frlg/scripts.pory"
# 135 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "TEAM ROCKET's BOSS is terribly\n"
# 136 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "cruel!\p"
# 137 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "To him, POKéMON are just tools to\n"
# 138 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "be used.\p"
# 139 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "What will happen if that tyrant\n"
# 140 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "takes over our company…$"
