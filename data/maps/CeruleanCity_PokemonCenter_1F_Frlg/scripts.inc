CeruleanCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


CeruleanCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end


CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
	end


CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
# 25 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
	end


CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 31 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 32 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 1
# 33 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
# 34 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
	end


CeruleanCity_PokemonCenter_1F_EventScript_Lass::
# 39 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
	end


CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons::
# 43 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "That BILL!\p"
	.string "I heard that he'll do whatever it\n"
	.string "takes to get rare POKéMON.\p"
	.string "He's not above doing all sorts\n"
	.string "of things, I've heard.$"

CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac::
# 51 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you heard about BILL?\p"
	.string "Everyone calls him a POKéMANIAC!\p"
	.string "I think people are just jealous of\n"
	.string "BILL, though.\p"
	.string "Who wouldn't want to boast about\n"
	.string "their POKéMON?$"

CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons::
# 60 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL has lots of POKéMON!\n"
	.string "He collects rare ones, too!$"

CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs::
# 65 "data/maps/CeruleanCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Why don't you go upstairs and try\n"
	.string "trading POKéMON with your friends?\p"
	.string "You could get a lot more variety\n"
	.string "by trading.\p"
	.string "The POKéMON you get in trades grow\n"
	.string "quickly, too.$"
