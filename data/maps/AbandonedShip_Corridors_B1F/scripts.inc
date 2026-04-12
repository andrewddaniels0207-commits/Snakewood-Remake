AbandonedShip_Corridors_B1F_MapScripts::
# 2 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Corridors_B1F_OnResume
# 3 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Corridors_B1F_OnLoad
	.byte 0


AbandonedShip_Corridors_B1F_OnResume::
# 7 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
	end


AbandonedShip_Corridors_B1F_OnLoad::
# 12 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_unset FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_OnLoad_2
AbandonedShip_Corridors_B1F_OnLoad_1:
# 15 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_OnLoad_5
AbandonedShip_Corridors_B1F_OnLoad_4:
	end

AbandonedShip_Corridors_B1F_OnLoad_2:
# 13 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom
	goto AbandonedShip_Corridors_B1F_OnLoad_1

AbandonedShip_Corridors_B1F_OnLoad_5:
# 16 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
	goto AbandonedShip_Corridors_B1F_OnLoad_4


AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom::
# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	return


AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom::
# 27 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
	return


AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 32 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_YayItsAShip, MSGBOX_NPC
	end


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor::
# 37 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 38 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1:
# 41 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 42 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_5
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_4:
# 45 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_DEFAULT
# 46 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 47 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY
# 48 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_USED_STORAGE_KEY
# 49 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 50 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
# 51 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end

AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2:
# 39 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1

AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_5:
# 43 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_4


AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked::
# 56 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DoorIsLocked, MSGBOX_DEFAULT
# 57 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked::
# 62 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 63 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end


AbandonedShip_Corridors_B1F_EventScript_Duncan::
# 68 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
# 69 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Corridors_B1F_Text_DuncanIntro::
# 73 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "When we go out to sea, we SAILORS\n"
	.string "always bring our POKéMON.\l"
	.string "How about a quick battle?$"

AbandonedShip_Corridors_B1F_Text_DuncanDefeat::
# 79 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Whoops, I'm sunk!$"

AbandonedShip_Corridors_B1F_Text_DuncanPostBattle::
# 83 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The ship's bottom has sunk into the\n"
	.string "depths.\p"
	.string "If a POKéMON knew how to go underwater,\n"
	.string "we might make some progress…$"

AbandonedShip_Corridors_B1F_Text_YayItsAShip::
# 90 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Yay!\n"
	.string "It's a ship!$"

AbandonedShip_Corridors_B1F_Text_DoorIsLocked::
# 95 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is locked.\p"
	.string "“STORAGE” is painted on the door.$"

AbandonedShip_Corridors_B1F_Text_InsertedStorageKey::
# 100 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
	.string "STORAGE KEY.\p"
	.string "The inserted KEY stuck fast,\n"
	.string "but the door opened.$"

AbandonedShip_Text_TheDoorIsOpen::
# 107 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is open.$"
