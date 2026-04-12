TrainerTower_Elevator_Frlg_MapScripts::
# 2 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_OnResume
# 3 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_OnFrame
	.byte 0


TrainerTower_Elevator_EventScript_FloorSelect::
# 7 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	lockall
# 8 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 9 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, TrainerTower_Elevator_EventScript_FloorSelect_2
TrainerTower_Elevator_EventScript_FloorSelect_1:
# 12 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 13 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 14 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 15 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitmessage
# 16 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 17 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 18 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 0, TrainerTower_Elevator_EventScript_FloorSelect_6
# 21 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 1, TrainerTower_Elevator_EventScript_FloorSelect_7
TrainerTower_Elevator_EventScript_FloorSelect_4:
	end

TrainerTower_Elevator_EventScript_FloorSelect_2:
# 10 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
	goto TrainerTower_Elevator_EventScript_FloorSelect_1

TrainerTower_Elevator_EventScript_FloorSelect_6:
# 20 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_FloorSelectFromRoof
	goto TrainerTower_Elevator_EventScript_FloorSelect_4

TrainerTower_Elevator_EventScript_FloorSelect_7:
# 22 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_FloorSelectFromLobby
	goto TrainerTower_Elevator_EventScript_FloorSelect_4


TrainerTower_Elevator_EventScript_FloorSelectFromRoof::
# 28 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROOFTOP_B1F, 0, FALSE
# 29 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor
	end


TrainerTower_Elevator_EventScript_FloorSelectFromLobby::
# 34 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROOFTOP_B1F, 1, FALSE
# 35 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_ChooseFloor
	end


TrainerTower_Elevator_EventScript_ChooseFloor::
# 40 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 0, TrainerTower_Elevator_EventScript_ChooseFloor_3
# 43 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 1, TrainerTower_Elevator_EventScript_ChooseFloor_4
# 45 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 2, TrainerTower_Elevator_EventScript_ChooseFloor_5
# 47 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case MULTI_B_PRESSED, TrainerTower_Elevator_EventScript_ChooseFloor_6
TrainerTower_Elevator_EventScript_ChooseFloor_1:
	end

TrainerTower_Elevator_EventScript_ChooseFloor_3:
# 42 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_SelectRoof
	goto TrainerTower_Elevator_EventScript_ChooseFloor_1

TrainerTower_Elevator_EventScript_ChooseFloor_4:
# 44 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_SelectLobby
	goto TrainerTower_Elevator_EventScript_ChooseFloor_1

TrainerTower_Elevator_EventScript_ChooseFloor_5:
# 46 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
	goto TrainerTower_Elevator_EventScript_ChooseFloor_1

TrainerTower_Elevator_EventScript_ChooseFloor_6:
# 48 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
	goto TrainerTower_Elevator_EventScript_ChooseFloor_1


TrainerTower_Elevator_EventScript_SelectLobby::
# 54 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 55 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_TRAINER_TOWER_LOBBY, 17, 8
# 56 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 3
	goto_if_eq TrainerTower_Elevator_EventScript_SelectLobby_2
TrainerTower_Elevator_EventScript_SelectLobby_1:
# 59 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	call TrainerTower_Elevator_EventScript_MoveElevator
# 60 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 3
# 61 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 62 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	delay 25
# 63 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Elevator_Movement_ExitElevator
# 64 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	warp MAP_TRAINER_TOWER_LOBBY, 17, 8
# 66 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitstate
# 67 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	releaseall
	end

TrainerTower_Elevator_EventScript_SelectLobby_2:
# 57 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
	goto TrainerTower_Elevator_EventScript_SelectLobby_1


TrainerTower_Elevator_EventScript_SelectRoof::
# 72 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
	end


TrainerTower_Elevator_EventScript_CloseFloorSelect::
# 77 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 78 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	releaseall
	end


TrainerTower_Elevator_EventScript_MoveElevator::
# 83 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 84 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	closemessage
# 85 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitse
# 86 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 87 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitstate
# 88 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
	return


# 92 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_Movement_ExitElevator:
# 93 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_in_place_faster_down
# 94 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	delay_16
# 95 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_down
# 96 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_right
# 97 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_right
# 98 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_down
# 99 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	step_end
