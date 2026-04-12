# 1 "data/maps/TrainerHill_Elevator/scripts.pory"

# 2 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_MapScripts::
# 3 "data/maps/TrainerHill_Elevator/scripts.pory"
# 2 "data/maps/TrainerHill_Elevator/scripts.pory"
# 4 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/TrainerHill_Elevator/scripts.pory"
	.byte 0
# 6 "data/maps/TrainerHill_Elevator/scripts.pory"

# 7 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/TrainerHill_Elevator/scripts.pory"
# 3 "data/maps/TrainerHill_Elevator/scripts.pory"
# 9 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, TrainerHill_Elevator_EventScript_EnterElevator
# 10 "data/maps/TrainerHill_Elevator/scripts.pory"
	.2byte 0
# 11 "data/maps/TrainerHill_Elevator/scripts.pory"

# 12 "data/maps/TrainerHill_Elevator/scripts.pory"

# 13 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_Attendant::
# 14 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 15 "data/maps/TrainerHill_Elevator/scripts.pory"

# 16 "data/maps/TrainerHill_Elevator/scripts.pory"

# 17 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_ExitToRoof::
# 18 "data/maps/TrainerHill_Elevator/scripts.pory"
# 12 "data/maps/TrainerHill_Elevator/scripts.pory"
# 19 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerExitElevatorToRoof
# 20 "data/maps/TrainerHill_Elevator/scripts.pory"
# 13 "data/maps/TrainerHill_Elevator/scripts.pory"
# 21 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 22 "data/maps/TrainerHill_Elevator/scripts.pory"
# 14 "data/maps/TrainerHill_Elevator/scripts.pory"
# 23 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 24 "data/maps/TrainerHill_Elevator/scripts.pory"
# 15 "data/maps/TrainerHill_Elevator/scripts.pory"
# 25 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ROOF, 15, 5
# 26 "data/maps/TrainerHill_Elevator/scripts.pory"
# 16 "data/maps/TrainerHill_Elevator/scripts.pory"
# 27 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
# 28 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 29 "data/maps/TrainerHill_Elevator/scripts.pory"

# 30 "data/maps/TrainerHill_Elevator/scripts.pory"

# 31 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator::
# 32 "data/maps/TrainerHill_Elevator/scripts.pory"
# 21 "data/maps/TrainerHill_Elevator/scripts.pory"
# 33 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerApproachAttendant
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
# 22 "data/maps/TrainerHill_Elevator/scripts.pory"
# 35 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 36 "data/maps/TrainerHill_Elevator/scripts.pory"
# 23 "data/maps/TrainerHill_Elevator/scripts.pory"
# 37 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, TrainerHill_Elevator_Movement_AttendantFacePlayer
# 38 "data/maps/TrainerHill_Elevator/scripts.pory"
# 24 "data/maps/TrainerHill_Elevator/scripts.pory"
# 39 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 40 "data/maps/TrainerHill_Elevator/scripts.pory"
# 25 "data/maps/TrainerHill_Elevator/scripts.pory"
# 41 "data/maps/TrainerHill_Elevator/scripts.pory"
	lockall
# 42 "data/maps/TrainerHill_Elevator/scripts.pory"
# 26 "data/maps/TrainerHill_Elevator/scripts.pory"
# 43 "data/maps/TrainerHill_Elevator/scripts.pory"
	msgbox TrainerHill_Elevator_Text_ReturnToReception, MSGBOX_YESNO
# 44 "data/maps/TrainerHill_Elevator/scripts.pory"
# 27 "data/maps/TrainerHill_Elevator/scripts.pory"
# 45 "data/maps/TrainerHill_Elevator/scripts.pory"
	compare VAR_RESULT, NO
# 46 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto_if_eq TrainerHill_Elevator_EventScript_EnterElevator_2
# 47 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator_1:
# 48 "data/maps/TrainerHill_Elevator/scripts.pory"
# 30 "data/maps/TrainerHill_Elevator/scripts.pory"
# 49 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 50 "data/maps/TrainerHill_Elevator/scripts.pory"
# 31 "data/maps/TrainerHill_Elevator/scripts.pory"
# 51 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, TrainerHill_Elevator_Movement_AttendantFaceDown
# 52 "data/maps/TrainerHill_Elevator/scripts.pory"
# 32 "data/maps/TrainerHill_Elevator/scripts.pory"
# 53 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 54 "data/maps/TrainerHill_Elevator/scripts.pory"
# 33 "data/maps/TrainerHill_Elevator/scripts.pory"
# 55 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerMoveToCenterOfElevator
# 56 "data/maps/TrainerHill_Elevator/scripts.pory"
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
# 57 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 58 "data/maps/TrainerHill_Elevator/scripts.pory"
# 35 "data/maps/TrainerHill_Elevator/scripts.pory"
# 59 "data/maps/TrainerHill_Elevator/scripts.pory"
	call TrainerHill_Elevator_EventScript_MoveElevator
