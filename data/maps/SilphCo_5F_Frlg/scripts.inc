SilphCo_5F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
	.byte 0


SilphCo_5F_OnLoad::
# 6 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_5F_DOOR_1, SilphCo_5F_OnLoad_2
SilphCo_5F_OnLoad_1:
# 9 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_5F_DOOR_2, SilphCo_5F_OnLoad_5
SilphCo_5F_OnLoad_4:
# 12 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_5F_DOOR_3, SilphCo_5F_OnLoad_8
SilphCo_5F_OnLoad_7:
	end

SilphCo_5F_OnLoad_2:
# 7 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call EventScript_Close5FDoor1
	goto SilphCo_5F_OnLoad_1

SilphCo_5F_OnLoad_5:
# 10 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call EventScript_Close5FDoor2
	goto SilphCo_5F_OnLoad_4

SilphCo_5F_OnLoad_8:
# 13 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call EventScript_Close5FDoor3
	goto SilphCo_5F_OnLoad_7


SilphCo_5F_EventScript_WorkerM::
# 19 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	lock
# 20 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_5F_EventScript_WorkerM_2
SilphCo_5F_EventScript_WorkerM_1:
# 24 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_RocketsInUproarAboutIntruder
# 25 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	release
	end

SilphCo_5F_EventScript_WorkerM_2:
# 22 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto SilphCo_5F_EventScript_WorkerMRocketsGone
	goto SilphCo_5F_EventScript_WorkerM_1


SilphCo_5F_EventScript_WorkerMRocketsGone::
# 30 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_YoureOurHeroThankYou
# 31 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	release
	end


SilphCo_5F_EventScript_PokemonReport1::
# 36 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_PorygonFirstVRMon, MSGBOX_SIGN
	end


SilphCo_5F_EventScript_PokemonReport2::
# 41 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Over350TechniquesConfirmed, MSGBOX_SIGN
	end


SilphCo_5F_EventScript_PokemonReport3::
# 46 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_SomeMonsEvolveWhenTraded, MSGBOX_SIGN
	end


SilphCo_5F_EventScript_FloorSign::
# 51 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_5F_EventScript_Beau::
# 56 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BEAU, SilphCo_5F_Text_BeauIntro, SilphCo_5F_Text_BeauDefeat
# 57 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_5F_EventScript_Grunt1::
# 62 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_28, SilphCo_5F_Text_Grunt1Intro, SilphCo_5F_Text_Grunt1Defeat
# 63 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_5F_EventScript_Grunt2::
# 68 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_29, SilphCo_5F_Text_Grunt2Intro, SilphCo_5F_Text_Grunt2Defeat
# 69 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_5F_EventScript_Dalton::
# 74 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_DALTON, SilphCo_5F_Text_DaltonIntro, SilphCo_5F_Text_DaltonDefeat
# 75 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_5F_Text_RocketsInUproarAboutIntruder::
# 79 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "TEAM ROCKET is in an uproar over\n"
	.string "some intruder.\p"
	.string "That's you, right?$"

SilphCo_5F_Text_YoureOurHeroThankYou::
# 85 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "TEAM ROCKET took off!\n"
	.string "You're our hero! Thank you!$"

SilphCo_5F_Text_Grunt1Intro::
# 90 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "I heard a kid was wandering\n"
	.string "around.$"

SilphCo_5F_Text_Grunt1Defeat::
# 95 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Boom!$"

SilphCo_5F_Text_Grunt1PostBattle::
# 99 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's not smart to pick a fight with\n"
	.string "TEAM ROCKET!$"

SilphCo_5F_Text_BeauIntro::
# 104 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "We study POKé BALL technology on\n"
	.string "this floor.$"

SilphCo_5F_Text_BeauDefeat::
# 109 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Dang!\n"
	.string "Blast it!$"

SilphCo_5F_Text_BeauPostBattle::
# 114 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "We worked on the ultimate POKé\n"
	.string "BALL which would catch anything.$"

SilphCo_5F_Text_DaltonIntro::
# 119 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Whaaat?\p"
	.string "There shouldn't be any children\n"
	.string "here!$"

SilphCo_5F_Text_DaltonDefeat::
# 125 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Oh, goodness!$"

SilphCo_5F_Text_DaltonPostBattle::
# 129 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "You're only on 5F.\n"
	.string "It's a long way to my BOSS!$"

SilphCo_5F_Text_Grunt2Intro::
# 134 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Show TEAM ROCKET a little respect!$"

SilphCo_5F_Text_Grunt2Defeat::
# 138 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Cough…\n"
	.string "Cough…$"

SilphCo_5F_Text_Grunt2PostBattle::
# 143 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Which reminds me.\p"
	.string "KOFFING evolves into WEEZING!$"

SilphCo_5F_Text_PorygonFirstVRMon::
# 148 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
	.string "POKéMON LAB created PORYGON,\n"
	.string "the first virtual-reality POKéMON.$"

SilphCo_5F_Text_Over350TechniquesConfirmed::
# 154 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
	.string "Over 350 POKéMON techniques have\n"
	.string "been confirmed.$"

SilphCo_5F_Text_SomeMonsEvolveWhenTraded::
# 160 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
	.string "Some POKéMON have been confirmed\n"
	.string "to evolve when they are traded.$"

SilphCo_5F_Text_FloorSign::
# 166 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "5F$"

SilphCo_5F_Text_RocketBossLookingForStrongMons::
# 171 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Those thugs that took over our\n"
	.string "building…\p"
	.string "Their BOSS said he was looking for\n"
	.string "strong POKéMON.\p"
	.string "I hope our PRESIDENT managed to\n"
	.string "avoid trouble…$"
