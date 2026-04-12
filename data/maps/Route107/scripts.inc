Route107_MapScripts::
	.byte 0


Route107_EventScript_Darrin::
# 4 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 5 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Tony::
# 10 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
# 11 "data/maps/Route107/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 12 "data/maps/Route107/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route107_EventScript_Tony_2
Route107_EventScript_Tony_1:
# 15 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 16 "data/maps/Route107/scripts.pory"
	release
	end

Route107_EventScript_Tony_2:
# 13 "data/maps/Route107/scripts.pory"
	goto Route107_EventScript_TonyRematch
	goto Route107_EventScript_Tony_1


Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 21 "data/maps/Route107/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 22 "data/maps/Route107/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 24 "data/maps/Route107/scripts.pory"
	register_matchcall TRAINER_TONY_1
# 25 "data/maps/Route107/scripts.pory"
	release
	end


Route107_EventScript_TonyRematch::
# 30 "data/maps/Route107/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 31 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Denise::
# 36 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 37 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Beth::
# 42 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 43 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Lisa::
# 48 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 49 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Ray::
# 54 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 55 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Camron::
# 60 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 61 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
	end

