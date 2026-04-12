PalletTown_PlayersHouse_2F_Frlg_MapScripts::
# 2 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
# 3 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_OnWarp
	.byte 0


PalletTown_PlayersHouse_2F_OnTransition::
# 7 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0
	goto_if_eq PalletTown_PlayersHouse_2F_OnTransition_2
PalletTown_PlayersHouse_2F_OnTransition_1:
	end

PalletTown_PlayersHouse_2F_OnTransition_2:
# 8 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	call PalletTown_PlayersHouse_2F_EventScript_SetRespawn
	goto PalletTown_PlayersHouse_2F_OnTransition_1


PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
# 14 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
	return


# 18 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"

# 19 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
PalletTown_PlayersHouse_2F_OnWarp:
# 20 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_FirstWarpIn
# 21 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.2byte 0

PalletTown_PlayersHouse_2F_FirstWarpIn::
# 26 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 27 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
	end


PalletTown_PlayersHouse_2F_EventScript_NES::
# 32 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PlayedWithNES, MSGBOX_SIGN
	end


PalletTown_PlayersHouse_2F_EventScript_Sign::
# 37 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
	end


PalletTown_PlayersHouse_2F_Text_PlayedWithNES::
# 41 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER} played with the NES.\p"
	.string "…Okay!\n"
	.string "It's time to go!$"

PalletTown_PlayersHouse_2F_Text_PressLRForHelp::
# 47 "data/maps/PalletTown_PlayersHouse_2F_Frlg/scripts.pory"
	.string "It's a posted notice…\p"
	.string "If you're confused, ask for HELP!\n"
	.string "Press the L or R Button!$"
