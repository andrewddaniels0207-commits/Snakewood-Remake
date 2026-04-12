Route131_MapScripts::
# 2 "data/maps/Route131/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route131_OnTransition
	.byte 0


Route131_OnTransition::
# 6 "data/maps/Route131/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_ge Route131_OnTransition_2
Route131_OnTransition_1:
# 9 "data/maps/Route131/scripts.pory"
	call Route131_EventScript_SetLayout
	end

Route131_OnTransition_2:
# 7 "data/maps/Route131/scripts.pory"
	call Route131_EventScript_CheckSetAbnormalWeather
	goto Route131_OnTransition_1


Route131_EventScript_SetLayout::
# 14 "data/maps/Route131/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE131_SKY_PILLAR
	return


Route131_EventScript_CheckSetAbnormalWeather::
# 19 "data/maps/Route131/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route131_EventScript_CheckSetAbnormalWeather_2
Route131_EventScript_CheckSetAbnormalWeather_1:
	return

Route131_EventScript_CheckSetAbnormalWeather_2:
# 20 "data/maps/Route131/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route131_EventScript_CheckSetAbnormalWeather_1


Route131_EventScript_Richard::
# 26 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_RICHARD, Route131_Text_RichardIntro, Route131_Text_RichardDefeat
# 27 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Herman::
# 32 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_HERMAN, Route131_Text_HermanIntro, Route131_Text_HermanDefeat
# 33 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Susie::
# 38 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_SUSIE, Route131_Text_SusieIntro, Route131_Text_SusieDefeat
# 39 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Kara::
# 44 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KARA, Route131_Text_KaraIntro, Route131_Text_KaraDefeat
# 45 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KaraPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Reli::
# 50 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_ReliIntro, Route131_Text_ReliDefeat, Route131_Text_ReliNotEnoughMons
# 51 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Ian::
# 56 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_IanIntro, Route131_Text_IanDefeat, Route131_Text_IanNotEnoughMons
# 57 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_IanPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Talia::
# 62 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_TALIA, Route131_Text_TaliaIntro, Route131_Text_TaliaDefeat
# 63 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_TaliaPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Kevin::
# 68 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KEVIN, Route131_Text_KevinIntro, Route131_Text_KevinDefeat
# 69 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
	end

