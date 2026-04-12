# 1 "data/maps/NewMauville_Entrance/scripts.pory"

# 2 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_MapScripts::
# 3 "data/maps/NewMauville_Entrance/scripts.pory"
# 2 "data/maps/NewMauville_Entrance/scripts.pory"
# 4 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Entrance_OnLoad
# 5 "data/maps/NewMauville_Entrance/scripts.pory"
# 3 "data/maps/NewMauville_Entrance/scripts.pory"
# 6 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Entrance_OnTransition
# 7 "data/maps/NewMauville_Entrance/scripts.pory"
	.byte 0
# 8 "data/maps/NewMauville_Entrance/scripts.pory"

# 9 "data/maps/NewMauville_Entrance/scripts.pory"

# 10 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_OnLoad::
# 11 "data/maps/NewMauville_Entrance/scripts.pory"
# 7 "data/maps/NewMauville_Entrance/scripts.pory"
# 12 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 0
# 13 "data/maps/NewMauville_Entrance/scripts.pory"
	goto_if_eq NewMauville_Entrance_OnLoad_2
# 14 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_OnLoad_1:
# 15 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 16 "data/maps/NewMauville_Entrance/scripts.pory"

# 17 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_OnLoad_2:
# 18 "data/maps/NewMauville_Entrance/scripts.pory"
# 8 "data/maps/NewMauville_Entrance/scripts.pory"
# 19 "data/maps/NewMauville_Entrance/scripts.pory"
	call NewMauville_Entrance_EventScript_CloseDoor
# 20 "data/maps/NewMauville_Entrance/scripts.pory"
	goto NewMauville_Entrance_OnLoad_1
# 21 "data/maps/NewMauville_Entrance/scripts.pory"

# 22 "data/maps/NewMauville_Entrance/scripts.pory"

# 23 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_CloseDoor::
# 24 "data/maps/NewMauville_Entrance/scripts.pory"
# 14 "data/maps/NewMauville_Entrance/scripts.pory"
# 25 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile0, TRUE
# 26 "data/maps/NewMauville_Entrance/scripts.pory"
# 15 "data/maps/NewMauville_Entrance/scripts.pory"
# 27 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile1, TRUE
# 28 "data/maps/NewMauville_Entrance/scripts.pory"
# 16 "data/maps/NewMauville_Entrance/scripts.pory"
# 29 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile2, TRUE
# 30 "data/maps/NewMauville_Entrance/scripts.pory"
# 17 "data/maps/NewMauville_Entrance/scripts.pory"
# 31 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile3, TRUE
# 32 "data/maps/NewMauville_Entrance/scripts.pory"
# 18 "data/maps/NewMauville_Entrance/scripts.pory"
# 33 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile4, TRUE
# 34 "data/maps/NewMauville_Entrance/scripts.pory"
# 19 "data/maps/NewMauville_Entrance/scripts.pory"
# 35 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile5, TRUE
# 36 "data/maps/NewMauville_Entrance/scripts.pory"
	return
# 37 "data/maps/NewMauville_Entrance/scripts.pory"

# 38 "data/maps/NewMauville_Entrance/scripts.pory"

# 39 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_OnTransition::
# 40 "data/maps/NewMauville_Entrance/scripts.pory"
# 24 "data/maps/NewMauville_Entrance/scripts.pory"
# 41 "data/maps/NewMauville_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_NEW_MAUVILLE
# 42 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 43 "data/maps/NewMauville_Entrance/scripts.pory"

# 44 "data/maps/NewMauville_Entrance/scripts.pory"

# 45 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_Door::
# 46 "data/maps/NewMauville_Entrance/scripts.pory"
# 29 "data/maps/NewMauville_Entrance/scripts.pory"
# 47 "data/maps/NewMauville_Entrance/scripts.pory"
	lockall
# 48 "data/maps/NewMauville_Entrance/scripts.pory"
# 30 "data/maps/NewMauville_Entrance/scripts.pory"
# 49 "data/maps/NewMauville_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 50 "data/maps/NewMauville_Entrance/scripts.pory"
# 31 "data/maps/NewMauville_Entrance/scripts.pory"
# 51 "data/maps/NewMauville_Entrance/scripts.pory"
	waitmovement 0
# 52 "data/maps/NewMauville_Entrance/scripts.pory"
# 32 "data/maps/NewMauville_Entrance/scripts.pory"
# 53 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_DoorIsLocked, MSGBOX_DEFAULT
# 54 "data/maps/NewMauville_Entrance/scripts.pory"
# 33 "data/maps/NewMauville_Entrance/scripts.pory"
# 55 "data/maps/NewMauville_Entrance/scripts.pory"
	checkitem ITEM_BASEMENT_KEY
# 56 "data/maps/NewMauville_Entrance/scripts.pory"
# 34 "data/maps/NewMauville_Entrance/scripts.pory"
# 57 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 58 "data/maps/NewMauville_Entrance/scripts.pory"
	goto_if_eq NewMauville_Entrance_EventScript_Door_2
