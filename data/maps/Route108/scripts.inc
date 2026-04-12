Route108_MapScripts::
	.byte 0


Route108_EventScript_Jerome::
# 4 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
# 5 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Matthew::
# 10 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 11 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Tara::
# 16 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
# 17 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Missy::
# 22 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
# 23 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Carolina::
# 28 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
# 29 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Cory::
# 34 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
# 35 "data/maps/Route108/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 36 "data/maps/Route108/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route108_EventScript_Cory_2
Route108_EventScript_Cory_1:
# 39 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
# 40 "data/maps/Route108/scripts.pory"
	release
	end

Route108_EventScript_Cory_2:
# 37 "data/maps/Route108/scripts.pory"
	goto Route108_EventScript_CoryRematch
	goto Route108_EventScript_Cory_1


Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 45 "data/maps/Route108/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 46 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 48 "data/maps/Route108/scripts.pory"
	register_matchcall TRAINER_CORY_1
# 49 "data/maps/Route108/scripts.pory"
	release
	end


Route108_EventScript_CoryRematch::
# 54 "data/maps/Route108/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 55 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
	end

