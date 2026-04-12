# 1 "data/maps/SkyPillar_3F/scripts.pory"

# 2 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_MapScripts::
# 3 "data/maps/SkyPillar_3F/scripts.pory"
# 2 "data/maps/SkyPillar_3F/scripts.pory"
# 4 "data/maps/SkyPillar_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_3F_OnTransition
# 5 "data/maps/SkyPillar_3F/scripts.pory"
	.byte 0
# 6 "data/maps/SkyPillar_3F/scripts.pory"

# 7 "data/maps/SkyPillar_3F/scripts.pory"

# 8 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_OnTransition::
# 9 "data/maps/SkyPillar_3F/scripts.pory"
# 6 "data/maps/SkyPillar_3F/scripts.pory"
# 10 "data/maps/SkyPillar_3F/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 11 "data/maps/SkyPillar_3F/scripts.pory"
	goto_if_lt SkyPillar_3F_OnTransition_2
# 12 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_OnTransition_1:
# 13 "data/maps/SkyPillar_3F/scripts.pory"
	end
# 14 "data/maps/SkyPillar_3F/scripts.pory"

# 15 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_OnTransition_2:
# 16 "data/maps/SkyPillar_3F/scripts.pory"
# 7 "data/maps/SkyPillar_3F/scripts.pory"
# 17 "data/maps/SkyPillar_3F/scripts.pory"
	call SkyPillar_3F_EventScript_CleanFloor
# 18 "data/maps/SkyPillar_3F/scripts.pory"
	goto SkyPillar_3F_OnTransition_1
# 19 "data/maps/SkyPillar_3F/scripts.pory"

# 20 "data/maps/SkyPillar_3F/scripts.pory"

# 21 "data/maps/SkyPillar_3F/scripts.pory"
SkyPillar_3F_EventScript_CleanFloor::
# 22 "data/maps/SkyPillar_3F/scripts.pory"
# 13 "data/maps/SkyPillar_3F/scripts.pory"
# 23 "data/maps/SkyPillar_3F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_3F_CLEAN
# 24 "data/maps/SkyPillar_3F/scripts.pory"
	return
