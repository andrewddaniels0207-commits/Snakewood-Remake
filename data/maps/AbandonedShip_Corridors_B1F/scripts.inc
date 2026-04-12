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
	goto_if_unset FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_OnLoad_1
	return

AbandonedShip_Corridors_B1F_OnLoad_1:
# 15 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_2
	return


AbandonedShip_Corridors_B1F_OnLoad_1::
# 21 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_OnLoad_1_1
	return

AbandonedShip_Corridors_B1F_OnLoad_1_1:
# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_5
	return


AbandonedShip_Corridors_B1F_OnLoad_4::
	end


AbandonedShip_Corridors_B1F_OnLoad_2::
# 32 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom
# 33 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1
	return


AbandonedShip_Corridors_B1F_OnLoad_5::
# 38 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 39 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_4
	return


AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom::
# 44 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	return


AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom::
# 50 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
	return


AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 56 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_YayItsAShip, MSGBOX_NPC
	end


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor::
# 62 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 64 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1
	return

AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1:
# 65 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2
	return


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1::
# 71 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 73 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 74 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_eq AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_5
	return


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_4::
# 79 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_DEFAULT
# 81 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 83 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY
# 85 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_USED_STORAGE_KEY
# 87 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 89 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
# 91 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2::
# 97 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked
# 98 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1
	return


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_5::
# 103 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked
# 104 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_4
	return


AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked::
# 109 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DoorIsLocked, MSGBOX_DEFAULT
# 111 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked::
# 117 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 119 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


AbandonedShip_Corridors_B1F_EventScript_Duncan::
# 125 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
# 127 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Corridors_B1F_Text_DuncanIntro::
# 131 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "When we go out to sea, we SAILORS\n"
	.string "always bring our POKéMON.\l"
	.string "How about a quick battle?$"

AbandonedShip_Corridors_B1F_Text_DuncanDefeat::
# 137 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Whoops, I'm sunk!$"

AbandonedShip_Corridors_B1F_Text_DuncanPostBattle::
# 141 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The ship's bottom has sunk into the\n"
	.string "depths.\p"
	.string "If a POKéMON knew how to go underwater,\n"
	.string "we might make some progress…$"

AbandonedShip_Corridors_B1F_Text_YayItsAShip::
# 148 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Yay!\n"
	.string "It's a ship!$"

AbandonedShip_Corridors_B1F_Text_DoorIsLocked::
# 153 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is locked.\p"
	.string "“STORAGE” is painted on the door.$"

AbandonedShip_Corridors_B1F_Text_InsertedStorageKey::
# 158 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
	.string "STORAGE KEY.\p"
	.string "The inserted KEY stuck fast,\n"
	.string "but the door opened.$"

AbandonedShip_Text_TheDoorIsOpen::
# 165 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is open.$"
