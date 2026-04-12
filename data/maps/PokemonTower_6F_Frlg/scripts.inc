# 1 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 5 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 6 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_MarowakGhost::
# 7 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 4 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 8 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	lockall
# 9 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 5 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 10 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MON
# 11 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 6 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 12 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_BeGoneIntruders
# 13 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 7 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 14 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	setwildbattle SPECIES_MAROWAK, 30
# 15 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 8 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 16 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	special StartMarowakBattle
# 17 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 9 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 18 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitstate
# 19 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 10 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 20 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 21 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	goto_if_eq PokemonTower_6F_EventScript_MarowakGhost_2
# 22 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_MarowakGhost_1:
# 23 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 13 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 24 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonTower_6F_Movement_ForcePlayerUp
# 25 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 14 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 26 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 15 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	releaseall
# 29 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 30 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 31 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_MarowakGhost_2:
# 32 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 11 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 33 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	goto PokemonTower_6F_EventScript_DefeatedMarowakGhost
# 34 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	goto PokemonTower_6F_EventScript_MarowakGhost_1
# 35 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 36 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 37 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_DefeatedMarowakGhost::
# 38 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 20 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 39 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	message PokemonTower_6F_Text_GhostWasCubonesMother
# 40 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 21 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 41 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmessage
# 42 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 22 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 43 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitse
# 44 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 23 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 45 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
# 46 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 24 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 47 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitbuttonpress
# 48 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 25 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 49 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmoncry
# 50 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 26 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 51 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_MothersSpiritWasCalmed
# 52 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 27 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 53 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_6F, 1
# 54 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 28 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 55 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	releaseall
# 56 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 57 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 58 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 59 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 32 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 60 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Movement_ForcePlayerUp:
# 61 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 33 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 62 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	walk_up
# 63 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 34 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 64 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	step_end
# 65 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 66 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_Angelica::
# 67 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 38 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 68 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_ANGELICA, PokemonTower_6F_Text_AngelicaIntro, PokemonTower_6F_Text_AngelicaDefeat
# 69 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 39 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 70 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 72 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 73 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 74 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_Emilia::
# 75 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 44 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 76 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_EMILIA, PokemonTower_6F_Text_EmiliaIntro, PokemonTower_6F_Text_EmiliaDefeat
# 77 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 45 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 78 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_EmiliaPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 80 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 81 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 82 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_EventScript_Jennifer::
# 83 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 50 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 84 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JENNIFER, PokemonTower_6F_Text_JenniferIntro, PokemonTower_6F_Text_JenniferDefeat
# 85 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 51 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 86 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	end
# 88 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 89 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 90 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_AngelicaIntro::
# 91 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 55 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 92 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Give…me…\n"
# 93 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "blood…$"
# 94 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 95 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_AngelicaDefeat::
# 96 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 60 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 97 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Groan!$"
# 98 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 99 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_AngelicaPostBattle::
# 100 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 64 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 101 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "I feel anemic and weak…$"
# 102 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 103 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_EmiliaIntro::
# 104 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 68 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 105 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Urff…\n"
# 106 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Kwaah!$"
# 107 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 108 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_EmiliaDefeat::
# 109 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 73 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 110 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Something fell out!$"
# 111 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 112 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_EmiliaPostBattle::
# 113 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 77 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 114 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "My hair didn't fall out!\n"
# 115 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "It was a malevolent spirit!$"
# 116 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 117 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_JenniferIntro::
# 118 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 82 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 119 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Ke…ke…ke…\n"
# 120 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "ke…ke…ke!$"
# 121 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 122 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_JenniferDefeat::
# 123 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 87 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 124 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Keee!$"
# 125 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 126 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_JenniferPostBattle::
# 127 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 91 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 128 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "What's going on here?$"
# 129 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 130 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_BeGoneIntruders::
# 131 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 95 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 132 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Be gone…\n"
# 133 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Intruders…$"
# 134 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 135 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_GhostWasCubonesMother::
# 136 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 100 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 137 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "The ghost was the restless spirit\n"
# 138 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "of CUBONE's mother!$"
# 139 "data/maps/PokemonTower_6F_Frlg/scripts.pory"

# 140 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Text_MothersSpiritWasCalmed::
# 141 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 105 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
# 142 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "The mother's spirit was calmed.\p"
# 143 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "It departed to the afterlife…$"
