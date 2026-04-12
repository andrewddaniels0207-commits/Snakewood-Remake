# 1 "data/maps/Route126/scripts.pory"

# 2 "data/maps/Route126/scripts.pory"
Route126_MapScripts::
# 3 "data/maps/Route126/scripts.pory"
# 2 "data/maps/Route126/scripts.pory"
# 4 "data/maps/Route126/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_OnTransition
# 5 "data/maps/Route126/scripts.pory"
	.byte 0
# 6 "data/maps/Route126/scripts.pory"

# 7 "data/maps/Route126/scripts.pory"

# 8 "data/maps/Route126/scripts.pory"
Route126_OnTransition::
# 9 "data/maps/Route126/scripts.pory"
# 6 "data/maps/Route126/scripts.pory"
# 10 "data/maps/Route126/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route126_OnTransition_2
# 11 "data/maps/Route126/scripts.pory"
Route126_OnTransition_1:
# 12 "data/maps/Route126/scripts.pory"
	end
# 13 "data/maps/Route126/scripts.pory"

# 14 "data/maps/Route126/scripts.pory"
Route126_OnTransition_2:
# 15 "data/maps/Route126/scripts.pory"
# 7 "data/maps/Route126/scripts.pory"
# 16 "data/maps/Route126/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
# 17 "data/maps/Route126/scripts.pory"
	goto Route126_OnTransition_1
# 18 "data/maps/Route126/scripts.pory"

# 19 "data/maps/Route126/scripts.pory"

# 20 "data/maps/Route126/scripts.pory"
Route126_EventScript_Barry::
# 21 "data/maps/Route126/scripts.pory"
# 13 "data/maps/Route126/scripts.pory"
# 22 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BARRY, Route126_Text_BarryIntro, Route126_Text_BarryDefeat
# 23 "data/maps/Route126/scripts.pory"
# 14 "data/maps/Route126/scripts.pory"
# 24 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/Route126/scripts.pory"
	end
# 26 "data/maps/Route126/scripts.pory"

# 27 "data/maps/Route126/scripts.pory"

# 28 "data/maps/Route126/scripts.pory"
Route126_EventScript_Dean::
# 29 "data/maps/Route126/scripts.pory"
# 19 "data/maps/Route126/scripts.pory"
# 30 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_DEAN, Route126_Text_DeanIntro, Route126_Text_DeanDefeat
# 31 "data/maps/Route126/scripts.pory"
# 20 "data/maps/Route126/scripts.pory"
# 32 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route126/scripts.pory"
	end
# 34 "data/maps/Route126/scripts.pory"

# 35 "data/maps/Route126/scripts.pory"

# 36 "data/maps/Route126/scripts.pory"
Route126_EventScript_Nikki::
# 37 "data/maps/Route126/scripts.pory"
# 25 "data/maps/Route126/scripts.pory"
# 38 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_NIKKI, Route126_Text_NikkiIntro, Route126_Text_NikkiDefeat
# 39 "data/maps/Route126/scripts.pory"
# 26 "data/maps/Route126/scripts.pory"
# 40 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/Route126/scripts.pory"
	end
# 42 "data/maps/Route126/scripts.pory"

# 43 "data/maps/Route126/scripts.pory"

# 44 "data/maps/Route126/scripts.pory"
Route126_EventScript_Brenda::
# 45 "data/maps/Route126/scripts.pory"
# 31 "data/maps/Route126/scripts.pory"
# 46 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BRENDA, Route126_Text_BrendaIntro, Route126_Text_BrendaDefeat
# 47 "data/maps/Route126/scripts.pory"
# 32 "data/maps/Route126/scripts.pory"
# 48 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route126/scripts.pory"
	end
# 50 "data/maps/Route126/scripts.pory"

# 51 "data/maps/Route126/scripts.pory"

# 52 "data/maps/Route126/scripts.pory"
Route126_EventScript_Leonardo::
# 53 "data/maps/Route126/scripts.pory"
# 37 "data/maps/Route126/scripts.pory"
# 54 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_LEONARDO, Route126_Text_LeonardoIntro, Route126_Text_LeonardoDefeat
# 55 "data/maps/Route126/scripts.pory"
# 38 "data/maps/Route126/scripts.pory"
# 56 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route126/scripts.pory"
	end
# 58 "data/maps/Route126/scripts.pory"

# 59 "data/maps/Route126/scripts.pory"

