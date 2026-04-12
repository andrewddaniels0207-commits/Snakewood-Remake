# 1 "data/maps/Route18_Frlg/scripts.pory"

# 2 "data/maps/Route18_Frlg/scripts.pory"
Route18_Frlg_MapScripts::
# 3 "data/maps/Route18_Frlg/scripts.pory"
# 2 "data/maps/Route18_Frlg/scripts.pory"
# 4 "data/maps/Route18_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
# 5 "data/maps/Route18_Frlg/scripts.pory"
# 3 "data/maps/Route18_Frlg/scripts.pory"
# 6 "data/maps/Route18_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route18_OnWarp
# 7 "data/maps/Route18_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/Route18_Frlg/scripts.pory"

# 9 "data/maps/Route18_Frlg/scripts.pory"

# 10 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnTransition::
# 11 "data/maps/Route18_Frlg/scripts.pory"
# 7 "data/maps/Route18_Frlg/scripts.pory"
# 12 "data/maps/Route18_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE16, 1
# 13 "data/maps/Route18_Frlg/scripts.pory"
	goto_if_eq Route18_OnTransition_2
# 14 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnTransition_1:
# 15 "data/maps/Route18_Frlg/scripts.pory"
	end
# 16 "data/maps/Route18_Frlg/scripts.pory"

# 17 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnTransition_2:
# 18 "data/maps/Route18_Frlg/scripts.pory"
# 8 "data/maps/Route18_Frlg/scripts.pory"
# 19 "data/maps/Route18_Frlg/scripts.pory"
	call Route18_OnTransitionCyclingRoad
# 20 "data/maps/Route18_Frlg/scripts.pory"
	goto Route18_OnTransition_1
# 21 "data/maps/Route18_Frlg/scripts.pory"

# 22 "data/maps/Route18_Frlg/scripts.pory"

# 23 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnTransitionCyclingRoad::
# 24 "data/maps/Route18_Frlg/scripts.pory"
# 14 "data/maps/Route18_Frlg/scripts.pory"
# 25 "data/maps/Route18_Frlg/scripts.pory"
	setflag FLAG_SYS_ON_CYCLING_ROAD
# 26 "data/maps/Route18_Frlg/scripts.pory"
	return
# 27 "data/maps/Route18_Frlg/scripts.pory"

# 28 "data/maps/Route18_Frlg/scripts.pory"

# 29 "data/maps/Route18_Frlg/scripts.pory"
# 18 "data/maps/Route18_Frlg/scripts.pory"
# 30 "data/maps/Route18_Frlg/scripts.pory"

# 31 "data/maps/Route18_Frlg/scripts.pory"
# 19 "data/maps/Route18_Frlg/scripts.pory"
# 32 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnWarp:
# 33 "data/maps/Route18_Frlg/scripts.pory"
# 20 "data/maps/Route18_Frlg/scripts.pory"
# 34 "data/maps/Route18_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route18_OnWarpCyclingRoad
# 35 "data/maps/Route18_Frlg/scripts.pory"
# 21 "data/maps/Route18_Frlg/scripts.pory"
# 36 "data/maps/Route18_Frlg/scripts.pory"
	.2byte 0
# 37 "data/maps/Route18_Frlg/scripts.pory"

# 38 "data/maps/Route18_Frlg/scripts.pory"
Route18_OnWarpCyclingRoad::
# 39 "data/maps/Route18_Frlg/scripts.pory"
# 26 "data/maps/Route18_Frlg/scripts.pory"
# 40 "data/maps/Route18_Frlg/scripts.pory"
	special ForcePlayerOntoBike
# 41 "data/maps/Route18_Frlg/scripts.pory"
	end
# 42 "data/maps/Route18_Frlg/scripts.pory"

# 43 "data/maps/Route18_Frlg/scripts.pory"

# 44 "data/maps/Route18_Frlg/scripts.pory"
Route18_EventScript_RouteSign::
# 45 "data/maps/Route18_Frlg/scripts.pory"
# 31 "data/maps/Route18_Frlg/scripts.pory"
# 46 "data/maps/Route18_Frlg/scripts.pory"
	msgbox Route18_Text_RouteSign, MSGBOX_SIGN
# 47 "data/maps/Route18_Frlg/scripts.pory"
	end
# 48 "data/maps/Route18_Frlg/scripts.pory"

# 49 "data/maps/Route18_Frlg/scripts.pory"

# 50 "data/maps/Route18_Frlg/scripts.pory"
Route18_EventScript_CyclingRoadSign::
# 51 "data/maps/Route18_Frlg/scripts.pory"
# 36 "data/maps/Route18_Frlg/scripts.pory"
# 52 "data/maps/Route18_Frlg/scripts.pory"
	msgbox Route18_Text_CyclingRoadSign, MSGBOX_SIGN
