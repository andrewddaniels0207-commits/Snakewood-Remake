# 1 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 2 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 4 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 3 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 6 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 10 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_OnTransition::
# 11 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 7 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
# 13 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 14 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 15 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 16 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 12 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 18 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 13 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 14 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 22 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 23 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 15 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 24 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 25 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 26 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 27 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 28 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 20 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney, MSGBOX_NPC
# 31 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_EventScript_Lass::
# 35 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 25 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 36 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets, MSGBOX_NPC
# 37 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 39 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 40 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_EventScript_Youngster::
# 41 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 30 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 42 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls, MSGBOX_NPC
# 43 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 44 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 46 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney::
# 47 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 34 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 48 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET will do anything for\n"
# 49 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "the sake of money!\p"
# 50 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There is no job too dirty, no deed\n"
# 51 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "too heinous, no crime too wicked!$"
# 52 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 53 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets::
# 54 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 41 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 55 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I saw CUBONE's mother trying to\n"
# 56 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "escape from TEAM ROCKET.\p"
# 57 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "She was killed trying to get away…$"
# 58 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"

# 59 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls::
# 60 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 47 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
# 61 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You know how the CUBONE species\n"
# 62 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "wears skulls, right?\p"
# 63 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "People will pay a lot for one.$"
