UndergroundPath_EastWestTunnel_Frlg_MapScripts::
# 2 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UndergroundPath_EastWestTunnel_OnTransition
	.byte 0


UndergroundPath_EastWestTunnel_OnTransition::
# 6 "data/maps/UndergroundPath_EastWestTunnel_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_UNDERGROUND_PATH_EAST_WEST_TUNNEL
	end

