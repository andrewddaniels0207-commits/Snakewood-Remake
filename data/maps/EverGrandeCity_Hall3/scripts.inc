# 1 "data/maps/EverGrandeCity_Hall3/scripts.pory"

# 2 "data/maps/EverGrandeCity_Hall3/scripts.pory"
EverGrandeCity_Hall3_MapScripts::
# 3 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 2 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 4 "data/maps/EverGrandeCity_Hall3/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall3_OnWarp
# 5 "data/maps/EverGrandeCity_Hall3/scripts.pory"
	.byte 0
# 6 "data/maps/EverGrandeCity_Hall3/scripts.pory"

# 7 "data/maps/EverGrandeCity_Hall3/scripts.pory"

# 8 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 5 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 9 "data/maps/EverGrandeCity_Hall3/scripts.pory"

# 10 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 6 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 11 "data/maps/EverGrandeCity_Hall3/scripts.pory"
EverGrandeCity_Hall3_OnWarp:
# 12 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 7 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 13 "data/maps/EverGrandeCity_Hall3/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall3_EventScript_TurnPlayerNorth
# 14 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 8 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 15 "data/maps/EverGrandeCity_Hall3/scripts.pory"
	.2byte 0
# 16 "data/maps/EverGrandeCity_Hall3/scripts.pory"

# 17 "data/maps/EverGrandeCity_Hall3/scripts.pory"
EverGrandeCity_Hall3_EventScript_TurnPlayerNorth::
# 18 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 13 "data/maps/EverGrandeCity_Hall3/scripts.pory"
# 19 "data/maps/EverGrandeCity_Hall3/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 20 "data/maps/EverGrandeCity_Hall3/scripts.pory"
	end
