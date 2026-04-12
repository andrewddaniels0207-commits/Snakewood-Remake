# 1 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 13 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
# 31 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
# 35 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
# 37 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
# 41 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 43 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 31 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 32 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 46 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 1
# 47 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 33 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
# 49 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 51 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 52 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 53 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 54 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Lass::
# 55 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 39 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 56 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
# 57 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 58 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 59 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 60 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons::
# 61 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 43 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That BILL!\p"
# 63 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I heard that he'll do whatever it\n"
# 64 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "takes to get rare POKéMON.\p"
# 65 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "He's not above doing all sorts\n"
# 66 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "of things, I've heard.$"
# 67 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 68 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac::
# 69 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 51 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 70 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you heard about BILL?\p"
# 71 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Everyone calls him a POKéMANIAC!\p"
# 72 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I think people are just jealous of\n"
# 73 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL, though.\p"
# 74 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Who wouldn't want to boast about\n"
# 75 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "their POKéMON?$"
# 76 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 77 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons::
# 78 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 60 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 79 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL has lots of POKéMON!\n"
# 80 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "He collects rare ones, too!$"
# 81 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"

# 82 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs::
# 83 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 65 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
# 84 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Why don't you go upstairs and try\n"
# 85 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "trading POKéMON with your friends?\p"
# 86 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You could get a lot more variety\n"
# 87 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "by trading.\p"
# 88 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The POKéMON you get in trades grow\n"
# 89 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "quickly, too.$"
