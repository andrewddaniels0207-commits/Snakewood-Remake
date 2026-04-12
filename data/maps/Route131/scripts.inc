# 1 "data/maps/Route131/scripts.pory"

# 2 "data/maps/Route131/scripts.pory"
Route131_MapScripts::
# 3 "data/maps/Route131/scripts.pory"
# 2 "data/maps/Route131/scripts.pory"
# 4 "data/maps/Route131/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route131_OnTransition
# 5 "data/maps/Route131/scripts.pory"
	.byte 0
# 6 "data/maps/Route131/scripts.pory"

# 7 "data/maps/Route131/scripts.pory"

# 8 "data/maps/Route131/scripts.pory"
Route131_OnTransition::
# 9 "data/maps/Route131/scripts.pory"
# 6 "data/maps/Route131/scripts.pory"
# 10 "data/maps/Route131/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 11 "data/maps/Route131/scripts.pory"
	goto_if_ge Route131_OnTransition_2
# 12 "data/maps/Route131/scripts.pory"
Route131_OnTransition_1:
# 13 "data/maps/Route131/scripts.pory"
# 9 "data/maps/Route131/scripts.pory"
# 14 "data/maps/Route131/scripts.pory"
	call Route131_EventScript_SetLayout
# 15 "data/maps/Route131/scripts.pory"
	end
# 16 "data/maps/Route131/scripts.pory"

# 17 "data/maps/Route131/scripts.pory"
Route131_OnTransition_2:
# 18 "data/maps/Route131/scripts.pory"
# 7 "data/maps/Route131/scripts.pory"
# 19 "data/maps/Route131/scripts.pory"
	call Route131_EventScript_CheckSetAbnormalWeather
# 20 "data/maps/Route131/scripts.pory"
	goto Route131_OnTransition_1
# 21 "data/maps/Route131/scripts.pory"

# 22 "data/maps/Route131/scripts.pory"

# 23 "data/maps/Route131/scripts.pory"
Route131_EventScript_SetLayout::
# 24 "data/maps/Route131/scripts.pory"
# 14 "data/maps/Route131/scripts.pory"
# 25 "data/maps/Route131/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE131_SKY_PILLAR
# 26 "data/maps/Route131/scripts.pory"
	return
# 27 "data/maps/Route131/scripts.pory"

# 28 "data/maps/Route131/scripts.pory"

# 29 "data/maps/Route131/scripts.pory"
Route131_EventScript_CheckSetAbnormalWeather::
# 30 "data/maps/Route131/scripts.pory"
# 19 "data/maps/Route131/scripts.pory"
# 31 "data/maps/Route131/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route131_EventScript_CheckSetAbnormalWeather_2
# 32 "data/maps/Route131/scripts.pory"
Route131_EventScript_CheckSetAbnormalWeather_1:
# 33 "data/maps/Route131/scripts.pory"
	return
# 34 "data/maps/Route131/scripts.pory"

# 35 "data/maps/Route131/scripts.pory"
Route131_EventScript_CheckSetAbnormalWeather_2:
# 36 "data/maps/Route131/scripts.pory"
# 20 "data/maps/Route131/scripts.pory"
# 37 "data/maps/Route131/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 38 "data/maps/Route131/scripts.pory"
	goto Route131_EventScript_CheckSetAbnormalWeather_1
# 39 "data/maps/Route131/scripts.pory"

# 40 "data/maps/Route131/scripts.pory"

# 41 "data/maps/Route131/scripts.pory"
Route131_EventScript_Richard::
# 42 "data/maps/Route131/scripts.pory"
# 26 "data/maps/Route131/scripts.pory"
# 43 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_RICHARD, Route131_Text_RichardIntro, Route131_Text_RichardDefeat
# 44 "data/maps/Route131/scripts.pory"
# 27 "data/maps/Route131/scripts.pory"
# 45 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/Route131/scripts.pory"
	end
# 47 "data/maps/Route131/scripts.pory"

# 48 "data/maps/Route131/scripts.pory"