# 60 "data/maps/TrainerHill_Elevator/scripts.pory"
# 36 "data/maps/TrainerHill_Elevator/scripts.pory"
# 61 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay 25
# 62 "data/maps/TrainerHill_Elevator/scripts.pory"
# 37 "data/maps/TrainerHill_Elevator/scripts.pory"
# 63 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_Movement_PlayerExitElevator
# 64 "data/maps/TrainerHill_Elevator/scripts.pory"
# 38 "data/maps/TrainerHill_Elevator/scripts.pory"
# 65 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 66 "data/maps/TrainerHill_Elevator/scripts.pory"
# 39 "data/maps/TrainerHill_Elevator/scripts.pory"
# 67 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ENTRANCE, 17, 8
# 68 "data/maps/TrainerHill_Elevator/scripts.pory"
# 40 "data/maps/TrainerHill_Elevator/scripts.pory"
# 69 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
# 70 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 71 "data/maps/TrainerHill_Elevator/scripts.pory"

# 72 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator_2:
# 73 "data/maps/TrainerHill_Elevator/scripts.pory"
# 28 "data/maps/TrainerHill_Elevator/scripts.pory"
# 74 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto TrainerHill_Elevator_EventScript_ExitToRoof
# 75 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto TrainerHill_Elevator_EventScript_EnterElevator_1
# 76 "data/maps/TrainerHill_Elevator/scripts.pory"

# 77 "data/maps/TrainerHill_Elevator/scripts.pory"

# 78 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_ExitFloorSelect::
# 79 "data/maps/TrainerHill_Elevator/scripts.pory"
# 45 "data/maps/TrainerHill_Elevator/scripts.pory"
# 80 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto TrainerHill_Elevator_EventScript_CloseFloorSelect
# 81 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 82 "data/maps/TrainerHill_Elevator/scripts.pory"

# 83 "data/maps/TrainerHill_Elevator/scripts.pory"

# 84 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_CloseFloorSelect::
# 85 "data/maps/TrainerHill_Elevator/scripts.pory"
# 50 "data/maps/TrainerHill_Elevator/scripts.pory"
# 86 "data/maps/TrainerHill_Elevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 87 "data/maps/TrainerHill_Elevator/scripts.pory"
# 51 "data/maps/TrainerHill_Elevator/scripts.pory"
# 88 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 89 "data/maps/TrainerHill_Elevator/scripts.pory"
	end
# 90 "data/maps/TrainerHill_Elevator/scripts.pory"

# 91 "data/maps/TrainerHill_Elevator/scripts.pory"

# 92 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_MoveElevator::
# 93 "data/maps/TrainerHill_Elevator/scripts.pory"
# 56 "data/maps/TrainerHill_Elevator/scripts.pory"
# 94 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitse
# 95 "data/maps/TrainerHill_Elevator/scripts.pory"
# 57 "data/maps/TrainerHill_Elevator/scripts.pory"
# 96 "data/maps/TrainerHill_Elevator/scripts.pory"
	special MoveElevator
# 97 "data/maps/TrainerHill_Elevator/scripts.pory"
# 58 "data/maps/TrainerHill_Elevator/scripts.pory"
# 98 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
# 99 "data/maps/TrainerHill_Elevator/scripts.pory"
	return
# 100 "data/maps/TrainerHill_Elevator/scripts.pory"

# 101 "data/maps/TrainerHill_Elevator/scripts.pory"

