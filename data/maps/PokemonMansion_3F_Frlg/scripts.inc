# 1 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 2 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_Frlg_MapScripts::
# 3 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 2 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 4 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_3F_OnLoad
# 5 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 7 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 8 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_OnLoad::
# 9 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 6 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 10 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_3F_OnLoad_2
# 11 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_OnLoad_1:
# 12 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 13 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 14 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_OnLoad_2:
# 15 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 7 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 16 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_3F
# 17 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	goto PokemonMansion_3F_OnLoad_1
# 18 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 19 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 20 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_EventScript_Statue::
# 21 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 13 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 22 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	lockall
# 23 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 14 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 24 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 25 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 15 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 26 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 27 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 16 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 28 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 29 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 17 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 30 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	special DrawWholeMapView
# 31 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 18 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 32 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	waitse
# 33 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 19 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 34 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	releaseall
# 35 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 36 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 37 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 38 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_EventScript_DiaryFeb6th::
# 39 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 24 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 40 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_MewGaveBirthToMewtwo, MSGBOX_SIGN
# 41 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 42 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 43 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 44 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_EventScript_Simon::
# 45 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 29 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 46 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_SIMON, PokemonMansion_1F_Text_SimonIntro, PokemonMansion_1F_Text_SimonDefeat
# 47 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 30 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 48 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 50 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 51 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 52 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_3F_EventScript_Braydon::
# 53 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 35 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 54 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BRAYDON, PokemonMansion_1F_Text_BraydonIntro, PokemonMansion_1F_Text_BraydonDefeat
# 55 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 36 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 56 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_BraydonPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	end
# 58 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 59 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 60 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_SimonIntro::
# 61 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 40 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 62 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "This place is, like, huge!$"
# 63 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 64 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_SimonDefeat::
# 65 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 44 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 66 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Ayah!$"
# 67 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 68 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_SimonPostBattle::
# 69 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 48 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 70 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "I wonder where my partner went.$"
# 71 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 72 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_BraydonIntro::
# 73 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 52 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 74 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "My mentor once lived here.$"
# 75 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 76 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_BraydonDefeat::
# 77 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 56 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 78 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Whew!\n"
# 79 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Overwhelming!$"
# 80 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 81 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_BraydonPostBattle::
# 82 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 61 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 83 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "So, you're stuck?\n"
# 84 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Try jumping off over there!$"
# 85 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"

# 86 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
PokemonMansion_1F_Text_MewGaveBirthToMewtwo::
# 87 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 66 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
# 88 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Diary: Feb. 6\n"
# 89 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "MEW gave birth.\p"
# 90 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "We named the newborn MEWTWO.$"