# 53 "data/maps/Route18_Frlg/scripts.pory"
	end
# 54 "data/maps/Route18_Frlg/scripts.pory"

# 55 "data/maps/Route18_Frlg/scripts.pory"

# 56 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_WiltonIntro::
# 57 "data/maps/Route18_Frlg/scripts.pory"
# 40 "data/maps/Route18_Frlg/scripts.pory"
# 58 "data/maps/Route18_Frlg/scripts.pory"
	.string "I always check every grassy area\n"
# 59 "data/maps/Route18_Frlg/scripts.pory"
	.string "for new POKéMON.$"
# 60 "data/maps/Route18_Frlg/scripts.pory"

# 61 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_WiltonDefeat::
# 62 "data/maps/Route18_Frlg/scripts.pory"
# 45 "data/maps/Route18_Frlg/scripts.pory"
# 63 "data/maps/Route18_Frlg/scripts.pory"
	.string "Tch!$"
# 64 "data/maps/Route18_Frlg/scripts.pory"

# 65 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_WiltonPostBattle::
# 66 "data/maps/Route18_Frlg/scripts.pory"
# 49 "data/maps/Route18_Frlg/scripts.pory"
# 67 "data/maps/Route18_Frlg/scripts.pory"
	.string "I wish I had a BIKE!$"
# 68 "data/maps/Route18_Frlg/scripts.pory"

# 69 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_RamiroIntro::
# 70 "data/maps/Route18_Frlg/scripts.pory"
# 53 "data/maps/Route18_Frlg/scripts.pory"
# 71 "data/maps/Route18_Frlg/scripts.pory"
	.string "Kurukkoo!\n"
# 72 "data/maps/Route18_Frlg/scripts.pory"
	.string "How do you like my birdcall?$"
# 73 "data/maps/Route18_Frlg/scripts.pory"

# 74 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_RamiroDefeat::
# 75 "data/maps/Route18_Frlg/scripts.pory"
# 58 "data/maps/Route18_Frlg/scripts.pory"
# 76 "data/maps/Route18_Frlg/scripts.pory"
	.string "I had to bug you!$"
# 77 "data/maps/Route18_Frlg/scripts.pory"

# 78 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_RamiroPostBattle::
# 79 "data/maps/Route18_Frlg/scripts.pory"
# 62 "data/maps/Route18_Frlg/scripts.pory"
# 80 "data/maps/Route18_Frlg/scripts.pory"
	.string "I collect sea POKéMON on weekends\n"
# 81 "data/maps/Route18_Frlg/scripts.pory"
	.string "because the sea is so close.$"
# 82 "data/maps/Route18_Frlg/scripts.pory"

# 83 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_JacobIntro::
# 84 "data/maps/Route18_Frlg/scripts.pory"
# 67 "data/maps/Route18_Frlg/scripts.pory"
# 85 "data/maps/Route18_Frlg/scripts.pory"
	.string "This is my turf!\n"
# 86 "data/maps/Route18_Frlg/scripts.pory"
	.string "Get out of here!$"
# 87 "data/maps/Route18_Frlg/scripts.pory"

# 88 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_JacobDefeat::
# 89 "data/maps/Route18_Frlg/scripts.pory"
# 72 "data/maps/Route18_Frlg/scripts.pory"
# 90 "data/maps/Route18_Frlg/scripts.pory"
	.string "Darn!$"
# 91 "data/maps/Route18_Frlg/scripts.pory"

# 92 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_JacobPostBattle::
# 93 "data/maps/Route18_Frlg/scripts.pory"
# 76 "data/maps/Route18_Frlg/scripts.pory"
# 94 "data/maps/Route18_Frlg/scripts.pory"
	.string "This is my fave area for catching\n"
# 95 "data/maps/Route18_Frlg/scripts.pory"
	.string "POKéMON.$"
# 96 "data/maps/Route18_Frlg/scripts.pory"

# 97 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_RouteSign::
# 98 "data/maps/Route18_Frlg/scripts.pory"
# 81 "data/maps/Route18_Frlg/scripts.pory"
# 99 "data/maps/Route18_Frlg/scripts.pory"
	.string "ROUTE 18\n"
# 100 "data/maps/Route18_Frlg/scripts.pory"
	.string "CELADON CITY - FUCHSIA CITY$"
# 101 "data/maps/Route18_Frlg/scripts.pory"

# 102 "data/maps/Route18_Frlg/scripts.pory"
Route18_Text_CyclingRoadSign::
# 103 "data/maps/Route18_Frlg/scripts.pory"
# 86 "data/maps/Route18_Frlg/scripts.pory"
# 104 "data/maps/Route18_Frlg/scripts.pory"
	.string "CYCLING ROAD\n"
# 105 "data/maps/Route18_Frlg/scripts.pory"
	.string "No pedestrians permitted!$"
