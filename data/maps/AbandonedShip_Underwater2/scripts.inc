AbandonedShip_Underwater2_MapScripts::
# 2 "data/maps/AbandonedShip_Underwater2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Underwater2_OnResume
	.byte 0


AbandonedShip_Underwater2_OnResume::
# 7 "data/maps/AbandonedShip_Underwater2/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_ROOMS_B1F, 13, 7
	end

