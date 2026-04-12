# 1 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 13 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Nurse::
# 17 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 18 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MOSSDEEP_NURSE
# 19 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 21 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	release
# 27 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Woman::
# 31 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 21 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable, MSGBOX_NPC
# 33 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Girl::
# 37 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves, MSGBOX_NPC
# 39 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable::
# 43 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 30 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 44 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "The GYM LEADERS in this town are\n"
# 45 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "a formidable duo.\p"
# 46 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Their combination attacks are, like,\n"
# 47 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "excellent and wow!$"
# 48 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves::
# 50 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 37 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
# 51 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the special abilities of\n"
# 52 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON, some moves might change\l"
# 53 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "or not work at all.$"
