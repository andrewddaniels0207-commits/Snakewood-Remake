NewMauville_Entrance_MapScripts::
# 2 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Entrance_OnLoad
# 3 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Entrance_OnTransition
	.byte 0


NewMauville_Entrance_OnLoad::
# 7 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 0
	goto_if_eq NewMauville_Entrance_OnLoad_2
NewMauville_Entrance_OnLoad_1:
	end

NewMauville_Entrance_OnLoad_2:
# 8 "data/maps/NewMauville_Entrance/scripts.pory"
	call NewMauville_Entrance_EventScript_CloseDoor
	goto NewMauville_Entrance_OnLoad_1


NewMauville_Entrance_EventScript_CloseDoor::
# 14 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile0, TRUE
# 15 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile1, TRUE
# 16 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile2, TRUE
# 17 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile3, TRUE
# 18 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile4, TRUE
# 19 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile5, TRUE
	return


NewMauville_Entrance_OnTransition::
# 24 "data/maps/NewMauville_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_NEW_MAUVILLE
	end


NewMauville_Entrance_EventScript_Door::
# 29 "data/maps/NewMauville_Entrance/scripts.pory"
	lockall
# 30 "data/maps/NewMauville_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 31 "data/maps/NewMauville_Entrance/scripts.pory"
	waitmovement 0
# 32 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_DoorIsLocked, MSGBOX_DEFAULT
# 33 "data/maps/NewMauville_Entrance/scripts.pory"
	checkitem ITEM_BASEMENT_KEY
# 34 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NewMauville_Entrance_EventScript_Door_2
NewMauville_Entrance_EventScript_Door_1:
# 37 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UseBasementKey, MSGBOX_YESNO
# 38 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewMauville_Entrance_EventScript_Door_5
NewMauville_Entrance_EventScript_Door_4:
# 41 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UsedBasementKey, MSGBOX_DEFAULT
# 42 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile0, FALSE
# 43 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile1, FALSE
# 44 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile2, FALSE
# 45 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile3, TRUE
# 46 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile4, FALSE
# 47 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile5, TRUE
# 48 "data/maps/NewMauville_Entrance/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/NewMauville_Entrance/scripts.pory"
	playse SE_BANG
# 50 "data/maps/NewMauville_Entrance/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 1
# 51 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
	end

NewMauville_Entrance_EventScript_Door_2:
# 35 "data/maps/NewMauville_Entrance/scripts.pory"
	goto NewMauville_Entrance_EventScript_DontOpenDoor
	goto NewMauville_Entrance_EventScript_Door_1

NewMauville_Entrance_EventScript_Door_5:
# 39 "data/maps/NewMauville_Entrance/scripts.pory"
	goto NewMauville_Entrance_EventScript_DontOpenDoor
	goto NewMauville_Entrance_EventScript_Door_4


NewMauville_Entrance_EventScript_DontOpenDoor::
# 56 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
	end


NewMauville_Entrance_Text_DoorIsLocked::
# 60 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "The door is locked.$"

NewMauville_Entrance_Text_UseBasementKey::
# 64 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "Use the BASEMENT KEY?$"

NewMauville_Entrance_Text_UsedBasementKey::
# 68 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "{PLAYER} used the BASEMENT KEY.\p"
	.string "The door opened!$"
