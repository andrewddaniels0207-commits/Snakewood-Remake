# 1 "data/maps/Route134/scripts.pory"

# 2 "data/maps/Route134/scripts.pory"
Route134_MapScripts::
# 3 "data/maps/Route134/scripts.pory"
# 2 "data/maps/Route134/scripts.pory"
# 4 "data/maps/Route134/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route134_OnResume
# 5 "data/maps/Route134/scripts.pory"
	.byte 0
# 6 "data/maps/Route134/scripts.pory"

# 7 "data/maps/Route134/scripts.pory"

# 8 "data/maps/Route134/scripts.pory"
Route134_OnResume::
# 9 "data/maps/Route134/scripts.pory"
# 6 "data/maps/Route134/scripts.pory"
# 10 "data/maps/Route134/scripts.pory"
	setdivewarp MAP_UNDERWATER_ROUTE134, 8, 6
# 11 "data/maps/Route134/scripts.pory"
	end
# 12 "data/maps/Route134/scripts.pory"

# 13 "data/maps/Route134/scripts.pory"

# 14 "data/maps/Route134/scripts.pory"
Route134_EventScript_Jack::
# 15 "data/maps/Route134/scripts.pory"
# 11 "data/maps/Route134/scripts.pory"
# 16 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_JACK, Route134_Text_JackIntro, Route134_Text_JackDefeat
# 17 "data/maps/Route134/scripts.pory"
# 12 "data/maps/Route134/scripts.pory"
# 18 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_JackPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route134/scripts.pory"
	end
# 20 "data/maps/Route134/scripts.pory"

# 21 "data/maps/Route134/scripts.pory"

# 22 "data/maps/Route134/scripts.pory"
Route134_EventScript_Laurel::
# 23 "data/maps/Route134/scripts.pory"
# 17 "data/maps/Route134/scripts.pory"
# 24 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_LAUREL, Route134_Text_LaurelIntro, Route134_Text_LaurelDefeat
# 25 "data/maps/Route134/scripts.pory"
# 18 "data/maps/Route134/scripts.pory"
# 26 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route134/scripts.pory"
	end
# 28 "data/maps/Route134/scripts.pory"

# 29 "data/maps/Route134/scripts.pory"

# 30 "data/maps/Route134/scripts.pory"
Route134_EventScript_Alex::
# 31 "data/maps/Route134/scripts.pory"
# 23 "data/maps/Route134/scripts.pory"
# 32 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_ALEX, Route134_Text_AlexIntro, Route134_Text_AlexDefeat
# 33 "data/maps/Route134/scripts.pory"
# 24 "data/maps/Route134/scripts.pory"
# 34 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_AlexPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route134/scripts.pory"
	end
# 36 "data/maps/Route134/scripts.pory"

# 37 "data/maps/Route134/scripts.pory"

# 38 "data/maps/Route134/scripts.pory"
Route134_EventScript_Aaron::
# 39 "data/maps/Route134/scripts.pory"
# 29 "data/maps/Route134/scripts.pory"
# 40 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_AARON, Route134_Text_AaronIntro, Route134_Text_AaronDefeat
# 41 "data/maps/Route134/scripts.pory"
# 30 "data/maps/Route134/scripts.pory"
# 42 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route134/scripts.pory"
	end
# 44 "data/maps/Route134/scripts.pory"

# 45 "data/maps/Route134/scripts.pory"

# 46 "data/maps/Route134/scripts.pory"
Route134_EventScript_Hitoshi::
# 47 "data/maps/Route134/scripts.pory"
# 35 "data/maps/Route134/scripts.pory"
# 48 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_HITOSHI, Route134_Text_HitoshiIntro, Route134_Text_HitoshiDefeat
# 49 "data/maps/Route134/scripts.pory"
# 36 "data/maps/Route134/scripts.pory"
# 50 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route134/scripts.pory"
	end
# 52 "data/maps/Route134/scripts.pory"

# 53 "data/maps/Route134/scripts.pory"

# 54 "data/maps/Route134/scripts.pory"
Route134_EventScript_Hudson::
# 55 "data/maps/Route134/scripts.pory"
# 41 "data/maps/Route134/scripts.pory"
# 56 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_HUDSON, Route134_Text_HudsonIntro, Route134_Text_HudsonDefeat
# 57 "data/maps/Route134/scripts.pory"
# 42 "data/maps/Route134/scripts.pory"
# 58 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_HudsonPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route134/scripts.pory"
	end
# 60 "data/maps/Route134/scripts.pory"

# 61 "data/maps/Route134/scripts.pory"

# 62 "data/maps/Route134/scripts.pory"
Route134_EventScript_Reyna::
# 63 "data/maps/Route134/scripts.pory"
# 47 "data/maps/Route134/scripts.pory"
# 64 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_REYNA, Route134_Text_ReynaIntro, Route134_Text_ReynaDefeat
# 65 "data/maps/Route134/scripts.pory"
# 48 "data/maps/Route134/scripts.pory"
# 66 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_ReynaPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route134/scripts.pory"
	end
# 68 "data/maps/Route134/scripts.pory"

# 69 "data/maps/Route134/scripts.pory"

# 70 "data/maps/Route134/scripts.pory"
Route134_EventScript_Marley::
# 71 "data/maps/Route134/scripts.pory"
# 53 "data/maps/Route134/scripts.pory"
# 72 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_MARLEY, Route134_Text_MarleyIntro, Route134_Text_MarleyDefeat
# 73 "data/maps/Route134/scripts.pory"
# 54 "data/maps/Route134/scripts.pory"
# 74 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_MarleyPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route134/scripts.pory"
	end
# 76 "data/maps/Route134/scripts.pory"

# 77 "data/maps/Route134/scripts.pory"

# 78 "data/maps/Route134/scripts.pory"
Route134_EventScript_Kelvin::
# 79 "data/maps/Route134/scripts.pory"
# 59 "data/maps/Route134/scripts.pory"
# 80 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_KELVIN, Route134_Text_KelvinIntro, Route134_Text_KelvinDefeat
# 81 "data/maps/Route134/scripts.pory"
# 60 "data/maps/Route134/scripts.pory"
# 82 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_KelvinPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route134/scripts.pory"
	end
