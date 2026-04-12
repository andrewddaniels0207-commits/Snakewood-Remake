# 1 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 2 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_MapScripts::
# 3 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 2 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 4 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_CableCarStation_OnTransition
# 5 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 3 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 6 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.byte 0
# 8 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 9 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 4 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 11 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_EventScript_ExitCableCar
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.2byte 0
# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 14 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 15 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnTransition::
# 16 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 9 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 17 "data/maps/MtChimney_CableCarStation/scripts.pory"
	compare VAR_CABLE_CAR_STATION_STATE, 1
# 18 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq MtChimney_CableCarStation_OnTransition_2
# 19 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnTransition_1:
# 20 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 21 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 22 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_OnTransition_2:
# 23 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 10 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 24 "data/maps/MtChimney_CableCarStation/scripts.pory"
	call MtChimney_CableCarStation_EventScript_MoveAttendantAside
# 25 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto MtChimney_CableCarStation_OnTransition_1
# 26 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 27 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 28 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_MoveAttendantAside::
# 29 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 16 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, 5, 4
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 17 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 32 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/MtChimney_CableCarStation/scripts.pory"
	return
# 34 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 35 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 36 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_ExitCableCar::
# 37 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 22 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 38 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lockall
# 39 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 23 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 40 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, MtChimney_CableCarStation_Movement_ExitCableCar
# 41 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 24 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 42 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 43 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 25 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 44 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 45 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 26 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 46 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 47 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 27 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 48 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, 6, 7
# 49 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 28 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 50 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 29 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 52 "data/maps/MtChimney_CableCarStation/scripts.pory"
	releaseall
# 53 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 54 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 55 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 56 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant::
# 57 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 34 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 58 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lock
# 59 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 35 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 60 "data/maps/MtChimney_CableCarStation/scripts.pory"
	faceplayer
# 61 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 36 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 62 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 63 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 37 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 64 "data/maps/MtChimney_CableCarStation/scripts.pory"
	compare VAR_RESULT, YES
# 65 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq MtChimney_CableCarStation_EventScript_Attendant_2
# 66 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant_1:
# 67 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 40 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 68 "data/maps/MtChimney_CableCarStation/scripts.pory"
	compare VAR_RESULT, NO
# 69 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto_if_eq MtChimney_CableCarStation_EventScript_Attendant_5
# 70 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant_4:
# 71 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 72 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 73 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant_2:
# 74 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 38 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 75 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto MtChimney_CableCarStation_EventScript_RideCableCar
# 76 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto MtChimney_CableCarStation_EventScript_Attendant_1
# 77 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 78 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant_5:
# 79 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 41 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 80 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto MtChimney_CableCarStation_EventScript_DeclineRide
# 81 "data/maps/MtChimney_CableCarStation/scripts.pory"
	goto MtChimney_CableCarStation_EventScript_Attendant_4
# 82 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 83 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 84 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_RideCableCar::
# 85 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 47 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 86 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 87 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 48 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 88 "data/maps/MtChimney_CableCarStation/scripts.pory"
	closemessage
# 89 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 49 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 90 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MtChimney_CableCarStation_Movement_LeadPlayerToCableCar
# 91 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 50 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 92 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, MtChimney_CableCarStation_Movement_BoardCableCar
# 93 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 51 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 94 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 95 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 52 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 96 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_0x8004, TRUE
# 97 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 53 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 98 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 2
# 99 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 54 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 100 "data/maps/MtChimney_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 101 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 55 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 102 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCarWarp
# 103 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 56 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 104 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCar
# 105 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 57 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 106 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitstate
# 107 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 58 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 108 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
# 109 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 110 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 111 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 112 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_DeclineRide::
# 113 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 63 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 114 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 115 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 64 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 116 "data/maps/MtChimney_CableCarStation/scripts.pory"
	release
# 117 "data/maps/MtChimney_CableCarStation/scripts.pory"
	end
# 118 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 119 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 120 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 68 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 121 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_LeadPlayerToCableCar:
# 122 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 69 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 123 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 124 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 70 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 125 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 126 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 71 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 127 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_left
# 128 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 72 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 129 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_in_place_faster_right
# 130 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 73 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 131 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 132 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 133 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 76 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 134 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 135 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 77 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 136 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 137 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 78 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 138 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_right
# 139 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 79 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 140 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 141 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 80 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 142 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 143 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 81 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 144 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 145 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 146 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 84 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 147 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_BoardCableCar:
# 148 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 85 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 149 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 150 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 86 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 151 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 152 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 87 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 153 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 154 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 88 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 155 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 156 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 89 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 157 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 158 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 159 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 92 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 160 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Movement_ExitCableCar:
# 161 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 93 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 162 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 163 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 94 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 164 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 165 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 95 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 166 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 96 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 168 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 169 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 97 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 170 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_end
# 171 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 172 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_CableCarReadyGetOn::
# 173 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 100 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 174 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go down.\n"
# 175 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 176 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 177 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_StepThisWay::
# 178 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 105 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 179 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 180 "data/maps/MtChimney_CableCarStation/scripts.pory"

# 181 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_Text_RideAnotherTime::
# 182 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 109 "data/maps/MtChimney_CableCarStation/scripts.pory"
# 183 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"
