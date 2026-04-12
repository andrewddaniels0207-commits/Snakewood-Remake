SilphCo_Elevator_Frlg_MapScripts::
	.byte 0


SilphCo_Elevator_EventScript_FloorSelect::
# 4 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	lockall
# 5 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 6 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, SilphCo_Elevator_EventScript_FloorSelect_2
SilphCo_Elevator_EventScript_FloorSelect_1:
# 9 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 10 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 11 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 12 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitmessage
# 13 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_SILPHCO_FLOORS
# 14 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 15 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 16 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitstate
# 17 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 0, SilphCo_Elevator_EventScript_FloorSelect_6
# 20 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 1, SilphCo_Elevator_EventScript_FloorSelect_7
# 22 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 2, SilphCo_Elevator_EventScript_FloorSelect_8
# 24 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 3, SilphCo_Elevator_EventScript_FloorSelect_9
# 26 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 4, SilphCo_Elevator_EventScript_FloorSelect_10
# 28 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 5, SilphCo_Elevator_EventScript_FloorSelect_11
# 30 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 6, SilphCo_Elevator_EventScript_FloorSelect_12
# 32 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 7, SilphCo_Elevator_EventScript_FloorSelect_13
# 34 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 8, SilphCo_Elevator_EventScript_FloorSelect_14
# 36 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 9, SilphCo_Elevator_EventScript_FloorSelect_15
# 38 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 10, SilphCo_Elevator_EventScript_FloorSelect_16
# 40 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 11, SilphCo_Elevator_EventScript_FloorSelect_17
# 42 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 127, SilphCo_Elevator_EventScript_FloorSelect_18
SilphCo_Elevator_EventScript_FloorSelect_4:
	end

SilphCo_Elevator_EventScript_FloorSelect_2:
# 7 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
	goto SilphCo_Elevator_EventScript_FloorSelect_1

SilphCo_Elevator_EventScript_FloorSelect_6:
# 19 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To11F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_7:
# 21 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To10F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_8:
# 23 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To9F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_9:
# 25 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To8F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_10:
# 27 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To7F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_11:
# 29 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To6F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_12:
# 31 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To5F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_13:
# 33 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To4F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_14:
# 35 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To3F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_15:
# 37 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To2F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_16:
# 39 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_To1F
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_17:
# 41 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_18:
# 43 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_FloorSelect_4


SilphCo_Elevator_EventScript_To1F::
# 49 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 4
# 50 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_1F, 255, 22, 3
# 51 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 4
	goto_if_eq SilphCo_Elevator_EventScript_To1F_2
SilphCo_Elevator_EventScript_To1F_1:
# 54 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 55 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 4
# 56 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To1F_2:
# 52 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To1F_1


SilphCo_Elevator_EventScript_To2F::
# 61 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 5
# 62 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_2F, 255, 22, 3
# 63 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 5
	goto_if_eq SilphCo_Elevator_EventScript_To2F_2
SilphCo_Elevator_EventScript_To2F_1:
# 66 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 67 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 5
# 68 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To2F_2:
# 64 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To2F_1


SilphCo_Elevator_EventScript_To3F::
# 73 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 6
# 74 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_3F, 255, 22, 3
# 75 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 6
	goto_if_eq SilphCo_Elevator_EventScript_To3F_2
SilphCo_Elevator_EventScript_To3F_1:
# 78 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 79 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 6
# 80 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To3F_2:
# 76 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To3F_1


SilphCo_Elevator_EventScript_To4F::
# 85 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 7
# 86 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_4F, 255, 22, 3
# 87 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 7
	goto_if_eq SilphCo_Elevator_EventScript_To4F_2
SilphCo_Elevator_EventScript_To4F_1:
# 90 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 91 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 7
# 92 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To4F_2:
# 88 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To4F_1


SilphCo_Elevator_EventScript_To5F::
# 97 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 8
# 98 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_5F, 255, 22, 3
# 99 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 8
	goto_if_eq SilphCo_Elevator_EventScript_To5F_2
SilphCo_Elevator_EventScript_To5F_1:
# 102 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 103 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 8
# 104 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To5F_2:
# 100 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To5F_1


SilphCo_Elevator_EventScript_To6F::
# 109 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 9
# 110 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_6F, 255, 20, 3
# 111 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 9
	goto_if_eq SilphCo_Elevator_EventScript_To6F_2
SilphCo_Elevator_EventScript_To6F_1:
# 114 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 115 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 9
# 116 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To6F_2:
# 112 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To6F_1


SilphCo_Elevator_EventScript_To7F::
# 121 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 10
# 122 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_7F, 255, 23, 3
# 123 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 10
	goto_if_eq SilphCo_Elevator_EventScript_To7F_2
SilphCo_Elevator_EventScript_To7F_1:
# 126 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 127 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 10
# 128 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To7F_2:
# 124 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To7F_1


SilphCo_Elevator_EventScript_To8F::
# 133 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 11
# 134 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_8F, 255, 22, 3
# 135 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 11
	goto_if_eq SilphCo_Elevator_EventScript_To8F_2
SilphCo_Elevator_EventScript_To8F_1:
# 138 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 139 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 11
# 140 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To8F_2:
# 136 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To8F_1


SilphCo_Elevator_EventScript_To9F::
# 145 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 146 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_9F, 255, 24, 3
# 147 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 12
	goto_if_eq SilphCo_Elevator_EventScript_To9F_2
SilphCo_Elevator_EventScript_To9F_1:
# 150 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 151 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 12
# 152 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To9F_2:
# 148 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To9F_1


SilphCo_Elevator_EventScript_To10F::
# 157 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 13
# 158 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_10F, 255, 13, 3
# 159 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 13
	goto_if_eq SilphCo_Elevator_EventScript_To10F_2
SilphCo_Elevator_EventScript_To10F_1:
# 162 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 163 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 13
# 164 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To10F_2:
# 160 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To10F_1


SilphCo_Elevator_EventScript_To11F::
# 169 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 14
# 170 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_11F, 255, 13, 3
# 171 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 14
	goto_if_eq SilphCo_Elevator_EventScript_To11F_2
SilphCo_Elevator_EventScript_To11F_1:
# 174 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call SilphCo_Elevator_EventScript_MoveElevator
# 175 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 14
# 176 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To11F_2:
# 172 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_To11F_1


SilphCo_Elevator_EventScript_ExitFloorSelect::
# 181 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 182 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	releaseall
	end


SilphCo_Elevator_EventScript_MoveElevator::
# 187 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 188 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	closemessage
# 189 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitse
# 190 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 191 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitstate
# 192 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
	return

