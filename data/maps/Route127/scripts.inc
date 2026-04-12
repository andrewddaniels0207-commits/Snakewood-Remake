Route127_MapScripts::
# 2 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route127_OnTransition
# 3 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route127_OnLoad
# 4 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route127_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route127_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Route127/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route127_OnTransition::
# 10 "data/maps/Route127/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route127_OnTransition_2
Route127_OnTransition_1:
# 13 "data/maps/Route127/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route127_OnTransition_5
Route127_OnTransition_4:
# 16 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH
	goto_if_eq Route127_OnTransition_8
Route127_OnTransition_7:
# 19 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH
	goto_if_eq Route127_OnTransition_11
Route127_OnTransition_10:
	end

Route127_OnTransition_2:
# 11 "data/maps/Route127/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route127_OnTransition_1

Route127_OnTransition_5:
# 14 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route127_OnTransition_4

Route127_OnTransition_8:
# 17 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
	goto Route127_OnTransition_7

Route127_OnTransition_11:
# 20 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
	goto Route127_OnTransition_10


Route127_OnLoad::
# 26 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH
	goto_if_eq Route127_OnLoad_2
Route127_OnLoad_1:
# 29 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH
	goto_if_eq Route127_OnLoad_5
Route127_OnLoad_4:
	end

Route127_OnLoad_2:
# 27 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute127North
	goto Route127_OnLoad_1

Route127_OnLoad_5:
# 30 "data/maps/Route127/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute127South
	goto Route127_OnLoad_4


Route127_EventScript_Camden::
# 36 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_CAMDEN, Route127_Text_CamdenIntro, Route127_Text_CamdenDefeat
# 37 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
	end


Route127_EventScript_Donny::
# 42 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_DONNY, Route127_Text_DonnyIntro, Route127_Text_DonnyDefeat
# 43 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
	end


Route127_EventScript_Jonah::
# 48 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_JONAH, Route127_Text_JonahIntro, Route127_Text_JonahDefeat
# 49 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
	end


Route127_EventScript_Henry::
# 54 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_HENRY, Route127_Text_HenryIntro, Route127_Text_HenryDefeat
# 55 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
	end


Route127_EventScript_Roger::
# 60 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ROGER, Route127_Text_RogerIntro, Route127_Text_RogerDefeat
# 61 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
	end


Route127_EventScript_Aidan::
# 66 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_AIDAN, Route127_Text_AidanIntro, Route127_Text_AidanDefeat
# 67 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
	end


Route127_EventScript_Athena::
# 72 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ATHENA, Route127_Text_AthenaIntro, Route127_Text_AthenaDefeat
# 73 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
	end


Route127_EventScript_Koji::
# 78 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route127_Text_KojiIntro, Route127_Text_KojiDefeat, Route127_EventScript_RegisterKoji
# 79 "data/maps/Route127/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 80 "data/maps/Route127/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route127_EventScript_Koji_2
Route127_EventScript_Koji_1:
# 83 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/Route127/scripts.pory"
	release
	end

Route127_EventScript_Koji_2:
# 81 "data/maps/Route127/scripts.pory"
	goto Route127_EventScript_RematchKoji
	goto Route127_EventScript_Koji_1


Route127_EventScript_RegisterKoji::
# 89 "data/maps/Route127/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 90 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiRegister, MSGBOX_DEFAULT
# 92 "data/maps/Route127/scripts.pory"
	register_matchcall TRAINER_KOJI_1
# 93 "data/maps/Route127/scripts.pory"
	release
	end


Route127_EventScript_RematchKoji::
# 98 "data/maps/Route127/scripts.pory"
	trainerbattle_rematch TRAINER_KOJI_1, Route127_Text_KojiRematchIntro, Route127_Text_KojiRematchDefeat
# 99 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostRematch, MSGBOX_AUTOCLOSE
	end

