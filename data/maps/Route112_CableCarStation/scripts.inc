# 1 "data/maps/Route112_CableCarStation/scripts.pory"

# 2 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_MapScripts::
# 3 "data/maps/Route112_CableCarStation/scripts.pory"
# 2 "data/maps/Route112_CableCarStation/scripts.pory"
# 4 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_CableCarStation_OnTransition
# 5 "data/maps/Route112_CableCarStation/scripts.pory"
# 3 "data/maps/Route112_CableCarStation/scripts.pory"
# 6 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/Route112_CableCarStation/scripts.pory"
	.byte 0
# 8 "data/maps/Route112_CableCarStation/scripts.pory"

# 9 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/Route112_CableCarStation/scripts.pory"
# 4 "data/maps/Route112_CableCarStation/scripts.pory"
# 11 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_EventScript_ExitCableCar
# 12 "data/maps/Route112_CableCarStation/scripts.pory"
	.2byte 0
# 13 "data/maps/Route112_CableCarStation/scripts.pory"

# 14 "data/maps/Route112_CableCarStation/scripts.pory"

# 15 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnTransition::
# 16 "data/maps/Route112_CableCarStation/scripts.pory"
# 9 "data/maps/Route112_CableCarStation/scripts.pory"
# 17 "data/maps/Route112_CableCarStation/scripts.pory"
	setescapewarp MAP_ROUTE112, 28, 28
# 18 "data/maps/Route112_CableCarStation/scripts.pory"
# 10 "data/maps/Route112_CableCarStation/scripts.pory"
# 19 "data/maps/Route112_CableCarStation/scripts.pory"
	compare VAR_CABLE_CAR_STATION_STATE, 2
# 20 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq Route112_CableCarStation_OnTransition_2
# 21 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnTransition_1:
# 22 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 23 "data/maps/Route112_CableCarStation/scripts.pory"

# 24 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_OnTransition_2:
# 25 "data/maps/Route112_CableCarStation/scripts.pory"
# 11 "data/maps/Route112_CableCarStation/scripts.pory"
# 26 "data/maps/Route112_CableCarStation/scripts.pory"
	call Route112_CableCarStation_EventScript_MoveAttendantAside
# 27 "data/maps/Route112_CableCarStation/scripts.pory"
	goto Route112_CableCarStation_OnTransition_1
# 28 "data/maps/Route112_CableCarStation/scripts.pory"

# 29 "data/maps/Route112_CableCarStation/scripts.pory"

# 30 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_MoveAttendantAside::
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
# 17 "data/maps/Route112_CableCarStation/scripts.pory"
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, 7, 4
# 33 "data/maps/Route112_CableCarStation/scripts.pory"
# 18 "data/maps/Route112_CableCarStation/scripts.pory"
# 34 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_LEFT
# 35 "data/maps/Route112_CableCarStation/scripts.pory"
	return
# 36 "data/maps/Route112_CableCarStation/scripts.pory"

# 37 "data/maps/Route112_CableCarStation/scripts.pory"

# 38 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_ExitCableCar::
# 39 "data/maps/Route112_CableCarStation/scripts.pory"
# 23 "data/maps/Route112_CableCarStation/scripts.pory"
# 40 "data/maps/Route112_CableCarStation/scripts.pory"
	lockall
# 41 "data/maps/Route112_CableCarStation/scripts.pory"
# 24 "data/maps/Route112_CableCarStation/scripts.pory"
# 42 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, Route112_CableCarStation_Movement_ExitCableCar
# 43 "data/maps/Route112_CableCarStation/scripts.pory"
# 25 "data/maps/Route112_CableCarStation/scripts.pory"
# 44 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar
# 45 "data/maps/Route112_CableCarStation/scripts.pory"
# 26 "data/maps/Route112_CableCarStation/scripts.pory"
# 46 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route112_CableCarStation/scripts.pory"
# 27 "data/maps/Route112_CableCarStation/scripts.pory"
# 48 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 49 "data/maps/Route112_CableCarStation/scripts.pory"
# 28 "data/maps/Route112_CableCarStation/scripts.pory"
# 50 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, 6, 7
# 51 "data/maps/Route112_CableCarStation/scripts.pory"
# 29 "data/maps/Route112_CableCarStation/scripts.pory"
# 52 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/Route112_CableCarStation/scripts.pory"
# 30 "data/maps/Route112_CableCarStation/scripts.pory"
# 54 "data/maps/Route112_CableCarStation/scripts.pory"
	releaseall
# 55 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 56 "data/maps/Route112_CableCarStation/scripts.pory"

# 57 "data/maps/Route112_CableCarStation/scripts.pory"

# 58 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant::
# 59 "data/maps/Route112_CableCarStation/scripts.pory"
# 35 "data/maps/Route112_CableCarStation/scripts.pory"
# 60 "data/maps/Route112_CableCarStation/scripts.pory"
	lock
# 61 "data/maps/Route112_CableCarStation/scripts.pory"
# 36 "data/maps/Route112_CableCarStation/scripts.pory"
# 62 "data/maps/Route112_CableCarStation/scripts.pory"
	faceplayer
