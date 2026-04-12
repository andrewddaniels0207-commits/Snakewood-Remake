# 1 "data/maps/NewMauville_Inside/scripts.pory"

# 2 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_MapScripts::
# 3 "data/maps/NewMauville_Inside/scripts.pory"
# 2 "data/maps/NewMauville_Inside/scripts.pory"
# 4 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMauville_Inside_OnResume
# 5 "data/maps/NewMauville_Inside/scripts.pory"
# 3 "data/maps/NewMauville_Inside/scripts.pory"
# 6 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Inside_OnTransition
# 7 "data/maps/NewMauville_Inside/scripts.pory"
# 4 "data/maps/NewMauville_Inside/scripts.pory"
# 8 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Inside_OnLoad
# 9 "data/maps/NewMauville_Inside/scripts.pory"
	.byte 0
# 10 "data/maps/NewMauville_Inside/scripts.pory"

# 11 "data/maps/NewMauville_Inside/scripts.pory"

# 12 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume::
# 13 "data/maps/NewMauville_Inside/scripts.pory"
# 8 "data/maps/NewMauville_Inside/scripts.pory"
# 14 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_TEMP_1, 1
# 15 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_OnResume_2
# 16 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume_1:
# 17 "data/maps/NewMauville_Inside/scripts.pory"
# 11 "data/maps/NewMauville_Inside/scripts.pory"
# 18 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_TEMP_2, 1
# 19 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_OnResume_5
# 20 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume_4:
# 21 "data/maps/NewMauville_Inside/scripts.pory"
# 14 "data/maps/NewMauville_Inside/scripts.pory"
# 22 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauville_Inside_OnResume_8
# 23 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume_7:
# 24 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 25 "data/maps/NewMauville_Inside/scripts.pory"

# 26 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume_2:
# 27 "data/maps/NewMauville_Inside/scripts.pory"
# 9 "data/maps/NewMauville_Inside/scripts.pory"
# 28 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 29 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_OnResume_1
# 30 "data/maps/NewMauville_Inside/scripts.pory"

# 31 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume_5:
# 32 "data/maps/NewMauville_Inside/scripts.pory"
# 12 "data/maps/NewMauville_Inside/scripts.pory"
# 33 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 34 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_OnResume_4
# 35 "data/maps/NewMauville_Inside/scripts.pory"

# 36 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume_8:
# 37 "data/maps/NewMauville_Inside/scripts.pory"
# 15 "data/maps/NewMauville_Inside/scripts.pory"
# 38 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_TryRemoveVoltorb
# 39 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_OnResume_7
# 40 "data/maps/NewMauville_Inside/scripts.pory"

# 41 "data/maps/NewMauville_Inside/scripts.pory"

# 42 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_TryRemoveVoltorb::
# 43 "data/maps/NewMauville_Inside/scripts.pory"
# 21 "data/maps/NewMauville_Inside/scripts.pory"
# 44 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 45 "data/maps/NewMauville_Inside/scripts.pory"
# 22 "data/maps/NewMauville_Inside/scripts.pory"
# 46 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 47 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_ne NewMauville_Inside_EventScript_TryRemoveVoltorb_2
# 48 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_TryRemoveVoltorb_1:
# 49 "data/maps/NewMauville_Inside/scripts.pory"
# 25 "data/maps/NewMauville_Inside/scripts.pory"
# 50 "data/maps/NewMauville_Inside/scripts.pory"
	removeobject VAR_LAST_TALKED
# 51 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 52 "data/maps/NewMauville_Inside/scripts.pory"

# 53 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_TryRemoveVoltorb_2:
# 54 "data/maps/NewMauville_Inside/scripts.pory"
# 23 "data/maps/NewMauville_Inside/scripts.pory"
# 55 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_NopReturn
# 56 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_TryRemoveVoltorb_1
# 57 "data/maps/NewMauville_Inside/scripts.pory"

# 58 "data/maps/NewMauville_Inside/scripts.pory"

# 59 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition::
# 60 "data/maps/NewMauville_Inside/scripts.pory"
# 30 "data/maps/NewMauville_Inside/scripts.pory"
# 61 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 62 "data/maps/NewMauville_Inside/scripts.pory"
# 31 "data/maps/NewMauville_Inside/scripts.pory"
# 63 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 64 "data/maps/NewMauville_Inside/scripts.pory"
# 32 "data/maps/NewMauville_Inside/scripts.pory"
# 65 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE, NewMauville_Inside_OnTransition_2
# 66 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition_1:
# 67 "data/maps/NewMauville_Inside/scripts.pory"
# 35 "data/maps/NewMauville_Inside/scripts.pory"
# 68 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE, NewMauville_Inside_OnTransition_5
# 69 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition_4:
# 70 "data/maps/NewMauville_Inside/scripts.pory"
# 38 "data/maps/NewMauville_Inside/scripts.pory"
# 71 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE, NewMauville_Inside_OnTransition_8
# 72 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition_7:
# 73 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 74 "data/maps/NewMauville_Inside/scripts.pory"

