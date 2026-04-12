# 1 "data/maps/SafariZone_South/scripts.pory"

# 2 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_MapScripts::
# 3 "data/maps/SafariZone_South/scripts.pory"
# 2 "data/maps/SafariZone_South/scripts.pory"
# 4 "data/maps/SafariZone_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_South_OnTransition
# 5 "data/maps/SafariZone_South/scripts.pory"
# 3 "data/maps/SafariZone_South/scripts.pory"
# 6 "data/maps/SafariZone_South/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZone_South_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SafariZone_South/scripts.pory"
	.byte 0
# 8 "data/maps/SafariZone_South/scripts.pory"

# 9 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SafariZone_South/scripts.pory"
# 4 "data/maps/SafariZone_South/scripts.pory"
# 11 "data/maps/SafariZone_South/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, SafariZone_South_EventScript_EnterSafariZone
# 12 "data/maps/SafariZone_South/scripts.pory"
	.2byte 0
# 13 "data/maps/SafariZone_South/scripts.pory"

# 14 "data/maps/SafariZone_South/scripts.pory"

# 15 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_EnterSafariZone::
# 16 "data/maps/SafariZone_South/scripts.pory"
# 9 "data/maps/SafariZone_South/scripts.pory"
# 17 "data/maps/SafariZone_South/scripts.pory"
	lockall
# 18 "data/maps/SafariZone_South/scripts.pory"
# 10 "data/maps/SafariZone_South/scripts.pory"
# 19 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_PLAYER, SafariZone_South_Movement_PlayerEnter
# 20 "data/maps/SafariZone_South/scripts.pory"
# 11 "data/maps/SafariZone_South/scripts.pory"
# 21 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 22 "data/maps/SafariZone_South/scripts.pory"
# 12 "data/maps/SafariZone_South/scripts.pory"
# 23 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_Movement_ExitAttendantBlockDoor
# 24 "data/maps/SafariZone_South/scripts.pory"
# 13 "data/maps/SafariZone_South/scripts.pory"
# 25 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 26 "data/maps/SafariZone_South/scripts.pory"
# 14 "data/maps/SafariZone_South/scripts.pory"
# 27 "data/maps/SafariZone_South/scripts.pory"
	setobjectxyperm LOCALID_SAFARI_EXIT_ATTENDANT, 32, 34
# 28 "data/maps/SafariZone_South/scripts.pory"
# 15 "data/maps/SafariZone_South/scripts.pory"
# 29 "data/maps/SafariZone_South/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 30 "data/maps/SafariZone_South/scripts.pory"
# 16 "data/maps/SafariZone_South/scripts.pory"
# 31 "data/maps/SafariZone_South/scripts.pory"
	releaseall
# 32 "data/maps/SafariZone_South/scripts.pory"
	end
# 33 "data/maps/SafariZone_South/scripts.pory"

# 34 "data/maps/SafariZone_South/scripts.pory"

# 35 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_OnTransition::
# 36 "data/maps/SafariZone_South/scripts.pory"
# 21 "data/maps/SafariZone_South/scripts.pory"
# 37 "data/maps/SafariZone_South/scripts.pory"
	compare VAR_SAFARI_ZONE_STATE, 2
# 38 "data/maps/SafariZone_South/scripts.pory"
	goto_if_eq SafariZone_South_OnTransition_2
# 39 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_OnTransition_1:
# 40 "data/maps/SafariZone_South/scripts.pory"
	end
# 41 "data/maps/SafariZone_South/scripts.pory"

# 42 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_OnTransition_2:
# 43 "data/maps/SafariZone_South/scripts.pory"
# 22 "data/maps/SafariZone_South/scripts.pory"
# 44 "data/maps/SafariZone_South/scripts.pory"
	call SafariZone_South_EventScript_SetExitAttendantAside
# 45 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_OnTransition_1
# 46 "data/maps/SafariZone_South/scripts.pory"

# 47 "data/maps/SafariZone_South/scripts.pory"

# 48 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_SetExitAttendantAside::
# 49 "data/maps/SafariZone_South/scripts.pory"
# 28 "data/maps/SafariZone_South/scripts.pory"
# 50 "data/maps/SafariZone_South/scripts.pory"
	setobjectxyperm LOCALID_SAFARI_EXIT_ATTENDANT, 31, 34
# 51 "data/maps/SafariZone_South/scripts.pory"
	return
# 52 "data/maps/SafariZone_South/scripts.pory"

# 53 "data/maps/SafariZone_South/scripts.pory"

