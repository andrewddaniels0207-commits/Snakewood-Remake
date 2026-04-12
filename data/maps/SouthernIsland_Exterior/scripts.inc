SouthernIsland_Exterior_MapScripts::
# 2 "data/maps/SouthernIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_OnTransition
	.byte 0


SouthernIsland_Exterior_OnTransition::
# 6 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
	end


SouthernIsland_Exterior_EventScript_Sailor::
# 11 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock
# 12 "data/maps/SouthernIsland_Exterior/scripts.pory"
	faceplayer
# 13 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SouthernIslandSailBack, MSGBOX_YESNO
# 14 "data/maps/SouthernIsland_Exterior/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SouthernIsland_Exterior_EventScript_Sailor_2
SouthernIsland_Exterior_EventScript_Sailor_1:
# 17 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 18 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 19 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 20 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
# 21 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 30
# 22 "data/maps/SouthernIsland_Exterior/scripts.pory"
	hideobjectat LOCALID_SOUTHERN_ISLAND_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
# 23 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, LOCALID_SOUTHERN_ISLAND_SS_TIDAL
# 24 "data/maps/SouthernIsland_Exterior/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 25 "data/maps/SouthernIsland_Exterior/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 26 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitstate
# 27 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
	end

SouthernIsland_Exterior_EventScript_Sailor_2:
# 15 "data/maps/SouthernIsland_Exterior/scripts.pory"
	goto SouthernIsland_Exterior_EventScript_AsYouLike
	goto SouthernIsland_Exterior_EventScript_Sailor_1


SouthernIsland_Exterior_EventScript_AsYouLike::
# 32 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 33 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
	end


Ferry_EventScript_DepartIslandSouth::
# 38 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Ferry_Movement_DepartIslandBoardSouth
# 39 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
	return


Ferry_EventScript_DepartIslandWest::
# 44 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Ferry_Movement_DepartIslandBoardWest
# 45 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
	return


# 49 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_Movement_DepartIslandBoardSouth:
# 50 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_end

# 54 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_Movement_DepartIslandBoardWest:
# 55 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_left
# 56 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_faster_down
# 57 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_end

SouthernIsland_Exterior_EventScript_Sign::
# 61 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_Text_Sign, MSGBOX_SIGN
	end

