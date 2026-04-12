# 1 "data/maps/Route129/scripts.pory"

# 2 "data/maps/Route129/scripts.pory"
Route129_MapScripts::
# 3 "data/maps/Route129/scripts.pory"
# 2 "data/maps/Route129/scripts.pory"
# 4 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route129_OnTransition
# 5 "data/maps/Route129/scripts.pory"
# 3 "data/maps/Route129/scripts.pory"
# 6 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route129_OnLoad
# 7 "data/maps/Route129/scripts.pory"
# 4 "data/maps/Route129/scripts.pory"
# 8 "data/maps/Route129/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route129_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/Route129/scripts.pory"
	.byte 0
# 10 "data/maps/Route129/scripts.pory"

# 11 "data/maps/Route129/scripts.pory"
Route129_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/Route129/scripts.pory"
# 5 "data/maps/Route129/scripts.pory"
# 13 "data/maps/Route129/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 14 "data/maps/Route129/scripts.pory"
	.2byte 0
# 15 "data/maps/Route129/scripts.pory"

# 16 "data/maps/Route129/scripts.pory"

# 17 "data/maps/Route129/scripts.pory"
Route129_OnLoad::
# 18 "data/maps/Route129/scripts.pory"
# 10 "data/maps/Route129/scripts.pory"
# 19 "data/maps/Route129/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_WEST
# 20 "data/maps/Route129/scripts.pory"
	goto_if_eq Route129_OnLoad_2
# 21 "data/maps/Route129/scripts.pory"
Route129_OnLoad_1:
# 22 "data/maps/Route129/scripts.pory"
# 13 "data/maps/Route129/scripts.pory"
# 23 "data/maps/Route129/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_EAST
# 24 "data/maps/Route129/scripts.pory"
	goto_if_eq Route129_OnLoad_5
# 25 "data/maps/Route129/scripts.pory"
Route129_OnLoad_4:
# 26 "data/maps/Route129/scripts.pory"
	end
# 27 "data/maps/Route129/scripts.pory"

# 28 "data/maps/Route129/scripts.pory"
Route129_OnLoad_2:
# 29 "data/maps/Route129/scripts.pory"
# 11 "data/maps/Route129/scripts.pory"
# 30 "data/maps/Route129/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute129West
# 31 "data/maps/Route129/scripts.pory"
	goto Route129_OnLoad_1
# 32 "data/maps/Route129/scripts.pory"

# 33 "data/maps/Route129/scripts.pory"
Route129_OnLoad_5:
# 34 "data/maps/Route129/scripts.pory"
# 14 "data/maps/Route129/scripts.pory"
# 35 "data/maps/Route129/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute129East
# 36 "data/maps/Route129/scripts.pory"
	goto Route129_OnLoad_4
# 37 "data/maps/Route129/scripts.pory"

# 38 "data/maps/Route129/scripts.pory"

# 39 "data/maps/Route129/scripts.pory"
Route129_OnTransition::
# 40 "data/maps/Route129/scripts.pory"
# 20 "data/maps/Route129/scripts.pory"
# 41 "data/maps/Route129/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 42 "data/maps/Route129/scripts.pory"
	goto_if_eq Route129_OnTransition_2
# 43 "data/maps/Route129/scripts.pory"
Route129_OnTransition_1:
# 44 "data/maps/Route129/scripts.pory"
# 23 "data/maps/Route129/scripts.pory"
# 45 "data/maps/Route129/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 46 "data/maps/Route129/scripts.pory"
	goto_if_ge Route129_OnTransition_5
# 47 "data/maps/Route129/scripts.pory"
Route129_OnTransition_4:
# 48 "data/maps/Route129/scripts.pory"
# 26 "data/maps/Route129/scripts.pory"
# 49 "data/maps/Route129/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_WEST
# 50 "data/maps/Route129/scripts.pory"
	goto_if_eq Route129_OnTransition_8
# 51 "data/maps/Route129/scripts.pory"
Route129_OnTransition_7:
# 52 "data/maps/Route129/scripts.pory"
# 29 "data/maps/Route129/scripts.pory"
# 53 "data/maps/Route129/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_129_EAST
# 54 "data/maps/Route129/scripts.pory"
	goto_if_eq Route129_OnTransition_11
# 55 "data/maps/Route129/scripts.pory"
Route129_OnTransition_10:
# 56 "data/maps/Route129/scripts.pory"
	end
# 57 "data/maps/Route129/scripts.pory"

# 58 "data/maps/Route129/scripts.pory"
Route129_OnTransition_2:
# 59 "data/maps/Route129/scripts.pory"
# 21 "data/maps/Route129/scripts.pory"
# 60 "data/maps/Route129/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
# 61 "data/maps/Route129/scripts.pory"
	goto Route129_OnTransition_1
# 62 "data/maps/Route129/scripts.pory"

# 63 "data/maps/Route129/scripts.pory"
Route129_OnTransition_5:
# 64 "data/maps/Route129/scripts.pory"
# 24 "data/maps/Route129/scripts.pory"
# 65 "data/maps/Route129/scripts.pory"
	call Route129_EventScript_CheckSetAbnormalWeather
