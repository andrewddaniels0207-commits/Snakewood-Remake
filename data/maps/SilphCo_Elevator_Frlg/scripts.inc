# 1 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_Frlg_MapScripts::
# 3 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 5 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect::
# 7 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 8 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	lockall
# 9 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 5 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 11 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 12 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, SilphCo_Elevator_EventScript_FloorSelect_2
# 13 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_1:
# 14 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 9 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 15 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 16 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 17 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 18 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 11 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 20 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 12 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 21 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 23 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_SILPHCO_FLOORS
# 24 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 14 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 26 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 15 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 28 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 29 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitstate
# 30 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 17 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 31 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 18 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 33 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 0, SilphCo_Elevator_EventScript_FloorSelect_6
# 34 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 20 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 35 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 1, SilphCo_Elevator_EventScript_FloorSelect_7
# 36 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 37 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 2, SilphCo_Elevator_EventScript_FloorSelect_8
# 38 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 39 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 3, SilphCo_Elevator_EventScript_FloorSelect_9
# 40 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 26 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 41 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 4, SilphCo_Elevator_EventScript_FloorSelect_10
# 42 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 28 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 43 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 5, SilphCo_Elevator_EventScript_FloorSelect_11
# 44 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 6, SilphCo_Elevator_EventScript_FloorSelect_12
# 46 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 47 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 7, SilphCo_Elevator_EventScript_FloorSelect_13
# 48 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 34 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 49 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 8, SilphCo_Elevator_EventScript_FloorSelect_14
# 50 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 36 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 9, SilphCo_Elevator_EventScript_FloorSelect_15
# 52 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 38 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 10, SilphCo_Elevator_EventScript_FloorSelect_16
# 54 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 40 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 55 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 11, SilphCo_Elevator_EventScript_FloorSelect_17
# 56 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 42 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 57 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 127, SilphCo_Elevator_EventScript_FloorSelect_18
# 58 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_4:
# 59 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 60 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 61 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_2:
# 62 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 63 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
# 64 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_1
# 65 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 66 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_6:
# 67 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 68 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To11F
# 69 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 70 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 71 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_7:
# 72 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 21 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To10F
# 74 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 75 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 76 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_8:
# 77 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 23 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 78 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To9F
# 79 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 80 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 81 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_9:
# 82 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To8F
# 84 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 85 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 86 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_10:
# 87 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 88 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To7F
# 89 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 90 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 91 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_11:
# 92 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 29 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 93 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To6F
# 94 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 95 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 96 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_12:
# 97 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 31 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 98 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To5F
# 99 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 100 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 101 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_13:
# 102 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 33 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 103 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To4F
# 104 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 105 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 106 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_14:
# 107 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 35 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 108 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To3F
# 109 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 110 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 111 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_15:
# 112 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 37 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 113 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To2F
# 114 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 115 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 116 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_16:
# 117 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 39 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 118 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To1F
# 119 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 120 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 121 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_17:
# 122 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 41 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 123 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 124 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 125 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 126 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_FloorSelect_18:
# 127 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 43 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 128 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 129 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_FloorSelect_4
# 130 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 131 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 132 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To1F::
# 133 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 49 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 134 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 4
# 135 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 50 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 136 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_1F, 255, 22, 3
# 137 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 138 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 4
# 139 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To1F_2
# 140 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To1F_1:
# 141 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 54 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 142 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 143 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 55 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 144 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 4
# 145 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 56 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 146 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 147 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 148 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 149 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To1F_2:
# 150 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 52 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 151 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 152 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To1F_1
# 153 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 154 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 155 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To2F::
# 156 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 61 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 157 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 5
# 158 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 62 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 159 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_2F, 255, 22, 3
# 160 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 63 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 161 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 5
# 162 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To2F_2
# 163 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To2F_1:
# 164 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 66 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 165 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 166 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 67 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 167 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 5
# 168 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 68 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 169 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 170 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 171 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 172 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To2F_2:
# 173 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 64 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 174 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 175 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To2F_1
# 176 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 177 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 178 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To3F::
# 179 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 180 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 6
# 181 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 74 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 182 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_3F, 255, 22, 3
# 183 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 75 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 184 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 6
# 185 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To3F_2
# 186 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To3F_1:
# 187 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 78 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 188 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 189 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 79 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 190 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 6
# 191 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 80 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 192 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 193 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 194 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 195 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To3F_2:
# 196 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 76 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 197 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 198 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To3F_1
# 199 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 200 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 201 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To4F::
# 202 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 85 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 203 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 7
# 204 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 86 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 205 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_4F, 255, 22, 3
# 206 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 87 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 207 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 7
# 208 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To4F_2
# 209 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To4F_1:
# 210 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 90 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 211 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 212 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 213 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 7
# 214 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 92 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 215 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 216 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 217 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 218 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To4F_2:
# 219 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 88 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 220 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 221 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To4F_1
# 222 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 223 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 224 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To5F::
# 225 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 97 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 226 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 8
# 227 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 98 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 228 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_5F, 255, 22, 3
# 229 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 230 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 8
# 231 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To5F_2
# 232 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To5F_1:
# 233 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 102 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 234 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 235 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 103 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 236 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 8
# 237 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 104 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 238 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 239 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 240 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 241 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To5F_2:
# 242 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 100 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 243 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 244 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To5F_1
# 245 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 246 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 247 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To6F::
# 248 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 109 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 249 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 9
# 250 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 110 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 251 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_6F, 255, 20, 3
# 252 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 111 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 253 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 9
# 254 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To6F_2
# 255 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To6F_1:
# 256 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 114 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 257 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 258 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 115 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 259 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 9
# 260 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 116 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 261 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 262 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 263 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 264 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To6F_2:
# 265 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 112 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 266 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 267 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To6F_1
# 268 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 269 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 270 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To7F::
# 271 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 121 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 272 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 10
# 273 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 122 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 274 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_7F, 255, 23, 3
# 275 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 123 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 276 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 10
# 277 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To7F_2
# 278 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To7F_1:
# 279 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 126 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 280 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 281 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 127 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 282 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 10
# 283 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 128 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 284 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 285 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 286 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 287 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To7F_2:
# 288 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 124 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 289 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 290 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To7F_1
# 291 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 292 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 293 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To8F::
# 294 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 133 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 295 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 11
# 296 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 134 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 297 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_8F, 255, 22, 3
# 298 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 135 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 299 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 11
# 300 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To8F_2
# 301 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To8F_1:
# 302 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 138 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 303 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 304 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 139 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 305 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 11
# 306 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 140 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 307 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 308 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 309 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 310 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To8F_2:
# 311 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 136 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 312 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 313 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To8F_1
# 314 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 315 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 316 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To9F::
# 317 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 145 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 318 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 319 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 146 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 320 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_9F, 255, 24, 3
# 321 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 147 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 322 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 12
# 323 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To9F_2
# 324 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To9F_1:
# 325 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 150 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 326 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 327 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 151 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 328 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 12
# 329 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 152 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 330 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 331 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 332 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 333 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To9F_2:
# 334 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 148 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 335 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 336 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To9F_1
# 337 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 338 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 339 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To10F::
# 340 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 157 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 341 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 13
# 342 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 158 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 343 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_10F, 255, 13, 3
# 344 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 159 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 345 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 13
# 346 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To10F_2
# 347 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To10F_1:
# 348 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 162 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 349 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 350 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 163 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 351 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 13
# 352 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 164 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 353 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 354 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 355 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 356 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To10F_2:
# 357 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 160 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 358 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 359 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To10F_1
# 360 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 361 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 362 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To11F::
# 363 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 169 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 364 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 14
# 365 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 170 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 366 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_11F, 255, 13, 3
# 367 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 171 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 368 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 14
# 369 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_eq SilphCo_Elevator_EventScript_To11F_2
# 370 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To11F_1:
# 371 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 174 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 372 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 373 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 175 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 374 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 14
# 375 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 176 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 376 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 377 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 378 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 379 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_To11F_2:
# 380 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 172 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 381 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
# 382 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To11F_1
# 383 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 384 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 385 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_ExitFloorSelect::
# 386 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 181 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 387 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 388 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 182 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 389 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	releaseall
# 390 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	end
# 391 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 392 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"

# 393 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
SilphCo_Elevator_EventScript_MoveElevator::
# 394 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 187 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 395 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 396 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 188 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 397 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	closemessage
# 398 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 189 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 399 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitse
# 400 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 190 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 401 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 402 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 191 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 403 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitstate
# 404 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 192 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
# 405 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 406 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	return