# 60 "data/maps/Route126/scripts.pory"
Route126_EventScript_Isobel::
# 61 "data/maps/Route126/scripts.pory"
# 43 "data/maps/Route126/scripts.pory"
# 62 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_ISOBEL, Route126_Text_IsobelIntro, Route126_Text_IsobelDefeat
# 63 "data/maps/Route126/scripts.pory"
# 44 "data/maps/Route126/scripts.pory"
# 64 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route126/scripts.pory"
	end
# 66 "data/maps/Route126/scripts.pory"

# 67 "data/maps/Route126/scripts.pory"

# 68 "data/maps/Route126/scripts.pory"
Route126_EventScript_Sienna::
# 69 "data/maps/Route126/scripts.pory"
# 49 "data/maps/Route126/scripts.pory"
# 70 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_SIENNA, Route126_Text_SiennaIntro, Route126_Text_SiennaDefeat
# 71 "data/maps/Route126/scripts.pory"
# 50 "data/maps/Route126/scripts.pory"
# 72 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route126/scripts.pory"
	end
# 74 "data/maps/Route126/scripts.pory"

# 75 "data/maps/Route126/scripts.pory"

# 76 "data/maps/Route126/scripts.pory"
Route126_EventScript_Pablo::
# 77 "data/maps/Route126/scripts.pory"
# 55 "data/maps/Route126/scripts.pory"
# 78 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_PABLO_1, Route126_Text_PabloIntro, Route126_Text_PabloDefeat, Route126_EventScript_RegisterPablo
# 79 "data/maps/Route126/scripts.pory"
# 56 "data/maps/Route126/scripts.pory"
# 80 "data/maps/Route126/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 81 "data/maps/Route126/scripts.pory"
# 57 "data/maps/Route126/scripts.pory"
# 82 "data/maps/Route126/scripts.pory"
	compare VAR_RESULT, TRUE
# 83 "data/maps/Route126/scripts.pory"
	goto_if_eq Route126_EventScript_Pablo_2
# 84 "data/maps/Route126/scripts.pory"
Route126_EventScript_Pablo_1:
# 85 "data/maps/Route126/scripts.pory"
# 60 "data/maps/Route126/scripts.pory"
# 86 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
# 87 "data/maps/Route126/scripts.pory"
# 61 "data/maps/Route126/scripts.pory"
# 88 "data/maps/Route126/scripts.pory"
	release
# 89 "data/maps/Route126/scripts.pory"
	end
# 90 "data/maps/Route126/scripts.pory"

# 91 "data/maps/Route126/scripts.pory"
Route126_EventScript_Pablo_2:
# 92 "data/maps/Route126/scripts.pory"
# 58 "data/maps/Route126/scripts.pory"
# 93 "data/maps/Route126/scripts.pory"
	goto Route126_EventScript_RematchPablo
# 94 "data/maps/Route126/scripts.pory"
	goto Route126_EventScript_Pablo_1
# 95 "data/maps/Route126/scripts.pory"

# 96 "data/maps/Route126/scripts.pory"

# 97 "data/maps/Route126/scripts.pory"
Route126_EventScript_RegisterPablo::
# 98 "data/maps/Route126/scripts.pory"
# 66 "data/maps/Route126/scripts.pory"
# 99 "data/maps/Route126/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 100 "data/maps/Route126/scripts.pory"
# 67 "data/maps/Route126/scripts.pory"
# 101 "data/maps/Route126/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route126/scripts.pory"
# 68 "data/maps/Route126/scripts.pory"
# 103 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
# 104 "data/maps/Route126/scripts.pory"
# 69 "data/maps/Route126/scripts.pory"
# 105 "data/maps/Route126/scripts.pory"
	register_matchcall TRAINER_PABLO_1
# 106 "data/maps/Route126/scripts.pory"
# 70 "data/maps/Route126/scripts.pory"
# 107 "data/maps/Route126/scripts.pory"
	release
# 108 "data/maps/Route126/scripts.pory"
	end
# 109 "data/maps/Route126/scripts.pory"

# 110 "data/maps/Route126/scripts.pory"

# 111 "data/maps/Route126/scripts.pory"
Route126_EventScript_RematchPablo::
# 112 "data/maps/Route126/scripts.pory"
# 75 "data/maps/Route126/scripts.pory"
# 113 "data/maps/Route126/scripts.pory"
	trainerbattle_rematch TRAINER_PABLO_1, Route126_Text_PabloRematchIntro, Route126_Text_PabloRematchDefeat
# 114 "data/maps/Route126/scripts.pory"
# 76 "data/maps/Route126/scripts.pory"
# 115 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route126/scripts.pory"
	end
