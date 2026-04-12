# 1 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 6 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant::
# 7 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 4 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 8 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 5 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 10 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	faceplayer
# 11 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 6 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 12 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8004, 0
# 13 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 7 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 14 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto_if_unset FLAG_TEMP_2, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_2
# 15 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_1:
# 16 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 10 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 17 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
# 18 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 11 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 19 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special ShowDeptStoreElevatorFloorSelect
# 20 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 12 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 21 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	message gText_WhichFloorWouldYouLike
# 22 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 13 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 23 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	waitmessage
# 24 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 14 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 25 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8004, 0
# 26 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 15 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 27 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
# 28 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 16 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 29 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 17 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 31 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_6
# 32 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 19 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 33 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_7
# 34 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 21 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 35 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_8
# 36 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 23 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 37 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 3, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_9
# 38 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 25 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 39 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 4, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_10
# 40 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4:
# 41 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 43 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_2:
# 44 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 8 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 45 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	call LilycoveCity_DepartmentStoreElevator_EventScript_SetFloor
# 46 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_1
# 47 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 48 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_6:
# 49 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 18 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 50 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom5th
# 51 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4
# 52 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 53 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_7:
# 54 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 20 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 55 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom4th
# 56 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4
# 57 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 58 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_8:
# 59 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 22 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 60 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom3rd
# 61 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4
# 62 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 63 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_9:
# 64 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 24 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 65 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom2nd
# 66 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4
# 67 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 68 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_10:
# 69 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 26 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 70 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom1st
# 71 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4
# 72 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 73 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 74 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom5th::
# 75 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 32 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 76 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
# 77 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 33 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 78 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor
# 79 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 80 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 81 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 82 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom4th::
# 83 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 38 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 84 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
# 85 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 39 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 86 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor
# 87 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 88 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 89 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 90 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom3rd::
# 91 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 44 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 92 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
# 93 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 45 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 94 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor
# 95 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 96 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 97 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 98 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom2nd::
# 99 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 50 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 100 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
# 101 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 51 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 102 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor
# 103 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 104 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 105 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 106 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloorFrom1st::
# 107 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 56 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 108 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
# 109 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 57 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 110 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor
# 111 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 112 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 113 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 114 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor::
# 115 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 62 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 116 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 63 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 118 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_3
# 119 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 65 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 120 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_4
# 121 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 67 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 122 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_5
# 123 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 69 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 124 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 3, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_6
# 125 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 71 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 126 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 4, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_7
# 127 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 73 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 128 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 5, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_8
# 129 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 75 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 130 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_9
# 131 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1:
# 132 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 133 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 134 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_3:
# 135 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 64 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 136 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_5thFloor
# 137 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1
# 138 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 139 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_4:
# 140 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 66 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 141 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_4thFloor
# 142 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1
# 143 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 144 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_5:
# 145 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 68 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 146 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_3rdFloor
# 147 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1
# 148 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 149 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_6:
# 150 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 70 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 151 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2ndFloor
# 152 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1
# 153 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 154 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_7:
# 155 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 72 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 156 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_1stFloor
# 157 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1
# 158 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 159 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_8:
# 160 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 74 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 161 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 162 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1
# 163 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 164 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_9:
# 165 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 76 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 166 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 167 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1
# 168 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 169 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 170 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_1stFloor::
# 171 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 82 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 172 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
# 173 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 83 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 174 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_1F, 2, 1
# 175 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 84 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 176 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	compare VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
# 177 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_1stFloor_2
# 178 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_1stFloor_1:
# 179 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 87 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 180 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	call LilycoveCity_DepartmentStoreElevator_EventScript_MoveElevator
# 181 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 88 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 182 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_1F
# 183 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 89 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 184 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 185 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 186 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 187 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_1stFloor_2:
# 188 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 85 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 189 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 190 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_1stFloor_1
# 191 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 192 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 193 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_2ndFloor::
# 194 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 94 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 195 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
# 196 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 95 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 197 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_2F, 2, 1
# 198 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 96 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 199 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	compare VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
# 200 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_2ndFloor_2
# 201 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_2ndFloor_1:
# 202 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 99 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 203 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	call LilycoveCity_DepartmentStoreElevator_EventScript_MoveElevator
# 204 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 100 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 205 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_2F
# 206 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 101 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 207 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 208 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 209 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 210 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_2ndFloor_2:
# 211 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 97 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 212 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 213 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_2ndFloor_1
# 214 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 215 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 216 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_3rdFloor::
# 217 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 106 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 218 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
# 219 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 107 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 220 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_3F, 2, 1
# 221 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 108 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 222 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	compare VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
# 223 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_3rdFloor_2
# 224 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_3rdFloor_1:
# 225 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 111 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 226 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	call LilycoveCity_DepartmentStoreElevator_EventScript_MoveElevator
# 227 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 112 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 228 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_3F
# 229 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 113 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 230 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 231 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 232 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 233 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_3rdFloor_2:
# 234 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 109 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 235 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 236 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_3rdFloor_1
# 237 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 238 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 239 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_4thFloor::
# 240 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 118 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 241 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
# 242 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 119 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 243 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_4F, 2, 1
# 244 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 120 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 245 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	compare VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
# 246 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_4thFloor_2
# 247 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_4thFloor_1:
# 248 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 123 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 249 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	call LilycoveCity_DepartmentStoreElevator_EventScript_MoveElevator
# 250 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 124 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 251 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_4F
# 252 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 125 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 253 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 254 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 255 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 256 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_4thFloor_2:
# 257 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 121 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 258 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 259 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_4thFloor_1
# 260 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 261 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 262 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_5thFloor::
# 263 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 130 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 264 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
# 265 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 131 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 266 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F, 2, 1
# 267 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 132 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 268 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	compare VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
# 269 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto_if_eq LilycoveCity_DepartmentStoreElevator_EventScript_5thFloor_2
# 270 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_5thFloor_1:
# 271 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 135 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 272 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	call LilycoveCity_DepartmentStoreElevator_EventScript_MoveElevator
# 273 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 136 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 274 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, DEPT_STORE_FLOORNUM_5F
# 275 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 137 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 276 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 277 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 278 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 279 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_5thFloor_2:
# 280 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 133 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 281 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
# 282 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_5thFloor_1
# 283 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 284 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 285 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect::
# 286 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 142 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 287 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 288 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 143 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 289 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	release
# 290 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	end
# 291 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 292 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 293 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_MoveElevator::
# 294 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 148 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 295 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 296 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 149 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 297 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	closemessage
# 298 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 150 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 299 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 300 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 151 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 301 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	waitmovement 0
# 302 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 152 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 303 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	waitse
# 304 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 153 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 305 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special MoveElevator
# 306 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 154 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 307 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	waitstate
# 308 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 155 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 309 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setflag FLAG_TEMP_2
# 310 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	return
# 311 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 312 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"

# 313 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
LilycoveCity_DepartmentStoreElevator_EventScript_SetFloor::
# 314 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 160 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
# 315 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special SetDeptStoreFloor
# 316 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	return
