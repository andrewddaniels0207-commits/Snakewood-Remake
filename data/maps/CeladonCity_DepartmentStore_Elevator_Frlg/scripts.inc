# 1 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect::
# 7 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	lockall
# 9 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 5 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 11 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 6 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_2
# 13 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_1:
# 14 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 9 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 16 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 18 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 11 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 20 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 13 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 23 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 24 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 14 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 25 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 26 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 29 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_6
# 30 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_7
# 32 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_8
# 34 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 22 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 35 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_9
# 36 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 4, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_10
# 38 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4:
# 39 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 40 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 41 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_2:
# 42 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 7 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
# 44 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_1
# 45 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 46 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_6:
# 47 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom5F
# 49 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4
# 50 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 51 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_7:
# 52 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 53 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom4F
# 54 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4
# 55 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 56 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_8:
# 57 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom3F
# 59 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4
# 60 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 61 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_9:
# 62 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 23 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom2F
# 64 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4
# 65 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 66 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_10:
# 67 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 25 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom1F
# 69 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4
# 70 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 71 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 72 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom5F::
# 73 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 74 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 0, FALSE
# 75 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 76 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
# 77 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 78 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 79 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 80 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom4F::
# 81 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 37 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 1, FALSE
# 83 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 84 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
# 85 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 86 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 87 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 88 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom3F::
# 89 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 43 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 90 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 2, FALSE
# 91 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 44 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 92 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
# 93 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 94 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 95 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 96 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom2F::
# 97 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 49 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 98 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 3, FALSE
# 99 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 100 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
# 101 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 102 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 103 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 104 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelectFrom1F::
# 105 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 55 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 4, FALSE
# 107 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 108 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
# 109 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 110 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 111 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 112 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor::
# 113 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 61 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 114 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 62 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 116 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_3
# 117 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 64 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 118 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_4
# 119 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 66 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 120 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_5
# 121 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 68 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 122 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_6
# 123 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 70 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 124 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 4, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_7
# 125 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 72 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 126 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 5, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_8
# 127 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 74 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 128 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 127, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_9
# 129 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1:
# 130 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 131 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 132 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_3:
# 133 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 63 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 134 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To5F
# 135 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1
# 136 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 137 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_4:
# 138 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 139 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To4F
# 140 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1
# 141 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 142 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_5:
# 143 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 67 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 144 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To3F
# 145 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1
# 146 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 147 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_6:
# 148 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 69 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 149 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To2F
# 150 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1
# 151 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 152 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_7:
# 153 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 71 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 154 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To1F
# 155 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1
# 156 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 157 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_8:
# 158 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 73 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 159 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 160 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1
# 161 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 162 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_9:
# 163 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 75 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 164 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 165 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1
# 166 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 167 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 168 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To1F::
# 169 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 81 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 170 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 4
# 171 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 82 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 172 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_1F, 255, 6, 1
# 173 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 174 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 4
# 175 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Elevator_EventScript_To1F_2
# 176 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To1F_1:
# 177 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 86 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 178 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 179 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 87 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 180 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 4
# 181 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 88 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 182 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 183 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 184 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 185 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To1F_2:
# 186 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 84 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 187 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 188 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To1F_1
# 189 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 190 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 191 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To2F::
# 192 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 93 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 193 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 5
# 194 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 94 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 195 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_2F, 255, 6, 1
# 196 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 95 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 197 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 5
# 198 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Elevator_EventScript_To2F_2
# 199 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To2F_1:
# 200 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 98 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 201 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 202 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 203 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 5
# 204 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 100 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 205 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 206 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 207 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 208 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To2F_2:
# 209 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 96 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 210 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 211 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To2F_1
# 212 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 213 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 214 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To3F::
# 215 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 105 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 216 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 6
# 217 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 106 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 218 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_3F, 255, 6, 1
# 219 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 107 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 220 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 6
# 221 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Elevator_EventScript_To3F_2
# 222 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To3F_1:
# 223 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 110 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 224 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 225 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 111 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 226 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 6
# 227 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 112 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 228 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 229 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 230 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 231 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To3F_2:
# 232 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 108 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 233 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 234 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To3F_1
# 235 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 236 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 237 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To4F::
# 238 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 117 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 239 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 7
# 240 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 118 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 241 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_4F, 255, 6, 1
# 242 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 119 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 243 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 7
# 244 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Elevator_EventScript_To4F_2
# 245 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To4F_1:
# 246 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 122 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 247 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 248 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 123 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 249 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 7
# 250 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 124 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 251 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 252 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 253 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 254 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To4F_2:
# 255 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 120 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 256 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 257 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To4F_1
# 258 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 259 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 260 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To5F::
# 261 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 129 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 262 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 8
# 263 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 130 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 264 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_5F, 255, 6, 1
# 265 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 131 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 266 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 8
# 267 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto_if_eq CeladonCity_DepartmentStore_Elevator_EventScript_To5F_2
# 268 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To5F_1:
# 269 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 134 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 270 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	call CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator
# 271 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 135 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 272 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 8
# 273 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 136 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 274 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 275 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 276 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 277 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_To5F_2:
# 278 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 132 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 279 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
# 280 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_To5F_1
# 281 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 282 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 283 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect::
# 284 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 141 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 285 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 286 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 142 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 287 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	releaseall
# 288 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	end
# 289 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 290 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"

# 291 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
CeladonCity_DepartmentStore_Elevator_EventScript_MoveElevator::
# 292 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 147 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 293 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 294 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 148 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 295 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	closemessage
# 296 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 149 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 297 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	waitse
# 298 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 150 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 299 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 300 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 151 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 301 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	waitstate
# 302 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 152 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
# 303 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 304 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	return