# 75 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition_2:
# 76 "data/maps/NewMauville_Inside/scripts.pory"
# 33 "data/maps/NewMauville_Inside/scripts.pory"
# 77 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_ShowVoltorb1
# 78 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_OnTransition_1
# 79 "data/maps/NewMauville_Inside/scripts.pory"

# 80 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition_5:
# 81 "data/maps/NewMauville_Inside/scripts.pory"
# 36 "data/maps/NewMauville_Inside/scripts.pory"
# 82 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_ShowVoltorb2
# 83 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_OnTransition_4
# 84 "data/maps/NewMauville_Inside/scripts.pory"

# 85 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition_8:
# 86 "data/maps/NewMauville_Inside/scripts.pory"
# 39 "data/maps/NewMauville_Inside/scripts.pory"
# 87 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_ShowVoltorb3
# 88 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_OnTransition_7
# 89 "data/maps/NewMauville_Inside/scripts.pory"

# 90 "data/maps/NewMauville_Inside/scripts.pory"

# 91 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb1::
# 92 "data/maps/NewMauville_Inside/scripts.pory"
# 45 "data/maps/NewMauville_Inside/scripts.pory"
# 93 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1
# 94 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 95 "data/maps/NewMauville_Inside/scripts.pory"

# 96 "data/maps/NewMauville_Inside/scripts.pory"

# 97 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb2::
# 98 "data/maps/NewMauville_Inside/scripts.pory"
# 50 "data/maps/NewMauville_Inside/scripts.pory"
# 99 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2
# 100 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 101 "data/maps/NewMauville_Inside/scripts.pory"

# 102 "data/maps/NewMauville_Inside/scripts.pory"

# 103 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb3::
# 104 "data/maps/NewMauville_Inside/scripts.pory"
# 55 "data/maps/NewMauville_Inside/scripts.pory"
# 105 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3
# 106 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 107 "data/maps/NewMauville_Inside/scripts.pory"

# 108 "data/maps/NewMauville_Inside/scripts.pory"

# 109 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnLoad::
# 110 "data/maps/NewMauville_Inside/scripts.pory"
# 60 "data/maps/NewMauville_Inside/scripts.pory"
# 111 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
# 112 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_OnLoad_2
# 113 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnLoad_1:
# 114 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 115 "data/maps/NewMauville_Inside/scripts.pory"

# 116 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnLoad_2:
# 117 "data/maps/NewMauville_Inside/scripts.pory"
# 61 "data/maps/NewMauville_Inside/scripts.pory"
# 118 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 119 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_OnLoad_1
# 120 "data/maps/NewMauville_Inside/scripts.pory"

# 121 "data/maps/NewMauville_Inside/scripts.pory"

# 122 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_BlueButton::
# 123 "data/maps/NewMauville_Inside/scripts.pory"
# 67 "data/maps/NewMauville_Inside/scripts.pory"
# 124 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 125 "data/maps/NewMauville_Inside/scripts.pory"
# 68 "data/maps/NewMauville_Inside/scripts.pory"
# 126 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 1
# 127 "data/maps/NewMauville_Inside/scripts.pory"
# 69 "data/maps/NewMauville_Inside/scripts.pory"
# 128 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 129 "data/maps/NewMauville_Inside/scripts.pory"
# 70 "data/maps/NewMauville_Inside/scripts.pory"
# 130 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 131 "data/maps/NewMauville_Inside/scripts.pory"
# 71 "data/maps/NewMauville_Inside/scripts.pory"
# 132 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 133 "data/maps/NewMauville_Inside/scripts.pory"
# 72 "data/maps/NewMauville_Inside/scripts.pory"
# 134 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 135 "data/maps/NewMauville_Inside/scripts.pory"
# 73 "data/maps/NewMauville_Inside/scripts.pory"
# 136 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 137 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 138 "data/maps/NewMauville_Inside/scripts.pory"

# 139 "data/maps/NewMauville_Inside/scripts.pory"

# 140 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GreenButton::
# 141 "data/maps/NewMauville_Inside/scripts.pory"
# 78 "data/maps/NewMauville_Inside/scripts.pory"
# 142 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 143 "data/maps/NewMauville_Inside/scripts.pory"
# 79 "data/maps/NewMauville_Inside/scripts.pory"
# 144 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 145 "data/maps/NewMauville_Inside/scripts.pory"
# 80 "data/maps/NewMauville_Inside/scripts.pory"
# 146 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 1
# 147 "data/maps/NewMauville_Inside/scripts.pory"
# 81 "data/maps/NewMauville_Inside/scripts.pory"
# 148 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 149 "data/maps/NewMauville_Inside/scripts.pory"
# 82 "data/maps/NewMauville_Inside/scripts.pory"
# 150 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 151 "data/maps/NewMauville_Inside/scripts.pory"
# 83 "data/maps/NewMauville_Inside/scripts.pory"
# 152 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 153 "data/maps/NewMauville_Inside/scripts.pory"
# 84 "data/maps/NewMauville_Inside/scripts.pory"
# 154 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 155 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 156 "data/maps/NewMauville_Inside/scripts.pory"

# 157 "data/maps/NewMauville_Inside/scripts.pory"

