# 1 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 2 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_MapScripts::
# 3 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 2 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 4 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AbandonedShip_HiddenFloorRooms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.byte 0
# 6 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 7 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 3 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 9 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle
# 10 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.2byte 0
# 11 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 12 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 13 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle::
# 14 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 9 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 15 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 11 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 17 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 18 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 13 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 19 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_4, 1
# 20 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 15 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 21 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_2, 21
# 22 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 16 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 23 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_2
# 24 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 25 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 26 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 27 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_1::
# 28 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 21 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 29 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_2, 36
# 30 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 22 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 31 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_5
# 32 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 33 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 34 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 35 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_4::
# 36 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 27 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 37 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_3, 2
# 38 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 28 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 39 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8
# 40 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 41 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 42 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 43 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_7::
# 44 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 45 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 46 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 47 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10::
# 48 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 49 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 50 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 51 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_2::
# 52 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 53 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 53 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn
# 54 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 54 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 55 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_1
# 56 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 57 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 58 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 59 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_5::
# 60 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 59 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 61 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn
# 62 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 60 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 63 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_4
# 64 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 65 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 66 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 67 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8::
# 68 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 65 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 69 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow
# 70 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 66 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 71 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_7
# 72 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 73 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 74 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 75 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_12::
# 76 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 71 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 77 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1
# 78 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 72 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 79 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10
# 80 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 81 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 82 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 83 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_13::
# 84 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 77 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 85 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2
# 86 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 78 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 87 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10
# 88 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 89 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 90 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 91 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_14::
# 92 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 83 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 93 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3
# 94 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 84 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 95 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10
# 96 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 97 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 98 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 99 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_15::
# 100 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 89 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 101 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4
# 102 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 90 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 103 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10
# 104 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 105 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 106 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 107 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_16::
# 108 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 95 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 109 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5
# 110 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 96 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 111 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10
# 112 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 113 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 114 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 115 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_17::
# 116 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 101 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 117 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6
# 118 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 102 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 119 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10
# 120 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 121 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 122 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 123 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn::
# 124 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 107 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 125 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 1
# 126 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 127 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 128 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 129 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn::
# 130 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 113 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 131 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 2
# 132 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 133 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 134 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 135 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow::
# 136 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 119 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 137 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 3
# 138 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 139 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 140 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 141 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1::
# 142 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 125 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 143 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 144 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 127 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 145 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 10, 10, 0
# 146 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 129 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 147 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom4Key
# 148 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 131 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 149 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 150 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 132 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 151 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_2
# 152 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 153 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 154 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 155 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_1::
# 156 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 137 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 157 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 158 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 139 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 159 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 160 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 161 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 162 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 163 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_2::
# 164 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 145 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 165 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle
# 166 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 146 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 167 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_1
# 168 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 169 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 170 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 171 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2::
# 172 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 173 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 174 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 175 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3::
# 176 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 155 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 177 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom1Key
# 178 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 157 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 179 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, TRUE
# 180 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 158 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 181 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_2
# 182 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 183 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 184 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 185 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_1::
# 186 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 163 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 187 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 188 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 165 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 189 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 190 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 166 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 191 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_5
# 192 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 193 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 194 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 195 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_4::
# 196 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 171 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 197 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 198 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 173 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 199 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 200 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 201 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 202 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 203 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_2::
# 204 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 179 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 205 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle
# 206 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 180 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 207 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_1
# 208 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 209 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 210 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 211 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_5::
# 212 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 185 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 213 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle
# 214 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 186 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 215 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_4
# 216 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 217 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 218 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 219 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle::
# 220 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 221 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 222 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 223 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4::
# 224 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 195 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 225 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 226 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 197 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 227 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 8, 5, 0
# 228 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 199 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 229 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 11, 3, 0
# 230 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 201 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 231 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom6Key
# 232 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 203 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 233 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 234 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 204 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 235 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_2
# 236 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 237 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 238 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 239 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_1::
# 240 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 209 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 241 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 242 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 211 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 243 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 244 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 245 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 246 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 247 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_2::
# 248 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 217 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 249 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle
# 250 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 218 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 251 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_1
# 252 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 253 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 254 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 255 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5::
# 256 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 223 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 257 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 258 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 225 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 259 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 16, 3, 0
# 260 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 227 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 261 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 25, 2, 0
# 262 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 229 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 263 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 24, 6, 0
# 264 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 231 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 265 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom2Key
# 266 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 233 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 267 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 268 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 234 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 269 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_2
# 270 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 271 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 272 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 273 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_1::
# 274 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 239 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 275 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 276 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 241 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 277 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 278 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 279 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 280 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 281 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_2::
# 282 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 247 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 283 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle
# 284 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 248 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 285 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_1
# 286 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 287 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 288 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 289 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6::
# 290 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 291 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 292 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 293 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle::
# 294 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 257 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 295 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 42, 10, 0
# 296 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 297 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 298 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 299 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle::
# 300 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 263 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 301 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 20, 5, 0
# 302 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 303 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 304 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 305 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle::
# 306 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 269 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 307 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 12, 0
# 308 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 309 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 310 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 311 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle::
# 312 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 275 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 313 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 2, 0
# 314 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 315 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 316 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 317 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Trash::
# 318 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 281 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 319 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lockall
# 320 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 283 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 321 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash, MSGBOX_DEFAULT
# 322 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 285 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 323 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	releaseall
# 324 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 325 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 326 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 327 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash::
# 328 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 289 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
# 329 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "It's bright and shiny!\n"
# 330 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "But it's just trash…$"
