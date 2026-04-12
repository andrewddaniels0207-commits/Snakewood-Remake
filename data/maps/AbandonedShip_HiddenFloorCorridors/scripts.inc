AbandonedShip_HiddenFloorCorridors_MapScripts::
# 2 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_HiddenFloorCorridors_OnResume
# 3 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_HiddenFloorCorridors_OnLoad
	.byte 0


AbandonedShip_HiddenFloorCorridors_OnResume::
# 7 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
	end


AbandonedShip_HiddenFloorCorridors_OnLoad::
# 12 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_2
AbandonedShip_HiddenFloorCorridors_OnLoad_1:
# 15 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_5
AbandonedShip_HiddenFloorCorridors_OnLoad_4:
# 18 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_8
AbandonedShip_HiddenFloorCorridors_OnLoad_7:
# 21 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_11
AbandonedShip_HiddenFloorCorridors_OnLoad_10:
# 24 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_14
AbandonedShip_HiddenFloorCorridors_OnLoad_13:
# 27 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_17
AbandonedShip_HiddenFloorCorridors_OnLoad_16:
# 30 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_20
AbandonedShip_HiddenFloorCorridors_OnLoad_19:
# 33 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_OnLoad_23
AbandonedShip_HiddenFloorCorridors_OnLoad_22:
	end

AbandonedShip_HiddenFloorCorridors_OnLoad_2:
# 13 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom1
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_1

AbandonedShip_HiddenFloorCorridors_OnLoad_5:
# 16 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom2
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_4

AbandonedShip_HiddenFloorCorridors_OnLoad_8:
# 19 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom4
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_7

AbandonedShip_HiddenFloorCorridors_OnLoad_11:
# 22 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom6
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_10

AbandonedShip_HiddenFloorCorridors_OnLoad_14:
# 25 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_13

AbandonedShip_HiddenFloorCorridors_OnLoad_17:
# 28 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_16

AbandonedShip_HiddenFloorCorridors_OnLoad_20:
# 31 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_19

AbandonedShip_HiddenFloorCorridors_OnLoad_23:
# 34 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6
	goto AbandonedShip_HiddenFloorCorridors_OnLoad_22


AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1::
# 40 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
	return


AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2::
# 45 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
	return


AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4::
# 50 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
	return


AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6::
# 55 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
	return


AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom1::
# 60 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	return


AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom2::
# 65 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	return


AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom4::
# 70 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Locked, FALSE
	return


AbandonedShip_HiddenFloorCorridors_EventScript_LockRoom6::
# 75 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Locked, FALSE
	return


AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door::
# 80 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 81 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_2
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1:
# 84 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_1
# 85 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_5
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_4:
# 88 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 89 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 90 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_1
# 91 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_1_KEY
# 92 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom1
# 93 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 94 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_2:
# 82 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1

AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_5:
# 86 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Rm1IsLocked
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_4


AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door::
# 99 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 100 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_2
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1:
# 103 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_2
# 104 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_5
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_4:
# 107 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 108 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 109 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_2
# 110 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_2_KEY
# 111 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom2
# 112 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 113 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_2:
# 101 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1

AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_5:
# 105 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Rm2IsLocked
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_4


AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door::
# 118 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 119 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_2
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1:
# 122 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_4
# 123 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_5
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_4:
# 126 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 127 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 128 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_4
# 129 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_4_KEY
# 130 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom4
# 131 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 132 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_2:
# 120 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1

AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_5:
# 124 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Rm4IsLocked
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_4


AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door::
# 137 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 138 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_2
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1:
# 141 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	checkitem ITEM_KEY_TO_ROOM_6
# 142 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_5
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_4:
# 145 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 146 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 147 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_6
# 148 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_6_KEY
# 149 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	call AbandonedShip_HiddenFloorCorridors_EventScript_UnlockRoom6
# 150 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 151 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_2:
# 139 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1

AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_5:
# 143 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Rm6IsLocked
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_4


AbandonedShip_HiddenFloorCorridors_EventScript_Rm1IsLocked::
# 156 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked, MSGBOX_DEFAULT
# 157 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_EventScript_Rm2IsLocked::
# 162 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked, MSGBOX_DEFAULT
# 163 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_EventScript_Rm4IsLocked::
# 168 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked, MSGBOX_DEFAULT
# 169 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_EventScript_Rm6IsLocked::
# 174 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked, MSGBOX_DEFAULT
# 175 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen::
# 180 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 181 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked::
# 185 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
	.string "“RM. 1” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked::
# 190 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
	.string "“RM. 2” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked::
# 195 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
	.string "“RM. 4” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked::
# 200 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
	.string "“RM. 6” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_InsertedKey::
# 205 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
	.string "KEY.\p"
	.string "The inserted KEY stuck fast,\n"
	.string "but the door opened.$"
