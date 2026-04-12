# 1 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 2 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_Frlg_MapScripts::
# 3 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 2 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 4 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
# 5 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 7 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 8 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_OnLoad::
# 9 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 6 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 10 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_2F_OnLoad_2
# 11 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_OnLoad_1:
# 12 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 13 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 14 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_OnLoad_2:
# 15 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 7 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 16 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_2F
# 17 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	goto PokemonMansion_2F_OnLoad_1
# 18 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 19 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 20 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_EventScript_Statue::
# 21 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 13 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 22 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	lockall
# 23 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 14 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 24 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 25 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 15 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 26 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 27 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 16 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 28 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 29 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 17 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 30 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 31 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 18 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 32 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	waitse
# 33 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 19 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 34 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	releaseall
# 35 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 36 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 37 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 38 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_EventScript_DiaryJuly5th::
# 39 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 24 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 40 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
# 41 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 42 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 43 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 44 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_EventScript_DiaryJuly10th::
# 45 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 29 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 46 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
# 47 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 48 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 49 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 50 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_2F_EventScript_Arnie::
# 51 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 34 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 52 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
# 53 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 35 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 54 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	end
# 56 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 57 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 58 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_Text_PressSecretSwitch::
# 59 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 39 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 60 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "A secret switch!\p"
# 61 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Press it?$"
# 62 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 63 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_Text_WhoWouldnt::
# 64 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 44 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 65 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Who wouldn't?$"
# 66 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 67 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_Text_NotQuiteYet::
# 68 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 48 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 69 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Not quite yet!$"
# 70 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 71 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_ArnieIntro::
# 72 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 52 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 73 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "I can't get out!\n"
# 74 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "This old place is one big puzzle.$"
# 75 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 76 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_ArnieDefeat::
# 77 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 57 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 78 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 79 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "My bag of loot!$"
# 80 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 81 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_ArniePostBattle::
# 82 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 62 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 83 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "The switches here open and close\n"
# 84 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "alternating sets of doors.$"
# 85 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 86 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle::
# 87 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 67 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 88 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Diary: July 5\n"
# 89 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Guyana, South America\p"
# 90 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "A new POKéMON was discovered deep\n"
# 91 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "in the jungle.$"
# 92 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"

# 93 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
PokemonMansion_1F_Text_ChristenedDiscoveredMonMew::
# 94 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 74 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
# 95 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Diary: July 10\n"
# 96 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "We christened the newly discovered\l"
# 97 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "POKéMON, MEW.$"
