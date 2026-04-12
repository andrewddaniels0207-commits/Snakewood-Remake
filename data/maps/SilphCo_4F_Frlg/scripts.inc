SilphCo_4F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_OnLoad
	.byte 0


SilphCo_4F_OnLoad::
# 6 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_4F_DOOR_1, SilphCo_4F_OnLoad_2
SilphCo_4F_OnLoad_1:
# 9 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_4F_DOOR_2, SilphCo_4F_OnLoad_5
SilphCo_4F_OnLoad_4:
	end

SilphCo_4F_OnLoad_2:
# 7 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	call EventScript_Close4FDoor1
	goto SilphCo_4F_OnLoad_1

SilphCo_4F_OnLoad_5:
# 10 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	call EventScript_Close4FDoor2
	goto SilphCo_4F_OnLoad_4


SilphCo_4F_EventScript_WorkerM::
# 16 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	lock
# 17 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	faceplayer
# 18 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_4F_EventScript_WorkerM_2
SilphCo_4F_EventScript_WorkerM_1:
# 21 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
# 22 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	release
	end

SilphCo_4F_EventScript_WorkerM_2:
# 19 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto SilphCo_4F_EventScript_WorkerMRocketsGone
	goto SilphCo_4F_EventScript_WorkerM_1


SilphCo_4F_EventScript_WorkerMRocketsGone::
# 27 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_TeamRocketIsGone
# 28 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	release
	end


SilphCo_4F_EventScript_FloorSign::
# 33 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_4F_EventScript_Rodney::
# 38 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
# 39 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_4F_EventScript_Grunt1::
# 44 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
# 45 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_4F_EventScript_Grunt2::
# 50 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
# 51 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_4F_Text_CantYouSeeImHiding::
# 55 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Sssh!\n"
	.string "Can't you see I'm hiding?$"

SilphCo_4F_Text_TeamRocketIsGone::
# 60 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "TEAM ROCKET is gone?$"

SilphCo_4F_Text_Grunt1Intro::
# 65 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "TEAM ROCKET has taken control\n"
	.string "of SILPH CO.!$"

SilphCo_4F_Text_Grunt1Defeat::
# 70 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Arrgh!$"

SilphCo_4F_Text_Grunt1PostBattle::
# 74 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Fwahahaha!\n"
	.string "My BOSS has been after this place!$"

SilphCo_4F_Text_RodneyIntro::
# 79 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "My POKéMON is my loyal servant.$"

SilphCo_4F_Text_RodneyDefeat::
# 83 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Darn!\n"
	.string "You weak POKéMON!$"

SilphCo_4F_Text_RodneyPostBattle::
# 88 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "The doors are electronically\n"
	.string "locked.\p"
	.string "It takes a CARD KEY to open the\n"
	.string "doors here.$"

SilphCo_4F_Text_Grunt2Intro::
# 95 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Intruder spotted!$"

SilphCo_4F_Text_Grunt2Defeat::
# 99 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Who are you?$"

SilphCo_4F_Text_Grunt2PostBattle::
# 103 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "I better tell the BOSS on 11F!$"

SilphCo_4F_Text_FloorSign::
# 107 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "4F$"
