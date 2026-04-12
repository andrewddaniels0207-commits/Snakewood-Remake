# 1 "data/maps/FieryPath/scripts.pory"

# 2 "data/maps/FieryPath/scripts.pory"
FieryPath_MapScripts::
# 3 "data/maps/FieryPath/scripts.pory"
# 2 "data/maps/FieryPath/scripts.pory"
# 4 "data/maps/FieryPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
# 5 "data/maps/FieryPath/scripts.pory"
	.byte 0
# 6 "data/maps/FieryPath/scripts.pory"

# 7 "data/maps/FieryPath/scripts.pory"

# 8 "data/maps/FieryPath/scripts.pory"
FieryPath_OnTransition::
# 9 "data/maps/FieryPath/scripts.pory"
# 6 "data/maps/FieryPath/scripts.pory"
# 10 "data/maps/FieryPath/scripts.pory"
	goto_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_OnTransition_2
# 11 "data/maps/FieryPath/scripts.pory"
FieryPath_OnTransition_1:
# 12 "data/maps/FieryPath/scripts.pory"
# 9 "data/maps/FieryPath/scripts.pory"
# 13 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_LANDMARK_FIERY_PATH
# 14 "data/maps/FieryPath/scripts.pory"
	end
# 15 "data/maps/FieryPath/scripts.pory"

# 16 "data/maps/FieryPath/scripts.pory"
FieryPath_OnTransition_2:
# 17 "data/maps/FieryPath/scripts.pory"
# 7 "data/maps/FieryPath/scripts.pory"
# 18 "data/maps/FieryPath/scripts.pory"
	call FieryPath_EventScript_MoveScottToFallarbor
# 19 "data/maps/FieryPath/scripts.pory"
	goto FieryPath_OnTransition_1
# 20 "data/maps/FieryPath/scripts.pory"

# 21 "data/maps/FieryPath/scripts.pory"

# 22 "data/maps/FieryPath/scripts.pory"
FieryPath_EventScript_MoveScottToFallarbor::
# 23 "data/maps/FieryPath/scripts.pory"
# 14 "data/maps/FieryPath/scripts.pory"
# 24 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 25 "data/maps/FieryPath/scripts.pory"
# 15 "data/maps/FieryPath/scripts.pory"
# 26 "data/maps/FieryPath/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 27 "data/maps/FieryPath/scripts.pory"
	return
