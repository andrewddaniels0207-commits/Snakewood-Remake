# 1 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 2 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_MapScripts::
# 3 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 2 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 4 "data/maps/SouthernIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_OnTransition
# 5 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.byte 0
# 6 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 7 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 8 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_OnTransition::
# 9 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 6 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 10 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
# 11 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 12 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 13 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 14 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_Sailor::
# 15 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 11 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 16 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock
# 17 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 12 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 18 "data/maps/SouthernIsland_Exterior/scripts.pory"
	faceplayer
# 19 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 13 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 20 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SouthernIslandSailBack, MSGBOX_YESNO
# 21 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 14 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 22 "data/maps/SouthernIsland_Exterior/scripts.pory"
	compare VAR_RESULT, NO
# 23 "data/maps/SouthernIsland_Exterior/scripts.pory"
	goto_if_eq SouthernIsland_Exterior_EventScript_Sailor_2
# 24 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_Sailor_1:
# 25 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 17 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 26 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 27 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 18 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 28 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 29 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 19 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 30 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 31 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 20 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 32 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
# 33 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 21 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 34 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 30
# 35 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 22 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 36 "data/maps/SouthernIsland_Exterior/scripts.pory"
	hideobjectat LOCALID_SOUTHERN_ISLAND_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
# 37 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 23 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 38 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, LOCALID_SOUTHERN_ISLAND_SS_TIDAL
# 39 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 24 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 40 "data/maps/SouthernIsland_Exterior/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 41 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 25 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 42 "data/maps/SouthernIsland_Exterior/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 43 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 26 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 44 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitstate
# 45 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 27 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 46 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
# 47 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 48 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 49 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_Sailor_2:
# 50 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 15 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 51 "data/maps/SouthernIsland_Exterior/scripts.pory"
	goto SouthernIsland_Exterior_EventScript_AsYouLike
# 52 "data/maps/SouthernIsland_Exterior/scripts.pory"
	goto SouthernIsland_Exterior_EventScript_Sailor_1
# 53 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 54 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 55 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_AsYouLike::
# 56 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 32 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 57 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 58 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 33 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 59 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
# 60 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 61 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 62 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 63 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_EventScript_DepartIslandSouth::
# 64 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 38 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 65 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Ferry_Movement_DepartIslandBoardSouth
# 66 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 39 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 67 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
# 68 "data/maps/SouthernIsland_Exterior/scripts.pory"
	return
# 69 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 70 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 71 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_EventScript_DepartIslandWest::
# 72 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 44 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 73 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Ferry_Movement_DepartIslandBoardWest
# 74 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 45 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 75 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
# 76 "data/maps/SouthernIsland_Exterior/scripts.pory"
	return
# 77 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 78 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 79 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 49 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 80 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_Movement_DepartIslandBoardSouth:
# 81 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 50 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 82 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_down
# 83 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 51 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 84 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_end
# 85 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 86 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 54 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 87 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_Movement_DepartIslandBoardWest:
# 88 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 55 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 89 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_left
# 90 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 56 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 91 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_faster_down
# 92 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 57 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 93 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_end
# 94 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 95 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_Sign::
# 96 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 61 "data/maps/SouthernIsland_Exterior/scripts.pory"
# 97 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_Text_Sign, MSGBOX_SIGN
# 98 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
