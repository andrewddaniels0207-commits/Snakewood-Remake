SilphCo_10F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
	.byte 0


SilphCo_10F_OnLoad::
# 6 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_10F_DOOR, SilphCo_10F_OnLoad_2
SilphCo_10F_OnLoad_1:
	end

SilphCo_10F_OnLoad_2:
# 7 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	call EventScript_Close10FDoor
	goto SilphCo_10F_OnLoad_1


SilphCo_10F_EventScript_WorkerF::
# 13 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	lock
# 14 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	faceplayer
# 15 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_10F_EventScript_WorkerF_2
SilphCo_10F_EventScript_WorkerF_1:
# 18 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_WaaaImScared
# 19 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	release
	end

SilphCo_10F_EventScript_WorkerF_2:
# 16 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto SilphCo_10F_EventScript_WorkerFRocketsGone
	goto SilphCo_10F_EventScript_WorkerF_1


SilphCo_10F_EventScript_WorkerFRocketsGone::
# 24 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
# 25 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	release
	end


SilphCo_10F_EventScript_FloorSign::
# 30 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_10F_EventScript_Travis::
# 35 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
# 36 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_10F_EventScript_Grunt::
# 41 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
# 42 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_10F_Text_GruntIntro::
# 46 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Welcome to 10F!\n"
	.string "So good of you to join me!$"

SilphCo_10F_Text_GruntDefeat::
# 51 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "I'm stunned!$"

SilphCo_10F_Text_GruntPostBattle::
# 55 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Nice try, but the boardroom is up\n"
	.string "one more floor.$"

SilphCo_10F_Text_TravisIntro::
# 60 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Enough of your silly games!$"

SilphCo_10F_Text_TravisDefeat::
# 64 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "No continues left!$"

SilphCo_10F_Text_TravisPostBattle::
# 68 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Are you satisfied with beating me?\n"
	.string "Then go on home!$"

SilphCo_10F_Text_WaaaImScared::
# 73 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Waaaaa!\n"
	.string "I'm scared!$"

SilphCo_10F_Text_KeepMeCryingASecret::
# 78 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "About me crying…\n"
	.string "Please keep it a secret.$"

SilphCo_10F_Text_FloorSign::
# 83 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "10F$"
