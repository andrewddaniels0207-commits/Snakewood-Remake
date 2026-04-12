PokemonTower_6F_Frlg_MapScripts::
	.byte 0


PokemonTower_6F_EventScript_MarowakGhost::
# 4 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	lockall
# 5 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MON
# 6 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_BeGoneIntruders
# 7 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	setwildbattle SPECIES_MAROWAK, 30
# 8 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	special StartMarowakBattle
# 9 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitstate
# 10 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PokemonTower_6F_EventScript_MarowakGhost_2
PokemonTower_6F_EventScript_MarowakGhost_1:
# 13 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonTower_6F_Movement_ForcePlayerUp
# 14 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	releaseall
	end

PokemonTower_6F_EventScript_MarowakGhost_2:
# 11 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	goto PokemonTower_6F_EventScript_DefeatedMarowakGhost
	goto PokemonTower_6F_EventScript_MarowakGhost_1


PokemonTower_6F_EventScript_DefeatedMarowakGhost::
# 20 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	message PokemonTower_6F_Text_GhostWasCubonesMother
# 21 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitse
# 23 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
# 24 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitbuttonpress
# 25 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	waitmoncry
# 26 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_MothersSpiritWasCalmed
# 27 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_6F, 1
# 28 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	releaseall
	end


# 32 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
PokemonTower_6F_Movement_ForcePlayerUp:
# 33 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	walk_up
# 34 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	step_end

PokemonTower_6F_EventScript_Angelica::
# 38 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_ANGELICA, PokemonTower_6F_Text_AngelicaIntro, PokemonTower_6F_Text_AngelicaDefeat
# 39 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_6F_EventScript_Emilia::
# 44 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_EMILIA, PokemonTower_6F_Text_EmiliaIntro, PokemonTower_6F_Text_EmiliaDefeat
# 45 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_EmiliaPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_6F_EventScript_Jennifer::
# 50 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_JENNIFER, PokemonTower_6F_Text_JenniferIntro, PokemonTower_6F_Text_JenniferDefeat
# 51 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	msgbox PokemonTower_6F_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_6F_Text_AngelicaIntro::
# 55 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Give…me…\n"
	.string "blood…$"

PokemonTower_6F_Text_AngelicaDefeat::
# 60 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Groan!$"

PokemonTower_6F_Text_AngelicaPostBattle::
# 64 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "I feel anemic and weak…$"

PokemonTower_6F_Text_EmiliaIntro::
# 68 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Urff…\n"
	.string "Kwaah!$"

PokemonTower_6F_Text_EmiliaDefeat::
# 73 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Something fell out!$"

PokemonTower_6F_Text_EmiliaPostBattle::
# 77 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "My hair didn't fall out!\n"
	.string "It was a malevolent spirit!$"

PokemonTower_6F_Text_JenniferIntro::
# 82 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Ke…ke…ke…\n"
	.string "ke…ke…ke!$"

PokemonTower_6F_Text_JenniferDefeat::
# 87 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Keee!$"

PokemonTower_6F_Text_JenniferPostBattle::
# 91 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "What's going on here?$"

PokemonTower_6F_Text_BeGoneIntruders::
# 95 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "Be gone…\n"
	.string "Intruders…$"

PokemonTower_6F_Text_GhostWasCubonesMother::
# 100 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "The ghost was the restless spirit\n"
	.string "of CUBONE's mother!$"

PokemonTower_6F_Text_MothersSpiritWasCalmed::
# 105 "data/maps/PokemonTower_6F_Frlg/scripts.pory"
	.string "The mother's spirit was calmed.\p"
	.string "It departed to the afterlife…$"