# 54 "data/maps/SafariZone_South/scripts.pory"
# 32 "data/maps/SafariZone_South/scripts.pory"
# 55 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_PlayerEnter:
# 56 "data/maps/SafariZone_South/scripts.pory"
# 33 "data/maps/SafariZone_South/scripts.pory"
# 57 "data/maps/SafariZone_South/scripts.pory"
	walk_down
# 58 "data/maps/SafariZone_South/scripts.pory"
# 34 "data/maps/SafariZone_South/scripts.pory"
# 59 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 60 "data/maps/SafariZone_South/scripts.pory"

# 61 "data/maps/SafariZone_South/scripts.pory"
# 37 "data/maps/SafariZone_South/scripts.pory"
# 62 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_ExitAttendantBlockDoor:
# 63 "data/maps/SafariZone_South/scripts.pory"
# 38 "data/maps/SafariZone_South/scripts.pory"
# 64 "data/maps/SafariZone_South/scripts.pory"
	walk_right
# 65 "data/maps/SafariZone_South/scripts.pory"
# 39 "data/maps/SafariZone_South/scripts.pory"
# 66 "data/maps/SafariZone_South/scripts.pory"
	walk_in_place_faster_down
# 67 "data/maps/SafariZone_South/scripts.pory"
# 40 "data/maps/SafariZone_South/scripts.pory"
# 68 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 69 "data/maps/SafariZone_South/scripts.pory"

# 70 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_Boy::
# 71 "data/maps/SafariZone_South/scripts.pory"
# 44 "data/maps/SafariZone_South/scripts.pory"
# 72 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Boy, MSGBOX_NPC
# 73 "data/maps/SafariZone_South/scripts.pory"
	end
# 74 "data/maps/SafariZone_South/scripts.pory"

# 75 "data/maps/SafariZone_South/scripts.pory"

# 76 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_Man::
# 77 "data/maps/SafariZone_South/scripts.pory"
# 49 "data/maps/SafariZone_South/scripts.pory"
# 78 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Man, MSGBOX_NPC
# 79 "data/maps/SafariZone_South/scripts.pory"
	end
# 80 "data/maps/SafariZone_South/scripts.pory"

# 81 "data/maps/SafariZone_South/scripts.pory"

# 82 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_Youngster::
# 83 "data/maps/SafariZone_South/scripts.pory"
# 54 "data/maps/SafariZone_South/scripts.pory"
# 84 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Youngster, MSGBOX_NPC
# 85 "data/maps/SafariZone_South/scripts.pory"
	end
# 86 "data/maps/SafariZone_South/scripts.pory"

# 87 "data/maps/SafariZone_South/scripts.pory"

# 88 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitAttendant::
# 89 "data/maps/SafariZone_South/scripts.pory"
# 59 "data/maps/SafariZone_South/scripts.pory"
# 90 "data/maps/SafariZone_South/scripts.pory"
	lock
# 91 "data/maps/SafariZone_South/scripts.pory"
# 60 "data/maps/SafariZone_South/scripts.pory"
# 92 "data/maps/SafariZone_South/scripts.pory"
	faceplayer
# 93 "data/maps/SafariZone_South/scripts.pory"
# 61 "data/maps/SafariZone_South/scripts.pory"
# 94 "data/maps/SafariZone_South/scripts.pory"
	goto_if_unset FLAG_GOOD_LUCK_SAFARI_ZONE, SafariZone_South_EventScript_ExitAttendant_2
# 95 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitAttendant_1:
# 96 "data/maps/SafariZone_South/scripts.pory"
# 64 "data/maps/SafariZone_South/scripts.pory"
# 97 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_StillHaveTimeExit, MSGBOX_YESNO
# 98 "data/maps/SafariZone_South/scripts.pory"
# 65 "data/maps/SafariZone_South/scripts.pory"
# 99 "data/maps/SafariZone_South/scripts.pory"
	compare VAR_RESULT, YES
# 100 "data/maps/SafariZone_South/scripts.pory"
	goto_if_eq SafariZone_South_EventScript_ExitAttendant_5
# 101 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitAttendant_4:
# 102 "data/maps/SafariZone_South/scripts.pory"
# 68 "data/maps/SafariZone_South/scripts.pory"
# 103 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_EnjoyTheRestOfYourAdventure, MSGBOX_DEFAULT
# 104 "data/maps/SafariZone_South/scripts.pory"
# 69 "data/maps/SafariZone_South/scripts.pory"
# 105 "data/maps/SafariZone_South/scripts.pory"
	release
# 106 "data/maps/SafariZone_South/scripts.pory"
	end
# 107 "data/maps/SafariZone_South/scripts.pory"

