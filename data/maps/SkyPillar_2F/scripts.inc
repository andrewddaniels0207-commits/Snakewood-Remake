# 1 "data/maps/SkyPillar_2F/scripts.pory"

# 2 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_MapScripts::
# 3 "data/maps/SkyPillar_2F/scripts.pory"
# 2 "data/maps/SkyPillar_2F/scripts.pory"
# 4 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 5 "data/maps/SkyPillar_2F/scripts.pory"
# 3 "data/maps/SkyPillar_2F/scripts.pory"
# 6 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_2F_OnTransition
# 7 "data/maps/SkyPillar_2F/scripts.pory"
# 4 "data/maps/SkyPillar_2F/scripts.pory"
# 8 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_2F_SetHoleWarp
# 9 "data/maps/SkyPillar_2F/scripts.pory"
	.byte 0
# 10 "data/maps/SkyPillar_2F/scripts.pory"

# 11 "data/maps/SkyPillar_2F/scripts.pory"

# 12 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_OnTransition::
# 13 "data/maps/SkyPillar_2F/scripts.pory"
# 8 "data/maps/SkyPillar_2F/scripts.pory"
# 14 "data/maps/SkyPillar_2F/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 15 "data/maps/SkyPillar_2F/scripts.pory"
	goto_if_lt SkyPillar_2F_OnTransition_2
# 16 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_OnTransition_1:
# 17 "data/maps/SkyPillar_2F/scripts.pory"
# 12 "data/maps/SkyPillar_2F/scripts.pory"
# 18 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 19 "data/maps/SkyPillar_2F/scripts.pory"
# 14 "data/maps/SkyPillar_2F/scripts.pory"
# 20 "data/maps/SkyPillar_2F/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1, warn = FALSE
# 21 "data/maps/SkyPillar_2F/scripts.pory"
	end
# 22 "data/maps/SkyPillar_2F/scripts.pory"

# 23 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_OnTransition_2:
# 24 "data/maps/SkyPillar_2F/scripts.pory"
# 9 "data/maps/SkyPillar_2F/scripts.pory"
# 25 "data/maps/SkyPillar_2F/scripts.pory"
	call SkyPillar_2F_EventScript_CleanFloor
# 26 "data/maps/SkyPillar_2F/scripts.pory"
	goto SkyPillar_2F_OnTransition_1
# 27 "data/maps/SkyPillar_2F/scripts.pory"

# 28 "data/maps/SkyPillar_2F/scripts.pory"

# 29 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_EventScript_CleanFloor::
# 30 "data/maps/SkyPillar_2F/scripts.pory"
# 20 "data/maps/SkyPillar_2F/scripts.pory"
# 31 "data/maps/SkyPillar_2F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_2F_CLEAN
# 32 "data/maps/SkyPillar_2F/scripts.pory"
	return
# 33 "data/maps/SkyPillar_2F/scripts.pory"

# 34 "data/maps/SkyPillar_2F/scripts.pory"

# 35 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_SetHoleWarp::
# 36 "data/maps/SkyPillar_2F/scripts.pory"
# 25 "data/maps/SkyPillar_2F/scripts.pory"
# 37 "data/maps/SkyPillar_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 38 "data/maps/SkyPillar_2F/scripts.pory"
# 26 "data/maps/SkyPillar_2F/scripts.pory"
# 39 "data/maps/SkyPillar_2F/scripts.pory"
	setholewarp MAP_SKY_PILLAR_1F
# 40 "data/maps/SkyPillar_2F/scripts.pory"
	end
