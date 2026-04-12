Route124_MapScripts::
# 2 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
	.byte 0


Route124_OnTransition::
# 6 "data/maps/Route124/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route124_OnTransition_2
Route124_OnTransition_1:
	end

Route124_OnTransition_2:
# 7 "data/maps/Route124/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route124_OnTransition_1


Route124_EventScript_HuntersHouseSign::
# 13 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
	end


Route124_EventScript_Spencer::
# 18 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_SPENCER, Route124_Text_SpencerIntro, Route124_Text_SpencerDefeat
# 19 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Roland::
# 24 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ROLAND, Route124_Text_RolandIntro, Route124_Text_RolandDefeat
# 25 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Jenny::
# 30 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_JENNY_1, Route124_Text_JennyIntro, Route124_Text_JennyDefeat, Route124_EventScript_RegisterJenny
# 31 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 32 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_EventScript_Jenny_2
Route124_EventScript_Jenny_1:
# 35 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
# 36 "data/maps/Route124/scripts.pory"
	release
	end

Route124_EventScript_Jenny_2:
# 33 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_RematchJenny
	goto Route124_EventScript_Jenny_1


Route124_EventScript_RegisterJenny::
# 41 "data/maps/Route124/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 42 "data/maps/Route124/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
# 44 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_JENNY_1
# 45 "data/maps/Route124/scripts.pory"
	release
	end


Route124_EventScript_RematchJenny::
# 50 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
# 51 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Grace::
# 56 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_GRACE, Route124_Text_GraceIntro, Route124_Text_GraceDefeat
# 57 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Chad::
# 62 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_CHAD, Route124_Text_ChadIntro, Route124_Text_ChadDefeat
# 63 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Lila::
# 68 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaIntro, Route124_Text_LilaDefeat, Route124_Text_LilaNotEnoughMons, Route124_EventScript_RegisterLila
# 69 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 70 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_EventScript_Lila_2
Route124_EventScript_Lila_1:
# 73 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
# 74 "data/maps/Route124/scripts.pory"
	release
	end

Route124_EventScript_Lila_2:
# 71 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_RematchLila
	goto Route124_EventScript_Lila_1


Route124_EventScript_RegisterLila::
# 79 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 80 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 81 "data/maps/Route124/scripts.pory"
	release
	end


Route124_EventScript_RematchLila::
# 86 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat, Route124_Text_LilaRematchNotEnoughMons
# 87 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Roy::
# 92 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyIntro, Route124_Text_RoyDefeat, Route124_Text_RoyNotEnoughMons, Route124_EventScript_RegisterRoy
# 93 "data/maps/Route124/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 94 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_EventScript_Roy_2
Route124_EventScript_Roy_1:
# 97 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
# 98 "data/maps/Route124/scripts.pory"
	release
	end

Route124_EventScript_Roy_2:
# 95 "data/maps/Route124/scripts.pory"
	goto Route124_EventScript_RematchRoy
	goto Route124_EventScript_Roy_1


Route124_EventScript_RegisterRoy::
# 103 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 104 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
# 105 "data/maps/Route124/scripts.pory"
	release
	end


Route124_EventScript_RematchRoy::
# 110 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat, Route124_Text_RoyRematchNotEnoughMons
# 111 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Declan::
# 116 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Route124_Text_DeclanIntro, Route124_Text_DeclanDefeat
# 117 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Isabella::
# 122 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ISABELLA, Route124_Text_IsabellaIntro, Route124_Text_IsabellaDefeat
# 123 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_Text_HuntersHouse::
# 127 "data/maps/Route124/scripts.pory"
	.string "HUNTER'S HOUSE$"
