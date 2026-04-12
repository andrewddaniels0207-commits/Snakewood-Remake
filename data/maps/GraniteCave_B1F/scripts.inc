# 1 "data/maps/GraniteCave_B1F/scripts.pory"

# 2 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
# 2 "data/maps/GraniteCave_B1F/scripts.pory"
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 7 "data/maps/GraniteCave_B1F/scripts.pory"
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
# 8 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 10 "data/maps/GraniteCave_B1F/scripts.pory"

# 11 "data/maps/GraniteCave_B1F/scripts.pory"

# 12 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp::
# 13 "data/maps/GraniteCave_B1F/scripts.pory"
# 8 "data/maps/GraniteCave_B1F/scripts.pory"
# 14 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 15 "data/maps/GraniteCave_B1F/scripts.pory"
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	end
