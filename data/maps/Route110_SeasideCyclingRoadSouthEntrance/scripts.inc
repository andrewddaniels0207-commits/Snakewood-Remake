# 1 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 2 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_MapScripts::
# 3 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 5 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 6 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_Clerk::
# 7 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 4 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 8 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lock
# 9 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 5 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 10 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	faceplayer
# 11 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 6 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 12 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
# 13 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 7 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 14 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	release
# 15 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 16 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 17 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 18 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck::
# 19 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 12 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 20 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 21 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 13 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 22 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 23 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 14 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 24 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	compare VAR_RESULT, 0
# 25 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	goto_if_eq Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck_2
# 26 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck_1:
# 27 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 17 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 28 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 29 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 18 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 30 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 31 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 19 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 32 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 33 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 34 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 35 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck_2:
# 36 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 15 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 37 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	goto Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike
# 38 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	goto Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck_1
# 39 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 40 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 41 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike::
# 42 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 24 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 43 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 44 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 25 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 45 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	closemessage
# 46 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 26 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 47 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter
# 48 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 27 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 49 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 28 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 51 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 52 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 53 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 54 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 55 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 32 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 56 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter:
# 57 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 33 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 58 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	walk_left
# 59 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 34 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 60 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	step_end
# 61 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 62 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad::
# 63 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 38 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 64 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 65 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 39 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 66 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 67 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 40 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 68 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 69 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 41 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 70 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
# 71 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	end
# 72 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 73 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 74 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad::
# 75 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 45 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 76 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
# 77 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "and cycle as fast as you'd like.\p"
# 78 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "It feels great to go that fast, but try\n"
# 79 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "not to crash into anyone!$"
# 80 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"

# 81 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk::
# 82 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 52 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
# 83 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
# 84 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "ROAD. It's too dangerous.\p"
# 85 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Please come back with a BIKE.$"
