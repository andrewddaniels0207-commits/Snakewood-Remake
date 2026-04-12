# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad::
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_lt LittlerootTown_BrendansHouse_1F_OnLoad_2
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad_1:
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_OnLoad_5
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad_4:
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad_2:
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_OnLoad_1
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad_5:
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_OnLoad_4
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual_2
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual_1:
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual_2:
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual_1
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition::
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_OnTransition_2
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition_1:
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_OnTransition_5
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition_4:
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_OnTransition_8
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition_7:
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition_2:
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_OnTransition_1
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition_5:
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_OnTransition_4
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition_8:
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_OnTransition_7
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_ne LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_2
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_1:
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_5
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_4:
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_8
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_7:
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_11
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_10:
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_14
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_13:
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_17
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_16:
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_20
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_19:
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_2:
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_1
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_5:
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_4
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_8:
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_7
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_11:
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_10
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_14:
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_13
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_17:
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_16
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_20:
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival_19
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 547 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 548 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 549 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 550 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 551 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 552 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 553 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 554 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 555 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 556 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 557 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 558 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 559 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 560 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 561 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 562 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 563 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 564 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 565 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 566 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 567 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 568 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 569 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 570 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 571 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 572 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 573 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 574 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 575 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 576 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 577 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 578 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 579 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 580 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 581 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 582 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 583 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 584 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 585 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 586 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 587 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 588 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 589 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 590 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 591 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 592 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 593 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 594 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere::
# 595 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 596 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 597 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 598 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 599 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock::
# 600 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 601 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 602 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 603 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 604 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 605 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 606 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 607 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 608 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 609 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 610 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom::
# 611 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 612 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 613 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 614 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 615 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 616 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock::
# 617 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 618 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 619 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 620 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 621 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly::
# 622 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 623 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 624 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 625 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 626 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn::
# 627 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 628 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 629 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 630 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 631 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim::
# 632 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 633 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 634 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 635 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 636 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 637 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor::
# 638 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 639 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 640 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 641 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 642 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 643 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 644 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 645 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney::
# 646 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 647 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 648 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 649 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch::
# 650 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 651 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 652 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 653 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 654 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit::
# 655 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 656 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 657 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 658 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 659 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 660 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney::
# 661 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 662 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 663 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 664 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom::
# 665 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 666 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 667 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 668 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 669 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard::
# 670 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 671 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 672 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 673 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 674 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 675 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav::
# 676 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 677 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 678 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 679 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 680 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 681 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 682 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 683 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom::
# 684 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 685 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 686 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 687 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 688 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1::
# 689 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 690 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 691 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 692 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2::
# 693 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 694 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 695 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 696 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym::
# 697 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 698 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 699 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 700 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 701 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV::
# 702 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 703 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 704 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 705 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 706 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 707 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 708 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual::
# 709 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 710 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 711 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 712 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 713 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 714 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 715 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 716 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 717 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou::
# 718 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 719 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 720 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 721 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 722 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 723 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 724 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 725 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 726 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 727 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 728 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 729 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove::
# 730 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 731 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 732 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 733 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 734 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 735 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym::
# 736 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 737 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 738 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 739 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 740 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 741 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger::
# 742 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 743 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 744 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 745 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 746 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 747 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 748 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory::
# 749 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 750 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 751 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 752 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash::
# 753 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 754 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 755 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 756 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 757 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 758 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 759 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 760 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 761 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 762 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 763 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 764 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay::
# 765 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 766 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 767 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 768 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 769 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 770 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon::
# 771 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
# 772 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 773 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"
