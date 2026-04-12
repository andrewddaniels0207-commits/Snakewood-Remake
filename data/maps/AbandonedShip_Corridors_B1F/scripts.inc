# 1 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 2 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 4 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Corridors_B1F_OnResume
# 5 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 3 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 6 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Corridors_B1F_OnLoad
# 7 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.byte 0
# 8 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 10 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnResume::
# 11 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 8 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 12 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
# 13 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 14 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 15 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 16 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad::
# 17 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 14 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 18 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_unset FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_OnLoad_2
# 19 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_1:
# 20 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 21 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_2:
# 23 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 15 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 24 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1
# 25 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1
# 26 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 27 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 28 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_1::
# 29 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 30 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_2
# 31 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 32 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 33 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 34 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_1::
# 35 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 28 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 36 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_OnLoad_1_2
# 37 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_1_1:
# 38 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 39 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 40 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_1_2:
# 41 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 29 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 42 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1_1
# 43 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1_1
# 44 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 45 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 46 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_1_1::
# 47 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 36 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 48 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_5
# 49 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 50 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 51 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 52 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_4::
# 53 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 54 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 55 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 56 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_2::
# 57 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 46 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 58 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom
# 59 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 48 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 60 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_1
# 61 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 62 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 63 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 64 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad_5::
# 65 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 54 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 66 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 67 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 56 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 68 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_OnLoad_4
# 69 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 70 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 71 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 72 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom::
# 73 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 62 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 74 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
# 75 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 76 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 77 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 78 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom::
# 79 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 68 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 80 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 81 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 82 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 83 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 84 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 85 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 74 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 86 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_YayItsAShip, MSGBOX_NPC
# 87 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 88 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 89 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 90 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor::
# 91 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 80 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 92 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 93 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 82 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 94 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2
# 95 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1:
# 96 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 97 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 98 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2:
# 99 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 83 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 100 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1
# 101 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1
# 102 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 103 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 104 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1::
# 105 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 90 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 106 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2
# 107 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 108 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 109 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 110 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1::
# 111 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 96 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 112 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 113 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 98 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 114 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 115 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 100 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 116 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_eq AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_5
# 117 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 118 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 119 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 120 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_4::
# 121 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 106 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 122 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_DEFAULT
# 123 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 108 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 124 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 125 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 110 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 126 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY
# 127 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 112 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 128 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_USED_STORAGE_KEY
# 129 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 114 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 130 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 131 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 116 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 132 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 118 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 134 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 135 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 136 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 137 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 138 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2::
# 139 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 124 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 140 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked
# 141 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 126 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 142 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1
# 143 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 144 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 145 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 146 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_5::
# 147 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 132 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 148 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked
# 149 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 134 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 150 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_4
# 151 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 152 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 153 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 154 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked::
# 155 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 140 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 156 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DoorIsLocked, MSGBOX_DEFAULT
# 157 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 142 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 158 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 159 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 160 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 161 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 162 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked::
# 163 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 148 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 164 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 165 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 150 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 166 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 167 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 168 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 169 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 170 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_Duncan::
# 171 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 156 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 172 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
# 173 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 158 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 174 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 176 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 177 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 178 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanIntro::
# 179 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 162 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 180 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "When we go out to sea, we SAILORS\n"
# 181 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "always bring our POKéMON.\l"
# 182 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "How about a quick battle?$"
# 183 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 184 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanDefeat::
# 185 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 168 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 186 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Whoops, I'm sunk!$"
# 187 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 188 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanPostBattle::
# 189 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 172 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 190 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The ship's bottom has sunk into the\n"
# 191 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "depths.\p"
# 192 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "If a POKéMON knew how to go underwater,\n"
# 193 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "we might make some progress…$"
# 194 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 195 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_YayItsAShip::
# 196 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 179 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 197 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Yay!\n"
# 198 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "It's a ship!$"
# 199 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 200 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DoorIsLocked::
# 201 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 184 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 202 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is locked.\p"
# 203 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "“STORAGE” is painted on the door.$"
# 204 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 205 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_InsertedStorageKey::
# 206 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 189 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 207 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
# 208 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "STORAGE KEY.\p"
# 209 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The inserted KEY stuck fast,\n"
# 210 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "but the door opened.$"
# 211 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 212 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Text_TheDoorIsOpen::
# 213 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 196 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
# 214 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is open.$"
