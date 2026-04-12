# 1 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 2 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_SevaultCanyon_TanobyKey_OnTransition
# 5 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 7 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 8 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_OnTransition::
# 9 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
# 11 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 7 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 12 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_UNLOCKED_TANOBY_RUINS, SevenIsland_SevaultCanyon_TanobyKey_OnTransition_2
# 13 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_OnTransition_1:
# 14 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 10 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 11 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 17 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 18 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 12 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 19 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_3, 0
# 20 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 13 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 21 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_4, 0
# 22 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 14 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 23 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_5, 0
# 24 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_6, 0
# 26 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 27 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_7, 0
# 28 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 17 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 29 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar NUM_SWITCHES_PRESSED, 0
# 30 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 31 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 32 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_OnTransition_2:
# 33 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 8 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos
# 35 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_OnTransition_1
# 36 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 37 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 38 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_MoveBouldersToSolvedPos::
# 39 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 22 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 40 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER1, 7, 2
# 41 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 23 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 42 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER2, 4, 4
# 43 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 24 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 44 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER3, 10, 4
# 45 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 46 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER4, 5, 6
# 47 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 26 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 48 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER5, 9, 6
# 49 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 27 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 50 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER6, 5, 8
# 51 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 28 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 52 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER7, 9, 8
# 53 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	return
# 54 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 55 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 56 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1::
# 57 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 33 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 58 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 59 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 60 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_1, 100
# 61 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_2
# 62 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_1:
# 63 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 37 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 64 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 65 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 38 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 66 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 100
# 67 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 39 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 68 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare NUM_SWITCHES_PRESSED, 7
# 69 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_5
# 70 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_4:
# 71 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 42 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 72 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 73 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 74 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 75 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_2:
# 76 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 35 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 77 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 78 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_1
# 79 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 80 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_5:
# 81 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 40 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 82 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 83 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_4
# 84 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 85 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 86 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2::
# 87 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 47 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 88 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 89 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 48 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 90 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_2, 100
# 91 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_2
# 92 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_1:
# 93 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 51 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 94 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 95 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 52 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 96 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 100
# 97 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 53 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 98 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare NUM_SWITCHES_PRESSED, 7
# 99 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_5
# 100 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_4:
# 101 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 56 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 102 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 103 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 104 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 105 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_2:
# 106 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 49 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 107 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 108 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_1
# 109 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 110 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_5:
# 111 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 54 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 112 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 113 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_4
# 114 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 115 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 116 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3::
# 117 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 61 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 118 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 119 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 62 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 120 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_3, 100
# 121 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_2
# 122 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_1:
# 123 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 65 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 124 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 125 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 66 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 126 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_3, 100
# 127 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 67 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 128 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare NUM_SWITCHES_PRESSED, 7
# 129 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_5
# 130 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_4:
# 131 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 70 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 132 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 133 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 134 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 135 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_2:
# 136 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 63 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 137 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 138 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_1
# 139 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 140 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_5:
# 141 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 68 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 142 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 143 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_4
# 144 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 145 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 146 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4::
# 147 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 75 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 148 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 149 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 76 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 150 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_4, 100
# 151 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_2
# 152 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_1:
# 153 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 79 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 154 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 155 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 80 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 156 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_4, 100
# 157 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 81 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 158 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare NUM_SWITCHES_PRESSED, 7
# 159 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_5
# 160 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_4:
# 161 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 84 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 162 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 163 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 164 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 165 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_2:
# 166 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 77 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 167 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 168 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_1
# 169 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 170 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_5:
# 171 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 82 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 172 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 173 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_4
# 174 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 175 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 176 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5::
# 177 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 89 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 178 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 179 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 90 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 180 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_5, 100
# 181 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_2
# 182 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_1:
# 183 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 93 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 184 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 185 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 94 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 186 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_5, 100
# 187 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 95 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 188 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare NUM_SWITCHES_PRESSED, 7
# 189 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_5
# 190 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_4:
# 191 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 98 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 192 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 193 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 194 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 195 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_2:
# 196 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 91 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 197 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 198 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_1
# 199 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 200 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_5:
# 201 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 96 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 202 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 203 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_4
# 204 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 205 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 206 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6::
# 207 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 103 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 208 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 209 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 104 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 210 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_6, 100
# 211 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_2
# 212 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_1:
# 213 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 107 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 214 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 215 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 108 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 216 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_6, 100
# 217 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 109 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 218 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare NUM_SWITCHES_PRESSED, 7
# 219 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_5
# 220 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_4:
# 221 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 112 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 222 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 223 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 224 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 225 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_2:
# 226 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 105 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 227 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 228 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_1
# 229 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 230 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_5:
# 231 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 110 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 232 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 233 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_4
# 234 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 235 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 236 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7::
# 237 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 117 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 238 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 239 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 118 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 240 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_7, 100
# 241 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_2
# 242 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_1:
# 243 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 121 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 244 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 245 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 122 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 246 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_7, 100
# 247 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 123 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 248 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare NUM_SWITCHES_PRESSED, 7
# 249 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_5
# 250 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_4:
# 251 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 126 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 252 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 253 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 254 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 255 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_2:
# 256 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 119 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 257 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed
# 258 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_1
# 259 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 260 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_5:
# 261 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 124 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 262 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
# 263 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_4
# 264 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 265 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 266 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed::
# 267 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 131 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 268 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	addvar NUM_SWITCHES_PRESSED, 1
# 269 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 132 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 270 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	playse SE_TRUCK_MOVE
# 271 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 133 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 272 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 273 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 134 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 274 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 1
# 275 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 135 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 276 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 8
# 277 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 136 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 278 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 279 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 137 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 280 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 281 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 138 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 282 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
# 283 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	return
# 284 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 285 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 286 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen::
# 287 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 143 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 288 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 289 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 144 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 290 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 2
# 291 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 145 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 292 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 10
# 293 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 146 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 294 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 295 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 147 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 296 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 297 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 148 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 298 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
# 299 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 149 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 300 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 301 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 150 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 302 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 3
# 303 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 151 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 304 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 305 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 152 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 306 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 2
# 307 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 153 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 308 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 309 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 154 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 310 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
# 311 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 155 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 312 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	playse SE_LAVARIDGE_FALL_WARP
# 313 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 156 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 314 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	waitse
# 315 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	return
# 316 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 317 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 318 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchAlreadyPressed::
# 319 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 161 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 320 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 321 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 322 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 323 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 324 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved::
# 325 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 166 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 326 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolvedShakeScreen
# 327 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 167 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 328 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway
# 329 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 168 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 330 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_TANOBY_RUINS
# 331 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 169 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 332 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
# 333 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	end
# 334 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 335 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"

# 336 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway::
# 337 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 173 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
# 338 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	.string "A mysterious rumble echoed\n"
# 339 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	.string "somewhere far away.$"
