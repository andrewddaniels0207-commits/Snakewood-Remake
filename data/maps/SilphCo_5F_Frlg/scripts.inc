# 1 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
# 5 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_OnLoad::
# 9 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_5F_DOOR_1, SilphCo_5F_OnLoad_2
# 11 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_OnLoad_1:
# 12 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 9 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_5F_DOOR_2, SilphCo_5F_OnLoad_5
# 14 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_OnLoad_4:
# 15 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 12 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_5F_DOOR_3, SilphCo_5F_OnLoad_8
# 17 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_OnLoad_7:
# 18 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 19 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 20 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_OnLoad_2:
# 21 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call EventScript_Close5FDoor1
# 23 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto SilphCo_5F_OnLoad_1
# 24 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 25 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_OnLoad_5:
# 26 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call EventScript_Close5FDoor2
# 28 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto SilphCo_5F_OnLoad_4
# 29 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 30 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_OnLoad_8:
# 31 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	call EventScript_Close5FDoor3
# 33 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto SilphCo_5F_OnLoad_7
# 34 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 35 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 36 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_WorkerM::
# 37 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 38 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	lock
# 39 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 20 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 40 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	faceplayer
# 41 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 21 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 42 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 43 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto_if_ge SilphCo_5F_EventScript_WorkerM_2
# 44 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_WorkerM_1:
# 45 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 46 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_RocketsInUproarAboutIntruder
# 47 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 48 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	release
# 49 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 50 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 51 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_WorkerM_2:
# 52 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto SilphCo_5F_EventScript_WorkerMRocketsGone
# 54 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	goto SilphCo_5F_EventScript_WorkerM_1
# 55 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 56 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 57 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_WorkerMRocketsGone::
# 58 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_YoureOurHeroThankYou
# 60 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 31 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 61 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	release
# 62 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 63 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 64 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 65 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_PokemonReport1::
# 66 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 36 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_PorygonFirstVRMon, MSGBOX_SIGN
# 68 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 69 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_PokemonReport2::
# 72 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 41 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Over350TechniquesConfirmed, MSGBOX_SIGN
# 74 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 75 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 76 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 77 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_PokemonReport3::
# 78 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 46 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 79 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_SomeMonsEvolveWhenTraded, MSGBOX_SIGN
# 80 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 81 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 82 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 83 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_FloorSign::
# 84 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 85 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_FloorSign, MSGBOX_SIGN
# 86 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 87 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 88 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 89 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_Beau::
# 90 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 56 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BEAU, SilphCo_5F_Text_BeauIntro, SilphCo_5F_Text_BeauDefeat
# 92 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 57 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 93 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 95 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 96 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 97 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_Grunt1::
# 98 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 62 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_28, SilphCo_5F_Text_Grunt1Intro, SilphCo_5F_Text_Grunt1Defeat
# 100 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 63 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 101 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 103 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 104 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 105 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_Grunt2::
# 106 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 68 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 107 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_29, SilphCo_5F_Text_Grunt2Intro, SilphCo_5F_Text_Grunt2Defeat
# 108 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 69 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 109 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 111 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 112 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 113 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_EventScript_Dalton::
# 114 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 74 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 115 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_DALTON, SilphCo_5F_Text_DaltonIntro, SilphCo_5F_Text_DaltonDefeat
# 116 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 75 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 117 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	msgbox SilphCo_5F_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	end
# 119 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 120 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 121 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_RocketsInUproarAboutIntruder::
# 122 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 79 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 123 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "TEAM ROCKET is in an uproar over\n"
# 124 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "some intruder.\p"
# 125 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "That's you, right?$"
# 126 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 127 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_YoureOurHeroThankYou::
# 128 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 85 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 129 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "TEAM ROCKET took off!\n"
# 130 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "You're our hero! Thank you!$"
# 131 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 132 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt1Intro::
# 133 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 90 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 134 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "I heard a kid was wandering\n"
# 135 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "around.$"
# 136 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 137 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt1Defeat::
# 138 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 95 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 139 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Boom!$"
# 140 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 141 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt1PostBattle::
# 142 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 143 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's not smart to pick a fight with\n"
# 144 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "TEAM ROCKET!$"
# 145 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 146 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_BeauIntro::
# 147 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 104 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 148 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "We study POKé BALL technology on\n"
# 149 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "this floor.$"
# 150 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 151 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_BeauDefeat::
# 152 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 109 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 153 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Dang!\n"
# 154 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Blast it!$"
# 155 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 156 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_BeauPostBattle::
# 157 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 114 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 158 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "We worked on the ultimate POKé\n"
# 159 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "BALL which would catch anything.$"
# 160 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 161 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_DaltonIntro::
# 162 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 119 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 163 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Whaaat?\p"
# 164 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "There shouldn't be any children\n"
# 165 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "here!$"
# 166 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 167 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_DaltonDefeat::
# 168 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 125 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 169 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Oh, goodness!$"
# 170 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 171 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_DaltonPostBattle::
# 172 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 129 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 173 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "You're only on 5F.\n"
# 174 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a long way to my BOSS!$"
# 175 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 176 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt2Intro::
# 177 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 134 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 178 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Show TEAM ROCKET a little respect!$"
# 179 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 180 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt2Defeat::
# 181 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 138 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 182 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Cough…\n"
# 183 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Cough…$"
# 184 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 185 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Grunt2PostBattle::
# 186 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 143 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 187 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Which reminds me.\p"
# 188 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "KOFFING evolves into WEEZING!$"
# 189 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 190 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_PorygonFirstVRMon::
# 191 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 148 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 192 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
# 193 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "POKéMON LAB created PORYGON,\n"
# 194 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "the first virtual-reality POKéMON.$"
# 195 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 196 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_Over350TechniquesConfirmed::
# 197 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 154 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 198 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
# 199 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Over 350 POKéMON techniques have\n"
# 200 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "been confirmed.$"
# 201 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 202 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_SomeMonsEvolveWhenTraded::
# 203 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 160 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 204 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "It's a POKéMON REPORT!\p"
# 205 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Some POKéMON have been confirmed\n"
# 206 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "to evolve when they are traded.$"
# 207 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 208 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_FloorSign::
# 209 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 166 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 210 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 211 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "5F$"
# 212 "data/maps/SilphCo_5F_Frlg/scripts.pory"

# 213 "data/maps/SilphCo_5F_Frlg/scripts.pory"
SilphCo_5F_Text_RocketBossLookingForStrongMons::
# 214 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 171 "data/maps/SilphCo_5F_Frlg/scripts.pory"
# 215 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Those thugs that took over our\n"
# 216 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "building…\p"
# 217 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "Their BOSS said he was looking for\n"
# 218 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "strong POKéMON.\p"
# 219 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "I hope our PRESIDENT managed to\n"
# 220 "data/maps/SilphCo_5F_Frlg/scripts.pory"
	.string "avoid trouble…$"
