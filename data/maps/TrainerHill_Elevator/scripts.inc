TrainerHill_Elevator_MapScripts::
# 2 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TrainerHill_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, TrainerHill_Elevator_EventScript_EnterElevator
	.2byte 0


TrainerHill_Elevator_EventScript_Attendant::
	end


TrainerHill_Elevator_EventScript_ExitToRoof::
# 12 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerExitElevatorToRoof
# 13 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 14 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 15 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ROOF, 15, 5
# 16 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
	end


TrainerHill_Elevator_EventScript_EnterElevator::
# 21 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerApproachAttendant
# 22 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 23 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, TrainerHill_Elevator_Movement_AttendantFacePlayer
# 24 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 25 "data/maps/TrainerHill_Elevator/scripts.pory"
	lockall
# 26 "data/maps/TrainerHill_Elevator/scripts.pory"
	msgbox TrainerHill_Elevator_Text_ReturnToReception, MSGBOX_YESNO
# 27 "data/maps/TrainerHill_Elevator/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TrainerHill_Elevator_EventScript_EnterElevator_2
TrainerHill_Elevator_EventScript_EnterElevator_1:
# 30 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 31 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, TrainerHill_Elevator_Movement_AttendantFaceDown
# 32 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 33 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerMoveToCenterOfElevator
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 35 "data/maps/TrainerHill_Elevator/scripts.pory"
	call TrainerHill_Elevator_EventScript_MoveElevator
# 36 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay 25
# 37 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerExitElevator
# 38 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 39 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ENTRANCE, 17, 8
# 40 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
	end

TrainerHill_Elevator_EventScript_EnterElevator_2:
# 28 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto TrainerHill_Elevator_EventScript_ExitToRoof
	goto TrainerHill_Elevator_EventScript_EnterElevator_1


TrainerHill_Elevator_EventScript_ExitFloorSelect::
# 45 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto TrainerHill_Elevator_EventScript_CloseFloorSelect
	end


TrainerHill_Elevator_EventScript_CloseFloorSelect::
# 50 "data/maps/TrainerHill_Elevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 51 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
	end


TrainerHill_Elevator_EventScript_MoveElevator::
# 56 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitse
# 57 "data/maps/TrainerHill_Elevator/scripts.pory"
	special MoveElevator
# 58 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
	return


# 62 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerMoveToCenterOfElevator:
# 63 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 64 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 65 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_right
# 66 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 67 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end

# 70 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerApproachAttendant:
# 71 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 72 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_left
# 73 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end

# 76 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerExitElevator:
# 77 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 78 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 79 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 80 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end

# 83 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerExitElevatorToRoof:
# 84 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 85 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 86 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end

# 89 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_AttendantFacePlayer:
# 90 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_right
# 91 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end

# 94 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_AttendantFaceDown:
# 95 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 96 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
