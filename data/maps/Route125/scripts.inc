Route125_MapScripts::
# 2 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_OnTransition
# 3 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route125_OnLoad
# 4 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route125_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Route125/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route125_OnTransition::
# 10 "data/maps/Route125/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route125_OnTransition_2
Route125_OnTransition_1:
# 13 "data/maps/Route125/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route125_OnTransition_5
Route125_OnTransition_4:
# 16 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST
	goto_if_eq Route125_OnTransition_8
Route125_OnTransition_7:
# 19 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST
	goto_if_eq Route125_OnTransition_11
Route125_OnTransition_10:
	end

Route125_OnTransition_2:
# 11 "data/maps/Route125/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route125_OnTransition_1

Route125_OnTransition_5:
# 14 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route125_OnTransition_4

Route125_OnTransition_8:
# 17 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
	goto Route125_OnTransition_7

Route125_OnTransition_11:
# 20 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
	goto Route125_OnTransition_10


Route125_OnLoad::
# 26 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST
	goto_if_eq Route125_OnLoad_2
Route125_OnLoad_1:
# 29 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST
	goto_if_eq Route125_OnLoad_5
Route125_OnLoad_4:
	end

Route125_OnLoad_2:
# 27 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute125West
	goto Route125_OnLoad_1

Route125_OnLoad_5:
# 30 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute125East
	goto Route125_OnLoad_4


Route125_EventScript_Nolen::
# 36 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
# 37 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Stan::
# 42 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
# 43 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Tanya::
# 48 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
# 49 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Sharon::
# 54 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_SHARON, Route125_Text_SharonIntro, Route125_Text_SharonDefeat
# 55 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Ernest::
# 60 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_ERNEST_1, Route125_Text_ErnestIntro, Route125_Text_ErnestDefeat, Route125_EventScript_RegisterErnest
# 61 "data/maps/Route125/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 62 "data/maps/Route125/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route125_EventScript_Ernest_2
Route125_EventScript_Ernest_1:
# 65 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_DEFAULT
# 66 "data/maps/Route125/scripts.pory"
	release
	end

Route125_EventScript_Ernest_2:
# 63 "data/maps/Route125/scripts.pory"
	goto Route125_EventScript_RematchErnest
	goto Route125_EventScript_Ernest_1


Route125_EventScript_RegisterErnest::
# 71 "data/maps/Route125/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 72 "data/maps/Route125/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRegister, MSGBOX_DEFAULT
# 74 "data/maps/Route125/scripts.pory"
	register_matchcall TRAINER_ERNEST_1
# 75 "data/maps/Route125/scripts.pory"
	release
	end


Route125_EventScript_RematchErnest::
# 80 "data/maps/Route125/scripts.pory"
	trainerbattle_rematch TRAINER_ERNEST_1, Route125_Text_ErnestRematchIntro, Route125_Text_ErnestRematchDefeat
# 81 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Kim::
# 86 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_KimIntro, Route125_Text_KimDefeat, Route125_Text_KimNotEnoughMons
# 87 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Iris::
# 92 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_IrisIntro, Route125_Text_IrisDefeat, Route125_Text_IrisNotEnoughMons
# 93 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Presley::
# 98 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat
# 99 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Auron::
# 104 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_AURON, Route125_Text_AuronIntro, Route125_Text_AuronDefeat
# 105 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
	end

