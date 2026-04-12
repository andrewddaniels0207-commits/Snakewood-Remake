VictoryRoad_1F_Frlg_MapScripts::
# 2 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_1F_Frlg_OnLoad
# 3 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_Frlg_OnTransition
	.byte 0


VictoryRoad_1F_Frlg_OnLoad::
# 7 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
	goto_if_ne VictoryRoad_1F_Frlg_OnLoad_2
VictoryRoad_1F_Frlg_OnLoad_1:
	end

VictoryRoad_1F_Frlg_OnLoad_2:
# 8 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	call VictoryRoad_1F_EventScript_SetRockBarrier
	goto VictoryRoad_1F_Frlg_OnLoad_1


VictoryRoad_1F_EventScript_SetRockBarrier::
# 14 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_RockBarrier_Top, 1
# 15 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_RockBarrier_Bottom, 1
	return


VictoryRoad_1F_Frlg_OnTransition::
# 20 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
	end


VictoryRoad_1F_EventScript_FloorSwitch::
# 25 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	lockall
# 26 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
	goto_if_eq VictoryRoad_1F_EventScript_FloorSwitch_2
VictoryRoad_1F_EventScript_FloorSwitch_1:
# 29 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_Floor_Ledge_Top, 0
# 30 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_Floor_Ledge_Bottom, 0
# 31 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 32 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 33 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	waitse
# 34 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_1F_BOULDER
# 35 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
# 36 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	releaseall
	end

VictoryRoad_1F_EventScript_FloorSwitch_2:
# 27 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	goto VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed
	goto VictoryRoad_1F_EventScript_FloorSwitch_1


VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed::
# 41 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	releaseall
	end


VictoryRoad_1F_EventScript_Naomi::
# 46 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_NAOMI, VictoryRoad_1F_Text_NaomiIntro, VictoryRoad_1F_Text_NaomiDefeat
# 47 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	msgbox VictoryRoad_1F_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_1F_EventScript_Rolando::
# 52 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ROLANDO, VictoryRoad_1F_Text_RolandoIntro, VictoryRoad_1F_Text_RolandoDefeat
# 53 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	msgbox VictoryRoad_1F_Text_RolandoPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_1F_Text_NaomiIntro::
# 57 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I wonder if you are good enough\n"
	.string "for me?$"

VictoryRoad_1F_Text_NaomiDefeat::
# 62 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I lost out…$"

VictoryRoad_1F_Text_NaomiPostBattle::
# 66 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I never wanted to lose to anybody,\n"
	.string "especially to a younger kid…$"

VictoryRoad_1F_Text_RolandoIntro::
# 71 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I can see you're good.\n"
	.string "Let me see exactly how good!$"

VictoryRoad_1F_Text_RolandoDefeat::
# 76 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I had a chance…$"

VictoryRoad_1F_Text_RolandoPostBattle::
# 80 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "Tch!\n"
	.string "I concede, you are better than I!$"