# 158 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateBlueButton::
# 159 "data/maps/NewMauville_Inside/scripts.pory"
# 89 "data/maps/NewMauville_Inside/scripts.pory"
# 160 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 161 "data/maps/NewMauville_Inside/scripts.pory"
# 90 "data/maps/NewMauville_Inside/scripts.pory"
# 162 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 163 "data/maps/NewMauville_Inside/scripts.pory"
# 91 "data/maps/NewMauville_Inside/scripts.pory"
# 164 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 165 "data/maps/NewMauville_Inside/scripts.pory"
# 92 "data/maps/NewMauville_Inside/scripts.pory"
# 166 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 167 "data/maps/NewMauville_Inside/scripts.pory"
# 93 "data/maps/NewMauville_Inside/scripts.pory"
# 168 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 169 "data/maps/NewMauville_Inside/scripts.pory"
# 94 "data/maps/NewMauville_Inside/scripts.pory"
# 170 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 171 "data/maps/NewMauville_Inside/scripts.pory"
# 95 "data/maps/NewMauville_Inside/scripts.pory"
# 172 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 173 "data/maps/NewMauville_Inside/scripts.pory"
# 96 "data/maps/NewMauville_Inside/scripts.pory"
# 174 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 175 "data/maps/NewMauville_Inside/scripts.pory"
# 97 "data/maps/NewMauville_Inside/scripts.pory"
# 176 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 177 "data/maps/NewMauville_Inside/scripts.pory"
# 98 "data/maps/NewMauville_Inside/scripts.pory"
# 178 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 179 "data/maps/NewMauville_Inside/scripts.pory"
# 99 "data/maps/NewMauville_Inside/scripts.pory"
# 180 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 181 "data/maps/NewMauville_Inside/scripts.pory"
# 100 "data/maps/NewMauville_Inside/scripts.pory"
# 182 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 183 "data/maps/NewMauville_Inside/scripts.pory"
# 101 "data/maps/NewMauville_Inside/scripts.pory"
# 184 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 185 "data/maps/NewMauville_Inside/scripts.pory"
# 102 "data/maps/NewMauville_Inside/scripts.pory"
# 186 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 187 "data/maps/NewMauville_Inside/scripts.pory"
# 103 "data/maps/NewMauville_Inside/scripts.pory"
# 188 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 189 "data/maps/NewMauville_Inside/scripts.pory"
# 104 "data/maps/NewMauville_Inside/scripts.pory"
# 190 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 191 "data/maps/NewMauville_Inside/scripts.pory"
# 105 "data/maps/NewMauville_Inside/scripts.pory"
# 192 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 193 "data/maps/NewMauville_Inside/scripts.pory"
# 106 "data/maps/NewMauville_Inside/scripts.pory"
# 194 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 195 "data/maps/NewMauville_Inside/scripts.pory"
# 107 "data/maps/NewMauville_Inside/scripts.pory"
# 196 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 197 "data/maps/NewMauville_Inside/scripts.pory"
# 108 "data/maps/NewMauville_Inside/scripts.pory"
# 198 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 199 "data/maps/NewMauville_Inside/scripts.pory"
# 109 "data/maps/NewMauville_Inside/scripts.pory"
# 200 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 201 "data/maps/NewMauville_Inside/scripts.pory"
# 110 "data/maps/NewMauville_Inside/scripts.pory"
# 202 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 203 "data/maps/NewMauville_Inside/scripts.pory"
# 111 "data/maps/NewMauville_Inside/scripts.pory"
# 204 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 205 "data/maps/NewMauville_Inside/scripts.pory"
# 112 "data/maps/NewMauville_Inside/scripts.pory"
# 206 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 207 "data/maps/NewMauville_Inside/scripts.pory"
# 113 "data/maps/NewMauville_Inside/scripts.pory"
# 208 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 209 "data/maps/NewMauville_Inside/scripts.pory"
# 114 "data/maps/NewMauville_Inside/scripts.pory"
# 210 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 211 "data/maps/NewMauville_Inside/scripts.pory"
# 115 "data/maps/NewMauville_Inside/scripts.pory"
# 212 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 213 "data/maps/NewMauville_Inside/scripts.pory"
# 116 "data/maps/NewMauville_Inside/scripts.pory"
# 214 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 215 "data/maps/NewMauville_Inside/scripts.pory"
# 117 "data/maps/NewMauville_Inside/scripts.pory"
# 216 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 217 "data/maps/NewMauville_Inside/scripts.pory"
# 118 "data/maps/NewMauville_Inside/scripts.pory"
# 218 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 219 "data/maps/NewMauville_Inside/scripts.pory"
# 119 "data/maps/NewMauville_Inside/scripts.pory"
# 220 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, FALSE
# 221 "data/maps/NewMauville_Inside/scripts.pory"
# 120 "data/maps/NewMauville_Inside/scripts.pory"
# 222 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Pressed, FALSE
# 223 "data/maps/NewMauville_Inside/scripts.pory"
# 121 "data/maps/NewMauville_Inside/scripts.pory"
# 224 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Pressed, FALSE
# 225 "data/maps/NewMauville_Inside/scripts.pory"
# 122 "data/maps/NewMauville_Inside/scripts.pory"
# 226 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Green, FALSE
# 227 "data/maps/NewMauville_Inside/scripts.pory"
# 123 "data/maps/NewMauville_Inside/scripts.pory"
# 228 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Green, FALSE
# 229 "data/maps/NewMauville_Inside/scripts.pory"
# 124 "data/maps/NewMauville_Inside/scripts.pory"
# 230 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Green, FALSE
# 231 "data/maps/NewMauville_Inside/scripts.pory"
# 125 "data/maps/NewMauville_Inside/scripts.pory"
# 232 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Green, FALSE
# 233 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 234 "data/maps/NewMauville_Inside/scripts.pory"