# 59 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_Door_1:
# 60 "data/maps/NewMauville_Entrance/scripts.pory"
# 37 "data/maps/NewMauville_Entrance/scripts.pory"
# 61 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UseBasementKey, MSGBOX_YESNO
# 62 "data/maps/NewMauville_Entrance/scripts.pory"
# 38 "data/maps/NewMauville_Entrance/scripts.pory"
# 63 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_RESULT, NO
# 64 "data/maps/NewMauville_Entrance/scripts.pory"
	goto_if_eq NewMauville_Entrance_EventScript_Door_5
# 65 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_Door_4:
# 66 "data/maps/NewMauville_Entrance/scripts.pory"
# 41 "data/maps/NewMauville_Entrance/scripts.pory"
# 67 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UsedBasementKey, MSGBOX_DEFAULT
# 68 "data/maps/NewMauville_Entrance/scripts.pory"
# 42 "data/maps/NewMauville_Entrance/scripts.pory"
# 69 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile0, FALSE
# 70 "data/maps/NewMauville_Entrance/scripts.pory"
# 43 "data/maps/NewMauville_Entrance/scripts.pory"
# 71 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile1, FALSE
# 72 "data/maps/NewMauville_Entrance/scripts.pory"
# 44 "data/maps/NewMauville_Entrance/scripts.pory"
# 73 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile2, FALSE
# 74 "data/maps/NewMauville_Entrance/scripts.pory"
# 45 "data/maps/NewMauville_Entrance/scripts.pory"
# 75 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile3, TRUE
# 76 "data/maps/NewMauville_Entrance/scripts.pory"
# 46 "data/maps/NewMauville_Entrance/scripts.pory"
# 77 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile4, FALSE
# 78 "data/maps/NewMauville_Entrance/scripts.pory"
# 47 "data/maps/NewMauville_Entrance/scripts.pory"
# 79 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile5, TRUE
# 80 "data/maps/NewMauville_Entrance/scripts.pory"
# 48 "data/maps/NewMauville_Entrance/scripts.pory"
# 81 "data/maps/NewMauville_Entrance/scripts.pory"
	special DrawWholeMapView
# 82 "data/maps/NewMauville_Entrance/scripts.pory"
# 49 "data/maps/NewMauville_Entrance/scripts.pory"
# 83 "data/maps/NewMauville_Entrance/scripts.pory"
	playse SE_BANG
# 84 "data/maps/NewMauville_Entrance/scripts.pory"
# 50 "data/maps/NewMauville_Entrance/scripts.pory"
# 85 "data/maps/NewMauville_Entrance/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 1
# 86 "data/maps/NewMauville_Entrance/scripts.pory"
# 51 "data/maps/NewMauville_Entrance/scripts.pory"
# 87 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
# 88 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 89 "data/maps/NewMauville_Entrance/scripts.pory"

# 90 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_Door_2:
# 91 "data/maps/NewMauville_Entrance/scripts.pory"
# 35 "data/maps/NewMauville_Entrance/scripts.pory"
# 92 "data/maps/NewMauville_Entrance/scripts.pory"
	goto NewMauville_Entrance_EventScript_DontOpenDoor
# 93 "data/maps/NewMauville_Entrance/scripts.pory"
	goto NewMauville_Entrance_EventScript_Door_1
# 94 "data/maps/NewMauville_Entrance/scripts.pory"

# 95 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_Door_5:
# 96 "data/maps/NewMauville_Entrance/scripts.pory"
# 39 "data/maps/NewMauville_Entrance/scripts.pory"
# 97 "data/maps/NewMauville_Entrance/scripts.pory"
	goto NewMauville_Entrance_EventScript_DontOpenDoor
# 98 "data/maps/NewMauville_Entrance/scripts.pory"
	goto NewMauville_Entrance_EventScript_Door_4
# 99 "data/maps/NewMauville_Entrance/scripts.pory"

# 100 "data/maps/NewMauville_Entrance/scripts.pory"

# 101 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_DontOpenDoor::
# 102 "data/maps/NewMauville_Entrance/scripts.pory"
# 56 "data/maps/NewMauville_Entrance/scripts.pory"
# 103 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
# 104 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 105 "data/maps/NewMauville_Entrance/scripts.pory"

# 106 "data/maps/NewMauville_Entrance/scripts.pory"

# 107 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_DoorIsLocked::
# 108 "data/maps/NewMauville_Entrance/scripts.pory"
# 60 "data/maps/NewMauville_Entrance/scripts.pory"
# 109 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "The door is locked.$"
# 110 "data/maps/NewMauville_Entrance/scripts.pory"

# 111 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_UseBasementKey::
# 112 "data/maps/NewMauville_Entrance/scripts.pory"
# 64 "data/maps/NewMauville_Entrance/scripts.pory"
# 113 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "Use the BASEMENT KEY?$"
# 114 "data/maps/NewMauville_Entrance/scripts.pory"

# 115 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_UsedBasementKey::
# 116 "data/maps/NewMauville_Entrance/scripts.pory"
# 68 "data/maps/NewMauville_Entrance/scripts.pory"
# 117 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "{PLAYER} used the BASEMENT KEY.\p"
# 118 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "The door opened!$"
