CaveOfOrigin_1F_MapScripts::
# 2 "data/maps/CaveOfOrigin_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_1F_OnTransition
	.byte 0


CaveOfOrigin_1F_OnTransition::
# 6 "data/maps/CaveOfOrigin_1F/scripts.pory"
	goto_if_set FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE, CaveOfOrigin_1F_OnTransition_2
CaveOfOrigin_1F_OnTransition_1:
	end

CaveOfOrigin_1F_OnTransition_2:
# 7 "data/maps/CaveOfOrigin_1F/scripts.pory"
	call CaveOfOrigin_EventScript_DisableTriggers
	goto CaveOfOrigin_1F_OnTransition_1

