# 1 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 2 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 4 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
# 5 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 3 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 6 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
# 7 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 9 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 10 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnLoad::
# 11 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 7 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 12 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_OnLoad_2
# 13 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnLoad_1:
# 14 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_OnLoad_5
# 16 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnLoad_4:
# 17 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 18 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 19 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnLoad_2:
# 20 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 8 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 21 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 22 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_OnLoad_1
# 23 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 24 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnLoad_5:
# 25 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 11 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 26 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 27 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_OnLoad_4
# 28 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 29 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 30 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetOneBeamOff::
# 31 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 33 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 18 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 35 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 37 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 20 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 39 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 21 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 41 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 22 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 42 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 43 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 23 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 44 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 45 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 24 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 47 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 25 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 48 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 49 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 26 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 50 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
# 51 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 52 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 53 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 54 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOff::
# 55 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 31 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 57 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 59 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 33 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 60 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
# 61 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 62 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 63 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 35 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 64 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 65 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 66 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 67 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 37 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 68 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 69 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 70 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
# 71 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 39 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 72 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 73 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 74 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
# 75 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 76 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 77 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 78 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_OnTransition::
# 79 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 45 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 80 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_InitTrashCans
# 81 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 82 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 83 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 84 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_InitTrashCans::
# 85 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 50 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 86 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_InitTrashCans_2
# 87 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_InitTrashCans_1:
# 88 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 53 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 90 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 54 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 91 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 92 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 55 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 93 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 94 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 95 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 96 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_InitTrashCans_2:
# 97 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 51 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 98 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 99 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_InitTrashCans_1
# 100 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 101 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 102 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan1::
# 103 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 60 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 104 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 105 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 61 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 106 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 1
# 107 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 62 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 108 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 109 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 110 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 111 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 112 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan2::
# 113 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 67 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 114 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 115 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 68 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 116 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 2
# 117 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 69 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 118 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 119 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 120 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 121 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 122 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan3::
# 123 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 74 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 124 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 125 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 75 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 126 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 3
# 127 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 76 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 128 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 129 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 130 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 131 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 132 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan4::
# 133 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 81 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 134 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 135 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 82 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 136 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 4
# 137 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 83 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 138 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 139 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 140 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 141 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 142 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan5::
# 143 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 88 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 144 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 145 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 146 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 5
# 147 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 90 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 148 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 149 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 150 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 151 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 152 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan6::
# 153 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 95 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 154 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 155 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 96 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 156 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 6
# 157 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 97 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 158 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 159 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 160 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 161 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 162 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan7::
# 163 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 102 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 164 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 165 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 103 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 166 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 7
# 167 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 104 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 168 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 169 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 170 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 171 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 172 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan8::
# 173 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 109 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 174 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 175 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 110 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 176 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 8
# 177 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 111 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 178 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 179 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 180 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 182 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan9::
# 183 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 116 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 184 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 185 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 117 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 186 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 9
# 187 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 118 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 188 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 189 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 190 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 191 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 192 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan10::
# 193 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 123 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 194 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 195 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 124 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 196 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 10
# 197 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 125 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 198 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 199 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 200 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 201 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 202 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan11::
# 203 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 130 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 204 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 205 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 131 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 206 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 11
# 207 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 132 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 208 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 209 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 210 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 211 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 212 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan12::
# 213 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 137 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 214 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 215 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 138 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 216 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 12
# 217 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 139 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 218 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 219 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 220 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 221 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 222 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan13::
# 223 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 144 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 224 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 225 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 145 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 226 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 13
# 227 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 146 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 228 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 229 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 230 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 231 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 232 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan14::
# 233 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 151 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 234 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 235 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 152 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 236 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 14
# 237 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 153 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 238 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 239 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 240 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 241 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 242 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan15::
# 243 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 158 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 244 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 245 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 159 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 246 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar TRASH_CAN_ID, 15
# 247 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 160 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 248 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 249 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 250 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 251 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 252 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan::
# 253 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 165 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 254 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar SWITCH1_ID, VAR_TEMP_0
# 255 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 166 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 256 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar SWITCH2_ID, VAR_TEMP_1
# 257 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 167 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 258 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_TrashCan_2
# 259 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan_1:
# 260 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 170 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 261 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_TrashCan_5
# 262 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan_4:
# 263 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 173 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 264 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare SWITCH1_ID, TRASH_CAN_ID
# 265 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq VermilionCity_Gym_EventScript_TrashCan_8
# 266 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan_7:
# 267 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 176 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 268 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 269 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 177 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 270 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 271 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 272 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 273 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan_2:
# 274 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 168 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 275 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_LocksAlreadyOpen
# 276 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan_1
# 277 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 278 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan_5:
# 279 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 171 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 280 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrySwitchTwo
# 281 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan_4
# 282 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 283 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan_8:
# 284 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 174 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 285 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_FoundSwitchOne
# 286 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan_7
# 287 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 288 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 289 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchOne::
# 290 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 182 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 291 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
# 292 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 183 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 293 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_PIN
# 294 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 184 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 295 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 296 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 185 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 297 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 298 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 186 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 299 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 300 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 187 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 301 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FOUND_FIRST_SWITCH
# 302 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 188 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 303 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 304 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 305 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 306 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 307 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrySwitchTwo::
# 308 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 193 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 309 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare SWITCH2_ID, TRASH_CAN_ID
# 310 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq VermilionCity_Gym_EventScript_TrySwitchTwo_2
# 311 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrySwitchTwo_1:
# 312 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 196 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 313 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
# 314 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 197 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 315 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FOUND_FIRST_SWITCH
# 316 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 198 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 317 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 318 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 199 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 319 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 320 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 200 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 321 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 322 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 201 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 323 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOn
# 324 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 202 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 325 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 326 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 203 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 327 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 328 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 329 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 330 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_TrySwitchTwo_2:
# 331 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 194 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 332 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_FoundSwitchTwo
# 333 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrySwitchTwo_1
# 334 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 335 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 336 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchTwo::
# 337 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 208 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 338 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SecondLockOpened
# 339 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 209 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 340 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	closemessage
# 341 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 210 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 342 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 343 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 211 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 344 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 345 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 212 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 346 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 347 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 213 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 348 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 349 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 214 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 350 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
# 351 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 215 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 352 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 353 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 354 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 355 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 356 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LocksAlreadyOpen::
# 357 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 220 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 358 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 359 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 221 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 360 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 361 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 362 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 363 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 364 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOn::
# 365 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 226 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 366 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 367 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 227 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 368 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 369 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 228 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 370 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
# 371 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 229 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 372 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 373 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 230 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 374 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 375 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 231 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 376 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 377 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 232 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 378 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 379 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 233 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 380 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
# 381 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 234 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 382 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 383 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 235 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 384 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
# 385 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 386 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 387 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 388 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LtSurge::
# 389 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 240 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 390 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 391 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 241 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 392 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 393 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 242 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 394 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_LtSurge_2
# 395 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LtSurge_1:
# 396 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 245 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 397 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 398 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 246 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 399 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 400 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 401 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 402 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LtSurge_2:
# 403 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 243 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 404 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
# 405 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_LtSurge_1
# 406 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 407 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 408 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 409 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 251 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 410 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 1
# 411 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 252 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 412 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_DefeatedLtSurge_2
# 413 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedLtSurge_1:
# 414 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 255 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 415 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 416 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 256 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 417 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LT_SURGE
# 418 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 257 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 419 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE03_GET
# 420 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 258 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 421 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 3
# 422 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 259 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 423 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
# 424 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 425 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 426 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedLtSurge_2:
# 427 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 253 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 428 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_ShowOaksAide
# 429 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_DefeatedLtSurge_1
# 430 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 431 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 432 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_ShowOaksAide::
# 433 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 264 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 434 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 435 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 436 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 437 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 438 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GiveTM34::
# 439 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 269 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 440 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
# 441 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 270 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 442 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM34
# 443 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 271 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 444 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 445 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq VermilionCity_Gym_EventScript_GiveTM34_2
# 446 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GiveTM34_1:
# 447 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 274 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 448 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 449 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 275 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 450 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM34_FROM_SURGE
# 451 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 276 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 452 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainTM34
# 453 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 277 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 454 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 455 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 456 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 457 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GiveTM34_2:
# 458 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 272 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 459 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_NoRoomForTM34
# 460 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34_1
# 461 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 462 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 463 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_NoRoomForTM34::
# 464 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 282 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 465 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
# 466 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 283 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 467 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 468 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 469 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 470 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 471 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Dwayne::
# 472 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 288 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 473 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Text_DwayneIntro, VermilionCity_Gym_Text_DwayneDefeat
# 474 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 289 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 475 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 476 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 290 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 477 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 478 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 479 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 480 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 481 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Baily::
# 482 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 295 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 483 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_ENGINEER_BAILY, VermilionCity_Gym_Text_BailyIntro, VermilionCity_Gym_Text_BailyDefeat
# 484 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 296 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 485 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_BailyPostBattle, MSGBOX_AUTOCLOSE
# 486 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 487 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 488 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 489 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_Tucker::
# 490 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 301 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 491 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_TUCKER, VermilionCity_Gym_Text_TuckerIntro, VermilionCity_Gym_Text_TuckerDefeat, VermilionCity_Gym_EventScript_DefeatedTucker
# 492 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 302 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 493 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 494 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 303 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 495 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_TuckerPostBattle, MSGBOX_AUTOCLOSE
# 496 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 497 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 498 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 499 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedTucker::
# 500 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 308 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 501 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 2
# 502 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 309 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 503 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 504 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 505 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 506 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 507 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuy::
# 508 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 314 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 509 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lock
# 510 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 315 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 511 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	faceplayer
# 512 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 316 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 513 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuy_2
# 514 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuy_1:
# 515 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 319 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 516 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
# 517 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 320 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 518 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 519 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 520 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 521 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuy_2:
# 522 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 317 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 523 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GymGuyPostVictory
# 524 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GymGuy_1
# 525 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 526 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 527 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuyPostVictory::
# 528 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 325 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 529 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
# 530 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 326 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 531 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 532 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 533 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 534 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 535 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymStatue::
# 536 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 331 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 537 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 538 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 332 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 539 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatue_2
# 540 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymStatue_1:
# 541 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 335 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 542 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue
# 543 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 336 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 544 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 545 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 546 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 547 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymStatue_2:
# 548 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 333 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 549 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GymStatuePostVictory
# 550 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GymStatue_1
# 551 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 552 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 553 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymStatuePostVictory::
# 554 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 341 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 555 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
# 556 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 342 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 557 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 558 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 559 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 560 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 561 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeIntro::
# 562 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 346 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 563 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey, kid! What do you think you're\n"
# 564 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "doing here?\p"
# 565 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You won't live long in combat!\n"
# 566 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Not with your puny power!\p"
# 567 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I tell you, kid, electric POKéMON\n"
# 568 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "saved me during the war!\p"
# 569 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "They zapped my enemies into\n"
# 570 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "paralysis!\p"
# 571 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The same as I'll do to you!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 572 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 573 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgePostBattle::
# 574 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 358 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 575 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "A little word of advice, kid!\p"
# 576 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Electricity is sure powerful!\p"
# 577 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "But, it's useless against GROUND-\n"
# 578 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "type POKéMON!$"
# 579 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 580 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis::
# 581 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 365 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 582 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The THUNDERBADGE cranks up your\n"
# 583 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "POKéMON's SPEED!\p"
# 584 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It also lets your POKéMON FLY\n"
# 585 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "lightning-quick anytime, kid!\p"
# 586 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're special, kid!\n"
# 587 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Take this!$"
# 588 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 589 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ReceivedTM34FromLtSurge::
# 590 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 374 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 591 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM34\n"
# 592 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "from LT. SURGE.$"
# 593 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 594 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ExplainTM34::
# 595 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 379 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 596 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "TM34 contains SHOCK WAVE!\p"
# 597 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Teach it to an ELECTRIC POKéMON!$"
# 598 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 599 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_MakeRoomInYourBag::
# 600 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 384 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 601 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo, kid, make room in your BAG!$"
# 602 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 603 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeDefeat::
# 604 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 388 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 605 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Now that's a shocker!\p"
# 606 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're the real deal, kid!\p"
# 607 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fine, then, take the THUNDERBADGE!$"
# 608 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 609 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerIntro::
# 610 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 394 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 611 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "When I was in the Army, LT. SURGE\n"
# 612 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "was my strict CO.\p"
# 613 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He was a hard taskmaster.$"
# 614 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 615 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerDefeat::
# 616 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 400 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 617 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Stop!\n"
# 618 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're very good!$"
# 619 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 620 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_TuckerPostBattle::
# 621 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 405 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 622 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It's not easy opening that door.\p"
# 623 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE was always famous for\n"
# 624 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "his cautious nature in the Army.$"
# 625 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 626 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyIntro::
# 627 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 411 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 628 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I'm a lightweight, but I'm good\n"
# 629 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "with electricity!\p"
# 630 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "That's why I joined this GYM.$"
# 631 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 632 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyDefeat::
# 633 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 417 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 634 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fried!$"
# 635 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 636 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_BailyPostBattle::
# 637 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 421 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 638 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Okay, I'll talk!\p"
# 639 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE said he hid door\n"
# 640 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "switches inside something.$"
# 641 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 642 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwayneIntro::
# 643 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 427 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 644 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "This is no place for kids!\n"
# 645 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Not even if you're good!$"
# 646 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 647 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwayneDefeat::
# 648 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 432 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 649 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
# 650 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Surprised me!$"
# 651 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 652 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_DwaynePostBattle::
# 653 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 437 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 654 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE installed the traps in\n"
# 655 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "the GYM himself.\p"
# 656 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He set up double locks everywhere.\n"
# 657 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Let me give you a hint.\p"
# 658 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "When you open the first lock, the\n"
# 659 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "second lock is right next to it.$"
# 660 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 661 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymGuyAdvice::
# 662 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 446 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 663 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 664 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 665 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE has a nickname.\p"
# 666 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "People refer to him as the\n"
# 667 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Lightning American!\p"
# 668 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He's an expert on electric\n"
# 669 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 670 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "BIRD/WATER-type POKéMON match\n"
# 671 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "poorly against the ELECTRIC type.\p"
# 672 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Beware of paralysis, too.\p"
# 673 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE is very cautious.\p"
# 674 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He's locked himself in, so it won't\n"
# 675 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "be easy getting to him.$"
# 676 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 677 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymGuyPostVictory::
# 678 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 462 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 679 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Whew!\n"
# 680 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "That match was electric!$"
# 681 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 682 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymStatue::
# 683 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 467 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 684 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
# 685 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\p"
# 686 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 687 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 688 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 689 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymStatuePlayerWon::
# 690 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 474 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 691 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
# 692 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\p"
# 693 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 694 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
# 695 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 696 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_NopeOnlyTrashHere::
# 697 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 481 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 698 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
# 699 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "There's only trash here.$"
# 700 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 701 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened::
# 702 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 486 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 703 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey! There's a switch under the\n"
# 704 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "trash! Turn it on!\p"
# 705 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The first electric lock opened!$"
# 706 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 707 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_SecondLockOpened::
# 708 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 492 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 709 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The second electric lock opened!\n"
# 710 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The motorized door opened!$"
# 711 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 712 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_OnlyTrashLocksWereReset::
# 713 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 497 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
# 714 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
# 715 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "There's only trash here.\p"
# 716 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey!\n"
# 717 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The electric locks were reset!$"
