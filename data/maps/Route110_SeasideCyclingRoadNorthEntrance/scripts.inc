Route110_SeasideCyclingRoadNorthEntrance_MapScripts::
# 2 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_SeasideCyclingRoadNorthEntrance_OnTransition
	.byte 0


Route110_SeasideCyclingRoadNorthEntrance_OnTransition::
# 6 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 3
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_OnTransition_2
Route110_SeasideCyclingRoadNorthEntrance_OnTransition_1:
# 9 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 2
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_OnTransition_5
Route110_SeasideCyclingRoadNorthEntrance_OnTransition_4:
	end

Route110_SeasideCyclingRoadNorthEntrance_OnTransition_2:
# 7 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge
	goto Route110_SeasideCyclingRoadNorthEntrance_OnTransition_1

Route110_SeasideCyclingRoadNorthEntrance_OnTransition_5:
# 10 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge
	goto Route110_SeasideCyclingRoadNorthEntrance_OnTransition_4


Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge::
# 16 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
	return


Route110_SeasideCyclingRoadNorthEntrance_EventScript_Clerk::
# 21 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 22 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	faceplayer
# 23 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 24 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
	end


Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck::
# 29 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 30 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 31 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_2
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_1:
# 34 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_5
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_4:
# 37 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 38 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_2:
# 32 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_1

Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_5:
# 35 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_4


Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike::
# 44 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
	return


Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike::
# 49 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 50 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	closemessage
# 51 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter
# 52 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


# 57 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter:
# 58 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	walk_left
# 59 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	step_end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad::
# 63 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 64 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 65 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 66 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 67 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad::
# 71 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
	.string "and cycle as fast as you'd like.\p"
	.string "It feels great to go that fast, but try\n"
	.string "not to crash into anyone!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk::
# 78 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
	.string "ROAD. It's too dangerous.\p"
	.string "Please come back with a BIKE.$"
