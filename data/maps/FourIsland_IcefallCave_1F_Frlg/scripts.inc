# 1 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
FourIsland_IcefallCave_1F_Frlg_MapScripts::
# 3 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 2 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FourIsland_IcefallCave_1F_OnResume
# 5 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 3 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 6 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FourIsland_IcefallCave_1F_OnLoad
# 7 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 8 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_IcefallCave_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	.byte 0
# 10 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 11 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
FourIsland_IcefallCave_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 5 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 13 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, FourIsland_IcefallCave_1F_EventScript_FallDownHole
# 14 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	.2byte 0
# 15 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 16 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 17 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
FourIsland_IcefallCave_1F_OnResume::
# 18 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 10 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 19 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	setstepcallback STEP_CB_ICEFALL_CAVE
# 20 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 22 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 23 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
FourIsland_IcefallCave_1F_OnLoad::
# 24 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 15 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 25 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	special SetIcefallCaveCrackedIceMetatiles
# 26 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	end
# 27 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 28 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 29 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
FourIsland_IcefallCave_1F_EventScript_FallDownHole::
# 30 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 31 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	lockall
# 32 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 21 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 33 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	delay 20
# 34 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 22 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 35 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_1F_Movement_SetInvisible
# 36 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 23 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 37 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 24 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 39 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	playse SE_FALL
# 40 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 25 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 41 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	delay 60
# 42 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 26 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 43 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	warphole MAP_FOUR_ISLAND_ICEFALL_CAVE_B1F
# 44 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 27 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 45 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	waitstate
# 46 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 28 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 47 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	releaseall
# 48 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	end
# 49 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 50 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"

# 51 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 32 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 52 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
FourIsland_IcefallCave_1F_Movement_SetInvisible:
# 53 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 33 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 54 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	set_invisible
# 55 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 34 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
# 56 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	step_end
