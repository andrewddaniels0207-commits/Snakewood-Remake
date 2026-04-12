ArtisanCave_B1F_MapScripts::
# 2 "data/maps/ArtisanCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArtisanCave_B1F_OnTransition
	.byte 0


ArtisanCave_B1F_OnTransition::
# 6 "data/maps/ArtisanCave_B1F/scripts.pory"
	setflag FLAG_LANDMARK_ARTISAN_CAVE
	end