# 108 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitAttendant_2:
# 109 "data/maps/SafariZone_South/scripts.pory"
# 62 "data/maps/SafariZone_South/scripts.pory"
# 110 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_GoodLuck
# 111 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_ExitAttendant_1
# 112 "data/maps/SafariZone_South/scripts.pory"

# 113 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitAttendant_5:
# 114 "data/maps/SafariZone_South/scripts.pory"
# 66 "data/maps/SafariZone_South/scripts.pory"
# 115 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_ExitEarly
# 116 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_ExitAttendant_4
# 117 "data/maps/SafariZone_South/scripts.pory"

# 118 "data/maps/SafariZone_South/scripts.pory"

# 119 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_GoodLuck::
# 120 "data/maps/SafariZone_South/scripts.pory"
# 74 "data/maps/SafariZone_South/scripts.pory"
# 121 "data/maps/SafariZone_South/scripts.pory"
	setflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 122 "data/maps/SafariZone_South/scripts.pory"
# 75 "data/maps/SafariZone_South/scripts.pory"
# 123 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_GoodLuck, MSGBOX_DEFAULT
# 124 "data/maps/SafariZone_South/scripts.pory"
# 76 "data/maps/SafariZone_South/scripts.pory"
# 125 "data/maps/SafariZone_South/scripts.pory"
	release
# 126 "data/maps/SafariZone_South/scripts.pory"
	end
# 127 "data/maps/SafariZone_South/scripts.pory"

# 128 "data/maps/SafariZone_South/scripts.pory"

# 129 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarly::
# 130 "data/maps/SafariZone_South/scripts.pory"
# 81 "data/maps/SafariZone_South/scripts.pory"
# 131 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_ExitEarlyThankYouForPlaying, MSGBOX_DEFAULT
# 132 "data/maps/SafariZone_South/scripts.pory"
# 82 "data/maps/SafariZone_South/scripts.pory"
# 133 "data/maps/SafariZone_South/scripts.pory"
	closemessage
# 134 "data/maps/SafariZone_South/scripts.pory"
# 83 "data/maps/SafariZone_South/scripts.pory"
# 135 "data/maps/SafariZone_South/scripts.pory"
	switch VAR_FACING
# 136 "data/maps/SafariZone_South/scripts.pory"
# 84 "data/maps/SafariZone_South/scripts.pory"
# 137 "data/maps/SafariZone_South/scripts.pory"
	case DIR_NORTH, SafariZone_South_EventScript_ExitEarly_3
# 138 "data/maps/SafariZone_South/scripts.pory"
# 86 "data/maps/SafariZone_South/scripts.pory"
# 139 "data/maps/SafariZone_South/scripts.pory"
	case DIR_EAST, SafariZone_South_EventScript_ExitEarly_4
# 140 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarly_1:
# 141 "data/maps/SafariZone_South/scripts.pory"
	end
# 142 "data/maps/SafariZone_South/scripts.pory"

# 143 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarly_3:
# 144 "data/maps/SafariZone_South/scripts.pory"
# 85 "data/maps/SafariZone_South/scripts.pory"
# 145 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_ExitEarlyNorth
# 146 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_ExitEarly_1
# 147 "data/maps/SafariZone_South/scripts.pory"

# 148 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarly_4:
# 149 "data/maps/SafariZone_South/scripts.pory"
# 87 "data/maps/SafariZone_South/scripts.pory"
# 150 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_ExitEarlyEast
# 151 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_ExitEarly_1
# 152 "data/maps/SafariZone_South/scripts.pory"

# 153 "data/maps/SafariZone_South/scripts.pory"

# 154 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarlyNorth::
# 155 "data/maps/SafariZone_South/scripts.pory"
# 93 "data/maps/SafariZone_South/scripts.pory"
# 156 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_Movement_MoveExitAttendantNorth
# 157 "data/maps/SafariZone_South/scripts.pory"
# 94 "data/maps/SafariZone_South/scripts.pory"
# 158 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 159 "data/maps/SafariZone_South/scripts.pory"
# 95 "data/maps/SafariZone_South/scripts.pory"
# 160 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_PLAYER, SafariZone_South_Movement_PlayerExitNorth
# 161 "data/maps/SafariZone_South/scripts.pory"
# 96 "data/maps/SafariZone_South/scripts.pory"
# 162 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 163 "data/maps/SafariZone_South/scripts.pory"
# 97 "data/maps/SafariZone_South/scripts.pory"
# 164 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_Exit
# 165 "data/maps/SafariZone_South/scripts.pory"
	end
# 166 "data/maps/SafariZone_South/scripts.pory"

# 167 "data/maps/SafariZone_South/scripts.pory"

