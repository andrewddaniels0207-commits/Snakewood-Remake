OldaleTown_MapScripts::
# 5 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 7 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 8 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_MoveMartEmployee
	goto OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScript_SetOldaleState
	return

OldaleTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/OldaleTown/scripts.pory"
	map_script_2 VAR_SNAKEWOOD_INTRO_STATE, 2, OldaleTown_EventScript_BirchNicknameStarter
	.2byte 0


OldaleTown_EventScript_SetOldaleState::
# 21 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
	return


OldaleTown_EventScript_MoveMartEmployee::
# 26 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 27 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	return


OldaleTown_EventScript_TownSign::
# 36 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_TownSign_Text_0
	end


OldaleTown_EventScript_Girl::
# 45 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Girl_Text_0, MSGBOX_NPC
	end


OldaleTown_EventScript_MartEmployee::
# 54 "data/maps/OldaleTown/scripts.pory"
	lock
# 55 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 56 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MartEmployee_2
# 56 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_MartEmployee_2
# 61 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 62 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 63 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_MartEmployee_Text_1
# 64 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 65 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 66 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_MartEmployee_8
# 70 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_MartEmployee_9
# 74 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_MartEmployee_10
OldaleTown_EventScript_MartEmployee_6:
# 79 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_MartEmployee_Text_2
# 80 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 81 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_MartEmployee_12
# 87 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_MartEmployee_Text_0
# 88 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 89 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_MartEmployee_2:
# 57 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_MartEmployee_Text_0
# 58 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_MartEmployee_8:
# 67 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 68 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 69 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_9:
# 71 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 72 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 73 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_10:
# 75 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 76 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 77 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_12:
# 82 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull
# 83 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/OldaleTown/scripts.pory"
	release
	end


# 94 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 96 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 99 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 102 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 107 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 109 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 112 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 117 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 118 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 118 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 118 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 118 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 122 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

OldaleTown_EventScript_Rival::
# 132 "data/maps/OldaleTown/scripts.pory"
	lockall
# 133 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 134 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 136 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleTown_EventScript_Rival_2
# 139 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Rival_Text_1
OldaleTown_EventScript_Rival_1:
# 141 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 142 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 143 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 145 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 146 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 147 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

OldaleTown_EventScript_Rival_2:
# 137 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Rival_Text_0
	goto OldaleTown_EventScript_Rival_1


OldaleTown_EventScript_RivalTrigger1::
# 152 "data/maps/OldaleTown/scripts.pory"
	lockall
# 153 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 154 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 156 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 158 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleTown_EventScript_RivalTrigger1_2
# 161 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Rival_Text_1
OldaleTown_EventScript_RivalTrigger1_1:
# 163 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 164 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 165 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 166 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 168 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 169 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 170 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

OldaleTown_EventScript_RivalTrigger1_2:
# 159 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Rival_Text_0
	goto OldaleTown_EventScript_RivalTrigger1_1


OldaleTown_EventScript_RivalTrigger2::
# 175 "data/maps/OldaleTown/scripts.pory"
	lockall
# 176 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 177 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 179 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 180 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 181 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleTown_EventScript_RivalTrigger2_2
# 184 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Rival_Text_1
OldaleTown_EventScript_RivalTrigger2_1:
# 186 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 187 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 188 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 189 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 190 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 191 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 192 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 193 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

OldaleTown_EventScript_RivalTrigger2_2:
# 182 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Rival_Text_0
	goto OldaleTown_EventScript_RivalTrigger2_1


OldaleTown_EventScript_RivalTrigger3::
# 198 "data/maps/OldaleTown/scripts.pory"
	lockall
# 199 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 200 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 202 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 204 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleTown_EventScript_RivalTrigger3_2
# 207 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Rival_Text_1
OldaleTown_EventScript_RivalTrigger3_1:
# 209 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 210 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 211 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 212 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 214 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 215 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 216 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

OldaleTown_EventScript_RivalTrigger3_2:
# 205 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Rival_Text_0
	goto OldaleTown_EventScript_RivalTrigger3_1


