# 1 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
# 5 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_OnLoad::
# 9 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_10F_DOOR, SilphCo_10F_OnLoad_2
# 11 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_OnLoad_1:
# 12 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 13 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 14 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_OnLoad_2:
# 15 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	call EventScript_Close10FDoor
# 17 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto SilphCo_10F_OnLoad_1
# 18 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 19 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 20 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_WorkerF::
# 21 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	lock
# 23 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 14 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 15 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 26 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 27 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto_if_ge SilphCo_10F_EventScript_WorkerF_2
# 28 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_WorkerF_1:
# 29 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 18 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_WaaaImScared
# 31 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	release
# 33 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 34 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 35 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_WorkerF_2:
# 36 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 37 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto SilphCo_10F_EventScript_WorkerFRocketsGone
# 38 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto SilphCo_10F_EventScript_WorkerF_1
# 39 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 40 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 41 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_WorkerFRocketsGone::
# 42 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 43 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
# 44 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	release
# 46 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 47 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 48 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 49 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_FloorSign::
# 50 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
# 52 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 53 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 54 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 55 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_Travis::
# 56 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 35 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 57 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
# 58 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 36 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 61 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 63 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_EventScript_Grunt::
# 64 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 41 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 65 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
# 66 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 42 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	end
# 69 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_GruntIntro::
# 72 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 46 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Welcome to 10F!\n"
# 74 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "So good of you to join me!$"
# 75 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 76 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_GruntDefeat::
# 77 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 78 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "I'm stunned!$"
# 79 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 80 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_GruntPostBattle::
# 81 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 55 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 82 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Nice try, but the boardroom is up\n"
# 83 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "one more floor.$"
# 84 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 85 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_TravisIntro::
# 86 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 60 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 87 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Enough of your silly games!$"
# 88 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 89 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_TravisDefeat::
# 90 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 64 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "No continues left!$"
# 92 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 93 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_TravisPostBattle::
# 94 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 68 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 95 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Are you satisfied with beating me?\n"
# 96 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Then go on home!$"
# 97 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 98 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_WaaaImScared::
# 99 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 100 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Waaaaa!\n"
# 101 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "I'm scared!$"
# 102 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 103 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_KeepMeCryingASecret::
# 104 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 78 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 105 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "About me crying…\n"
# 106 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Please keep it a secret.$"
# 107 "data/maps/SilphCo_10F_Frlg/scripts.pory"

# 108 "data/maps/SilphCo_10F_Frlg/scripts.pory"
SilphCo_10F_Text_FloorSign::
# 109 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_10F_Frlg/scripts.pory"
# 110 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 111 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "10F$"
