# 1 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 2 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Frlg_MapScripts::
# 3 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 2 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 4 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_B1F_OnLoad
# 5 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 7 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 8 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_OnLoad::
# 9 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 6 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 10 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_B1F_OnLoad_2
# 11 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_OnLoad_1:
# 12 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 13 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 14 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_OnLoad_2:
# 15 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 7 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 16 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_B1F
# 17 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	goto PokemonMansion_B1F_OnLoad_1
# 18 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 19 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 20 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_EventScript_Statue::
# 21 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 13 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 22 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	lockall
# 23 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 14 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 24 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 25 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 15 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 26 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 27 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 16 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 28 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 29 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 17 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 30 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 31 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 18 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 32 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	waitse
# 33 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 19 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 34 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	releaseall
# 35 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 36 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 37 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 38 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_EventScript_DiarySep1st::
# 39 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 24 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 40 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful, MSGBOX_SIGN
# 41 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 42 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 43 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 44 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_EventScript_Lewis::
# 45 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 29 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 46 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_LEWIS, PokemonMansion_B1F_Text_LewisIntro, PokemonMansion_B1F_Text_LewisDefeat
# 47 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 30 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 48 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 50 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 51 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 52 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_EventScript_Ivan::
# 53 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 35 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 54 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_IVAN, PokemonMansion_B1F_Text_IvanIntro, PokemonMansion_B1F_Text_IvanDefeat
# 55 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 36 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 56 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	end
# 58 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 59 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 60 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_LewisIntro::
# 61 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 40 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 62 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Uh-oh…\n"
# 63 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Where am I now?$"
# 64 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 65 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_LewisDefeat::
# 66 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 45 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 67 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Awooh!$"
# 68 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 69 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_LewisPostBattle::
# 70 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 49 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 71 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "You can find stuff lying around.\n"
# 72 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "The residents must've left them.$"
# 73 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 74 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_IvanIntro::
# 75 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 54 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 76 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "This place is ideal for a lab.\n"
# 77 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Look at all this space.$"
# 78 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 79 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_IvanDefeat::
# 80 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 59 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 81 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "What was that for?$"
# 82 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 83 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_IvanPostBattle::
# 84 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 63 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 85 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "I like it here.\n"
# 86 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "It's conducive to my studies.$"
# 87 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"

# 88 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful::
# 89 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 68 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
# 90 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Diary: Sept. 1\n"
# 91 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "MEWTWO is far too powerful.\p"
# 92 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "We have failed to curb its vicious\n"
# 93 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "tendencies…$"