# 66 "data/maps/Route129/scripts.pory"
	goto Route129_OnTransition_4
# 67 "data/maps/Route129/scripts.pory"

# 68 "data/maps/Route129/scripts.pory"
Route129_OnTransition_8:
# 69 "data/maps/Route129/scripts.pory"
# 27 "data/maps/Route129/scripts.pory"
# 70 "data/maps/Route129/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
# 71 "data/maps/Route129/scripts.pory"
	goto Route129_OnTransition_7
# 72 "data/maps/Route129/scripts.pory"

# 73 "data/maps/Route129/scripts.pory"
Route129_OnTransition_11:
# 74 "data/maps/Route129/scripts.pory"
# 30 "data/maps/Route129/scripts.pory"
# 75 "data/maps/Route129/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
# 76 "data/maps/Route129/scripts.pory"
	goto Route129_OnTransition_10
# 77 "data/maps/Route129/scripts.pory"

# 78 "data/maps/Route129/scripts.pory"

# 79 "data/maps/Route129/scripts.pory"
Route129_EventScript_CheckSetAbnormalWeather::
# 80 "data/maps/Route129/scripts.pory"
# 36 "data/maps/Route129/scripts.pory"
# 81 "data/maps/Route129/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route129_EventScript_CheckSetAbnormalWeather_2
# 82 "data/maps/Route129/scripts.pory"
Route129_EventScript_CheckSetAbnormalWeather_1:
# 83 "data/maps/Route129/scripts.pory"
	return
# 84 "data/maps/Route129/scripts.pory"

# 85 "data/maps/Route129/scripts.pory"
Route129_EventScript_CheckSetAbnormalWeather_2:
# 86 "data/maps/Route129/scripts.pory"
# 37 "data/maps/Route129/scripts.pory"
# 87 "data/maps/Route129/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 88 "data/maps/Route129/scripts.pory"
	goto Route129_EventScript_CheckSetAbnormalWeather_1
# 89 "data/maps/Route129/scripts.pory"

# 90 "data/maps/Route129/scripts.pory"

# 91 "data/maps/Route129/scripts.pory"
Route129_EventScript_Chase::
# 92 "data/maps/Route129/scripts.pory"
# 43 "data/maps/Route129/scripts.pory"
# 93 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_CHASE, Route129_Text_ChaseIntro, Route129_Text_ChaseDefeat
# 94 "data/maps/Route129/scripts.pory"
# 44 "data/maps/Route129/scripts.pory"
# 95 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ChasePostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/Route129/scripts.pory"
	end
# 97 "data/maps/Route129/scripts.pory"

# 98 "data/maps/Route129/scripts.pory"

# 99 "data/maps/Route129/scripts.pory"
Route129_EventScript_Allison::
# 100 "data/maps/Route129/scripts.pory"
# 49 "data/maps/Route129/scripts.pory"
# 101 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_ALLISON, Route129_Text_AllisonIntro, Route129_Text_AllisonDefeat
# 102 "data/maps/Route129/scripts.pory"
# 50 "data/maps/Route129/scripts.pory"
# 103 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route129/scripts.pory"
	end
# 105 "data/maps/Route129/scripts.pory"

# 106 "data/maps/Route129/scripts.pory"

# 107 "data/maps/Route129/scripts.pory"
Route129_EventScript_Reed::
# 108 "data/maps/Route129/scripts.pory"
# 55 "data/maps/Route129/scripts.pory"
# 109 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_REED, Route129_Text_ReedIntro, Route129_Text_ReedDefeat
# 110 "data/maps/Route129/scripts.pory"
# 56 "data/maps/Route129/scripts.pory"
# 111 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/Route129/scripts.pory"
	end
# 113 "data/maps/Route129/scripts.pory"

# 114 "data/maps/Route129/scripts.pory"

# 115 "data/maps/Route129/scripts.pory"
Route129_EventScript_Tisha::
# 116 "data/maps/Route129/scripts.pory"
# 61 "data/maps/Route129/scripts.pory"
# 117 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_TISHA, Route129_Text_TishaIntro, Route129_Text_TishaDefeat
# 118 "data/maps/Route129/scripts.pory"
# 62 "data/maps/Route129/scripts.pory"
# 119 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_TishaPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route129/scripts.pory"
	end
# 121 "data/maps/Route129/scripts.pory"

# 122 "data/maps/Route129/scripts.pory"

# 123 "data/maps/Route129/scripts.pory"
Route129_EventScript_Clarence::
# 124 "data/maps/Route129/scripts.pory"
# 67 "data/maps/Route129/scripts.pory"
# 125 "data/maps/Route129/scripts.pory"
	trainerbattle_single TRAINER_CLARENCE, Route129_Text_ClarenceIntro, Route129_Text_ClarenceDefeat
# 126 "data/maps/Route129/scripts.pory"
# 68 "data/maps/Route129/scripts.pory"
# 127 "data/maps/Route129/scripts.pory"
	msgbox Route129_Text_ClarencePostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route129/scripts.pory"
	end
