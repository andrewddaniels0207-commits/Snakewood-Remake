# 1 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 2 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 4 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle7_OnResume
# 5 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 3 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 6 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle7_OnTransition
# 7 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 4 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 8 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle7_OnLoad
# 9 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 5 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 10 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.byte 0
# 12 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 13 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 6 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 15 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, Route110_TrickHousePuzzle7_EventScript_ClearState2
# 16 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.2byte 0
# 17 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 18 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 19 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnResume::
# 20 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 11 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 21 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
# 22 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 23 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 24 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 25 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles::
# 26 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 16 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 27 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_2
# 28 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_1:
# 29 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 19 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 30 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_5
# 31 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_4:
# 32 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 22 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 33 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_8
# 34 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_7:
# 35 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 25 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 36 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_11
# 37 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_10:
# 38 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 28 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 39 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_14
# 40 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_13:
# 41 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 42 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 43 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_2:
# 44 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 17 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 45 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
# 46 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_1
# 47 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 48 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_5:
# 49 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 20 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 50 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
# 51 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_4
# 52 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 53 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_8:
# 54 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 23 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 55 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
# 56 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_7
# 57 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 58 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_11:
# 59 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 26 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 60 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
# 61 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_10
# 62 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 63 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_14:
# 64 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 29 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 65 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
# 66 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_13
# 67 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 68 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 69 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn::
# 70 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 35 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 71 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 72 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 36 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 73 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 74 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 75 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 76 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 77 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn::
# 78 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 41 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 79 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 80 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 42 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 81 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 82 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 83 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 84 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 85 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn::
# 86 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 47 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 87 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 88 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 48 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 89 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 90 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 91 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 92 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 93 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn::
# 94 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 53 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 95 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right_Alt, FALSE
# 96 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 54 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 97 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 98 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 99 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 100 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 101 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn::
# 102 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 59 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 103 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 104 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 60 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 105 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 106 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 107 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 108 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 109 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff::
# 110 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 65 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 111 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 112 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 66 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 113 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 114 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 115 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 116 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 117 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff::
# 118 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 71 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 119 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 120 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 72 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 121 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 122 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 123 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 124 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 125 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff::
# 126 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 77 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 127 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 128 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 78 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 129 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 130 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 131 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 132 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 133 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff::
# 134 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 83 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 135 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left_Alt, FALSE
# 136 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 84 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 137 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 138 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 139 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 140 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 141 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff::
# 142 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 89 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 143 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 144 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 90 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 145 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 146 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 147 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 148 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 149 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnTransition::
# 150 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 95 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 151 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
# 152 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle7_OnTransition_2
# 153 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnTransition_1:
# 154 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 98 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 155 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 156 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 99 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 157 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 158 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 100 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 159 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 160 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 101 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 161 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 162 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 102 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 163 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 164 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 165 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 166 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnTransition_2:
# 167 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 96 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 168 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_TeleportedTransition
# 169 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_OnTransition_1
# 170 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 171 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 172 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportedTransition::
# 173 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 174 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 175 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 176 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnLoad::
# 177 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 111 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 178 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
# 179 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle7_OnLoad_2
# 180 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnLoad_1:
# 181 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 182 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 183 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnLoad_2:
# 184 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 112 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 185 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
# 186 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_OnLoad_1
# 187 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 188 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 189 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_ClearState2::
# 190 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 118 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 191 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 0
# 192 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 193 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 194 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 195 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Scroll::
# 196 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 123 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 197 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 198 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 124 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 199 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0
# 200 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq Route110_TrickHousePuzzle7_EventScript_Scroll_2
# 201 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Scroll_1:
# 202 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 127 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 203 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 204 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 205 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 206 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Scroll_2:
# 207 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 125 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 208 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_FoundScroll
# 209 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Scroll_1
# 210 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 211 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 212 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_FoundScroll::
# 213 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 132 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 214 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 1
# 215 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 133 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 216 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 217 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 218 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 219 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 220 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportPad::
# 221 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 138 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 222 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 223 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 139 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 224 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
# 225 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 140 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 226 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	warpteleport MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 3, 19
# 227 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 141 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 228 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitstate
# 229 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 142 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 230 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 231 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 232 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 233 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 234 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1::
# 235 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 147 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 236 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 237 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 148 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 238 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 239 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 149 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 240 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_Switch1_2
# 241 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1_1:
# 242 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 152 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 243 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_Switch1_5
# 244 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1_4:
# 245 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 155 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 246 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 247 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 156 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 248 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 249 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 157 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 250 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_Switch1_8
# 251 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1_7:
# 252 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 160 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 253 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_Switch1_11
# 254 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1_10:
# 255 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 256 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 257 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1_2:
# 258 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 150 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 259 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
# 260 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch1_1
# 261 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 262 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1_5:
# 263 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 153 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 264 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff
# 265 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch1_4
# 266 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 267 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1_8:
# 268 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 158 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 269 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch1On
# 270 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch1_7
# 271 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 272 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1_11:
# 273 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 161 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 274 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off
# 275 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch1_10
# 276 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 277 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 278 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2::
# 279 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 167 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 280 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 281 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 168 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 282 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 283 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 169 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 284 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_Switch2_2
# 285 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2_1:
# 286 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 172 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 287 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_Switch2_5
# 288 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2_4:
# 289 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 175 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 290 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 291 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 176 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 292 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 293 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 177 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 294 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_Switch2_8
# 295 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2_7:
# 296 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 180 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 297 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_Switch2_11
# 298 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2_10:
# 299 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 300 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 301 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2_2:
# 302 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 170 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 303 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
# 304 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch2_1
# 305 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 306 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2_5:
# 307 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 173 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 308 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff
# 309 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch2_4
# 310 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 311 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2_8:
# 312 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 178 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 313 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch2On
# 314 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch2_7
# 315 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 316 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2_11:
# 317 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 181 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 318 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off
# 319 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch2_10
# 320 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 321 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 322 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3::
# 323 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 187 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 324 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 325 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 188 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 326 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 327 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 189 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 328 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_Switch3_2
# 329 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3_1:
# 330 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 192 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 331 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_Switch3_5
# 332 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3_4:
# 333 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 195 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 334 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 335 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 196 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 336 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 337 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 197 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 338 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_Switch3_8
# 339 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3_7:
# 340 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 200 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 341 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_Switch3_11
# 342 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3_10:
# 343 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 344 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 345 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3_2:
# 346 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 190 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 347 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
# 348 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch3_1
# 349 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 350 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3_5:
# 351 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 193 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 352 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff
# 353 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch3_4
# 354 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 355 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3_8:
# 356 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 198 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 357 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch3On
# 358 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch3_7
# 359 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 360 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3_11:
# 361 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 201 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 362 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off
# 363 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch3_10
# 364 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 365 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 366 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4::
# 367 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 207 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 368 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 369 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 208 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 370 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 371 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 209 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 372 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_Switch4_2
# 373 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4_1:
# 374 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 212 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 375 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_Switch4_5
# 376 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4_4:
# 377 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 215 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 378 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 379 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 216 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 380 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 381 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 217 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 382 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_Switch4_8
# 383 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4_7:
# 384 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 220 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 385 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_Switch4_11
# 386 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4_10:
# 387 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 388 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 389 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4_2:
# 390 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 210 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 391 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
# 392 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch4_1
# 393 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 394 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4_5:
# 395 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 213 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 396 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff
# 397 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch4_4
# 398 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 399 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4_8:
# 400 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 218 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 401 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch4On
# 402 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch4_7
# 403 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 404 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4_11:
# 405 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 221 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 406 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off
# 407 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch4_10
# 408 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 409 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 410 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5::
# 411 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 227 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 412 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 413 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 228 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 414 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 415 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 229 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 416 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_Switch5_2
# 417 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5_1:
# 418 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 232 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 419 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_Switch5_5
# 420 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5_4:
# 421 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 235 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 422 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 423 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 236 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 424 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 425 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 237 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 426 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_Switch5_8
# 427 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5_7:
# 428 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 240 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 429 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_Switch5_11
# 430 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5_10:
# 431 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 432 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 433 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5_2:
# 434 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 230 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 435 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
# 436 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch5_1
# 437 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 438 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5_5:
# 439 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 233 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 440 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff
# 441 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch5_4
# 442 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 443 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5_8:
# 444 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 238 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 445 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch5On
# 446 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch5_7
# 447 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 448 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5_11:
# 449 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 241 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 450 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off
# 451 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle7_EventScript_Switch5_10
# 452 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 453 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 454 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1On::
# 455 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 247 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 456 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 457 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 248 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 458 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 459 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 460 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 461 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 462 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off::
# 463 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 253 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 464 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 465 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 254 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 466 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 467 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 468 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 469 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 470 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2On::
# 471 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 259 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 472 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 473 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 260 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 474 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 475 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 476 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 477 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 478 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off::
# 479 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 265 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 480 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 481 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 266 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 482 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 483 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 484 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 485 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 486 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3On::
# 487 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 271 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 488 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 489 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 272 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 490 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 491 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 492 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 493 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 494 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off::
# 495 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 277 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 496 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 497 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 278 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 498 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 499 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 500 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 501 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 502 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4On::
# 503 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 283 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 504 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 505 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 284 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 506 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 507 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 508 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 509 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 510 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off::
# 511 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 289 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 512 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 513 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 290 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 514 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 515 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 516 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 517 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 518 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5On::
# 519 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 295 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 520 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 521 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 296 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 522 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 523 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 524 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 525 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 526 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off::
# 527 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 301 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 528 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 529 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 302 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 530 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 531 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 532 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 533 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 534 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_YellowButton::
# 535 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 307 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 536 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 537 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 308 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 538 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 539 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 309 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 540 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 541 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 310 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 542 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 543 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 311 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 544 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 0
# 545 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 312 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 546 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 547 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 313 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 548 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 549 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 314 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 550 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 551 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 315 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 552 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 553 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 554 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 555 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 556 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_BlueButton::
# 557 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 320 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 558 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 559 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 321 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 560 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 561 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 322 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 562 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 563 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 323 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 564 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 565 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 324 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 566 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 1
# 567 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 325 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 568 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 569 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 326 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 570 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 571 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 327 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 572 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 573 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 328 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 574 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 575 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 576 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 577 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 578 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_GreenButton::
# 579 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 333 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 580 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 581 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 334 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 582 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 583 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 335 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 584 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 585 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 336 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 586 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 587 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 337 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 588 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 2
# 589 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 338 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 590 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 591 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 339 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 592 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 593 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 340 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 594 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 595 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 341 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 596 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 597 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 598 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 599 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 600 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_PurpleButton::
# 601 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 346 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 602 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 603 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 347 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 604 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 605 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 348 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 606 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 607 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 349 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 608 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 609 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 350 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 610 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 3
# 611 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 351 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 612 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 613 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 352 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 614 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 615 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 353 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 616 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 617 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 354 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 618 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 619 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 620 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 621 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 622 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_RedButton::
# 623 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 359 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 624 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 625 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 360 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 626 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 627 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 361 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 628 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 629 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 362 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 630 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 631 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 363 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 632 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 4
# 633 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 364 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 634 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 365 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 636 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 637 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 366 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 638 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 639 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 367 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 640 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 641 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 642 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 643 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 644 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Joshua::
# 645 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 372 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 646 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, Route110_TrickHousePuzzle7_Text_JoshuaIntro, Route110_TrickHousePuzzle7_Text_JoshuaDefeat
# 647 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 373 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 648 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
# 649 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 650 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 651 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 652 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Patricia::
# 653 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 378 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 654 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_PATRICIA, Route110_TrickHousePuzzle7_Text_PatriciaIntro, Route110_TrickHousePuzzle7_Text_PatriciaDefeat
# 655 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 379 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 656 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
# 657 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 658 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 659 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 660 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alexis::
# 661 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 384 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 662 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIS, Route110_TrickHousePuzzle7_Text_AlexisIntro, Route110_TrickHousePuzzle7_Text_AlexisDefeat
# 663 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 385 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 664 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
# 665 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 666 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 667 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 668 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Mariela::
# 669 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 390 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 670 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_MARIELA, Route110_TrickHousePuzzle7_Text_MarielaIntro, Route110_TrickHousePuzzle7_Text_MarielaDefeat
# 671 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 391 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 672 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_MarielaPostBattle, MSGBOX_AUTOCLOSE
# 673 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 674 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 675 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 676 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alvaro::
# 677 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 396 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 678 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, Route110_TrickHousePuzzle7_Text_AlvaroIntro, Route110_TrickHousePuzzle7_Text_AlvaroDefeat
# 679 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 397 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 680 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlvaroPostBattle, MSGBOX_AUTOCLOSE
# 681 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 682 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 683 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 684 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Everett::
# 685 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 402 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 686 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_EVERETT, Route110_TrickHousePuzzle7_Text_EverettIntro, Route110_TrickHousePuzzle7_Text_EverettDefeat
# 687 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 403 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 688 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_EverettPostBattle, MSGBOX_AUTOCLOSE
# 689 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 690 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 691 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 692 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened::
# 693 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 407 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 694 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 695 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "on the door.\p"
# 696 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "“TRICK MASTER is huggable.”\n"
# 697 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "… … … … … … … …\p"
# 698 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The lock clicked open!$"
# 699 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 700 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaIntro::
# 701 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 415 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 702 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The TRICK MASTER always vanishes\n"
# 703 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "like smoke. How does he do it?$"
# 704 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 705 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaDefeat::
# 706 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 420 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 707 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Aiyeeeh! You're much too strong!\n"
# 708 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "How do you do it?$"
# 709 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 710 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaPostBattle::
# 711 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 425 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 712 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I wish I could appear and disappear as\n"
# 713 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "if I were smoke, too.$"
# 714 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 715 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaIntro::
# 716 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 430 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 717 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Going around the same spot…\n"
# 718 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It begets ill fortune…$"
# 719 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 720 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaDefeat::
# 721 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 435 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 722 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Defeated!\n"
# 723 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's a bad sign…$"
# 724 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 725 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaPostBattle::
# 726 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 440 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 727 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I've circled the same spot over ten\n"
# 728 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "times now… It's ill fortune…$"
# 729 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 730 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisIntro::
# 731 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 445 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 732 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Whoever wins will get through here\n"
# 733 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "first. That's the feeling I get.$"
# 734 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 735 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisDefeat::
# 736 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 450 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 737 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh!\n"
# 738 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, go ahead, then!$"
# 739 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 740 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisPostBattle::
# 741 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 455 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 742 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're solving all the puzzles in the\n"
# 743 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "TRICK HOUSE. That's the feeling I get.$"
# 744 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 745 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaIntro::
# 746 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 460 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 747 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Nufufufu, here at last!\n"
# 748 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Let's get right with it!$"
# 749 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 750 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaDefeat::
# 751 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 465 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 752 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're so casual about winning!$"
# 753 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 754 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaPostBattle::
# 755 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 469 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 756 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Humph! I'm not upset!\n"
# 757 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Not me!$"
# 758 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 759 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroIntro::
# 760 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 474 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 761 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I ever so closely watched you coming!$"
# 762 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 763 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroDefeat::
# 764 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 478 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 765 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "This outcome I didn't see coming…$"
# 766 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 767 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroPostBattle::
# 768 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 482 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 769 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, anyway, we both picked a weird\n"
# 770 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "place to get acquainted.\p"
# 771 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "As one weirdo to another,\n"
# 772 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "let's do our best!$"
# 773 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 774 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettIntro::
# 775 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 489 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 776 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's awfully cramped in here…$"
# 777 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 778 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettDefeat::
# 779 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 493 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 780 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh, yes, strong you are.$"
# 781 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 782 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettPostBattle::
# 783 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 497 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
# 784 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I was hoping to switch places with you\n"
# 785 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "when I beat you, but…$"
