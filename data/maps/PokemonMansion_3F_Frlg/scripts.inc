PokemonMansion_3F_Frlg_MapScripts::
# 2 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_3F_OnLoad
	.byte 0


PokemonMansion_3F_OnLoad::
# 6 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_3F_OnLoad_2
PokemonMansion_3F_OnLoad_1:
	end

PokemonMansion_3F_OnLoad_2:
# 7 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_3F
	goto PokemonMansion_3F_OnLoad_1


PokemonMansion_3F_EventScript_Statue::
# 13 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	lockall
# 14 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 15 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 16 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 17 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	special DrawWholeMapView
# 18 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	waitse
# 19 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	releaseall
	end


PokemonMansion_3F_EventScript_DiaryFeb6th::
# 24 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_MewGaveBirthToMewtwo, MSGBOX_SIGN
	end


PokemonMansion_3F_EventScript_Simon::
# 29 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_SIMON, PokemonMansion_1F_Text_SimonIntro, PokemonMansion_1F_Text_SimonDefeat
# 30 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_3F_EventScript_Braydon::
# 35 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BRAYDON, PokemonMansion_1F_Text_BraydonIntro, PokemonMansion_1F_Text_BraydonDefeat
# 36 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_BraydonPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_1F_Text_SimonIntro::
# 40 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "This place is, like, huge!$"

PokemonMansion_1F_Text_SimonDefeat::
# 44 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Ayah!$"

PokemonMansion_1F_Text_SimonPostBattle::
# 48 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "I wonder where my partner went.$"

PokemonMansion_1F_Text_BraydonIntro::
# 52 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "My mentor once lived here.$"

PokemonMansion_1F_Text_BraydonDefeat::
# 56 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Whew!\n"
	.string "Overwhelming!$"

PokemonMansion_1F_Text_BraydonPostBattle::
# 61 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "So, you're stuck?\n"
	.string "Try jumping off over there!$"

PokemonMansion_1F_Text_MewGaveBirthToMewtwo::
# 66 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Diary: Feb. 6\n"
	.string "MEW gave birth.\p"
	.string "We named the newborn MEWTWO.$"
