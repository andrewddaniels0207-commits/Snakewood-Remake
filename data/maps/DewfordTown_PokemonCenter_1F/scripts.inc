# 1 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 2 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 4 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 3 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 6 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_OnTransition::
# 11 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 7 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 12 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 13 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 8 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 15 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 13 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 20 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_DEWFORD_NURSE
# 21 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 14 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 15 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 24 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 16 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 26 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 17 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 28 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 29 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
# 33 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 22 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 34 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
# 35 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Man::
# 39 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 27 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 40 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
# 41 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_StoneCavern::
# 45 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 31 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 46 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "There's a stone cavern at the edge\n"
# 47 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "of town.\p"
# 48 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I've heard you can find rare stones\n"
# 49 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "there.$"
# 50 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 51 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM::
# 52 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 38 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
# 53 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Even if a POKéMON faints and can't\n"
# 54 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "battle, it can still use a move learned\l"
# 55 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "from a HIDDEN MACHINE (HM).$"
