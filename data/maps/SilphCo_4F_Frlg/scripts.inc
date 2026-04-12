# 1 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_OnLoad
# 5 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_OnLoad::
# 9 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_4F_DOOR_1, SilphCo_4F_OnLoad_2
# 11 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_OnLoad_1:
# 12 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 9 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_4F_DOOR_2, SilphCo_4F_OnLoad_5
# 14 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_OnLoad_4:
# 15 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 16 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 17 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_OnLoad_2:
# 18 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	call EventScript_Close4FDoor1
# 20 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto SilphCo_4F_OnLoad_1
# 21 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 22 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_OnLoad_5:
# 23 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	call EventScript_Close4FDoor2
# 25 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto SilphCo_4F_OnLoad_4
# 26 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 27 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 28 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_WorkerM::
# 29 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	lock
# 31 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 17 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	faceplayer
# 33 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 18 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 34 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 35 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto_if_ge SilphCo_4F_EventScript_WorkerM_2
# 36 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_WorkerM_1:
# 37 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 21 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 38 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
# 39 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 40 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	release
# 41 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 42 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 43 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_WorkerM_2:
# 44 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto SilphCo_4F_EventScript_WorkerMRocketsGone
# 46 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto SilphCo_4F_EventScript_WorkerM_1
# 47 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 49 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_WorkerMRocketsGone::
# 50 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_TeamRocketIsGone
# 52 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 28 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	release
# 54 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 55 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 56 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 57 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_FloorSign::
# 58 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 33 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
# 60 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 61 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 63 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_Rodney::
# 64 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 38 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 65 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
# 66 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 39 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 69 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_Grunt1::
# 72 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 44 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
# 74 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 75 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 77 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 78 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 79 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_EventScript_Grunt2::
# 80 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 50 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
# 82 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	end
# 85 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 86 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 87 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_CantYouSeeImHiding::
# 88 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 55 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 89 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Sssh!\n"
# 90 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Can't you see I'm hiding?$"
# 91 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 92 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_TeamRocketIsGone::
# 93 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 60 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 94 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Huh?\n"
# 95 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "TEAM ROCKET is gone?$"
# 96 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 97 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt1Intro::
# 98 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 65 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "TEAM ROCKET has taken control\n"
# 100 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "of SILPH CO.!$"
# 101 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 102 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt1Defeat::
# 103 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 70 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 104 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Arrgh!$"
# 105 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 106 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt1PostBattle::
# 107 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 74 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 108 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Fwahahaha!\n"
# 109 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "My BOSS has been after this place!$"
# 110 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 111 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_RodneyIntro::
# 112 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 79 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 113 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "My POKéMON is my loyal servant.$"
# 114 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 115 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_RodneyDefeat::
# 116 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 117 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Darn!\n"
# 118 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "You weak POKéMON!$"
# 119 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 120 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_RodneyPostBattle::
# 121 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 88 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 122 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "The doors are electronically\n"
# 123 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "locked.\p"
# 124 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "It takes a CARD KEY to open the\n"
# 125 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "doors here.$"
# 126 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 127 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt2Intro::
# 128 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 95 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 129 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Intruder spotted!$"
# 130 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 131 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt2Defeat::
# 132 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 133 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Who are you?$"
# 134 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 135 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_Grunt2PostBattle::
# 136 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 103 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 137 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "I better tell the BOSS on 11F!$"
# 138 "data/maps/SilphCo_4F_Frlg/scripts.pory"

# 139 "data/maps/SilphCo_4F_Frlg/scripts.pory"
SilphCo_4F_Text_FloorSign::
# 140 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 107 "data/maps/SilphCo_4F_Frlg/scripts.pory"
# 141 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 142 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "4F$"
