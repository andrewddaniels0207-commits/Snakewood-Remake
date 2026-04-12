# 1 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 2 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_MapScripts::
# 3 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 2 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 4 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_SeasideCyclingRoadNorthEntrance_OnTransition
# 5 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.byte 0
# 6 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 7 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 8 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_OnTransition::
# 9 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 6 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 10 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 3
# 11 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_OnTransition_2
# 12 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_OnTransition_1:
# 13 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 9 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 14 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 2
# 15 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_OnTransition_5
# 16 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_OnTransition_4:
# 17 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 18 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 19 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_OnTransition_2:
# 20 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 7 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 21 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge
# 22 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto Route110_SeasideCyclingRoadNorthEntrance_OnTransition_1
# 23 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 24 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_OnTransition_5:
# 25 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 10 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 26 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge
# 27 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto Route110_SeasideCyclingRoadNorthEntrance_OnTransition_4
# 28 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 29 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 30 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_RestartChallenge::
# 31 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 16 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 32 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 33 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 34 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 35 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 36 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_Clerk::
# 37 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 21 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 38 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock
# 39 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 22 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 40 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	faceplayer
# 41 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 23 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 42 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 43 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 24 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 44 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	release
# 45 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 46 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 47 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 48 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck::
# 49 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 29 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 50 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 51 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 30 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 52 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 53 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 31 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 54 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_RESULT, 2
# 55 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_2
# 56 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_1:
# 57 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 34 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 58 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_RESULT, 0
# 59 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_5
# 60 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_4:
# 61 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 37 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 62 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 63 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 38 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 64 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 65 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 39 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 66 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 67 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 68 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 69 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_2:
# 70 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 32 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 71 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	call Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike
# 72 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_1
# 73 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 74 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_5:
# 75 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 35 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 76 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike
# 77 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_4
# 78 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 79 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 80 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_OnMachBike::
# 81 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 44 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 82 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
# 83 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	return
# 84 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 85 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 86 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_NoBike::
# 87 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 49 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 88 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 89 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 50 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 90 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	closemessage
# 91 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 51 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 92 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter
# 93 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 52 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 94 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 53 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 96 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 97 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 98 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 99 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 100 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 57 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 101 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Movement_PushPlayerBackFromCounter:
# 102 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 58 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 103 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	walk_left
# 104 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 59 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 105 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	step_end
# 106 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 107 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad::
# 108 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 63 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 109 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 110 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 64 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 111 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 112 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 65 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 113 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 114 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 66 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 115 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 116 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 67 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 117 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
# 118 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	end
# 119 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 120 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 121 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad::
# 122 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 71 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 123 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 124 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 125 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 126 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 127 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"

# 128 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk::
# 129 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 78 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
# 130 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 131 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 132 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"
