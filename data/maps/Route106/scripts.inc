# 1 "data/maps/Route106/scripts.pory"

# 2 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 3 "data/maps/Route106/scripts.pory"
	.byte 0
# 4 "data/maps/Route106/scripts.pory"

# 5 "data/maps/Route106/scripts.pory"

# 6 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 7 "data/maps/Route106/scripts.pory"
# 4 "data/maps/Route106/scripts.pory"
# 8 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 9 "data/maps/Route106/scripts.pory"
	end
# 10 "data/maps/Route106/scripts.pory"

# 11 "data/maps/Route106/scripts.pory"

# 12 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 13 "data/maps/Route106/scripts.pory"
# 9 "data/maps/Route106/scripts.pory"
# 14 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 15 "data/maps/Route106/scripts.pory"
# 10 "data/maps/Route106/scripts.pory"
# 16 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/Route106/scripts.pory"
	end
# 18 "data/maps/Route106/scripts.pory"

# 19 "data/maps/Route106/scripts.pory"

# 20 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 21 "data/maps/Route106/scripts.pory"
# 15 "data/maps/Route106/scripts.pory"
# 22 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 23 "data/maps/Route106/scripts.pory"
# 16 "data/maps/Route106/scripts.pory"
# 24 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/Route106/scripts.pory"
	end
# 26 "data/maps/Route106/scripts.pory"

# 27 "data/maps/Route106/scripts.pory"

# 28 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 29 "data/maps/Route106/scripts.pory"
# 21 "data/maps/Route106/scripts.pory"
# 30 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 31 "data/maps/Route106/scripts.pory"
# 22 "data/maps/Route106/scripts.pory"
# 32 "data/maps/Route106/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 33 "data/maps/Route106/scripts.pory"
# 23 "data/maps/Route106/scripts.pory"
# 34 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, TRUE
# 35 "data/maps/Route106/scripts.pory"
	goto_if_eq Route106_EventScript_Elliot_2
# 36 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot_1:
# 37 "data/maps/Route106/scripts.pory"
# 26 "data/maps/Route106/scripts.pory"
# 38 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 39 "data/maps/Route106/scripts.pory"
# 27 "data/maps/Route106/scripts.pory"
# 40 "data/maps/Route106/scripts.pory"
	release
# 41 "data/maps/Route106/scripts.pory"
	end
# 42 "data/maps/Route106/scripts.pory"

# 43 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot_2:
# 44 "data/maps/Route106/scripts.pory"
# 24 "data/maps/Route106/scripts.pory"
# 45 "data/maps/Route106/scripts.pory"
	goto Route106_EventScript_ElliotRematch
# 46 "data/maps/Route106/scripts.pory"
	goto Route106_EventScript_Elliot_1
# 47 "data/maps/Route106/scripts.pory"

# 48 "data/maps/Route106/scripts.pory"

# 49 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 50 "data/maps/Route106/scripts.pory"
# 32 "data/maps/Route106/scripts.pory"
# 51 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 52 "data/maps/Route106/scripts.pory"
# 33 "data/maps/Route106/scripts.pory"
# 53 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route106/scripts.pory"
# 34 "data/maps/Route106/scripts.pory"
# 55 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 56 "data/maps/Route106/scripts.pory"
# 35 "data/maps/Route106/scripts.pory"
# 57 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 58 "data/maps/Route106/scripts.pory"
# 36 "data/maps/Route106/scripts.pory"
# 59 "data/maps/Route106/scripts.pory"
	release
# 60 "data/maps/Route106/scripts.pory"
	end
# 61 "data/maps/Route106/scripts.pory"

# 62 "data/maps/Route106/scripts.pory"

# 63 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 64 "data/maps/Route106/scripts.pory"
# 41 "data/maps/Route106/scripts.pory"
# 65 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 66 "data/maps/Route106/scripts.pory"
# 42 "data/maps/Route106/scripts.pory"
# 67 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route106/scripts.pory"
	end
# 69 "data/maps/Route106/scripts.pory"

# 70 "data/maps/Route106/scripts.pory"

# 71 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 72 "data/maps/Route106/scripts.pory"
# 47 "data/maps/Route106/scripts.pory"
# 73 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 74 "data/maps/Route106/scripts.pory"
# 48 "data/maps/Route106/scripts.pory"
# 75 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route106/scripts.pory"
	end
# 77 "data/maps/Route106/scripts.pory"

# 78 "data/maps/Route106/scripts.pory"

# 79 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips::
# 80 "data/maps/Route106/scripts.pory"
# 52 "data/maps/Route106/scripts.pory"
# 81 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
# 82 "data/maps/Route106/scripts.pory"
	.string "Advice on catching POKéMON with a ROD:\n"
# 83 "data/maps/Route106/scripts.pory"
	.string "Press the A Button if you get a bite.$"