# 63 "data/maps/Route112_CableCarStation/scripts.pory"
# 37 "data/maps/Route112_CableCarStation/scripts.pory"
# 64 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 65 "data/maps/Route112_CableCarStation/scripts.pory"
# 38 "data/maps/Route112_CableCarStation/scripts.pory"
# 66 "data/maps/Route112_CableCarStation/scripts.pory"
	compare VAR_RESULT, YES
# 67 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq Route112_CableCarStation_EventScript_Attendant_2
# 68 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant_1:
# 69 "data/maps/Route112_CableCarStation/scripts.pory"
# 41 "data/maps/Route112_CableCarStation/scripts.pory"
# 70 "data/maps/Route112_CableCarStation/scripts.pory"
	compare VAR_RESULT, NO
# 71 "data/maps/Route112_CableCarStation/scripts.pory"
	goto_if_eq Route112_CableCarStation_EventScript_Attendant_5
# 72 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant_4:
# 73 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 74 "data/maps/Route112_CableCarStation/scripts.pory"

# 75 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant_2:
# 76 "data/maps/Route112_CableCarStation/scripts.pory"
# 39 "data/maps/Route112_CableCarStation/scripts.pory"
# 77 "data/maps/Route112_CableCarStation/scripts.pory"
	goto Route112_CableCarStation_EventScript_RideCableCar
# 78 "data/maps/Route112_CableCarStation/scripts.pory"
	goto Route112_CableCarStation_EventScript_Attendant_1
# 79 "data/maps/Route112_CableCarStation/scripts.pory"

# 80 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant_5:
# 81 "data/maps/Route112_CableCarStation/scripts.pory"
# 42 "data/maps/Route112_CableCarStation/scripts.pory"
# 82 "data/maps/Route112_CableCarStation/scripts.pory"
	goto Route112_CableCarStation_EventScript_DeclineRide
# 83 "data/maps/Route112_CableCarStation/scripts.pory"
	goto Route112_CableCarStation_EventScript_Attendant_4
# 84 "data/maps/Route112_CableCarStation/scripts.pory"

# 85 "data/maps/Route112_CableCarStation/scripts.pory"

# 86 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_RideCableCar::
# 87 "data/maps/Route112_CableCarStation/scripts.pory"
# 48 "data/maps/Route112_CableCarStation/scripts.pory"
# 88 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 89 "data/maps/Route112_CableCarStation/scripts.pory"
# 49 "data/maps/Route112_CableCarStation/scripts.pory"
# 90 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 91 "data/maps/Route112_CableCarStation/scripts.pory"
# 50 "data/maps/Route112_CableCarStation/scripts.pory"
# 92 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, Route112_CableCarStation_Movement_LeadPlayerToCableCar
# 93 "data/maps/Route112_CableCarStation/scripts.pory"
# 51 "data/maps/Route112_CableCarStation/scripts.pory"
# 94 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, Route112_CableCarStation_Movement_BoardCableCar
# 95 "data/maps/Route112_CableCarStation/scripts.pory"
# 52 "data/maps/Route112_CableCarStation/scripts.pory"
# 96 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route112_CableCarStation/scripts.pory"
# 53 "data/maps/Route112_CableCarStation/scripts.pory"
# 98 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, FALSE
# 99 "data/maps/Route112_CableCarStation/scripts.pory"
# 54 "data/maps/Route112_CableCarStation/scripts.pory"
# 100 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 1
# 101 "data/maps/Route112_CableCarStation/scripts.pory"
# 55 "data/maps/Route112_CableCarStation/scripts.pory"
# 102 "data/maps/Route112_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 103 "data/maps/Route112_CableCarStation/scripts.pory"
# 56 "data/maps/Route112_CableCarStation/scripts.pory"
# 104 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 105 "data/maps/Route112_CableCarStation/scripts.pory"
# 57 "data/maps/Route112_CableCarStation/scripts.pory"
# 106 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCar
# 107 "data/maps/Route112_CableCarStation/scripts.pory"
# 58 "data/maps/Route112_CableCarStation/scripts.pory"
# 108 "data/maps/Route112_CableCarStation/scripts.pory"
	waitstate
# 109 "data/maps/Route112_CableCarStation/scripts.pory"
# 59 "data/maps/Route112_CableCarStation/scripts.pory"
# 110 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 111 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 112 "data/maps/Route112_CableCarStation/scripts.pory"

# 113 "data/maps/Route112_CableCarStation/scripts.pory"

# 114 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_DeclineRide::
# 115 "data/maps/Route112_CableCarStation/scripts.pory"
# 64 "data/maps/Route112_CableCarStation/scripts.pory"
# 116 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
# 117 "data/maps/Route112_CableCarStation/scripts.pory"
# 65 "data/maps/Route112_CableCarStation/scripts.pory"
# 118 "data/maps/Route112_CableCarStation/scripts.pory"
	release
# 119 "data/maps/Route112_CableCarStation/scripts.pory"
	end
# 120 "data/maps/Route112_CableCarStation/scripts.pory"

# 121 "data/maps/Route112_CableCarStation/scripts.pory"