# 235 "data/maps/NewMauville_Inside/scripts.pory"

# 236 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateGreenButton::
# 237 "data/maps/NewMauville_Inside/scripts.pory"
# 130 "data/maps/NewMauville_Inside/scripts.pory"
# 238 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 239 "data/maps/NewMauville_Inside/scripts.pory"
# 131 "data/maps/NewMauville_Inside/scripts.pory"
# 240 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 241 "data/maps/NewMauville_Inside/scripts.pory"
# 132 "data/maps/NewMauville_Inside/scripts.pory"
# 242 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 243 "data/maps/NewMauville_Inside/scripts.pory"
# 133 "data/maps/NewMauville_Inside/scripts.pory"
# 244 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 245 "data/maps/NewMauville_Inside/scripts.pory"
# 134 "data/maps/NewMauville_Inside/scripts.pory"
# 246 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 247 "data/maps/NewMauville_Inside/scripts.pory"
# 135 "data/maps/NewMauville_Inside/scripts.pory"
# 248 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 249 "data/maps/NewMauville_Inside/scripts.pory"
# 136 "data/maps/NewMauville_Inside/scripts.pory"
# 250 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 251 "data/maps/NewMauville_Inside/scripts.pory"
# 137 "data/maps/NewMauville_Inside/scripts.pory"
# 252 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 253 "data/maps/NewMauville_Inside/scripts.pory"
# 138 "data/maps/NewMauville_Inside/scripts.pory"
# 254 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 255 "data/maps/NewMauville_Inside/scripts.pory"
# 139 "data/maps/NewMauville_Inside/scripts.pory"
# 256 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 257 "data/maps/NewMauville_Inside/scripts.pory"
# 140 "data/maps/NewMauville_Inside/scripts.pory"
# 258 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 259 "data/maps/NewMauville_Inside/scripts.pory"
# 141 "data/maps/NewMauville_Inside/scripts.pory"
# 260 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 261 "data/maps/NewMauville_Inside/scripts.pory"
# 142 "data/maps/NewMauville_Inside/scripts.pory"
# 262 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 263 "data/maps/NewMauville_Inside/scripts.pory"
# 143 "data/maps/NewMauville_Inside/scripts.pory"
# 264 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 265 "data/maps/NewMauville_Inside/scripts.pory"
# 144 "data/maps/NewMauville_Inside/scripts.pory"
# 266 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 267 "data/maps/NewMauville_Inside/scripts.pory"
# 145 "data/maps/NewMauville_Inside/scripts.pory"
# 268 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 269 "data/maps/NewMauville_Inside/scripts.pory"
# 146 "data/maps/NewMauville_Inside/scripts.pory"
# 270 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 271 "data/maps/NewMauville_Inside/scripts.pory"
# 147 "data/maps/NewMauville_Inside/scripts.pory"
# 272 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 273 "data/maps/NewMauville_Inside/scripts.pory"
# 148 "data/maps/NewMauville_Inside/scripts.pory"
# 274 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 275 "data/maps/NewMauville_Inside/scripts.pory"
# 149 "data/maps/NewMauville_Inside/scripts.pory"
# 276 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 277 "data/maps/NewMauville_Inside/scripts.pory"
# 150 "data/maps/NewMauville_Inside/scripts.pory"
# 278 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 279 "data/maps/NewMauville_Inside/scripts.pory"
# 151 "data/maps/NewMauville_Inside/scripts.pory"
# 280 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 281 "data/maps/NewMauville_Inside/scripts.pory"
# 152 "data/maps/NewMauville_Inside/scripts.pory"
# 282 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 283 "data/maps/NewMauville_Inside/scripts.pory"
# 153 "data/maps/NewMauville_Inside/scripts.pory"
# 284 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 285 "data/maps/NewMauville_Inside/scripts.pory"
# 154 "data/maps/NewMauville_Inside/scripts.pory"
# 286 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 287 "data/maps/NewMauville_Inside/scripts.pory"
# 155 "data/maps/NewMauville_Inside/scripts.pory"
# 288 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 289 "data/maps/NewMauville_Inside/scripts.pory"
# 156 "data/maps/NewMauville_Inside/scripts.pory"
# 290 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 291 "data/maps/NewMauville_Inside/scripts.pory"
# 157 "data/maps/NewMauville_Inside/scripts.pory"
# 292 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 293 "data/maps/NewMauville_Inside/scripts.pory"
# 158 "data/maps/NewMauville_Inside/scripts.pory"
# 294 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 295 "data/maps/NewMauville_Inside/scripts.pory"
# 159 "data/maps/NewMauville_Inside/scripts.pory"
# 296 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 297 "data/maps/NewMauville_Inside/scripts.pory"
# 160 "data/maps/NewMauville_Inside/scripts.pory"
# 298 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Pressed, FALSE
# 299 "data/maps/NewMauville_Inside/scripts.pory"
# 161 "data/maps/NewMauville_Inside/scripts.pory"
# 300 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Pressed, FALSE
# 301 "data/maps/NewMauville_Inside/scripts.pory"
# 162 "data/maps/NewMauville_Inside/scripts.pory"
# 302 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Blue, FALSE
# 303 "data/maps/NewMauville_Inside/scripts.pory"
# 163 "data/maps/NewMauville_Inside/scripts.pory"
# 304 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Blue, FALSE
# 305 "data/maps/NewMauville_Inside/scripts.pory"
# 164 "data/maps/NewMauville_Inside/scripts.pory"
# 306 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, FALSE
# 307 "data/maps/NewMauville_Inside/scripts.pory"
# 165 "data/maps/NewMauville_Inside/scripts.pory"
# 308 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Blue, FALSE
# 309 "data/maps/NewMauville_Inside/scripts.pory"
# 166 "data/maps/NewMauville_Inside/scripts.pory"
# 310 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Blue, FALSE
# 311 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 312 "data/maps/NewMauville_Inside/scripts.pory"

