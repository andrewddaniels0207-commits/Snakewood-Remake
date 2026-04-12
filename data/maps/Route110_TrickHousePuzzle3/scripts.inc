# 1 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 2 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 4 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle3_OnResume
# 5 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 3 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 6 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle3_OnTransition
# 7 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.byte 0
# 8 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 9 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 10 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_OnResume::
# 11 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 7 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 12 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles
# 13 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 8 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 14 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_9, 0
# 15 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_OnResume_2
# 16 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_OnResume_1:
# 17 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 11 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 18 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_9, 1
# 19 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_OnResume_5
# 20 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_OnResume_4:
# 21 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 22 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 23 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_OnResume_2:
# 24 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 9 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 25 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetDoorsState0
# 26 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_OnResume_1
# 27 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 28 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_OnResume_5:
# 29 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 12 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 30 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetDoorsState1
# 31 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_OnResume_4
# 32 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 33 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 34 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_OnTransition::
# 35 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 18 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 36 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_1, 0
# 37 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 19 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 38 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_2, 0
# 39 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 20 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 40 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_3, 0
# 41 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 21 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 42 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_4, 0
# 43 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 22 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 44 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 0
# 45 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 23 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 46 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_9, 0
# 47 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 48 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 49 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles::
# 51 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 28 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 52 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 14, METATILE_TrickHousePuzzle_Button_Up, FALSE
# 53 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 29 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 54 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 11, METATILE_TrickHousePuzzle_Button_Up, FALSE
# 55 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 30 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 56 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 5, METATILE_TrickHousePuzzle_Button_Up, FALSE
# 57 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 31 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 58 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 2, METATILE_TrickHousePuzzle_Button_Up, FALSE
# 59 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 32 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 60 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_8, 1
# 61 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_2
# 62 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_1:
# 63 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 35 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 64 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_8, 2
# 65 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_5
# 66 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_4:
# 67 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 38 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 68 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_8, 3
# 69 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_8
# 70 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_7:
# 71 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 41 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 72 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_8, 4
# 73 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_11
# 74 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_10:
# 75 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 76 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 77 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_2:
# 78 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 33 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 79 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_PressedButton1Metatile
# 80 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_1
# 81 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 82 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_5:
# 83 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 36 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 84 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_PressedButton2Metatile
# 85 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_4
# 86 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 87 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_8:
# 88 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 39 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 89 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_PressedButton3Metatile
# 90 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_7
# 91 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 92 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_11:
# 93 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 42 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 94 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_PressedButton4Metatile
# 95 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_10
# 96 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 97 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 98 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_PressedButton1Metatile::
# 99 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 48 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 100 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 14, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 101 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 102 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 103 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 104 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_PressedButton2Metatile::
# 105 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 53 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 106 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 11, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 107 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 108 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 109 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 110 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_PressedButton3Metatile::
# 111 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 58 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 112 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 5, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 113 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 114 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 115 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 116 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_PressedButton4Metatile::
# 117 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 63 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 118 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 2, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 119 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 120 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 121 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 122 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetDoorsState0::
# 123 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 68 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 124 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 6, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 125 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 69 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 126 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 6, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 127 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 70 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 128 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 7, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 129 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 71 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 130 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 7, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 131 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 72 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 132 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 9, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 133 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 73 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 134 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 9, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 135 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 74 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 136 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 10, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 137 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 75 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 138 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 10, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 139 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 76 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 140 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 15, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 141 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 77 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 142 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 15, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 143 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 78 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 144 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 16, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 145 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 79 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 146 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 16, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 147 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 80 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 148 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 9, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 149 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 81 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 150 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 9, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 151 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 82 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 152 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 10, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 153 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 83 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 154 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 10, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 155 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 84 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 156 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 15, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 157 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 85 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 158 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 15, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 159 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 86 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 160 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 16, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 161 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 87 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 162 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 16, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 163 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 88 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 164 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 7, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 165 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 89 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 166 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 8, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 167 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 90 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 168 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 13, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 169 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 91 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 170 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 14, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 171 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 92 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 172 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 6, 4, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 173 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 93 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 174 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 6, 5, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 175 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 94 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 176 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 16, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 177 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 95 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 178 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 17, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 179 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 96 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 180 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 7, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 181 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 97 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 182 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 8, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 183 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 98 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 184 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 3, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 185 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 99 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 186 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 3, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 187 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 100 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 188 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 4, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 189 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 101 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 190 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 4, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 191 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 102 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 192 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 193 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 103 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 194 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 195 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 104 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 196 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 197 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 105 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 198 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 199 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 106 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 200 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 6, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 201 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 107 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 202 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 6, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 203 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 108 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 204 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 7, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 205 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 109 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 206 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 7, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 207 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 110 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 208 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 209 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 111 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 210 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 211 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 112 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 212 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 213 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 113 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 214 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 215 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 114 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 216 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 18, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 217 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 115 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 218 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 18, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 219 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 116 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 220 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 19, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 221 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 117 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 222 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 19, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 223 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 118 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 224 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 7, 9, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 225 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 119 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 226 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 9, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 227 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 120 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 228 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 7, 10, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 229 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 121 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 230 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 10, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 231 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 122 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 232 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 6, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 233 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 123 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 234 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 6, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 235 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 124 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 236 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 7, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 237 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 125 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 238 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 7, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 239 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 126 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 240 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 241 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 127 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 242 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 243 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 128 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 244 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 245 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 129 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 246 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 247 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 130 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 248 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 18, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 249 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 131 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 250 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 18, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 251 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 132 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 252 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 19, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 253 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 133 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 254 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 19, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 255 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 134 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 256 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 3, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 257 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 135 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 258 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 3, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 259 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 136 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 260 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 4, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 261 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 137 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 262 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 4, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 263 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 138 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 264 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 16, METATILE_TrickHousePuzzle_RedDoorV_Open0, TRUE
# 265 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 139 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 266 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 17, METATILE_TrickHousePuzzle_RedDoorV_Open1, TRUE
# 267 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 140 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 268 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 4, METATILE_TrickHousePuzzle_RedDoorV_Open0, TRUE
# 269 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 141 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 270 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 5, METATILE_TrickHousePuzzle_RedDoorV_Open1, TRUE
# 271 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 272 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 273 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 274 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetDoorsState1::
# 275 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 146 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 276 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 6, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 277 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 147 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 278 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 6, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 279 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 148 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 280 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 7, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 281 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 149 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 282 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 7, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 283 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 150 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 284 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 9, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 285 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 151 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 286 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 9, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 287 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 152 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 288 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 10, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 289 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 153 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 290 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 10, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 291 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 154 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 292 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 15, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 293 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 155 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 294 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 15, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 295 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 156 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 296 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 16, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 297 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 157 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 298 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 16, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 299 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 158 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 300 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 9, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 301 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 159 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 302 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 9, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 303 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 160 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 304 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 10, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 305 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 161 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 306 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 10, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 307 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 162 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 308 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 15, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 309 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 163 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 310 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 15, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 311 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 164 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 312 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 16, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 313 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 165 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 314 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 16, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 315 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 166 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 316 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 7, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 317 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 167 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 318 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 8, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 319 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 168 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 320 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 13, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 321 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 169 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 322 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 14, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 323 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 170 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 324 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 6, 4, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 325 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 171 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 326 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 6, 5, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 327 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 172 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 328 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 16, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 329 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 173 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 330 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 17, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 331 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 174 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 332 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 7, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 333 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 175 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 334 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 8, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 335 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 176 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 336 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 3, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 337 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 177 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 338 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 3, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 339 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 178 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 340 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 4, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 341 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 179 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 342 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 4, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 343 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 180 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 344 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 345 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 181 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 346 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 347 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 182 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 348 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 349 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 183 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 350 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 351 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 184 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 352 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 6, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 353 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 185 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 354 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 6, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 355 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 186 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 356 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 7, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 357 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 187 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 358 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 7, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 359 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 188 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 360 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 361 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 189 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 362 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 363 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 190 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 364 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 365 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 191 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 366 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 367 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 192 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 368 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 18, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 369 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 193 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 370 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 18, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 371 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 194 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 372 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 19, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 373 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 195 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 374 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 19, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 375 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 196 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 376 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 7, 9, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 377 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 197 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 378 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 9, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 379 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 198 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 380 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 7, 10, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 381 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 199 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 382 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 10, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 383 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 200 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 384 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 6, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 385 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 201 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 386 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 6, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 387 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 202 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 388 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 7, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 389 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 203 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 390 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 7, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 391 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 204 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 392 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 393 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 205 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 394 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 395 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 206 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 396 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 397 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 207 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 398 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 399 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 208 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 400 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 18, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 401 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 209 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 402 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 18, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 403 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 210 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 404 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 19, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 405 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 211 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 406 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 19, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 407 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 212 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 408 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 3, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 409 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 213 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 410 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 3, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 411 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 214 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 412 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 4, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 413 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 215 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 414 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 4, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 415 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 216 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 416 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 16, METATILE_TrickHousePuzzle_RedDoorV_Retracted, TRUE
# 417 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 217 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 418 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 17, METATILE_TrickHousePuzzle_Floor_ShadowTop_Alt, FALSE
# 419 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 218 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 420 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 4, METATILE_TrickHousePuzzle_RedDoorV_Retracted, TRUE
# 421 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 219 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 422 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 5, METATILE_TrickHousePuzzle_Floor_ShadowTop_Alt, FALSE
# 423 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 424 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 425 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 426 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Button1::
# 427 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 224 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 428 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 429 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 225 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 430 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 1
# 431 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 226 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 432 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_PressButton
# 433 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 434 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 435 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 436 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Button2::
# 437 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 231 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 438 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 439 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 232 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 440 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 2
# 441 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 233 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 442 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_PressButton
# 443 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 444 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 445 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 446 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Button3::
# 447 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 238 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 448 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 449 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 239 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 450 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 3
# 451 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 240 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 452 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_PressButton
# 453 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 454 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 455 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 456 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Button4::
# 457 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 245 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 458 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 459 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 246 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 460 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 4
# 461 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 247 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 462 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_PressButton
# 463 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 464 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 465 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 466 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_PressButton::
# 467 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 252 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 468 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetButton
# 469 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 253 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 470 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	playse SE_PIN
# 471 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 254 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 472 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles
# 473 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 255 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 474 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_AlternateDoors
# 475 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 476 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 477 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 478 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton::
# 479 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 260 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 480 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_1, 0
# 481 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 261 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 482 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_2, 0
# 483 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 262 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 484 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_3, 0
# 485 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 263 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 486 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_4, 0
# 487 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 264 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 488 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_8, 1
# 489 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_SetButton_2
# 490 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton_1:
# 491 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 267 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 492 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_8, 2
# 493 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_SetButton_5
# 494 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton_4:
# 495 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 270 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 496 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_8, 3
# 497 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_SetButton_8
# 498 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton_7:
# 499 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 273 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 500 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_8, 4
# 501 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_SetButton_11
# 502 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton_10:
# 503 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 504 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 505 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton_2:
# 506 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 265 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 507 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetButton1
# 508 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_SetButton_1
# 509 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 510 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton_5:
# 511 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 268 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 512 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetButton2
# 513 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_SetButton_4
# 514 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 515 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton_8:
# 516 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 271 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 517 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetButton3
# 518 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_SetButton_7
# 519 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 520 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton_11:
# 521 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 274 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 522 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetButton4
# 523 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_SetButton_10
# 524 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 525 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 526 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton1::
# 527 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 280 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 528 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_1, 1
# 529 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 530 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 531 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 532 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton2::
# 533 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 285 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 534 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_2, 1
# 535 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 536 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 537 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 538 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton3::
# 539 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 290 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 540 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_3, 1
# 541 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 542 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 543 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 544 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetButton4::
# 545 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 295 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 546 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_4, 1
# 547 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	return
# 548 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 549 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 550 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors::
# 551 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 300 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 552 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_9, 1
# 553 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_AlternateDoors_2
# 554 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors_1:
# 555 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 303 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 556 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_9, 0
# 557 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_AlternateDoors_5
# 558 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors_4:
# 559 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 306 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 560 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	special DrawWholeMapView
# 561 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 307 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 562 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_9, 1
# 563 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_AlternateDoors_8
# 564 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors_7:
# 565 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 310 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 566 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TEMP_9, 0
# 567 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_AlternateDoors_11
# 568 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors_10:
# 569 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 570 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 571 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors_2:
# 572 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 301 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 573 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetDoorsState0
# 574 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_AlternateDoors_1
# 575 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 576 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors_5:
# 577 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 304 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 578 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetDoorsState1
# 579 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_AlternateDoors_4
# 580 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 581 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors_8:
# 582 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 308 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 583 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_ClearAltDoorState
# 584 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_AlternateDoors_7
# 585 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 586 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_AlternateDoors_11:
# 587 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 311 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 588 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_SetAltDoorState
# 589 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_AlternateDoors_10
# 590 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 591 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 592 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_ClearAltDoorState::
# 593 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 317 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 594 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_9, 0
# 595 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 318 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 596 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	releaseall
# 597 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 598 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 599 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 600 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_SetAltDoorState::
# 601 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 323 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 602 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_9, 1
# 603 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 324 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 604 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	releaseall
# 605 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 606 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 607 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 608 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Scroll::
# 609 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 329 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 610 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 611 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 330 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 612 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_3_STATE, 0
# 613 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_Scroll_2
# 614 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Scroll_1:
# 615 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 333 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 616 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 617 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 618 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 619 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Scroll_2:
# 620 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 331 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 621 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_FoundScroll
# 622 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_Scroll_1
# 623 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 624 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 625 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_FoundScroll::
# 626 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 338 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 627 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_3_STATE, 1
# 628 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 339 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 629 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 630 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 631 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 632 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 633 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Justin::
# 634 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 344 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 635 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	trainerbattle_single TRAINER_JUSTIN, Route110_TrickHousePuzzle3_Text_JustinIntro, Route110_TrickHousePuzzle3_Text_JustinDefeat
# 636 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 345 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 637 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_JustinPostBattle, MSGBOX_AUTOCLOSE
# 638 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 639 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 640 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 641 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Martha::
# 642 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 350 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 643 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	trainerbattle_single TRAINER_MARTHA, Route110_TrickHousePuzzle3_Text_MarthaIntro, Route110_TrickHousePuzzle3_Text_MarthaDefeat
# 644 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 351 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 645 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_MarthaPostBattle, MSGBOX_AUTOCLOSE
# 646 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 647 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 648 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 649 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Alan::
# 650 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 356 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 651 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	trainerbattle_single TRAINER_ALAN, Route110_TrickHousePuzzle3_Text_AlanIntro, Route110_TrickHousePuzzle3_Text_AlanDefeat
# 652 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 357 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 653 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_AlanPostBattle, MSGBOX_AUTOCLOSE
# 654 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	end
# 655 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 656 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 657 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened::
# 658 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 361 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 659 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 660 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "on the door.\p"
# 661 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "“TRICK MASTER is coveted.”\n"
# 662 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "… … … … … … … …\p"
# 663 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "The lock clicked open!$"
# 664 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 665 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_JustinIntro::
# 666 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 369 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 667 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I keep coming back to this same place!$"
# 668 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 669 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_JustinDefeat::
# 670 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 373 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 671 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I'm already having trouble, and then\n"
# 672 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "you have to beat me? It's not fair!$"
# 673 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 674 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_JustinPostBattle::
# 675 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 378 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 676 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "It's full of doors here!\n"
# 677 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "It's too small and dark in here! Help!$"
# 678 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 679 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_MarthaIntro::
# 680 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 383 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 681 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I don't know what's going on here.\n"
# 682 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I'm starting to feel sad…$"
# 683 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 684 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_MarthaDefeat::
# 685 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 388 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 686 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "You… You're awful!$"
# 687 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 688 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_MarthaPostBattle::
# 689 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 392 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 690 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I know I'm weak!\n"
# 691 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "And, I have no sense of direction!$"
# 692 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 693 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_AlanIntro::
# 694 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 397 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 695 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I don't get it. What would anyone want\n"
# 696 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "with a house this bizarre?$"
# 697 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 698 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_AlanDefeat::
# 699 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 402 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 700 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I don't get it.\n"
# 701 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "How did I lose?$"
# 702 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"

# 703 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
Route110_TrickHousePuzzle3_Text_AlanPostBattle::
# 704 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 407 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
# 705 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I don't get it.\n"
# 706 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "How many traps are in this house?\p"
# 707 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "You may be the one to solve that.$"
