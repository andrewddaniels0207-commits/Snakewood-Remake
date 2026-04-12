# 1 "data/maps/ScorchedSlab/scripts.pory"

# 2 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_MapScripts::
# 3 "data/maps/ScorchedSlab/scripts.pory"
# 2 "data/maps/ScorchedSlab/scripts.pory"
# 4 "data/maps/ScorchedSlab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_OnTransition
# 5 "data/maps/ScorchedSlab/scripts.pory"
	.byte 0
# 6 "data/maps/ScorchedSlab/scripts.pory"

# 7 "data/maps/ScorchedSlab/scripts.pory"

# 8 "data/maps/ScorchedSlab/scripts.pory"
ScorchedSlab_OnTransition::
# 9 "data/maps/ScorchedSlab/scripts.pory"
# 6 "data/maps/ScorchedSlab/scripts.pory"
# 10 "data/maps/ScorchedSlab/scripts.pory"
	setflag FLAG_LANDMARK_SCORCHED_SLAB
# 11 "data/maps/ScorchedSlab/scripts.pory"
	end
