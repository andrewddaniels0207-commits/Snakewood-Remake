# 1 "data/maps/MirageTower_3F/scripts.pory"

# 2 "data/maps/MirageTower_3F/scripts.pory"
MirageTower_3F_MapScripts::
# 3 "data/maps/MirageTower_3F/scripts.pory"
# 2 "data/maps/MirageTower_3F/scripts.pory"
# 4 "data/maps/MirageTower_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 5 "data/maps/MirageTower_3F/scripts.pory"
# 3 "data/maps/MirageTower_3F/scripts.pory"
# 6 "data/maps/MirageTower_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 7 "data/maps/MirageTower_3F/scripts.pory"
# 4 "data/maps/MirageTower_3F/scripts.pory"
# 8 "data/maps/MirageTower_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_3F_SetHoleWarp
# 9 "data/maps/MirageTower_3F/scripts.pory"
	.byte 0
# 10 "data/maps/MirageTower_3F/scripts.pory"

# 11 "data/maps/MirageTower_3F/scripts.pory"

# 12 "data/maps/MirageTower_3F/scripts.pory"
MirageTower_3F_SetHoleWarp::
# 13 "data/maps/MirageTower_3F/scripts.pory"
# 8 "data/maps/MirageTower_3F/scripts.pory"
# 14 "data/maps/MirageTower_3F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 15 "data/maps/MirageTower_3F/scripts.pory"
# 9 "data/maps/MirageTower_3F/scripts.pory"
# 16 "data/maps/MirageTower_3F/scripts.pory"
	setholewarp MAP_MIRAGE_TOWER_2F
# 17 "data/maps/MirageTower_3F/scripts.pory"
	end
