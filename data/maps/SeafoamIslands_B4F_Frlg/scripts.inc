# 1 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 2 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Frlg_MapScripts::
# 3 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 2 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 4 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B4F_OnTransition
# 5 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 3 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 6 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafoamIslands_B4F_OnResume
# 7 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 4 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 8 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SeafoamIslands_B4F_OnLoad
# 9 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 5 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 10 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SeafoamIslands_B4F_OnWarp
# 11 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 6 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 12 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.byte 0
# 14 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 15 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 7 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 17 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_EventScript_EnterOnCurrent
# 18 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 8 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 19 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B4F_EventScript_EnterByFalling
# 20 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.2byte 0
# 21 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 22 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 23 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnResume::
# 24 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 13 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 25 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SeafoamIslands_B4F_OnResume_2
# 26 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnResume_1:
# 27 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 28 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 29 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnResume_2:
# 30 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 14 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 31 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_TryRemoveArticuno
# 32 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_OnResume_1
# 33 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 34 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 35 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_TryRemoveArticuno::
# 36 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 20 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 37 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 21 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 39 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 40 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_ne SeafoamIslands_B4F_EventScript_TryRemoveArticuno_2
# 41 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_TryRemoveArticuno_1:
# 42 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 24 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 43 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 44 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	return
# 45 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 46 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_TryRemoveArticuno_2:
# 47 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 22 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 48 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 49 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_TryRemoveArticuno_1
# 50 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 51 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 52 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnTransition::
# 53 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 29 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 54 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_ARTICUNO, SeafoamIslands_B4F_OnTransition_2
# 55 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnTransition_1:
# 56 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 32 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 57 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_OnTransition_5
# 58 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnTransition_4:
# 59 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 35 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 60 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_set FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_OnTransition_8
# 61 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnTransition_7:
# 62 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 63 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 64 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnTransition_2:
# 65 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 30 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 66 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_ShowArticuno
# 67 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_OnTransition_1
# 68 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 69 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnTransition_5:
# 70 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 33 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 71 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_CheckStoppedCurrent
# 72 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_OnTransition_4
# 73 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 74 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnTransition_8:
# 75 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 36 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_SetNoCurrentLayout
# 77 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_OnTransition_7
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 79 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 80 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent::
# 81 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 42 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 82 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 83 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 43 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 84 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_2
# 85 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_1:
# 86 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 46 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 87 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_5
# 88 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_4:
# 89 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 49 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 90 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare NUM_BOULDERS_PRESENT, 2
# 91 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_eq SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_8
# 92 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_7:
# 93 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	return
# 94 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 95 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_2:
# 96 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 44 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 97 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 98 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_1
# 99 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 100 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_5:
# 101 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 47 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 102 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 103 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_4
# 104 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 105 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_8:
# 106 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 50 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 107 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_StoppedCurrent
# 108 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_CheckStoppedCurrent_7
# 109 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 110 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 111 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_StoppedCurrent::
# 112 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 56 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 113 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B4F_CURRENT
# 114 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	return
# 115 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 116 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 117 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_SetNoCurrentLayout::
# 118 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 61 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 119 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B4F_CURRENT_STOPPED
# 120 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	return
# 121 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 122 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 123 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_ShowArticuno::
# 124 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 66 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 125 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO
# 126 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	return
# 127 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 128 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 129 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnLoad::
# 130 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 71 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 131 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 132 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 72 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 133 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_OnLoad_2
# 134 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnLoad_1:
# 135 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 75 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 136 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_OnLoad_5
# 137 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnLoad_4:
# 138 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 139 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare NUM_BOULDERS_PRESENT, 2
# 140 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_eq SeafoamIslands_B4F_OnLoad_8
# 141 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnLoad_7:
# 142 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 143 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 144 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnLoad_2:
# 145 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 73 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 146 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 147 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_OnLoad_1
# 148 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 149 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnLoad_5:
# 150 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 151 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 152 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_OnLoad_4
# 153 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 154 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnLoad_8:
# 155 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 79 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 156 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_SetCalmWaterNearStairs
# 157 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_OnLoad_7
# 158 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 159 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 160 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_SetCalmWaterNearStairs::
# 161 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 85 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 162 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setmetatile 12, 14, METATILE_GeneralFrlg_CalmWater, 0
# 163 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 86 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 164 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setmetatile 13, 14, METATILE_GeneralFrlg_CalmWater, 0
# 165 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 166 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 167 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 168 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 90 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 169 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 170 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 91 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 171 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_OnWarp:
# 172 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 92 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 173 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_EventScript_WarpInOnCurrent
# 174 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 93 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 175 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.2byte 0
# 176 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 177 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_WarpInOnCurrent::
# 178 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 98 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 179 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 180 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 99 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 181 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	special ForcePlayerToStartSurfing
# 182 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 183 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 184 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 185 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterOnCurrent::
# 186 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 104 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 187 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	lockall
# 188 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 105 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 189 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Movement_EnterOnCurrent
# 190 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 106 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 191 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmovement 0
# 192 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 107 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 193 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 0
# 194 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 108 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 195 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	releaseall
# 196 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 197 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 198 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 199 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 112 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 200 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Movement_EnterOnCurrent:
# 201 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 113 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 202 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_fast_up
# 203 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 114 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 204 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_fast_up
# 205 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 115 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 206 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_fast_up
# 207 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 116 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 208 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	step_end
# 209 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 210 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling::
# 211 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 120 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 212 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	lockall
# 213 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 121 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 214 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 215 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 122 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 216 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_EnterByFalling_2
# 217 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_1:
# 218 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 125 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 219 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_EnterByFalling_5
# 220 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_4:
# 221 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 128 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 222 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare NUM_BOULDERS_PRESENT, 2
# 223 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_eq SeafoamIslands_B4F_EventScript_EnterByFalling_8
# 224 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_7:
# 225 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 131 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 226 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 227 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 132 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 228 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_0x8008, 9
# 229 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_lt SeafoamIslands_B4F_EventScript_EnterByFalling_11
# 230 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_10:
# 231 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 135 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 232 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_0x8008, 9
# 233 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_ge SeafoamIslands_B4F_EventScript_EnterByFalling_14
# 234 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_13:
# 235 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 138 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 236 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	special SeafoamIslandsB4F_CurrentDumpsPlayerOnLand
# 237 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 139 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 238 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 239 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 140 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 240 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	releaseall
# 241 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 242 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 243 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_2:
# 244 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 123 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 245 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 246 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_EnterByFalling_1
# 247 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 248 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_5:
# 249 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 126 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 250 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 251 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_EnterByFalling_4
# 252 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 253 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_8:
# 254 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 129 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 255 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_CurrentBlocked
# 256 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_EnterByFalling_7
# 257 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 258 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_11:
# 259 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 133 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 260 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_RideCurrentFar
# 261 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_EnterByFalling_10
# 262 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 263 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_14:
# 264 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 136 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 265 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_RideCurrentClose
# 266 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_EnterByFalling_13
# 267 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 268 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 269 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_AddBoulderPresent::
# 270 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 145 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 271 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	addvar NUM_BOULDERS_PRESENT, 1
# 272 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	return
# 273 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 274 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 275 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_RideCurrentFar::
# 276 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 150 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 277 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Movement_RideCurrentFar
# 278 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 151 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 279 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmovement 0
# 280 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	return
# 281 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 282 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 283 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_RideCurrentClose::
# 284 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 156 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 285 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Movement_RideCurrentClose
# 286 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 157 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 287 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmovement 0
# 288 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	return
# 289 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 290 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 291 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_CurrentBlocked::
# 292 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 162 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 293 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 294 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 163 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 295 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	releaseall
# 296 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 297 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 298 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 299 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 167 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 300 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Movement_RideCurrentFar:
# 301 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 168 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 302 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 303 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 169 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 304 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 305 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 170 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 306 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 307 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 171 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 308 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 309 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 172 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 310 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 311 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 173 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 312 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 313 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 174 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 314 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 315 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 175 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 316 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 317 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 176 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 318 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	step_end
# 319 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 320 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 179 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 321 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Movement_RideCurrentClose:
# 322 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 180 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 323 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 324 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 181 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 325 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 326 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 182 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 327 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 328 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 183 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 329 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 330 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 184 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 331 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 332 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 185 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 333 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 334 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 186 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 335 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 336 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 187 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 337 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	step_end
# 338 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 339 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_UpwardCurrent::
# 340 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 191 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 341 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	lockall
# 342 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 192 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 343 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Movement_WalkUp
# 344 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 193 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 345 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmovement 0
# 346 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 194 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 347 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	releaseall
# 348 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 349 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 350 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 351 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 198 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 352 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Movement_WalkUp:
# 353 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 199 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 354 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 355 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 200 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 356 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	step_end
# 357 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 358 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno::
# 359 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 204 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 360 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	lock
# 361 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 205 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 362 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	faceplayer
# 363 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 206 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 364 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 50
# 365 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 207 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 366 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitse
# 367 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 208 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 368 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 369 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 209 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 370 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	message Text_Gyaoo
# 371 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 210 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 372 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmessage
# 373 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 211 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 374 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmoncry
# 375 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 212 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 376 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	delay 10
# 377 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 213 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 378 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 379 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 214 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 380 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitbuttonpress
# 381 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 215 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 382 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 383 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 216 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 384 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 385 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 217 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 386 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitstate
# 387 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 218 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 388 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 389 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 219 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 390 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 391 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 220 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 392 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 393 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_eq SeafoamIslands_B4F_EventScript_Articuno_2
# 394 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno_1:
# 395 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 223 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 396 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 397 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_eq SeafoamIslands_B4F_EventScript_Articuno_5
# 398 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno_4:
# 399 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 226 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 400 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 401 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_eq SeafoamIslands_B4F_EventScript_Articuno_8
# 402 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno_7:
# 403 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 229 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 404 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 405 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 230 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 406 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	release
# 407 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 408 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 409 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno_2:
# 410 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 221 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 411 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_DefeatedArticuno
# 412 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_Articuno_1
# 413 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 414 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno_5:
# 415 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 224 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 416 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_RanFromArticuno
# 417 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_Articuno_4
# 418 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 419 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno_8:
# 420 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 227 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 421 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_RanFromArticuno
# 422 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto SeafoamIslands_B4F_EventScript_Articuno_7
# 423 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 424 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 425 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_DefeatedArticuno::
# 426 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 235 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 427 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 428 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 236 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 429 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 430 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 431 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 432 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 433 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_RanFromArticuno::
# 434 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 241 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 435 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 436 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 242 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 437 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 438 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 439 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 440 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 441 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_BoulderHintSign::
# 442 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 247 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 443 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_BouldersMightChangeWaterFlow, MSGBOX_SIGN
# 444 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 445 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 446 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 447 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_FastCurrentSign::
# 448 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 252 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 449 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_DangerFastCurrent, MSGBOX_SIGN
# 450 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	end
# 451 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 452 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 453 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
Text_RockSlideTeach::
# 454 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 256 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 455 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "When you're up on a rocky mountain\n"
# 456 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "like this, rockslides are a threat.\p"
# 457 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Can you imagine?\n"
# 458 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Boulders tumbling down on you?\p"
# 459 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "That'd be, like, waaaaaaaaaaah!\n"
# 460 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Total terror!\p"
# 461 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "You don't seem to be scared.\n"
# 462 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Want to try using ROCK SLIDE?$"
# 463 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 464 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
Text_RockSlideDeclined::
# 465 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 267 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 466 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Oh, so you are scared after all.$"
# 467 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 468 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
Text_RockSlideWhichMon::
# 469 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 271 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 470 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
# 471 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "ROCK SLIDE?$"
# 472 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 473 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
Text_RockSlideTaught::
# 474 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 276 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 475 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "It might be scary to use it in this\n"
# 476 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "tunnel…$"
# 477 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 478 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Text_BouldersMightChangeWaterFlow::
# 479 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 281 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 480 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Hint: Boulders might change the\n"
# 481 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "flow of water.$"
# 482 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"

# 483 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Text_DangerFastCurrent::
# 484 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 286 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
# 485 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "DANGER\n"
# 486 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Fast current!$"
