MirageTower_2F_MapScripts::
# 2 "data/maps/MirageTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/MirageTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 4 "data/maps/MirageTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_2F_SetHoleWarp
	.byte 0


MirageTower_2F_SetHoleWarp::
# 8 "data/maps/MirageTower_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 9 "data/maps/MirageTower_2F/scripts.pory"
	setholewarp MAP_MIRAGE_TOWER_1F
	end

