# 1 "data/maps/Route130/scripts.pory"

# 2 "data/maps/Route130/scripts.pory"
Route130_MapScripts::
# 3 "data/maps/Route130/scripts.pory"
# 2 "data/maps/Route130/scripts.pory"
# 4 "data/maps/Route130/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route130_OnTransition
# 5 "data/maps/Route130/scripts.pory"
	.byte 0
# 6 "data/maps/Route130/scripts.pory"

# 7 "data/maps/Route130/scripts.pory"

# 8 "data/maps/Route130/scripts.pory"
Route130_OnTransition::
# 9 "data/maps/Route130/scripts.pory"
# 6 "data/maps/Route130/scripts.pory"
# 10 "data/maps/Route130/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 11 "data/maps/Route130/scripts.pory"
	goto_if_ge Route130_OnTransition_2
# 12 "data/maps/Route130/scripts.pory"
Route130_OnTransition_1:
# 13 "data/maps/Route130/scripts.pory"
# 9 "data/maps/Route130/scripts.pory"
# 14 "data/maps/Route130/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 15 "data/maps/Route130/scripts.pory"
# 10 "data/maps/Route130/scripts.pory"
# 16 "data/maps/Route130/scripts.pory"
	compare VAR_RESULT, TRUE
# 17 "data/maps/Route130/scripts.pory"
	goto_if_eq Route130_OnTransition_5
# 18 "data/maps/Route130/scripts.pory"
Route130_OnTransition_4:
# 19 "data/maps/Route130/scripts.pory"
# 13 "data/maps/Route130/scripts.pory"
# 20 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE
# 21 "data/maps/Route130/scripts.pory"
# 14 "data/maps/Route130/scripts.pory"
# 22 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_12
# 23 "data/maps/Route130/scripts.pory"
# 15 "data/maps/Route130/scripts.pory"
# 24 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_13
# 25 "data/maps/Route130/scripts.pory"
# 16 "data/maps/Route130/scripts.pory"
# 26 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_14
# 27 "data/maps/Route130/scripts.pory"
# 17 "data/maps/Route130/scripts.pory"
# 28 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_15
# 29 "data/maps/Route130/scripts.pory"
# 18 "data/maps/Route130/scripts.pory"
# 30 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_16
# 31 "data/maps/Route130/scripts.pory"
# 19 "data/maps/Route130/scripts.pory"
# 32 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_17
# 33 "data/maps/Route130/scripts.pory"
# 20 "data/maps/Route130/scripts.pory"
# 34 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_18
# 35 "data/maps/Route130/scripts.pory"
# 21 "data/maps/Route130/scripts.pory"
# 36 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_19
# 37 "data/maps/Route130/scripts.pory"
# 22 "data/maps/Route130/scripts.pory"
# 38 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1A
# 39 "data/maps/Route130/scripts.pory"
# 23 "data/maps/Route130/scripts.pory"
# 40 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1B
# 41 "data/maps/Route130/scripts.pory"
# 24 "data/maps/Route130/scripts.pory"
# 42 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1C
# 43 "data/maps/Route130/scripts.pory"
# 25 "data/maps/Route130/scripts.pory"
# 44 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1D
# 45 "data/maps/Route130/scripts.pory"
# 26 "data/maps/Route130/scripts.pory"
# 46 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1E
# 47 "data/maps/Route130/scripts.pory"
# 27 "data/maps/Route130/scripts.pory"
# 48 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1F
# 49 "data/maps/Route130/scripts.pory"
# 28 "data/maps/Route130/scripts.pory"
# 50 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130
# 51 "data/maps/Route130/scripts.pory"
	end
# 52 "data/maps/Route130/scripts.pory"

# 53 "data/maps/Route130/scripts.pory"
Route130_OnTransition_2:
# 54 "data/maps/Route130/scripts.pory"
# 7 "data/maps/Route130/scripts.pory"
# 55 "data/maps/Route130/scripts.pory"
	call Route130_EventScript_CheckSetAbnormalWeather
