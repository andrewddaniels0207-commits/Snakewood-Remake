# 1 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_Frlg_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 2 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 4 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
# 5 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 3 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 6 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_OnWarp
# 7 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 9 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 10 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_OnTransition::
# 11 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 7 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 12 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0
# 13 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto_if_eq PalletTown_PlayersHouse_2F_OnTransition_2
# 14 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_OnTransition_1:
# 15 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	end
# 16 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 17 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_OnTransition_2:
# 18 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 8 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 19 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_2F_EventScript_SetRespawn
# 20 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	goto PalletTown_PlayersHouse_2F_OnTransition_1
# 21 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 22 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 23 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
# 24 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 14 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 25 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 26 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	return
# 27 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 28 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 29 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 18 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 30 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 31 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 19 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 32 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_OnWarp:
# 33 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 20 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 34 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_FirstWarpIn
# 35 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 21 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 36 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.2byte 0
# 37 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 38 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_FirstWarpIn::
# 39 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 26 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 40 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 41 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 27 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 42 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
# 43 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	end
# 44 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 45 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 46 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_NES::
# 47 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 32 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 48 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PlayedWithNES, MSGBOX_SIGN
# 49 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	end
# 50 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 51 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 52 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_Sign::
# 53 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 37 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 54 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
# 55 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	end
# 56 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 57 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 58 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_Text_PlayedWithNES::
# 59 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 41 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 60 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER} played with the NES.\p"
# 61 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "…Okay!\n"
# 62 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's time to go!$"
# 63 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 64 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_Text_PressLRForHelp::
# 65 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 47 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
# 66 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's a posted notice…\p"
# 67 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "If you're confused, ask for HELP!\n"
# 68 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "Press the L or R Button!$"
