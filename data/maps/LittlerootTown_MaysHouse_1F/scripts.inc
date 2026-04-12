# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad::
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_lt LittlerootTown_MaysHouse_1F_OnLoad_2
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad_1:
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_OnLoad_5
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad_4:
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad_2:
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_OnLoad_1
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad_5:
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_OnLoad_4
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual_2
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual_1:
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual_2:
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual_1
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition::
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_OnTransition_2
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition_1:
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_OnTransition_5
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition_4:
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_OnTransition_8
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition_7:
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition_2:
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_OnTransition_1
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition_5:
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_OnTransition_4
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition_8:
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_OnTransition_7
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_RivalMom_2
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom_1:
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalMom_5
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom_4:
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq RivalsHouse_1F_EventScript_RivalMom_8
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom_7:
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom_2:
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_RivalMom_1
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom_5:
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_RivalMom_4
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom_8:
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_RivalTooBusy
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto RivalsHouse_1F_EventScript_RivalMom_7
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_ne LittlerootTown_MaysHouse_1F_EventScript_MeetRival_2
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_1:
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_5
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_4:
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_8
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_7:
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_11
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_10:
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_14
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_13:
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_17
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_16:
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_MeetRival_20
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_19:
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 418 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 421 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 422 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 424 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 425 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 426 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 427 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 428 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 429 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 430 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 431 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_2:
# 433 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 434 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 435 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_1
# 436 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 437 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_5:
# 438 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 439 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 440 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_4
# 441 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 442 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_8:
# 443 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 444 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 445 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_7
# 446 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 447 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_11:
# 448 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 449 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 450 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_10
# 451 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 452 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_14:
# 453 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 454 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 455 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_13
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_17:
# 458 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 459 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 460 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_16
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 462 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_20:
# 463 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 464 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 465 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_19
# 466 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 468 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 469 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 470 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 471 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 473 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 474 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 475 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 476 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 477 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 478 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 479 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 480 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 481 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 482 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 483 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 484 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 485 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 486 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 487 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 488 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 489 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 490 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 491 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 492 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 493 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 494 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 495 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 496 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 497 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 498 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 499 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 500 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 501 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 502 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 503 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 504 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 505 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 506 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 507 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 508 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 509 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 510 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 511 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 512 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 513 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 514 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 515 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 516 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 517 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 518 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 519 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 520 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 521 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 522 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 523 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 524 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 525 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 526 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 527 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 528 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 529 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 530 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 531 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 532 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 533 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 534 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 535 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 536 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 537 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 538 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 539 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 540 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 541 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 542 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 543 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 544 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 545 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 546 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 547 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 548 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 549 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 550 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 551 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 552 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 553 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 554 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 555 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 556 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 557 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 558 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 559 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 560 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 561 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 562 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 563 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 564 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 565 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 566 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 567 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 568 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 569 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 570 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 571 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 572 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 573 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 574 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 575 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 577 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 578 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 579 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 580 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 581 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 582 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 583 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 584 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 585 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 586 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 587 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 588 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 589 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 590 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 591 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 592 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 593 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 594 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 595 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 596 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 597 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 598 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 599 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 600 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 601 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 602 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 603 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 604 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 605 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 606 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 607 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 608 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 609 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 610 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 611 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 612 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 613 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 614 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 615 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 616 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 617 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 618 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 619 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 620 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 621 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 622 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 623 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 624 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 625 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 626 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 627 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 628 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 629 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 630 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 631 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 632 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 633 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 634 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 635 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 636 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 637 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 638 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 639 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 640 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 641 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 642 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 643 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 644 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 645 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 646 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 647 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 648 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 649 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 650 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 651 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 652 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 653 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 654 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 655 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 656 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 657 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 658 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 659 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 660 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 661 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 662 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 663 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 664 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 665 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 666 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 667 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 668 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 669 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 670 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 671 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor::
# 672 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 673 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 674 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 675 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 676 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 677 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 678 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 679 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 680 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 681 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 682 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 683 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 684 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather::
# 685 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 686 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 687 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 688 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 689 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 690 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 691 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 692 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit::
# 693 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 694 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 695 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 696 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 697 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 698 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 699 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103::
# 700 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 701 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 702 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 703 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 704 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 705 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 706 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften::
# 707 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 708 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 709 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with POKéMON.\p"
# 710 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 711 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 712 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 713 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 714 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 715 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou::
# 716 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 717 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 718 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 719 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 720 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 721 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 722 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 723 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 724 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 725 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 726 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 727 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 728 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 729 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 730 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 731 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 732 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 733 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 734 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 735 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 736 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 737 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON!\p"
# 738 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 739 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 740 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou::
# 741 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 742 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 743 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 744 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 745 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 746 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 747 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 748 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 749 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 750 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 751 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 752 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 753 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 754 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a POKéMON?\p"
# 755 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 756 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 757 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 758 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild POKéMON.\p"
# 759 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 760 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 761 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon::
# 762 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 478 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
# 763 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 764 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 765 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own POKéMON?$"