# 220 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 221 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 221 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 224 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 225 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 228 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 229 "data/maps/OldaleTown/scripts.pory"
	face_left
	step_end

# 232 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 233 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 233 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 233 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 233 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 233 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 233 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

# 236 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 237 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 238 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 239 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
	step_end

OldaleTown_EventScript_RivalAlicia::
# 247 "data/maps/OldaleTown/scripts.pory"
	lock
# 248 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 249 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BIRCH_EGG, OldaleTown_EventScript_RivalAlicia_2
# 255 "data/maps/OldaleTown/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_ALICIA_1, OldaleTown_EventScript_RivalAlicia_Text_1, OldaleTown_EventScript_RivalAlicia_Text_2
# 258 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_RIVAL_ALICIA
# 259 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_RivalAlicia_Text_3
# 261 "data/maps/OldaleTown/scripts.pory"
	release
	end

OldaleTown_EventScript_RivalAlicia_2:
# 250 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_RivalAlicia_Text_0
# 252 "data/maps/OldaleTown/scripts.pory"
	release
	end


OldaleTown_EventScript_Guard1::
# 272 "data/maps/OldaleTown/scripts.pory"
	lockall
# 273 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 274 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 275 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Guard1_Text_0
# 276 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 277 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PushNorth
# 278 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


OldaleTown_EventScript_Guard2::
# 284 "data/maps/OldaleTown/scripts.pory"
	lockall
# 285 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 286 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 287 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Guard2_Text_0
# 288 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 289 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PushNorth
# 290 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


# 295 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PushNorth:
# 296 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

OldaleTown_EventScript_BirchNicknameStarter::
# 306 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_SNAKEWOOD_INTRO_STATE, 3
# 307 "data/maps/OldaleTown/scripts.pory"
	lockall
# 308 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_BirchNicknameStarter_Text_0
# 311 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 314 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_BirchNicknameStarter_Text_1
# 315 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


OldaleTown_EventScript_TownSign_Text_0:
# 36 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Oldale Town sign.$"

OldaleTown_EventScript_Girl_Text_0:
# 45 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Girl NPC dialogue.$"

OldaleTown_EventScript_MartEmployee_Text_0:
# 57 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Potion explanation.$"

OldaleTown_EventScript_MartEmployee_Text_1:
# 63 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Mart employee intro dialogue.$"

OldaleTown_EventScript_MartEmployee_Text_2:
# 79 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Pokemon Mart explanation.$"

OldaleTown_EventScript_Rival_Text_0:
# 137 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Rival (May) dialogue.$"

OldaleTown_EventScript_Rival_Text_1:
# 139 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Rival (Brendan) dialogue.$"

OldaleTown_EventScript_RivalAlicia_Text_0:
# 250 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: You can't go that way yet!\n"
	.string "Go get the egg from Birch on Route 103 first.$"

OldaleTown_EventScript_RivalAlicia_Text_1:
# 256 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Alicia pre-battle dialogue.$"

OldaleTown_EventScript_RivalAlicia_Text_2:
# 257 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Alicia defeat dialogue.$"

OldaleTown_EventScript_RivalAlicia_Text_3:
# 259 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Alicia post-battle dialogue.\n"
	.string "Fine, you may pass.$"

OldaleTown_EventScript_Guard1_Text_0:
# 275 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Guard 1 - You can't go south from here.$"

OldaleTown_EventScript_Guard2_Text_0:
# 287 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Guard 2 - This road is blocked.$"

OldaleTown_EventScript_BirchNicknameStarter_Text_0:
# 308 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Birch arrives in Oldale.\p"
	.string "You handled that really well back there!\p"
	.string "Would you like to give your Pokémon a nickname?$"

OldaleTown_EventScript_BirchNicknameStarter_Text_1:
# 314 "data/maps/OldaleTown/scripts.pory"
	.string "Placeholder: Birch - Take care of yourself out there.$"
