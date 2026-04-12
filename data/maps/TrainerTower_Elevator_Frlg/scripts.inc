# 1 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 2 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_Frlg_MapScripts::
# 3 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 2 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 4 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_OnResume
# 5 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 3 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 6 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_OnFrame
# 7 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 9 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 10 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelect::
# 11 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 7 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 12 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	lockall
# 13 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 8 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 14 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 15 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 9 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 16 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, TrainerTower_Elevator_EventScript_FloorSelect_2
# 17 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelect_1:
# 18 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 12 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 19 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 20 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 13 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 21 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 22 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 14 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 23 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 24 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 15 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 25 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitmessage
# 26 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 16 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 27 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 28 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 17 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 29 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 30 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 18 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 31 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 19 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 33 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 0, TrainerTower_Elevator_EventScript_FloorSelect_6
# 34 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 21 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 35 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 1, TrainerTower_Elevator_EventScript_FloorSelect_7
# 36 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelect_4:
# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	end
# 38 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 39 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelect_2:
# 40 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 10 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 41 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
# 42 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_FloorSelect_1
# 43 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 44 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelect_6:
# 45 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 20 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 46 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_FloorSelectFromRoof
# 47 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_FloorSelect_4
# 48 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 49 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelect_7:
# 50 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 22 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 51 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_FloorSelectFromLobby
# 52 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_FloorSelect_4
# 53 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 54 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 55 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelectFromRoof::
# 56 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 28 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 57 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROOFTOP_B1F, 0, FALSE
# 58 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 29 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 59 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor
# 60 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	end
# 61 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 62 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 63 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelectFromLobby::
# 64 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 34 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 65 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROOFTOP_B1F, 1, FALSE
# 66 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 35 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 67 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor
# 68 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	end
# 69 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 70 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 71 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_ChooseFloor::
# 72 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 40 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 73 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 74 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 41 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 75 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 0, TrainerTower_Elevator_EventScript_ChooseFloor_3
# 76 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 43 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 77 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 1, TrainerTower_Elevator_EventScript_ChooseFloor_4
# 78 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 45 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 79 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 2, TrainerTower_Elevator_EventScript_ChooseFloor_5
# 80 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 47 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 81 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case MULTI_B_PRESSED, TrainerTower_Elevator_EventScript_ChooseFloor_6
# 82 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_ChooseFloor_1:
# 83 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	end
# 84 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 85 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_ChooseFloor_3:
# 86 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 42 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 87 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_SelectRoof
# 88 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor_1
# 89 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 90 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_ChooseFloor_4:
# 91 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 44 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 92 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_SelectLobby
# 93 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor_1
# 94 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 95 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_ChooseFloor_5:
# 96 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 46 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 97 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
# 98 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor_1
# 99 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 100 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_ChooseFloor_6:
# 101 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 48 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 102 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
# 103 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor_1
# 104 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 105 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 106 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_SelectLobby::
# 107 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 54 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 108 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 109 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 55 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 110 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_TRAINER_TOWER_LOBBY, 17, 8
# 111 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 56 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 112 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 3
# 113 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto_if_eq TrainerTower_Elevator_EventScript_SelectLobby_2
# 114 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_SelectLobby_1:
# 115 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 59 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 116 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	call TrainerTower_Elevator_EventScript_MoveElevator
# 117 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 60 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 118 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 3
# 119 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 61 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 120 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 121 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 62 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 122 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	delay 25
# 123 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 63 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 124 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Elevator_Movement_ExitElevator
# 125 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 64 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 126 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitmovement 0
# 127 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 65 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 128 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	warp MAP_TRAINER_TOWER_LOBBY, 17, 8
# 129 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 66 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 130 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitstate
# 131 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 67 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 132 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	releaseall
# 133 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	end
# 134 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 135 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_SelectLobby_2:
# 136 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 57 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 137 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
# 138 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_SelectLobby_1
# 139 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 140 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 141 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_SelectRoof::
# 142 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 72 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 143 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
# 144 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	end
# 145 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 146 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 147 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_CloseFloorSelect::
# 148 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 77 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 149 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 150 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 78 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 151 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	releaseall
# 152 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	end
# 153 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 154 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 155 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_MoveElevator::
# 156 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 83 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 157 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 158 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 84 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 159 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	closemessage
# 160 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 85 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 161 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitse
# 162 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 86 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 163 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 164 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 87 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 165 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitstate
# 166 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 88 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 167 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 168 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	return
# 169 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 170 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"

# 171 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 92 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 172 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_Movement_ExitElevator:
# 173 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 93 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 174 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_in_place_faster_down
# 175 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 94 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 176 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	delay_16
# 177 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 95 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 178 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_down
# 179 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 96 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 180 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_right
# 181 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 97 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 182 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_right
# 183 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 98 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 184 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_down
# 185 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 99 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
# 186 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	step_end