# 168 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarlyEast::
# 169 "data/maps/SafariZone_South/scripts.pory"
# 102 "data/maps/SafariZone_South/scripts.pory"
# 170 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_Movement_MoveExitAttendantEast
# 171 "data/maps/SafariZone_South/scripts.pory"
# 103 "data/maps/SafariZone_South/scripts.pory"
# 172 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 173 "data/maps/SafariZone_South/scripts.pory"
# 104 "data/maps/SafariZone_South/scripts.pory"
# 174 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_PLAYER, SafariZone_South_Movement_PlayerExitEast
# 175 "data/maps/SafariZone_South/scripts.pory"
# 105 "data/maps/SafariZone_South/scripts.pory"
# 176 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 177 "data/maps/SafariZone_South/scripts.pory"
# 106 "data/maps/SafariZone_South/scripts.pory"
# 178 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_Exit
# 179 "data/maps/SafariZone_South/scripts.pory"
	end
# 180 "data/maps/SafariZone_South/scripts.pory"

# 181 "data/maps/SafariZone_South/scripts.pory"

# 182 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_Exit::
# 183 "data/maps/SafariZone_South/scripts.pory"
# 111 "data/maps/SafariZone_South/scripts.pory"
# 184 "data/maps/SafariZone_South/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 1
# 185 "data/maps/SafariZone_South/scripts.pory"
# 112 "data/maps/SafariZone_South/scripts.pory"
# 186 "data/maps/SafariZone_South/scripts.pory"
	special ExitSafariMode
# 187 "data/maps/SafariZone_South/scripts.pory"
# 113 "data/maps/SafariZone_South/scripts.pory"
# 188 "data/maps/SafariZone_South/scripts.pory"
	warpdoor MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
# 189 "data/maps/SafariZone_South/scripts.pory"
# 114 "data/maps/SafariZone_South/scripts.pory"
# 190 "data/maps/SafariZone_South/scripts.pory"
	waitstate
# 191 "data/maps/SafariZone_South/scripts.pory"
	end
# 192 "data/maps/SafariZone_South/scripts.pory"

# 193 "data/maps/SafariZone_South/scripts.pory"

# 194 "data/maps/SafariZone_South/scripts.pory"
# 118 "data/maps/SafariZone_South/scripts.pory"
# 195 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_PlayerExitNorth:
# 196 "data/maps/SafariZone_South/scripts.pory"
# 119 "data/maps/SafariZone_South/scripts.pory"
# 197 "data/maps/SafariZone_South/scripts.pory"
	walk_up
# 198 "data/maps/SafariZone_South/scripts.pory"
# 120 "data/maps/SafariZone_South/scripts.pory"
# 199 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 200 "data/maps/SafariZone_South/scripts.pory"

# 201 "data/maps/SafariZone_South/scripts.pory"
# 123 "data/maps/SafariZone_South/scripts.pory"
# 202 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_PlayerExitEast:
# 203 "data/maps/SafariZone_South/scripts.pory"
# 124 "data/maps/SafariZone_South/scripts.pory"
# 204 "data/maps/SafariZone_South/scripts.pory"
	walk_right
# 205 "data/maps/SafariZone_South/scripts.pory"
# 125 "data/maps/SafariZone_South/scripts.pory"
# 206 "data/maps/SafariZone_South/scripts.pory"
	walk_in_place_faster_up
# 207 "data/maps/SafariZone_South/scripts.pory"
# 126 "data/maps/SafariZone_South/scripts.pory"
# 208 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 209 "data/maps/SafariZone_South/scripts.pory"

# 210 "data/maps/SafariZone_South/scripts.pory"
# 129 "data/maps/SafariZone_South/scripts.pory"
# 211 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_MoveExitAttendantNorth:
# 212 "data/maps/SafariZone_South/scripts.pory"
# 130 "data/maps/SafariZone_South/scripts.pory"
# 213 "data/maps/SafariZone_South/scripts.pory"
	walk_left
# 214 "data/maps/SafariZone_South/scripts.pory"
# 131 "data/maps/SafariZone_South/scripts.pory"
# 215 "data/maps/SafariZone_South/scripts.pory"
	walk_in_place_faster_right
# 216 "data/maps/SafariZone_South/scripts.pory"
# 132 "data/maps/SafariZone_South/scripts.pory"
# 217 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 218 "data/maps/SafariZone_South/scripts.pory"

# 219 "data/maps/SafariZone_South/scripts.pory"
# 135 "data/maps/SafariZone_South/scripts.pory"
# 220 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_Movement_MoveExitAttendantEast:
# 221 "data/maps/SafariZone_South/scripts.pory"
# 136 "data/maps/SafariZone_South/scripts.pory"
# 222 "data/maps/SafariZone_South/scripts.pory"
	walk_down