# 313 "data/maps/NewMauville_Inside/scripts.pory"

# 314 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_RedButton::
# 315 "data/maps/NewMauville_Inside/scripts.pory"
# 171 "data/maps/NewMauville_Inside/scripts.pory"
# 316 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 317 "data/maps/NewMauville_Inside/scripts.pory"
# 172 "data/maps/NewMauville_Inside/scripts.pory"
# 318 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped, MSGBOX_DEFAULT
# 319 "data/maps/NewMauville_Inside/scripts.pory"
# 173 "data/maps/NewMauville_Inside/scripts.pory"
# 320 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 321 "data/maps/NewMauville_Inside/scripts.pory"
# 174 "data/maps/NewMauville_Inside/scripts.pory"
# 322 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 2
# 323 "data/maps/NewMauville_Inside/scripts.pory"
# 175 "data/maps/NewMauville_Inside/scripts.pory"
# 324 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 325 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 326 "data/maps/NewMauville_Inside/scripts.pory"

# 327 "data/maps/NewMauville_Inside/scripts.pory"

# 328 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetGeneratorOffMetatiles::
# 329 "data/maps/NewMauville_Inside/scripts.pory"
# 180 "data/maps/NewMauville_Inside/scripts.pory"
# 330 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 6, METATILE_BikeShop_Button_Pressed, FALSE
# 331 "data/maps/NewMauville_Inside/scripts.pory"
# 181 "data/maps/NewMauville_Inside/scripts.pory"
# 332 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 2, METATILE_BikeShop_Generator_Off_Tile0, TRUE
# 333 "data/maps/NewMauville_Inside/scripts.pory"
# 182 "data/maps/NewMauville_Inside/scripts.pory"
# 334 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 2, METATILE_BikeShop_Generator_Off_Tile1, TRUE
# 335 "data/maps/NewMauville_Inside/scripts.pory"
# 183 "data/maps/NewMauville_Inside/scripts.pory"
# 336 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 2, METATILE_BikeShop_Generator_Off_Tile2, TRUE
# 337 "data/maps/NewMauville_Inside/scripts.pory"
# 184 "data/maps/NewMauville_Inside/scripts.pory"
# 338 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 2, METATILE_BikeShop_Generator_Off_Tile3, TRUE
# 339 "data/maps/NewMauville_Inside/scripts.pory"
# 185 "data/maps/NewMauville_Inside/scripts.pory"
# 340 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 3, METATILE_BikeShop_Generator_Off_Tile4, TRUE
# 341 "data/maps/NewMauville_Inside/scripts.pory"
# 186 "data/maps/NewMauville_Inside/scripts.pory"
# 342 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 3, METATILE_BikeShop_Generator_Off_Tile5, TRUE
# 343 "data/maps/NewMauville_Inside/scripts.pory"
# 187 "data/maps/NewMauville_Inside/scripts.pory"
# 344 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 3, METATILE_BikeShop_Generator_Off_Tile6, TRUE
# 345 "data/maps/NewMauville_Inside/scripts.pory"
# 188 "data/maps/NewMauville_Inside/scripts.pory"
# 346 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 3, METATILE_BikeShop_Generator_Off_Tile7, TRUE
# 347 "data/maps/NewMauville_Inside/scripts.pory"
# 189 "data/maps/NewMauville_Inside/scripts.pory"
# 348 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 349 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 350 "data/maps/NewMauville_Inside/scripts.pory"

# 351 "data/maps/NewMauville_Inside/scripts.pory"