# 49 "data/maps/Route131/scripts.pory"
Route131_EventScript_Herman::
# 50 "data/maps/Route131/scripts.pory"
# 32 "data/maps/Route131/scripts.pory"
# 51 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_HERMAN, Route131_Text_HermanIntro, Route131_Text_HermanDefeat
# 52 "data/maps/Route131/scripts.pory"
# 33 "data/maps/Route131/scripts.pory"
# 53 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route131/scripts.pory"
	end
# 55 "data/maps/Route131/scripts.pory"

# 56 "data/maps/Route131/scripts.pory"

# 57 "data/maps/Route131/scripts.pory"
Route131_EventScript_Susie::
# 58 "data/maps/Route131/scripts.pory"
# 38 "data/maps/Route131/scripts.pory"
# 59 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_SUSIE, Route131_Text_SusieIntro, Route131_Text_SusieDefeat
# 60 "data/maps/Route131/scripts.pory"
# 39 "data/maps/Route131/scripts.pory"
# 61 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route131/scripts.pory"
	end
# 63 "data/maps/Route131/scripts.pory"

# 64 "data/maps/Route131/scripts.pory"

# 65 "data/maps/Route131/scripts.pory"
Route131_EventScript_Kara::
# 66 "data/maps/Route131/scripts.pory"
# 44 "data/maps/Route131/scripts.pory"
# 67 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KARA, Route131_Text_KaraIntro, Route131_Text_KaraDefeat
# 68 "data/maps/Route131/scripts.pory"
# 45 "data/maps/Route131/scripts.pory"
# 69 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KaraPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route131/scripts.pory"
	end
# 71 "data/maps/Route131/scripts.pory"

# 72 "data/maps/Route131/scripts.pory"

# 73 "data/maps/Route131/scripts.pory"
Route131_EventScript_Reli::
# 74 "data/maps/Route131/scripts.pory"
# 50 "data/maps/Route131/scripts.pory"
# 75 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_ReliIntro, Route131_Text_ReliDefeat, Route131_Text_ReliNotEnoughMons
# 76 "data/maps/Route131/scripts.pory"
# 51 "data/maps/Route131/scripts.pory"
# 77 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route131/scripts.pory"
	end
# 79 "data/maps/Route131/scripts.pory"

# 80 "data/maps/Route131/scripts.pory"

# 81 "data/maps/Route131/scripts.pory"
Route131_EventScript_Ian::
# 82 "data/maps/Route131/scripts.pory"
# 56 "data/maps/Route131/scripts.pory"
# 83 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_IanIntro, Route131_Text_IanDefeat, Route131_Text_IanNotEnoughMons
# 84 "data/maps/Route131/scripts.pory"
# 57 "data/maps/Route131/scripts.pory"
# 85 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_IanPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route131/scripts.pory"
	end
# 87 "data/maps/Route131/scripts.pory"

# 88 "data/maps/Route131/scripts.pory"

# 89 "data/maps/Route131/scripts.pory"
Route131_EventScript_Talia::
# 90 "data/maps/Route131/scripts.pory"
# 62 "data/maps/Route131/scripts.pory"
# 91 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_TALIA, Route131_Text_TaliaIntro, Route131_Text_TaliaDefeat
# 92 "data/maps/Route131/scripts.pory"
# 63 "data/maps/Route131/scripts.pory"
# 93 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_TaliaPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route131/scripts.pory"
	end
# 95 "data/maps/Route131/scripts.pory"

# 96 "data/maps/Route131/scripts.pory"

# 97 "data/maps/Route131/scripts.pory"
Route131_EventScript_Kevin::
# 98 "data/maps/Route131/scripts.pory"
# 68 "data/maps/Route131/scripts.pory"
# 99 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KEVIN, Route131_Text_KevinIntro, Route131_Text_KevinDefeat
# 100 "data/maps/Route131/scripts.pory"
# 69 "data/maps/Route131/scripts.pory"
# 101 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route131/scripts.pory"
	end
