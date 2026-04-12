# 1 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_OnTransition::
# 11 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 13 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
# 21 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
# 33 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
# 35 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
# 39 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
# 41 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon::
# 45 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 31 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "You can't consider yourself a real\n"
# 47 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "TRAINER if you don't have faith\l"
# 48 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "in your POKéMON.\p"
# 49 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Only those people who can believe\n"
# 50 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "in their battling POKéMON can win\l"
# 51 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "through to the very end.$"
# 52 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent::
# 54 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
# 55 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "The reason why anyone would visit\n"
# 56 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "VERDANTURF…\p"
# 57 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "It's the BATTLE TENT. It goes without\n"
# 58 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "saying.\p"
# 59 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Or is there somebody here that you\n"
# 60 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "came to see?$"