# 352 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Generator::
# 353 "data/maps/NewMauville_Inside/scripts.pory"
# 194 "data/maps/NewMauville_Inside/scripts.pory"
# 354 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 355 "data/maps/NewMauville_Inside/scripts.pory"
# 195 "data/maps/NewMauville_Inside/scripts.pory"
# 356 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
# 357 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Generator_2
# 358 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Generator_1:
# 359 "data/maps/NewMauville_Inside/scripts.pory"
# 198 "data/maps/NewMauville_Inside/scripts.pory"
# 360 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
# 361 "data/maps/NewMauville_Inside/scripts.pory"
# 199 "data/maps/NewMauville_Inside/scripts.pory"
# 362 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 363 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 364 "data/maps/NewMauville_Inside/scripts.pory"

# 365 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Generator_2:
# 366 "data/maps/NewMauville_Inside/scripts.pory"
# 196 "data/maps/NewMauville_Inside/scripts.pory"
# 367 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_GeneratorOff
# 368 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Generator_1
# 369 "data/maps/NewMauville_Inside/scripts.pory"

# 370 "data/maps/NewMauville_Inside/scripts.pory"

# 371 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GeneratorOff::
# 372 "data/maps/NewMauville_Inside/scripts.pory"
# 204 "data/maps/NewMauville_Inside/scripts.pory"
# 373 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
# 374 "data/maps/NewMauville_Inside/scripts.pory"
# 205 "data/maps/NewMauville_Inside/scripts.pory"
# 375 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 376 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 377 "data/maps/NewMauville_Inside/scripts.pory"

# 378 "data/maps/NewMauville_Inside/scripts.pory"

# 379 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1::
# 380 "data/maps/NewMauville_Inside/scripts.pory"
# 210 "data/maps/NewMauville_Inside/scripts.pory"
# 381 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 382 "data/maps/NewMauville_Inside/scripts.pory"
# 211 "data/maps/NewMauville_Inside/scripts.pory"
# 383 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 384 "data/maps/NewMauville_Inside/scripts.pory"
# 212 "data/maps/NewMauville_Inside/scripts.pory"
# 385 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 25
# 386 "data/maps/NewMauville_Inside/scripts.pory"
# 213 "data/maps/NewMauville_Inside/scripts.pory"
# 387 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 388 "data/maps/NewMauville_Inside/scripts.pory"
# 214 "data/maps/NewMauville_Inside/scripts.pory"
# 389 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 390 "data/maps/NewMauville_Inside/scripts.pory"
# 215 "data/maps/NewMauville_Inside/scripts.pory"
# 391 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 392 "data/maps/NewMauville_Inside/scripts.pory"
# 216 "data/maps/NewMauville_Inside/scripts.pory"
# 393 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 394 "data/maps/NewMauville_Inside/scripts.pory"
# 217 "data/maps/NewMauville_Inside/scripts.pory"
# 395 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 396 "data/maps/NewMauville_Inside/scripts.pory"
# 218 "data/maps/NewMauville_Inside/scripts.pory"
# 397 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 398 "data/maps/NewMauville_Inside/scripts.pory"
# 219 "data/maps/NewMauville_Inside/scripts.pory"
# 399 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 400 "data/maps/NewMauville_Inside/scripts.pory"
# 220 "data/maps/NewMauville_Inside/scripts.pory"
# 401 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 402 "data/maps/NewMauville_Inside/scripts.pory"
# 221 "data/maps/NewMauville_Inside/scripts.pory"
# 403 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 404 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb1_2
# 405 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1_1:
# 406 "data/maps/NewMauville_Inside/scripts.pory"
# 224 "data/maps/NewMauville_Inside/scripts.pory"
# 407 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 408 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb1_5
# 409 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1_4:
# 410 "data/maps/NewMauville_Inside/scripts.pory"
# 227 "data/maps/NewMauville_Inside/scripts.pory"
# 411 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 412 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb1_8
# 413 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1_7:
# 414 "data/maps/NewMauville_Inside/scripts.pory"
# 230 "data/maps/NewMauville_Inside/scripts.pory"
# 415 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 416 "data/maps/NewMauville_Inside/scripts.pory"
# 231 "data/maps/NewMauville_Inside/scripts.pory"
# 417 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 418 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 419 "data/maps/NewMauville_Inside/scripts.pory"

# 420 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1_2:
# 421 "data/maps/NewMauville_Inside/scripts.pory"
# 222 "data/maps/NewMauville_Inside/scripts.pory"
# 422 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb1
# 423 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb1_1
# 424 "data/maps/NewMauville_Inside/scripts.pory"

# 425 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1_5:
# 426 "data/maps/NewMauville_Inside/scripts.pory"
# 225 "data/maps/NewMauville_Inside/scripts.pory"
# 427 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb1
# 428 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb1_4
# 429 "data/maps/NewMauville_Inside/scripts.pory"

# 430 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1_8:
# 431 "data/maps/NewMauville_Inside/scripts.pory"
# 228 "data/maps/NewMauville_Inside/scripts.pory"
# 432 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb1
# 433 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb1_7
# 434 "data/maps/NewMauville_Inside/scripts.pory"

