# 1 "data/maps/SkyPillar_5F/scripts.pory"

# 2 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_MapScripts::
# 3 "data/maps/SkyPillar_5F/scripts.pory"
# 2 "data/maps/SkyPillar_5F/scripts.pory"
# 4 "data/maps/SkyPillar_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_5F_OnTransition
# 5 "data/maps/SkyPillar_5F/scripts.pory"
	.byte 0
# 6 "data/maps/SkyPillar_5F/scripts.pory"

# 7 "data/maps/SkyPillar_5F/scripts.pory"

# 8 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_OnTransition::
# 9 "data/maps/SkyPillar_5F/scripts.pory"
# 6 "data/maps/SkyPillar_5F/scripts.pory"
# 10 "data/maps/SkyPillar_5F/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 11 "data/maps/SkyPillar_5F/scripts.pory"
	goto_if_lt SkyPillar_5F_OnTransition_2
# 12 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_OnTransition_1:
# 13 "data/maps/SkyPillar_5F/scripts.pory"
	return
# 14 "data/maps/SkyPillar_5F/scripts.pory"

# 15 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_OnTransition_2:
# 16 "data/maps/SkyPillar_5F/scripts.pory"
# 7 "data/maps/SkyPillar_5F/scripts.pory"
# 17 "data/maps/SkyPillar_5F/scripts.pory"
	call SkyPillar_5F_EventScript_CleanFloor
# 18 "data/maps/SkyPillar_5F/scripts.pory"
	goto SkyPillar_5F_OnTransition_1
# 19 "data/maps/SkyPillar_5F/scripts.pory"

# 20 "data/maps/SkyPillar_5F/scripts.pory"

# 21 "data/maps/SkyPillar_5F/scripts.pory"
SkyPillar_5F_EventScript_CleanFloor::
# 22 "data/maps/SkyPillar_5F/scripts.pory"
# 13 "data/maps/SkyPillar_5F/scripts.pory"
# 23 "data/maps/SkyPillar_5F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_5F_CLEAN
# 24 "data/maps/SkyPillar_5F/scripts.pory"
	return
