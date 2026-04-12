# 1 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 2 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Frlg_MapScripts::
# 3 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 2 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 4 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_1F_Frlg_OnLoad
# 5 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 3 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 6 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_Frlg_OnTransition
# 7 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 9 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 10 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Frlg_OnLoad::
# 11 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 7 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 12 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
# 13 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	goto_if_ne VictoryRoad_1F_Frlg_OnLoad_2
# 14 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Frlg_OnLoad_1:
# 15 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	end
# 16 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 17 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Frlg_OnLoad_2:
# 18 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 8 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 19 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	call VictoryRoad_1F_EventScript_SetRockBarrier
# 20 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	goto VictoryRoad_1F_Frlg_OnLoad_1
# 21 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 22 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 23 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_EventScript_SetRockBarrier::
# 24 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 14 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 25 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_RockBarrier_Top, 1
# 26 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 15 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 27 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_RockBarrier_Bottom, 1
# 28 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	return
# 29 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 30 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 31 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Frlg_OnTransition::
# 32 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 20 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 33 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
# 34 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	end
# 35 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 36 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 37 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_EventScript_FloorSwitch::
# 38 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 25 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 39 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	lockall
# 40 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 26 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 41 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
# 42 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	goto_if_eq VictoryRoad_1F_EventScript_FloorSwitch_2
# 43 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_EventScript_FloorSwitch_1:
# 44 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 29 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 45 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_Floor_Ledge_Top, 0
# 46 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 30 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 47 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_Floor_Ledge_Bottom, 0
# 48 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 31 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 49 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 50 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 32 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 51 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 33 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 53 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	waitse
# 54 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 34 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 55 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_1F_BOULDER
# 56 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 35 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 57 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
# 58 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 36 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 59 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	releaseall
# 60 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	end
# 61 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 62 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_EventScript_FloorSwitch_2:
# 63 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 27 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 64 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	goto VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed
# 65 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	goto VictoryRoad_1F_EventScript_FloorSwitch_1
# 66 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 67 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 68 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed::
# 69 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 41 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 70 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	releaseall
# 71 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	end
# 72 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 73 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 74 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_EventScript_Naomi::
# 75 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 46 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 76 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_NAOMI, VictoryRoad_1F_Text_NaomiIntro, VictoryRoad_1F_Text_NaomiDefeat
# 77 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 47 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 78 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	msgbox VictoryRoad_1F_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	end
# 80 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 81 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 82 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_EventScript_Rolando::
# 83 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 52 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 84 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ROLANDO, VictoryRoad_1F_Text_RolandoIntro, VictoryRoad_1F_Text_RolandoDefeat
# 85 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 53 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 86 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	msgbox VictoryRoad_1F_Text_RolandoPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	end
# 88 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 89 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 90 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Text_NaomiIntro::
# 91 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 57 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 92 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I wonder if you are good enough\n"
# 93 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "for me?$"
# 94 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 95 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Text_NaomiDefeat::
# 96 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 62 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 97 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I lost out…$"
# 98 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 99 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Text_NaomiPostBattle::
# 100 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 66 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 101 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I never wanted to lose to anybody,\n"
# 102 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "especially to a younger kid…$"
# 103 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 104 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Text_RolandoIntro::
# 105 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 71 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 106 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I can see you're good.\n"
# 107 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "Let me see exactly how good!$"
# 108 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 109 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Text_RolandoDefeat::
# 110 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 76 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 111 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I had a chance…$"
# 112 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"

# 113 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
VictoryRoad_1F_Text_RolandoPostBattle::
# 114 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 80 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
# 115 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "Tch!\n"
# 116 "data/maps/VictoryRoad_1F_Frlg/scripts.pory"
	.string "I concede, you are better than I!$"