# 435 "data/maps/NewMauville_Inside/scripts.pory"

# 436 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb1::
# 437 "data/maps/NewMauville_Inside/scripts.pory"
# 236 "data/maps/NewMauville_Inside/scripts.pory"
# 438 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 439 "data/maps/NewMauville_Inside/scripts.pory"
# 237 "data/maps/NewMauville_Inside/scripts.pory"
# 440 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 441 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 442 "data/maps/NewMauville_Inside/scripts.pory"

# 443 "data/maps/NewMauville_Inside/scripts.pory"

# 444 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2::
# 445 "data/maps/NewMauville_Inside/scripts.pory"
# 242 "data/maps/NewMauville_Inside/scripts.pory"
# 446 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 447 "data/maps/NewMauville_Inside/scripts.pory"
# 243 "data/maps/NewMauville_Inside/scripts.pory"
# 448 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 449 "data/maps/NewMauville_Inside/scripts.pory"
# 244 "data/maps/NewMauville_Inside/scripts.pory"
# 450 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 25
# 451 "data/maps/NewMauville_Inside/scripts.pory"
# 245 "data/maps/NewMauville_Inside/scripts.pory"
# 452 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 453 "data/maps/NewMauville_Inside/scripts.pory"
# 246 "data/maps/NewMauville_Inside/scripts.pory"
# 454 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 455 "data/maps/NewMauville_Inside/scripts.pory"
# 247 "data/maps/NewMauville_Inside/scripts.pory"
# 456 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 457 "data/maps/NewMauville_Inside/scripts.pory"
# 248 "data/maps/NewMauville_Inside/scripts.pory"
# 458 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 459 "data/maps/NewMauville_Inside/scripts.pory"
# 249 "data/maps/NewMauville_Inside/scripts.pory"
# 460 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 461 "data/maps/NewMauville_Inside/scripts.pory"
# 250 "data/maps/NewMauville_Inside/scripts.pory"
# 462 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 463 "data/maps/NewMauville_Inside/scripts.pory"
# 251 "data/maps/NewMauville_Inside/scripts.pory"
# 464 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 465 "data/maps/NewMauville_Inside/scripts.pory"
# 252 "data/maps/NewMauville_Inside/scripts.pory"
# 466 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 467 "data/maps/NewMauville_Inside/scripts.pory"
# 253 "data/maps/NewMauville_Inside/scripts.pory"
# 468 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 469 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb2_2
# 470 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2_1:
# 471 "data/maps/NewMauville_Inside/scripts.pory"
# 256 "data/maps/NewMauville_Inside/scripts.pory"
# 472 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 473 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb2_5
# 474 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2_4:
# 475 "data/maps/NewMauville_Inside/scripts.pory"
# 259 "data/maps/NewMauville_Inside/scripts.pory"
# 476 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 477 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb2_8
# 478 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2_7:
# 479 "data/maps/NewMauville_Inside/scripts.pory"
# 262 "data/maps/NewMauville_Inside/scripts.pory"
# 480 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 481 "data/maps/NewMauville_Inside/scripts.pory"
# 263 "data/maps/NewMauville_Inside/scripts.pory"
# 482 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 483 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 484 "data/maps/NewMauville_Inside/scripts.pory"

# 485 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2_2:
# 486 "data/maps/NewMauville_Inside/scripts.pory"
# 254 "data/maps/NewMauville_Inside/scripts.pory"
# 487 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb2
# 488 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb2_1
# 489 "data/maps/NewMauville_Inside/scripts.pory"

# 490 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2_5:
# 491 "data/maps/NewMauville_Inside/scripts.pory"
# 257 "data/maps/NewMauville_Inside/scripts.pory"
# 492 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb2
# 493 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb2_4
# 494 "data/maps/NewMauville_Inside/scripts.pory"

# 495 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2_8:
# 496 "data/maps/NewMauville_Inside/scripts.pory"
# 260 "data/maps/NewMauville_Inside/scripts.pory"
# 497 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb2
# 498 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb2_7
# 499 "data/maps/NewMauville_Inside/scripts.pory"

# 500 "data/maps/NewMauville_Inside/scripts.pory"

# 501 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb2::
# 502 "data/maps/NewMauville_Inside/scripts.pory"
# 268 "data/maps/NewMauville_Inside/scripts.pory"
# 503 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 504 "data/maps/NewMauville_Inside/scripts.pory"
# 269 "data/maps/NewMauville_Inside/scripts.pory"
# 505 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 506 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 507 "data/maps/NewMauville_Inside/scripts.pory"

# 508 "data/maps/NewMauville_Inside/scripts.pory"