# 223 "data/maps/SafariZone_South/scripts.pory"
# 137 "data/maps/SafariZone_South/scripts.pory"
# 224 "data/maps/SafariZone_South/scripts.pory"
	walk_in_place_faster_up
# 225 "data/maps/SafariZone_South/scripts.pory"
# 138 "data/maps/SafariZone_South/scripts.pory"
# 226 "data/maps/SafariZone_South/scripts.pory"
	step_end
# 227 "data/maps/SafariZone_South/scripts.pory"

# 228 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ConstructionWorker1::
# 229 "data/maps/SafariZone_South/scripts.pory"
# 142 "data/maps/SafariZone_South/scripts.pory"
# 230 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_AreaOffLimits1, MSGBOX_NPC
# 231 "data/maps/SafariZone_South/scripts.pory"
	end
# 232 "data/maps/SafariZone_South/scripts.pory"

# 233 "data/maps/SafariZone_South/scripts.pory"

# 234 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Southeast_EventScript_ExpansionZoneAttendant::
# 235 "data/maps/SafariZone_South/scripts.pory"
# 147 "data/maps/SafariZone_South/scripts.pory"
# 236 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_ExpansionIsFinished, MSGBOX_NPC
# 237 "data/maps/SafariZone_South/scripts.pory"
	end
# 238 "data/maps/SafariZone_South/scripts.pory"

# 239 "data/maps/SafariZone_South/scripts.pory"

# 240 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ConstructionWorker2::
# 241 "data/maps/SafariZone_South/scripts.pory"
# 152 "data/maps/SafariZone_South/scripts.pory"
# 242 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_AreaOffLimits2, MSGBOX_NPC
# 243 "data/maps/SafariZone_South/scripts.pory"
	end
# 244 "data/maps/SafariZone_South/scripts.pory"

# 245 "data/maps/SafariZone_South/scripts.pory"

# 246 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Southeast_EventScript_LittleGirl::
# 247 "data/maps/SafariZone_South/scripts.pory"
# 157 "data/maps/SafariZone_South/scripts.pory"
# 248 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_LittleGirl, MSGBOX_NPC
# 249 "data/maps/SafariZone_South/scripts.pory"
	end
# 250 "data/maps/SafariZone_South/scripts.pory"

# 251 "data/maps/SafariZone_South/scripts.pory"

# 252 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Southeast_EventScript_FatMan::
# 253 "data/maps/SafariZone_South/scripts.pory"
# 162 "data/maps/SafariZone_South/scripts.pory"
# 254 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_FatMan, MSGBOX_NPC
# 255 "data/maps/SafariZone_South/scripts.pory"
	end
# 256 "data/maps/SafariZone_South/scripts.pory"

# 257 "data/maps/SafariZone_South/scripts.pory"

# 258 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Southeast_EventScript_RichBoy::
# 259 "data/maps/SafariZone_South/scripts.pory"
# 167 "data/maps/SafariZone_South/scripts.pory"
# 260 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_RichBoy, MSGBOX_NPC
# 261 "data/maps/SafariZone_South/scripts.pory"
	end
# 262 "data/maps/SafariZone_South/scripts.pory"

# 263 "data/maps/SafariZone_South/scripts.pory"

# 264 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Northeast_EventScript_Boy::
# 265 "data/maps/SafariZone_South/scripts.pory"
# 172 "data/maps/SafariZone_South/scripts.pory"
# 266 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Boy, MSGBOX_NPC
# 267 "data/maps/SafariZone_South/scripts.pory"
	end
# 268 "data/maps/SafariZone_South/scripts.pory"

# 269 "data/maps/SafariZone_South/scripts.pory"

# 270 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Northeast_EventScript_Woman::
# 271 "data/maps/SafariZone_South/scripts.pory"
# 177 "data/maps/SafariZone_South/scripts.pory"
# 272 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Woman, MSGBOX_NPC
# 273 "data/maps/SafariZone_South/scripts.pory"
	end
# 274 "data/maps/SafariZone_South/scripts.pory"

# 275 "data/maps/SafariZone_South/scripts.pory"

# 276 "data/maps/SafariZone_South/scripts.pory"
SafariZone_Northeast_EventScript_Girl::
# 277 "data/maps/SafariZone_South/scripts.pory"
# 182 "data/maps/SafariZone_South/scripts.pory"
# 278 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Girl, MSGBOX_NPC
# 279 "data/maps/SafariZone_South/scripts.pory"
	end