# 102 "data/maps/TrainerHill_Elevator/scripts.pory"
# 62 "data/maps/TrainerHill_Elevator/scripts.pory"
# 103 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerMoveToCenterOfElevator:
# 104 "data/maps/TrainerHill_Elevator/scripts.pory"
# 63 "data/maps/TrainerHill_Elevator/scripts.pory"
# 105 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 106 "data/maps/TrainerHill_Elevator/scripts.pory"
# 64 "data/maps/TrainerHill_Elevator/scripts.pory"
# 107 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 108 "data/maps/TrainerHill_Elevator/scripts.pory"
# 65 "data/maps/TrainerHill_Elevator/scripts.pory"
# 109 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_right
# 110 "data/maps/TrainerHill_Elevator/scripts.pory"
# 66 "data/maps/TrainerHill_Elevator/scripts.pory"
# 111 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 112 "data/maps/TrainerHill_Elevator/scripts.pory"
# 67 "data/maps/TrainerHill_Elevator/scripts.pory"
# 113 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 114 "data/maps/TrainerHill_Elevator/scripts.pory"

# 115 "data/maps/TrainerHill_Elevator/scripts.pory"
# 70 "data/maps/TrainerHill_Elevator/scripts.pory"
# 116 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerApproachAttendant:
# 117 "data/maps/TrainerHill_Elevator/scripts.pory"
# 71 "data/maps/TrainerHill_Elevator/scripts.pory"
# 118 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 119 "data/maps/TrainerHill_Elevator/scripts.pory"
# 72 "data/maps/TrainerHill_Elevator/scripts.pory"
# 120 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_left
# 121 "data/maps/TrainerHill_Elevator/scripts.pory"
# 73 "data/maps/TrainerHill_Elevator/scripts.pory"
# 122 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 123 "data/maps/TrainerHill_Elevator/scripts.pory"

# 124 "data/maps/TrainerHill_Elevator/scripts.pory"
# 76 "data/maps/TrainerHill_Elevator/scripts.pory"
# 125 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerExitElevator:
# 126 "data/maps/TrainerHill_Elevator/scripts.pory"
# 77 "data/maps/TrainerHill_Elevator/scripts.pory"
# 127 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 128 "data/maps/TrainerHill_Elevator/scripts.pory"
# 78 "data/maps/TrainerHill_Elevator/scripts.pory"
# 129 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 130 "data/maps/TrainerHill_Elevator/scripts.pory"
# 79 "data/maps/TrainerHill_Elevator/scripts.pory"
# 131 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 132 "data/maps/TrainerHill_Elevator/scripts.pory"
# 80 "data/maps/TrainerHill_Elevator/scripts.pory"
# 133 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 134 "data/maps/TrainerHill_Elevator/scripts.pory"

# 135 "data/maps/TrainerHill_Elevator/scripts.pory"
# 83 "data/maps/TrainerHill_Elevator/scripts.pory"
# 136 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_PlayerExitElevatorToRoof:
# 137 "data/maps/TrainerHill_Elevator/scripts.pory"
# 84 "data/maps/TrainerHill_Elevator/scripts.pory"
# 138 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 139 "data/maps/TrainerHill_Elevator/scripts.pory"
# 85 "data/maps/TrainerHill_Elevator/scripts.pory"
# 140 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 141 "data/maps/TrainerHill_Elevator/scripts.pory"
# 86 "data/maps/TrainerHill_Elevator/scripts.pory"
# 142 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 143 "data/maps/TrainerHill_Elevator/scripts.pory"

# 144 "data/maps/TrainerHill_Elevator/scripts.pory"
# 89 "data/maps/TrainerHill_Elevator/scripts.pory"
# 145 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_AttendantFacePlayer:
# 146 "data/maps/TrainerHill_Elevator/scripts.pory"
# 90 "data/maps/TrainerHill_Elevator/scripts.pory"
# 147 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_right
# 148 "data/maps/TrainerHill_Elevator/scripts.pory"
# 91 "data/maps/TrainerHill_Elevator/scripts.pory"
# 149 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
# 150 "data/maps/TrainerHill_Elevator/scripts.pory"

# 151 "data/maps/TrainerHill_Elevator/scripts.pory"
# 94 "data/maps/TrainerHill_Elevator/scripts.pory"
# 152 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_Movement_AttendantFaceDown:
# 153 "data/maps/TrainerHill_Elevator/scripts.pory"
# 95 "data/maps/TrainerHill_Elevator/scripts.pory"
# 154 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 155 "data/maps/TrainerHill_Elevator/scripts.pory"
# 96 "data/maps/TrainerHill_Elevator/scripts.pory"
# 156 "data/maps/TrainerHill_Elevator/scripts.pory"
	step_end
