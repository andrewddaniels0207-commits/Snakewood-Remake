NavelRock_Exterior_MapScripts::
# 2 "data/maps/NavelRock_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Exterior_OnTransition
	.byte 0


NavelRock_Exterior_OnTransition::
# 6 "data/maps/NavelRock_Exterior/scripts.pory"
	setflag FLAG_ARRIVED_AT_NAVEL_ROCK
	end

