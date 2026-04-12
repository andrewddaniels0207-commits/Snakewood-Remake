# 1 "data/maps/Route108/scripts.pory"

# 2 "data/maps/Route108/scripts.pory"
Route108_MapScripts::
# 3 "data/maps/Route108/scripts.pory"
	.byte 0
# 4 "data/maps/Route108/scripts.pory"

# 5 "data/maps/Route108/scripts.pory"

# 6 "data/maps/Route108/scripts.pory"
Route108_EventScript_Jerome::
# 7 "data/maps/Route108/scripts.pory"
# 4 "data/maps/Route108/scripts.pory"
# 8 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
# 9 "data/maps/Route108/scripts.pory"
# 5 "data/maps/Route108/scripts.pory"
# 10 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/Route108/scripts.pory"
	end
# 12 "data/maps/Route108/scripts.pory"

# 13 "data/maps/Route108/scripts.pory"

# 14 "data/maps/Route108/scripts.pory"
Route108_EventScript_Matthew::
# 15 "data/maps/Route108/scripts.pory"
# 10 "data/maps/Route108/scripts.pory"
# 16 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 17 "data/maps/Route108/scripts.pory"
# 11 "data/maps/Route108/scripts.pory"
# 18 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route108/scripts.pory"
	end
# 20 "data/maps/Route108/scripts.pory"

# 21 "data/maps/Route108/scripts.pory"

# 22 "data/maps/Route108/scripts.pory"
Route108_EventScript_Tara::
# 23 "data/maps/Route108/scripts.pory"
# 16 "data/maps/Route108/scripts.pory"
# 24 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
# 25 "data/maps/Route108/scripts.pory"
# 17 "data/maps/Route108/scripts.pory"
# 26 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route108/scripts.pory"
	end
# 28 "data/maps/Route108/scripts.pory"

# 29 "data/maps/Route108/scripts.pory"

# 30 "data/maps/Route108/scripts.pory"
Route108_EventScript_Missy::
# 31 "data/maps/Route108/scripts.pory"
# 22 "data/maps/Route108/scripts.pory"
# 32 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
# 33 "data/maps/Route108/scripts.pory"
# 23 "data/maps/Route108/scripts.pory"
# 34 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route108/scripts.pory"
	end
# 36 "data/maps/Route108/scripts.pory"

# 37 "data/maps/Route108/scripts.pory"

# 38 "data/maps/Route108/scripts.pory"
Route108_EventScript_Carolina::
# 39 "data/maps/Route108/scripts.pory"
# 28 "data/maps/Route108/scripts.pory"
# 40 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
# 41 "data/maps/Route108/scripts.pory"
# 29 "data/maps/Route108/scripts.pory"
# 42 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route108/scripts.pory"
	end
# 44 "data/maps/Route108/scripts.pory"

# 45 "data/maps/Route108/scripts.pory"

# 46 "data/maps/Route108/scripts.pory"
Route108_EventScript_Cory::
# 47 "data/maps/Route108/scripts.pory"
# 34 "data/maps/Route108/scripts.pory"
# 48 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
# 49 "data/maps/Route108/scripts.pory"
# 35 "data/maps/Route108/scripts.pory"
# 50 "data/maps/Route108/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 51 "data/maps/Route108/scripts.pory"
# 36 "data/maps/Route108/scripts.pory"
# 52 "data/maps/Route108/scripts.pory"
	compare VAR_RESULT, TRUE
# 53 "data/maps/Route108/scripts.pory"
	goto_if_eq Route108_EventScript_Cory_2
# 54 "data/maps/Route108/scripts.pory"
Route108_EventScript_Cory_1:
# 55 "data/maps/Route108/scripts.pory"
# 39 "data/maps/Route108/scripts.pory"
# 56 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
# 57 "data/maps/Route108/scripts.pory"
# 40 "data/maps/Route108/scripts.pory"
# 58 "data/maps/Route108/scripts.pory"
	release
# 59 "data/maps/Route108/scripts.pory"
	end
# 60 "data/maps/Route108/scripts.pory"

# 61 "data/maps/Route108/scripts.pory"
Route108_EventScript_Cory_2:
# 62 "data/maps/Route108/scripts.pory"
# 37 "data/maps/Route108/scripts.pory"
# 63 "data/maps/Route108/scripts.pory"
	goto Route108_EventScript_CoryRematch
# 64 "data/maps/Route108/scripts.pory"
	goto Route108_EventScript_Cory_1
# 65 "data/maps/Route108/scripts.pory"

# 66 "data/maps/Route108/scripts.pory"

# 67 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 68 "data/maps/Route108/scripts.pory"
# 45 "data/maps/Route108/scripts.pory"
# 69 "data/maps/Route108/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 70 "data/maps/Route108/scripts.pory"
# 46 "data/maps/Route108/scripts.pory"
# 71 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route108/scripts.pory"
# 47 "data/maps/Route108/scripts.pory"
# 73 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 74 "data/maps/Route108/scripts.pory"
# 48 "data/maps/Route108/scripts.pory"
# 75 "data/maps/Route108/scripts.pory"
	register_matchcall TRAINER_CORY_1
# 76 "data/maps/Route108/scripts.pory"
# 49 "data/maps/Route108/scripts.pory"
# 77 "data/maps/Route108/scripts.pory"
	release
# 78 "data/maps/Route108/scripts.pory"
	end
# 79 "data/maps/Route108/scripts.pory"

# 80 "data/maps/Route108/scripts.pory"

# 81 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRematch::
# 82 "data/maps/Route108/scripts.pory"
# 54 "data/maps/Route108/scripts.pory"
# 83 "data/maps/Route108/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 84 "data/maps/Route108/scripts.pory"
# 55 "data/maps/Route108/scripts.pory"
# 85 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route108/scripts.pory"
	end
