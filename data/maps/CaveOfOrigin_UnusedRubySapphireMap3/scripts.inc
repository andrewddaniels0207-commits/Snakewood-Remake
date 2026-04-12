# 1 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"

# 2 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
CaveOfOrigin_UnusedRubySapphireMap3_MapScripts::
# 3 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
# 2 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
# 4 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveOfOrigin_UnusedRubySapphireMap3_OnTransition
# 5 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	.byte 0
# 6 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"

# 7 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"

# 8 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
CaveOfOrigin_UnusedRubySapphireMap3_OnTransition::
# 9 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
# 6 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
# 10 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	goto_if_set FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE, CaveOfOrigin_UnusedRubySapphireMap3_OnTransition_2
# 11 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
CaveOfOrigin_UnusedRubySapphireMap3_OnTransition_1:
# 12 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	end
# 13 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"

# 14 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
CaveOfOrigin_UnusedRubySapphireMap3_OnTransition_2:
# 15 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
# 7 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
# 16 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	call CaveOfOrigin_EventScript_DisableTriggers
# 17 "data/maps/CaveOfOrigin_UnusedRubySapphireMap3/scripts.pory"
	goto CaveOfOrigin_UnusedRubySapphireMap3_OnTransition_1
