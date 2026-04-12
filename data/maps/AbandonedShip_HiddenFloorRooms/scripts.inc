AbandonedShip_HiddenFloorRooms_MapScripts::
# 2 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AbandonedShip_HiddenFloorRooms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AbandonedShip_HiddenFloorRooms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle
	.2byte 0


AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle::
# 8 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_1, 1
# 9 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 10 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_4, 1
# 11 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_2, 21
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_2
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_1:
# 14 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_2, 36
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_5
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_4:
# 17 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_7:
# 20 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	switch VAR_TEMP_4
# 21 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 1, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_12
# 23 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 2, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_13
# 25 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 3, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_14
# 27 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 4, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_15
# 29 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 5, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_16
# 31 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 6, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_17
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10:
	end

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_2:
# 12 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_1

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_5:
# 15 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_4

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8:
# 18 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_7

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_12:
# 22 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_13:
# 24 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_14:
# 26 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_15:
# 28 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_16:
# 30 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_17:
# 32 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10


AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn::
# 38 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 1
	return


AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn::
# 43 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 2
	return


AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow::
# 48 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 3
	return


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1::
# 53 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 54 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 10, 10, 0
# 55 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom4Key
# 56 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_2
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_1:
# 59 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 60 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
	end

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_2:
# 57 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_1


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2::
	end


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3::
# 69 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom1Key
# 70 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_2
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_1:
# 73 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 74 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_5
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_4:
# 77 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 78 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
	end

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_2:
# 71 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_1

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_5:
# 75 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_4


AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle::
	end


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4::
# 87 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 88 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 8, 5, 0
# 89 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 11, 3, 0
# 90 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom6Key
# 91 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_2
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_1:
# 94 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 95 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
	end

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_2:
# 92 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_1


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5::
# 100 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 101 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 16, 3, 0
# 102 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 25, 2, 0
# 103 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 24, 6, 0
# 104 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom2Key
# 105 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_2
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_1:
# 108 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 109 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
	end

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_2:
# 106 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_1


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6::
	end


AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle::
# 118 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 42, 10, 0
	return


AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle::
# 123 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 20, 5, 0
	return


AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle::
# 128 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 12, 0
	return


AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle::
# 133 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 2, 0
	return


AbandonedShip_HiddenFloorRooms_EventScript_Trash::
# 138 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lockall
# 139 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash, MSGBOX_DEFAULT
# 140 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash::
# 144 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "It's bright and shiny!\n"
	.string "But it's just trash…$"