# 122 "data/maps/Route112_CableCarStation/scripts.pory"
# 69 "data/maps/Route112_CableCarStation/scripts.pory"
# 123 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_LeadPlayerToCableCar:
# 124 "data/maps/Route112_CableCarStation/scripts.pory"
# 70 "data/maps/Route112_CableCarStation/scripts.pory"
# 125 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 126 "data/maps/Route112_CableCarStation/scripts.pory"
# 71 "data/maps/Route112_CableCarStation/scripts.pory"
# 127 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 128 "data/maps/Route112_CableCarStation/scripts.pory"
# 72 "data/maps/Route112_CableCarStation/scripts.pory"
# 129 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 130 "data/maps/Route112_CableCarStation/scripts.pory"
# 73 "data/maps/Route112_CableCarStation/scripts.pory"
# 131 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_in_place_faster_left
# 132 "data/maps/Route112_CableCarStation/scripts.pory"
# 74 "data/maps/Route112_CableCarStation/scripts.pory"
# 133 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 134 "data/maps/Route112_CableCarStation/scripts.pory"

# 135 "data/maps/Route112_CableCarStation/scripts.pory"
# 77 "data/maps/Route112_CableCarStation/scripts.pory"
# 136 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_FollowPlayerOutFromCableCar:
# 137 "data/maps/Route112_CableCarStation/scripts.pory"
# 78 "data/maps/Route112_CableCarStation/scripts.pory"
# 138 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 139 "data/maps/Route112_CableCarStation/scripts.pory"
# 79 "data/maps/Route112_CableCarStation/scripts.pory"
# 140 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_left
# 141 "data/maps/Route112_CableCarStation/scripts.pory"
# 80 "data/maps/Route112_CableCarStation/scripts.pory"
# 142 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 143 "data/maps/Route112_CableCarStation/scripts.pory"
# 81 "data/maps/Route112_CableCarStation/scripts.pory"
# 144 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 145 "data/maps/Route112_CableCarStation/scripts.pory"
# 82 "data/maps/Route112_CableCarStation/scripts.pory"
# 146 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 147 "data/maps/Route112_CableCarStation/scripts.pory"

# 148 "data/maps/Route112_CableCarStation/scripts.pory"
# 85 "data/maps/Route112_CableCarStation/scripts.pory"
# 149 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_BoardCableCar:
# 150 "data/maps/Route112_CableCarStation/scripts.pory"
# 86 "data/maps/Route112_CableCarStation/scripts.pory"
# 151 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 152 "data/maps/Route112_CableCarStation/scripts.pory"
# 87 "data/maps/Route112_CableCarStation/scripts.pory"
# 153 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 154 "data/maps/Route112_CableCarStation/scripts.pory"
# 88 "data/maps/Route112_CableCarStation/scripts.pory"
# 155 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 156 "data/maps/Route112_CableCarStation/scripts.pory"
# 89 "data/maps/Route112_CableCarStation/scripts.pory"
# 157 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 158 "data/maps/Route112_CableCarStation/scripts.pory"
# 90 "data/maps/Route112_CableCarStation/scripts.pory"
# 159 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 160 "data/maps/Route112_CableCarStation/scripts.pory"

# 161 "data/maps/Route112_CableCarStation/scripts.pory"
# 93 "data/maps/Route112_CableCarStation/scripts.pory"
# 162 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Movement_ExitCableCar:
# 163 "data/maps/Route112_CableCarStation/scripts.pory"
# 94 "data/maps/Route112_CableCarStation/scripts.pory"
# 164 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 165 "data/maps/Route112_CableCarStation/scripts.pory"
# 95 "data/maps/Route112_CableCarStation/scripts.pory"
# 166 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 167 "data/maps/Route112_CableCarStation/scripts.pory"
# 96 "data/maps/Route112_CableCarStation/scripts.pory"
# 168 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 169 "data/maps/Route112_CableCarStation/scripts.pory"
# 97 "data/maps/Route112_CableCarStation/scripts.pory"
# 170 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 171 "data/maps/Route112_CableCarStation/scripts.pory"
# 98 "data/maps/Route112_CableCarStation/scripts.pory"
# 172 "data/maps/Route112_CableCarStation/scripts.pory"
	step_end
# 173 "data/maps/Route112_CableCarStation/scripts.pory"

# 174 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_CableCarReadyGetOn::
# 175 "data/maps/Route112_CableCarStation/scripts.pory"
# 101 "data/maps/Route112_CableCarStation/scripts.pory"
# 176 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go up.\n"
# 177 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Would you like to be on it?$"
# 178 "data/maps/Route112_CableCarStation/scripts.pory"

# 179 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_StepThisWay::
# 180 "data/maps/Route112_CableCarStation/scripts.pory"
# 106 "data/maps/Route112_CableCarStation/scripts.pory"
# 181 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please step this way.$"
# 182 "data/maps/Route112_CableCarStation/scripts.pory"

# 183 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_Text_RideAnotherTime::
# 184 "data/maps/Route112_CableCarStation/scripts.pory"
# 110 "data/maps/Route112_CableCarStation/scripts.pory"
# 185 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"
