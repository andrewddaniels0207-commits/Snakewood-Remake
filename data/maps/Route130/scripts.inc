Route130_MapScripts::
# 2 "data/maps/Route130/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route130_OnTransition
	.byte 0


Route130_OnTransition::
# 6 "data/maps/Route130/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_ge Route130_OnTransition_2
Route130_OnTransition_1:
# 9 "data/maps/Route130/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 10 "data/maps/Route130/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route130_OnTransition_5
Route130_OnTransition_4:
# 13 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE
# 14 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_12
# 15 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_13
# 16 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_14
# 17 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_15
# 18 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_16
# 19 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_17
# 20 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_18
# 21 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_19
# 22 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1A
# 23 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1B
# 24 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1C
# 25 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1D
# 26 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1E
# 27 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1F
# 28 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130
	end

Route130_OnTransition_2:
# 7 "data/maps/Route130/scripts.pory"
	call Route130_EventScript_CheckSetAbnormalWeather
	goto Route130_OnTransition_1

Route130_OnTransition_5:
# 11 "data/maps/Route130/scripts.pory"
	goto Route130_EventScript_SetMirageIslandLayout
	goto Route130_OnTransition_4


Route130_EventScript_SetMirageIslandLayout::
# 33 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130_MIRAGE_ISLAND
	end


Route130_EventScript_CheckSetAbnormalWeather::
# 38 "data/maps/Route130/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route130_EventScript_CheckSetAbnormalWeather_2
Route130_EventScript_CheckSetAbnormalWeather_1:
	return

Route130_EventScript_CheckSetAbnormalWeather_2:
# 39 "data/maps/Route130/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route130_EventScript_CheckSetAbnormalWeather_1


Route130_EventScript_Rodney::
# 45 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_RODNEY, Route130_Text_RodneyIntro, Route130_Text_RodneyDefeat
# 46 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end


Route130_EventScript_Katie::
# 51 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_KATIE, Route130_Text_KatieIntro, Route130_Text_KatieDefeat
# 52 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
	end


Route130_EventScript_Santiago::
# 57 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_SANTIAGO, Route130_Text_SantiagoIntro, Route130_Text_SantiagoDefeat
# 58 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
	end