# 56 "data/maps/Route130/scripts.pory"
	goto Route130_OnTransition_1
# 57 "data/maps/Route130/scripts.pory"

# 58 "data/maps/Route130/scripts.pory"
Route130_OnTransition_5:
# 59 "data/maps/Route130/scripts.pory"
# 11 "data/maps/Route130/scripts.pory"
# 60 "data/maps/Route130/scripts.pory"
	goto Route130_EventScript_SetMirageIslandLayout
# 61 "data/maps/Route130/scripts.pory"
	goto Route130_OnTransition_4
# 62 "data/maps/Route130/scripts.pory"

# 63 "data/maps/Route130/scripts.pory"

# 64 "data/maps/Route130/scripts.pory"
Route130_EventScript_SetMirageIslandLayout::
# 65 "data/maps/Route130/scripts.pory"
# 33 "data/maps/Route130/scripts.pory"
# 66 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130_MIRAGE_ISLAND
# 67 "data/maps/Route130/scripts.pory"
	end
# 68 "data/maps/Route130/scripts.pory"

# 69 "data/maps/Route130/scripts.pory"

# 70 "data/maps/Route130/scripts.pory"
Route130_EventScript_CheckSetAbnormalWeather::
# 71 "data/maps/Route130/scripts.pory"
# 38 "data/maps/Route130/scripts.pory"
# 72 "data/maps/Route130/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route130_EventScript_CheckSetAbnormalWeather_2
# 73 "data/maps/Route130/scripts.pory"
Route130_EventScript_CheckSetAbnormalWeather_1:
# 74 "data/maps/Route130/scripts.pory"
	return
# 75 "data/maps/Route130/scripts.pory"

# 76 "data/maps/Route130/scripts.pory"
Route130_EventScript_CheckSetAbnormalWeather_2:
# 77 "data/maps/Route130/scripts.pory"
# 39 "data/maps/Route130/scripts.pory"
# 78 "data/maps/Route130/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 79 "data/maps/Route130/scripts.pory"
	goto Route130_EventScript_CheckSetAbnormalWeather_1
# 80 "data/maps/Route130/scripts.pory"

# 81 "data/maps/Route130/scripts.pory"

# 82 "data/maps/Route130/scripts.pory"
Route130_EventScript_Rodney::
# 83 "data/maps/Route130/scripts.pory"
# 45 "data/maps/Route130/scripts.pory"
# 84 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_RODNEY, Route130_Text_RodneyIntro, Route130_Text_RodneyDefeat
# 85 "data/maps/Route130/scripts.pory"
# 46 "data/maps/Route130/scripts.pory"
# 86 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/Route130/scripts.pory"
	end
# 88 "data/maps/Route130/scripts.pory"

# 89 "data/maps/Route130/scripts.pory"

# 90 "data/maps/Route130/scripts.pory"
Route130_EventScript_Katie::
# 91 "data/maps/Route130/scripts.pory"
# 51 "data/maps/Route130/scripts.pory"
# 92 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_KATIE, Route130_Text_KatieIntro, Route130_Text_KatieDefeat
# 93 "data/maps/Route130/scripts.pory"
# 52 "data/maps/Route130/scripts.pory"
# 94 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route130/scripts.pory"
	end
# 96 "data/maps/Route130/scripts.pory"

# 97 "data/maps/Route130/scripts.pory"

# 98 "data/maps/Route130/scripts.pory"
Route130_EventScript_Santiago::
# 99 "data/maps/Route130/scripts.pory"
# 57 "data/maps/Route130/scripts.pory"
# 100 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_SANTIAGO, Route130_Text_SantiagoIntro, Route130_Text_SantiagoDefeat
# 101 "data/maps/Route130/scripts.pory"
# 58 "data/maps/Route130/scripts.pory"
# 102 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route130/scripts.pory"
	end
