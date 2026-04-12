# 1 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 2 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_Frlg_MapScripts::
# 3 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 2 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 4 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B3F_OnTransition
# 5 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 3 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 6 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 9 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 4 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 11 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B3F_EventScript_EnterByFalling
# 12 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 14 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 15 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_OnTransition::
# 16 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 9 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 17 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_OnTransition_2
# 18 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_OnTransition_1:
# 19 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 12 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 20 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_set FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_OnTransition_5
# 21 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_OnTransition_4:
# 22 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	end
# 23 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 24 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_OnTransition_2:
# 25 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 10 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 26 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_CheckStoppedCurrent
# 27 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_OnTransition_1
# 28 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 29 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_OnTransition_5:
# 30 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 13 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 31 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_SetNoCurrentLayout
# 32 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_OnTransition_4
# 33 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 34 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 35 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent::
# 36 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 19 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 37 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 38 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 20 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 39 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_2
# 40 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_1:
# 41 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 23 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_5
# 43 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_4:
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 26 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 45 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	compare NUM_BOULDERS_PRESENT, 2
# 46 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_eq SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_8
# 47 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_7:
# 48 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	return
# 49 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 50 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_2:
# 51 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 21 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 52 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 53 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_1
# 54 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 55 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_5:
# 56 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 24 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 57 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 58 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_4
# 59 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 60 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_8:
# 61 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 27 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 62 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_StoppedCurrent
# 63 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_CheckStoppedCurrent_7
# 64 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 65 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 66 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_StoppedCurrent::
# 67 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 33 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 68 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B3F_CURRENT
# 69 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	return
# 70 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 71 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 72 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_SetNoCurrentLayout::
# 73 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 38 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 74 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B3F_CURRENT_STOPPED
# 75 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	return
# 76 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 77 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 78 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling::
# 79 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 43 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 80 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	lockall
# 81 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 82 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 83 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 45 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 84 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_EnterByFalling_2
# 85 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_1:
# 86 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 48 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 87 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_EnterByFalling_5
# 88 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_4:
# 89 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 51 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 90 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	compare NUM_BOULDERS_PRESENT, 2
# 91 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_eq SeafoamIslands_B3F_EventScript_EnterByFalling_8
# 92 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_7:
# 93 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 54 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 94 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 95 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 55 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 96 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	compare VAR_0x8008, 24
# 97 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_lt SeafoamIslands_B3F_EventScript_EnterByFalling_11
# 98 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_10:
# 99 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 58 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 100 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	compare VAR_0x8008, 24
# 101 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_ge SeafoamIslands_B3F_EventScript_EnterByFalling_14
# 102 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_13:
# 103 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 61 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 104 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1
# 105 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 62 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 106 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	warp MAP_SEAFOAM_ISLANDS_B4F, 27, 21
# 107 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 63 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 108 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	waitstate
# 109 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 64 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 110 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	releaseall
# 111 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	end
# 112 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 113 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_2:
# 114 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 46 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 115 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 116 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_EnterByFalling_1
# 117 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 118 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_5:
# 119 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 49 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 120 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 121 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_EnterByFalling_4
# 122 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 123 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_8:
# 124 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 52 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 125 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_CurrentBlocked
# 126 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_EnterByFalling_7
# 127 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 128 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_11:
# 129 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 56 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 130 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_RideCurrentFar
# 131 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_EnterByFalling_10
# 132 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 133 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_14:
# 134 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 59 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 135 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_RideCurrentClose
# 136 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_EnterByFalling_13
# 137 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 138 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 139 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_AddBoulderPresent::
# 140 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 69 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 141 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	addvar NUM_BOULDERS_PRESENT, 1
# 142 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	return
# 143 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 144 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 145 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_RideCurrentFar::
# 146 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 74 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 147 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentFar
# 148 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 75 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 149 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	return
# 151 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 152 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 153 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_RideCurrentClose::
# 154 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 80 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 155 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentClose
# 156 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 81 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 157 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	waitmovement 0
# 158 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	return
# 159 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 160 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 161 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_CurrentBlocked::
# 162 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 86 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 163 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 164 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 87 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 165 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	releaseall
# 166 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	end
# 167 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 168 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 169 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 91 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 170 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentFar:
# 171 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 92 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 172 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 173 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 93 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 174 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 175 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 94 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 176 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 177 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 95 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 178 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 179 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 96 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 180 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_right
# 181 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 97 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 182 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_right
# 183 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 98 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 184 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_right
# 185 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 99 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 186 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 187 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 100 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 188 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 189 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 101 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 190 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 191 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 102 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 192 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 193 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 103 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 194 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 195 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 104 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 196 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 197 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 105 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 198 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	step_end
# 199 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"

# 200 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 108 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 201 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentClose:
# 202 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 109 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 203 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 204 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 110 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 205 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 206 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 111 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 207 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 208 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 112 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 209 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 210 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 113 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 211 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_right
# 212 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 114 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 213 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_right
# 214 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 115 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 215 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 216 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 116 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 217 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 218 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 117 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 219 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 220 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 118 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 221 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 222 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 119 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 223 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 224 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 120 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 225 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	walk_fast_down
# 226 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 121 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
# 227 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	step_end
