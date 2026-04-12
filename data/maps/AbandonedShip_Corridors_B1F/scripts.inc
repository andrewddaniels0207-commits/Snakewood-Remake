AbandonedShip_Corridors_B1F_MapScripts::
# 2 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Corridors_B1F_OnResume
# 3 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Corridors_B1F_OnLoad
	.byte 0


AbandonedShip_Corridors_B1F_OnResume::
# 8 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
	end


AbandonedShip_Corridors_B1F_OnLoad::
# 14 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_unset FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_OnLoad_2
AbandonedShip_Corridors_B1F_OnLoad_1:
	return

AbandonedShip_Corridors_B1F_OnLoad_2:
# 15 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1
	goto AbandonedShip_Corridors_B1F_OnLoad_1


AbandonedShip_Corridors_B1F_OnLoad_1::
# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_2
	return


AbandonedShip_Corridors_B1F_OnLoad_1::
# 28 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_OnLoad_1_2
AbandonedShip_Corridors_B1F_OnLoad_1_1:
	return

AbandonedShip_Corridors_B1F_OnLoad_1_2:
# 29 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1_1
	goto AbandonedShip_Corridors_B1F_OnLoad_1_1


AbandonedShip_Corridors_B1F_OnLoad_1_1::
# 36 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_5
	return


AbandonedShip_Corridors_B1F_OnLoad_4::
	end


AbandonedShip_Corridors_B1F_OnLoad_2::
# 46 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom
# 48 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1
	return


AbandonedShip_Corridors_B1F_OnLoad_5::
# 54 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 56 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_4
	return


AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom::
# 62 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	return


AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom::
# 68 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
	return


AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 74 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_YayItsAShip, MSGBOX_NPC
	end


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor::
# 80 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 82 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1:
	return

AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2:
# 83 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1::
# 90 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2
	return


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1::
# 96 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 98 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 100 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_eq AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_5
	return


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_4::
# 106 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_DEFAULT
# 108 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 110 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY
# 112 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_USED_STORAGE_KEY
# 114 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 116 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
# 118 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2::
# 124 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked
# 126 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1
	return


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_5::
# 132 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked
# 134 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_4
	return


AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked::
# 140 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DoorIsLocked, MSGBOX_DEFAULT
# 142 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked::
# 148 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 150 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


AbandonedShip_Corridors_B1F_EventScript_Duncan::
# 156 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
# 158 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Corridors_B1F_Text_DuncanIntro::
# 162 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "When we go out to sea, we SAILORS\n"
	.string "always bring our POKéMON.\l"
	.string "How about a quick battle?$"

AbandonedShip_Corridors_B1F_Text_DuncanDefeat::
# 168 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Whoops, I'm sunk!$"

AbandonedShip_Corridors_B1F_Text_DuncanPostBattle::
# 172 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The ship's bottom has sunk into the\n"
	.string "depths.\p"
	.string "If a POKéMON knew how to go underwater,\n"
	.string "we might make some progress…$"

AbandonedShip_Corridors_B1F_Text_YayItsAShip::
# 179 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Yay!\n"
	.string "It's a ship!$"

AbandonedShip_Corridors_B1F_Text_DoorIsLocked::
# 184 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is locked.\p"
	.string "“STORAGE” is painted on the door.$"

AbandonedShip_Corridors_B1F_Text_InsertedStorageKey::
# 189 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
	.string "STORAGE KEY.\p"
	.string "The inserted KEY stuck fast,\n"
	.string "but the door opened.$"

AbandonedShip_Text_TheDoorIsOpen::
# 196 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is open.$"
