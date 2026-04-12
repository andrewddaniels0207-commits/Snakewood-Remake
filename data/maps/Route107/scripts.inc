# 1 "data/maps/Route107/scripts.pory"

# 2 "data/maps/Route107/scripts.pory"
Route107_MapScripts::
# 3 "data/maps/Route107/scripts.pory"
	.byte 0
# 4 "data/maps/Route107/scripts.pory"

# 5 "data/maps/Route107/scripts.pory"

# 6 "data/maps/Route107/scripts.pory"
Route107_EventScript_Darrin::
# 7 "data/maps/Route107/scripts.pory"
# 4 "data/maps/Route107/scripts.pory"
# 8 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 9 "data/maps/Route107/scripts.pory"
# 5 "data/maps/Route107/scripts.pory"
# 10 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/Route107/scripts.pory"
	end
# 12 "data/maps/Route107/scripts.pory"

# 13 "data/maps/Route107/scripts.pory"

# 14 "data/maps/Route107/scripts.pory"
Route107_EventScript_Tony::
# 15 "data/maps/Route107/scripts.pory"
# 10 "data/maps/Route107/scripts.pory"
# 16 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
# 17 "data/maps/Route107/scripts.pory"
# 11 "data/maps/Route107/scripts.pory"
# 18 "data/maps/Route107/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 19 "data/maps/Route107/scripts.pory"
# 12 "data/maps/Route107/scripts.pory"
# 20 "data/maps/Route107/scripts.pory"
	compare VAR_RESULT, TRUE
# 21 "data/maps/Route107/scripts.pory"
	goto_if_eq Route107_EventScript_Tony_2
# 22 "data/maps/Route107/scripts.pory"
Route107_EventScript_Tony_1:
# 23 "data/maps/Route107/scripts.pory"
# 15 "data/maps/Route107/scripts.pory"
# 24 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 25 "data/maps/Route107/scripts.pory"
# 16 "data/maps/Route107/scripts.pory"
# 26 "data/maps/Route107/scripts.pory"
	release
# 27 "data/maps/Route107/scripts.pory"
	end
# 28 "data/maps/Route107/scripts.pory"

# 29 "data/maps/Route107/scripts.pory"
Route107_EventScript_Tony_2:
# 30 "data/maps/Route107/scripts.pory"
# 13 "data/maps/Route107/scripts.pory"
# 31 "data/maps/Route107/scripts.pory"
	goto Route107_EventScript_TonyRematch
# 32 "data/maps/Route107/scripts.pory"
	goto Route107_EventScript_Tony_1
# 33 "data/maps/Route107/scripts.pory"

# 34 "data/maps/Route107/scripts.pory"

# 35 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 36 "data/maps/Route107/scripts.pory"
# 21 "data/maps/Route107/scripts.pory"
# 37 "data/maps/Route107/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 38 "data/maps/Route107/scripts.pory"
# 22 "data/maps/Route107/scripts.pory"
# 39 "data/maps/Route107/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route107/scripts.pory"
# 23 "data/maps/Route107/scripts.pory"
# 41 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 42 "data/maps/Route107/scripts.pory"
# 24 "data/maps/Route107/scripts.pory"
# 43 "data/maps/Route107/scripts.pory"
	register_matchcall TRAINER_TONY_1
# 44 "data/maps/Route107/scripts.pory"
# 25 "data/maps/Route107/scripts.pory"
# 45 "data/maps/Route107/scripts.pory"
	release
# 46 "data/maps/Route107/scripts.pory"
	end
# 47 "data/maps/Route107/scripts.pory"

# 48 "data/maps/Route107/scripts.pory"

# 49 "data/maps/Route107/scripts.pory"
Route107_EventScript_TonyRematch::
# 50 "data/maps/Route107/scripts.pory"
# 30 "data/maps/Route107/scripts.pory"
# 51 "data/maps/Route107/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 52 "data/maps/Route107/scripts.pory"
# 31 "data/maps/Route107/scripts.pory"
# 53 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route107/scripts.pory"
	end
# 55 "data/maps/Route107/scripts.pory"

# 56 "data/maps/Route107/scripts.pory"

# 57 "data/maps/Route107/scripts.pory"
Route107_EventScript_Denise::
# 58 "data/maps/Route107/scripts.pory"
# 36 "data/maps/Route107/scripts.pory"
# 59 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 60 "data/maps/Route107/scripts.pory"
# 37 "data/maps/Route107/scripts.pory"
# 61 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route107/scripts.pory"
	end
# 63 "data/maps/Route107/scripts.pory"

# 64 "data/maps/Route107/scripts.pory"

# 65 "data/maps/Route107/scripts.pory"
Route107_EventScript_Beth::
# 66 "data/maps/Route107/scripts.pory"
# 42 "data/maps/Route107/scripts.pory"
# 67 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 68 "data/maps/Route107/scripts.pory"
# 43 "data/maps/Route107/scripts.pory"
# 69 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route107/scripts.pory"
	end
# 71 "data/maps/Route107/scripts.pory"

# 72 "data/maps/Route107/scripts.pory"

# 73 "data/maps/Route107/scripts.pory"
Route107_EventScript_Lisa::
# 74 "data/maps/Route107/scripts.pory"
# 48 "data/maps/Route107/scripts.pory"
# 75 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 76 "data/maps/Route107/scripts.pory"
# 49 "data/maps/Route107/scripts.pory"
# 77 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route107/scripts.pory"
	end
# 79 "data/maps/Route107/scripts.pory"

# 80 "data/maps/Route107/scripts.pory"

# 81 "data/maps/Route107/scripts.pory"
Route107_EventScript_Ray::
# 82 "data/maps/Route107/scripts.pory"
# 54 "data/maps/Route107/scripts.pory"
# 83 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 84 "data/maps/Route107/scripts.pory"
# 55 "data/maps/Route107/scripts.pory"
# 85 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route107/scripts.pory"
	end
# 87 "data/maps/Route107/scripts.pory"

# 88 "data/maps/Route107/scripts.pory"

# 89 "data/maps/Route107/scripts.pory"
Route107_EventScript_Camron::
# 90 "data/maps/Route107/scripts.pory"
# 60 "data/maps/Route107/scripts.pory"
# 91 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 92 "data/maps/Route107/scripts.pory"
# 61 "data/maps/Route107/scripts.pory"
# 93 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route107/scripts.pory"
	end
