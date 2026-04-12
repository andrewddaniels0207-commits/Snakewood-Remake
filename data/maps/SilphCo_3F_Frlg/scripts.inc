# 1 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
# 5 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_OnLoad::
# 9 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_3F_DOOR_1, SilphCo_3F_OnLoad_2
# 11 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_OnLoad_1:
# 12 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 9 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_3F_DOOR_2, SilphCo_3F_OnLoad_5
# 14 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_OnLoad_4:
# 15 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 16 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 17 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_OnLoad_2:
# 18 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	call EventScript_Close3FDoor1
# 20 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto SilphCo_3F_OnLoad_1
# 21 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 22 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_OnLoad_5:
# 23 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	call EventScript_Close3FDoor2
# 25 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto SilphCo_3F_OnLoad_4
# 26 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 27 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 28 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_WorkerM::
# 29 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	lock
# 31 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 17 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	faceplayer
# 33 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 18 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 34 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 35 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto_if_ge SilphCo_3F_EventScript_WorkerM_2
# 36 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_WorkerM_1:
# 37 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 21 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 38 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_WhatAmIToDo
# 39 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 40 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	release
# 41 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 42 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 43 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_WorkerM_2:
# 44 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto SilphCo_3F_EventScript_WorkerMRocketsGone
# 46 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto SilphCo_3F_EventScript_WorkerM_1
# 47 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 49 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_WorkerMRocketsGone::
# 50 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
# 52 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 28 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	release
# 54 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 55 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 56 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 57 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_FloorSign::
# 58 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 33 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
# 60 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 61 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 63 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_Jose::
# 64 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 38 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 65 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
# 66 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 39 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 69 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_EventScript_Grunt::
# 72 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 44 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
# 74 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 75 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	end
# 77 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 78 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 79 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_WhatAmIToDo::
# 80 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 49 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I work for SILPH CO.\n"
# 82 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "What am I to do?$"
# 83 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 84 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_YouAndYourMonsSavedUs::
# 85 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 54 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 86 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
# 87 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "You and your POKéMON saved us!$"
# 88 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 89 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_GruntIntro::
# 90 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "Quit messing with us, kid!$"
# 92 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 93 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_GruntDefeat::
# 94 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 63 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 95 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I give up!$"
# 96 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 97 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_GruntPostBattle::
# 98 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "A hint? You can open doors with\n"
# 100 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "a CARD KEY!$"
# 101 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 102 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_JoseIntro::
# 103 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 72 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 104 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I support TEAM ROCKET more than\n"
# 105 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I support SILPH CO.!$"
# 106 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 107 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_JoseDefeat::
# 108 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 77 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 109 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "You really got me!$"
# 110 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 111 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_JosePostBattle::
# 112 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 113 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "Humph…\p"
# 114 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "TEAM ROCKET said that if I helped\n"
# 115 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "them, they'd let me study POKéMON.$"
# 116 "data/maps/SilphCo_3F_Frlg/scripts.pory"

# 117 "data/maps/SilphCo_3F_Frlg/scripts.pory"
SilphCo_3F_Text_FloorSign::
# 118 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 87 "data/maps/SilphCo_3F_Frlg/scripts.pory"
# 119 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 120 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "3F$"