# 509 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3::
# 510 "data/maps/NewMauville_Inside/scripts.pory"
# 274 "data/maps/NewMauville_Inside/scripts.pory"
# 511 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 512 "data/maps/NewMauville_Inside/scripts.pory"
# 275 "data/maps/NewMauville_Inside/scripts.pory"
# 513 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 514 "data/maps/NewMauville_Inside/scripts.pory"
# 276 "data/maps/NewMauville_Inside/scripts.pory"
# 515 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 25
# 516 "data/maps/NewMauville_Inside/scripts.pory"
# 277 "data/maps/NewMauville_Inside/scripts.pory"
# 517 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 518 "data/maps/NewMauville_Inside/scripts.pory"
# 278 "data/maps/NewMauville_Inside/scripts.pory"
# 519 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 520 "data/maps/NewMauville_Inside/scripts.pory"
# 279 "data/maps/NewMauville_Inside/scripts.pory"
# 521 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 522 "data/maps/NewMauville_Inside/scripts.pory"
# 280 "data/maps/NewMauville_Inside/scripts.pory"
# 523 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 524 "data/maps/NewMauville_Inside/scripts.pory"
# 281 "data/maps/NewMauville_Inside/scripts.pory"
# 525 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 526 "data/maps/NewMauville_Inside/scripts.pory"
# 282 "data/maps/NewMauville_Inside/scripts.pory"
# 527 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 528 "data/maps/NewMauville_Inside/scripts.pory"
# 283 "data/maps/NewMauville_Inside/scripts.pory"
# 529 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 530 "data/maps/NewMauville_Inside/scripts.pory"
# 284 "data/maps/NewMauville_Inside/scripts.pory"
# 531 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 532 "data/maps/NewMauville_Inside/scripts.pory"
# 285 "data/maps/NewMauville_Inside/scripts.pory"
# 533 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 534 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb3_2
# 535 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3_1:
# 536 "data/maps/NewMauville_Inside/scripts.pory"
# 288 "data/maps/NewMauville_Inside/scripts.pory"
# 537 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 538 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb3_5
# 539 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3_4:
# 540 "data/maps/NewMauville_Inside/scripts.pory"
# 291 "data/maps/NewMauville_Inside/scripts.pory"
# 541 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 542 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_Voltorb3_8
# 543 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3_7:
# 544 "data/maps/NewMauville_Inside/scripts.pory"
# 294 "data/maps/NewMauville_Inside/scripts.pory"
# 545 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 546 "data/maps/NewMauville_Inside/scripts.pory"
# 295 "data/maps/NewMauville_Inside/scripts.pory"
# 547 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 548 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 549 "data/maps/NewMauville_Inside/scripts.pory"

# 550 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3_2:
# 551 "data/maps/NewMauville_Inside/scripts.pory"
# 286 "data/maps/NewMauville_Inside/scripts.pory"
# 552 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb3
# 553 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb3_1
# 554 "data/maps/NewMauville_Inside/scripts.pory"

# 555 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3_5:
# 556 "data/maps/NewMauville_Inside/scripts.pory"
# 289 "data/maps/NewMauville_Inside/scripts.pory"
# 557 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb3
# 558 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb3_4
# 559 "data/maps/NewMauville_Inside/scripts.pory"

# 560 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3_8:
# 561 "data/maps/NewMauville_Inside/scripts.pory"
# 292 "data/maps/NewMauville_Inside/scripts.pory"
# 562 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DefeatedVoltorb3
# 563 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_Voltorb3_7
# 564 "data/maps/NewMauville_Inside/scripts.pory"

# 565 "data/maps/NewMauville_Inside/scripts.pory"

# 566 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb3::
# 567 "data/maps/NewMauville_Inside/scripts.pory"
# 300 "data/maps/NewMauville_Inside/scripts.pory"
# 568 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 569 "data/maps/NewMauville_Inside/scripts.pory"
# 301 "data/maps/NewMauville_Inside/scripts.pory"
# 570 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 571 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 572 "data/maps/NewMauville_Inside/scripts.pory"

# 573 "data/maps/NewMauville_Inside/scripts.pory"

# 574 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorRadiatingHeat::
# 575 "data/maps/NewMauville_Inside/scripts.pory"
# 305 "data/maps/NewMauville_Inside/scripts.pory"
# 576 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator is radiating heat that\n"
# 577 "data/maps/NewMauville_Inside/scripts.pory"
	.string "can be felt even at a distance.\p"
# 578 "data/maps/NewMauville_Inside/scripts.pory"
	.string "It looks like it should be turned off\n"
# 579 "data/maps/NewMauville_Inside/scripts.pory"
	.string "as soon as possible.$"
# 580 "data/maps/NewMauville_Inside/scripts.pory"

# 581 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorQuietedDown::
# 582 "data/maps/NewMauville_Inside/scripts.pory"
# 312 "data/maps/NewMauville_Inside/scripts.pory"
# 583 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator quieted down.$"
# 584 "data/maps/NewMauville_Inside/scripts.pory"

# 585 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped::
# 586 "data/maps/NewMauville_Inside/scripts.pory"
# 316 "data/maps/NewMauville_Inside/scripts.pory"
# 587 "data/maps/NewMauville_Inside/scripts.pory"
	.string "{PLAYER} stepped on the switch.\p"
# 588 "data/maps/NewMauville_Inside/scripts.pory"
	.string "Click…\p"
# 589 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\n"
# 590 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\p"
# 591 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator appears to have\n"
# 592 "data/maps/NewMauville_Inside/scripts.pory"
	.string "stopped…$"
