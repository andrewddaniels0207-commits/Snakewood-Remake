EverGrandeCity_Hall5_MapScripts::
# 2 "data/maps/EverGrandeCity_Hall5/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall5_OnWarp
	.byte 0


# 5 "data/maps/EverGrandeCity_Hall5/scripts.pory"

# 6 "data/maps/EverGrandeCity_Hall5/scripts.pory"
EverGrandeCity_Hall5_OnWarp:
# 7 "data/maps/EverGrandeCity_Hall5/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall5_EventScript_TurnPlayerNorth
# 8 "data/maps/EverGrandeCity_Hall5/scripts.pory"
	.2byte 0

EverGrandeCity_Hall5_EventScript_TurnPlayerNorth::
# 13 "data/maps/EverGrandeCity_Hall5/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

