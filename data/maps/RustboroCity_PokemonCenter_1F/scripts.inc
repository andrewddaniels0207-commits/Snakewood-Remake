# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition::
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities::
# 51 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 52 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "My POKéMON has a NAIVE nature, and my\n"
# 53 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "friend's has a JOLLY nature.\p"
# 54 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's fascinating how POKéMON have\n"
# 55 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "personalities!$"
# 56 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon::
# 58 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 59 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Just like people, there are male and\n"
# 60 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "female POKéMON.\p"
# 61 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "But no one seems to have any idea how\n"
# 62 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "they're different.$"
# 63 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor::
# 65 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 50 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
# 66 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "The man next door gave me an HM!\p"
# 67 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "I used it to teach my POKéMON how to\n"
# 68 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "CUT down skinny trees.$"
