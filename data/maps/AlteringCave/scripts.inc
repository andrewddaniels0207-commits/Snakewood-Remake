AlteringCave_MapScripts::
# 2 "data/maps/AlteringCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_OnTransition
	.byte 0


AlteringCave_OnTransition::
# 7 "data/maps/AlteringCave/scripts.pory"
	setflag FLAG_LANDMARK_ALTERING_CAVE
	end

