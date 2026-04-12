# 1 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 2 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_Frlg_MapScripts::
# 3 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 5 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 6 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect::
# 7 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 4 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 8 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	lockall
# 9 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 5 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 10 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT, RocketHideout_Elevator_EventScript_FloorSelect_2
# 11 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect_1:
# 12 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 8 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 13 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 14 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 9 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 15 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, RocketHideout_Elevator_EventScript_FloorSelect_5
# 16 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect_4:
# 17 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 12 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 18 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 19 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 13 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 20 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 21 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 14 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 22 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 23 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 15 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 24 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	waitmessage
# 25 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 16 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 26 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 27 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 17 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 28 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 29 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 18 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 30 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 19 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 32 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 0, RocketHideout_Elevator_EventScript_FloorSelect_9
# 33 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 21 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 34 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 1, RocketHideout_Elevator_EventScript_FloorSelect_10
# 35 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 23 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 36 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 2, RocketHideout_Elevator_EventScript_FloorSelect_11
# 37 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect_7:
# 38 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 39 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 40 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect_2:
# 41 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 6 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 42 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_NeedKey
# 43 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_FloorSelect_1
# 44 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 45 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect_5:
# 46 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 10 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 47 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
# 48 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_FloorSelect_4
# 49 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 50 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect_9:
# 51 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 20 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 52 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_FloorSelectFromB1F
# 53 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_FloorSelect_7
# 54 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 55 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect_10:
# 56 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 22 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 57 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_FloorSelectFromB2F
# 58 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_FloorSelect_7
# 59 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 60 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelect_11:
# 61 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 24 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 62 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_FloorSelectFromB4F
# 63 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_FloorSelect_7
# 64 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 65 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 66 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelectFromB1F::
# 67 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 30 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 68 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROCKET_HIDEOUT_ELEVATOR, 0, FALSE
# 69 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 31 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 70 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor
# 71 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 72 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 73 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 74 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelectFromB2F::
# 75 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 36 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 76 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROCKET_HIDEOUT_ELEVATOR, 1, FALSE
# 77 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 37 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 78 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor
# 79 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 80 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 81 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 82 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_FloorSelectFromB4F::
# 83 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 42 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 84 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROCKET_HIDEOUT_ELEVATOR, 2, FALSE
# 85 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 43 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 86 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor
# 87 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 88 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 89 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 90 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ChooseFloor::
# 91 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 48 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 92 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 49 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 94 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 0, RocketHideout_Elevator_EventScript_ChooseFloor_3
# 95 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 51 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 96 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 1, RocketHideout_Elevator_EventScript_ChooseFloor_4
# 97 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 53 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 98 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 2, RocketHideout_Elevator_EventScript_ChooseFloor_5
# 99 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 55 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 100 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 3, RocketHideout_Elevator_EventScript_ChooseFloor_6
# 101 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 57 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 102 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 127, RocketHideout_Elevator_EventScript_ChooseFloor_7
# 103 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ChooseFloor_1:
# 104 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 105 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 106 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ChooseFloor_3:
# 107 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 50 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 108 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ToB1F
# 109 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1
# 110 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 111 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ChooseFloor_4:
# 112 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 52 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 113 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ToB2F
# 114 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1
# 115 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 116 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ChooseFloor_5:
# 117 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 54 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 118 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ToB4F
# 119 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1
# 120 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 121 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ChooseFloor_6:
# 122 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 56 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 123 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
# 124 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1
# 125 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 126 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ChooseFloor_7:
# 127 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 58 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 128 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
# 129 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1
# 130 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 131 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 132 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB1F::
# 133 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 64 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 134 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 135 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 65 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 136 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B1F, 255, 24, 25
# 137 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 66 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 138 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 3
# 139 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto_if_eq RocketHideout_Elevator_EventScript_ToB1F_2
# 140 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB1F_1:
# 141 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 69 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 142 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	call RocketHideout_Elevator_EventScript_MoveElevator
# 143 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 70 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 144 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 3
# 145 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 71 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 146 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
# 147 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 148 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 149 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB1F_2:
# 150 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 67 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 151 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
# 152 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ToB1F_1
# 153 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 154 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 155 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB2F::
# 156 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 76 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 157 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 2
# 158 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 77 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 159 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B2F, 255, 28, 16
# 160 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 78 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 161 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 2
# 162 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto_if_eq RocketHideout_Elevator_EventScript_ToB2F_2
# 163 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB2F_1:
# 164 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 81 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 165 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	call RocketHideout_Elevator_EventScript_MoveElevator
# 166 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 82 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 167 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 2
# 168 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 83 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 169 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
# 170 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 171 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 172 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB2F_2:
# 173 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 79 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 174 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
# 175 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ToB2F_1
# 176 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 177 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 178 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB4F::
# 179 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 88 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 180 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 0
# 181 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 89 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 182 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B4F, 255, 20, 23
# 183 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 90 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 184 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 0
# 185 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto_if_eq RocketHideout_Elevator_EventScript_ToB4F_2
# 186 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB4F_1:
# 187 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 93 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 188 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	call RocketHideout_Elevator_EventScript_MoveElevator
# 189 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 94 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 190 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 0
# 191 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 95 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 192 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
# 193 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 194 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 195 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ToB4F_2:
# 196 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 91 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 197 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
# 198 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ToB4F_1
# 199 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 200 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 201 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_ExitFloorSelect::
# 202 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 100 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 203 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 204 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 101 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 205 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	releaseall
# 206 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 207 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 208 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 209 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_MoveElevator::
# 210 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 106 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 211 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 212 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 107 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 213 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	closemessage
# 214 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 108 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 215 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	waitse
# 216 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 109 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 217 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 218 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 110 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 219 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	waitstate
# 220 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 111 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 221 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 222 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	return
# 223 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 224 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 225 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_EventScript_NeedKey::
# 226 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 116 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 227 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	msgbox RocketHideout_Elevator_Text_AppearsToNeedAKey
# 228 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 117 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 229 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	releaseall
# 230 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	end
# 231 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 232 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"

# 233 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
RocketHideout_Elevator_Text_AppearsToNeedAKey::
# 234 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 121 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
# 235 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	.string "It appears to need a key.$"
