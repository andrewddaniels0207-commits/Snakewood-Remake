FieryPath_MapScripts::
# 2 "data/maps/FieryPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
	.byte 0


FieryPath_OnTransition::
# 6 "data/maps/FieryPath/scripts.pory"
	goto_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_OnTransition_2
FieryPath_OnTransition_1:
# 9 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_LANDMARK_FIERY_PATH
	end

FieryPath_OnTransition_2:
# 7 "data/maps/FieryPath/scripts.pory"
	call FieryPath_EventScript_MoveScottToFallarbor
	goto FieryPath_OnTransition_1


FieryPath_EventScript_MoveScottToFallarbor::
# 14 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 15 "data/maps/FieryPath/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	return

