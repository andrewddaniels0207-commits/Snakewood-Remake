Route110_TrickHouseCorridor_MapScripts::
# 2 "data/maps/Route110_TrickHouseCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseCorridor_OnTransition
	.byte 0


Route110_TrickHouseCorridor_OnTransition::
# 6 "data/maps/Route110_TrickHouseCorridor/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 1
	end

