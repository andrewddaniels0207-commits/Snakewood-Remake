# 1 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 2 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Frlg_MapScripts::
# 3 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 2 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 4 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_1F_OnLoad
# 5 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 3 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 6 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_1F_OnTransition
# 7 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 9 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 10 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_OnLoad::
# 11 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 7 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 12 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_1F_OnLoad_2
# 13 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_OnLoad_1:
# 14 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 15 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 16 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_OnLoad_2:
# 17 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 8 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 18 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_1F
# 19 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	goto PokemonMansion_1F_OnLoad_1
# 20 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 21 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 22 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_OnTransition::
# 23 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 14 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 24 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_MANSION_1F
# 25 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 27 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 28 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_EventScript_Statue::
# 29 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 19 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 30 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	lockall
# 31 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 20 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 32 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 33 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 21 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 34 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 35 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 22 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 36 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 37 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 23 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 38 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 39 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 24 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 40 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	waitse
# 41 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 25 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 42 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	releaseall
# 43 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 45 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 46 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_EventScript_Ted::
# 47 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 30 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 48 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TED, PokemonMansion_1F_Text_TedIntro, PokemonMansion_1F_Text_TedDefeat
# 49 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 31 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 50 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_TedPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 52 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 53 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 54 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_EventScript_Johnson::
# 55 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 36 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 56 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOHNSON, PokemonMansion_1F_Text_JohnsonIntro, PokemonMansion_1F_Text_JohnsonDefeat
# 57 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 37 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 58 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	end
# 60 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 61 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 62 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_TedIntro::
# 63 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 41 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 64 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Who are you?\n"
# 65 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "There shouldn't be anyone here.$"
# 66 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 67 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_TedDefeat::
# 68 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 46 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 69 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Ouch!$"
# 70 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 71 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_TedPostBattle::
# 72 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 50 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 73 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "A key? I don't know what you're\n"
# 74 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "talking about.$"
# 75 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 76 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_JohnsonIntro::
# 77 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 55 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 78 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "W-w-waah! You startled me!\n"
# 79 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I thought you were a ghost.$"
# 80 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 81 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_JohnsonDefeat::
# 82 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 60 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 83 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Tch!\n"
# 84 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I can't get any wins.$"
# 85 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"

# 86 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
PokemonMansion_1F_Text_JohnsonPostBattle::
# 87 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 65 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
# 88 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I was exploring here by myself,\n"
# 89 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "but I feel spooked.\p"
# 90 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I ought to go soon.$"
