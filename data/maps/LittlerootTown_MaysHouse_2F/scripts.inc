LittlerootTown_MaysHouse_2F_MapScripts::
# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
	.byte 0


LittlerootTown_MaysHouse_2F_OnTransition::
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
	goto_if_lt LittlerootTown_MaysHouse_2F_OnTransition_2
LittlerootTown_MaysHouse_2F_OnTransition_1:
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_ge LittlerootTown_MaysHouse_2F_OnTransition_5
LittlerootTown_MaysHouse_2F_OnTransition_4:
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq LittlerootTown_MaysHouse_2F_OnTransition_8
LittlerootTown_MaysHouse_2F_OnTransition_7:
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

LittlerootTown_MaysHouse_2F_OnTransition_2:
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
	goto LittlerootTown_MaysHouse_2F_OnTransition_1

LittlerootTown_MaysHouse_2F_OnTransition_5:
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
	goto LittlerootTown_MaysHouse_2F_OnTransition_4

LittlerootTown_MaysHouse_2F_OnTransition_8:
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
	goto LittlerootTown_MaysHouse_2F_OnTransition_7


LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_2
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_1:
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
	goto_if_ge LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_5
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_4:
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
	return

LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_2:
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_1

LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_5:
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Ret
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_4


LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_2
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_1:
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_ge LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_5
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_4:
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 8, 2
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_2:
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Ret
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_1

LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_5:
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Ret
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_4


LittlerootTown_MaysHouse_2F_EventScript_Ret::
	return


LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay_2
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay_1:
	return

LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay_2:
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay_1


LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
	return


# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0

LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor_2
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor_1:
	end

LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor_2:
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto SecretBase_EventScript_InitDecorations
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor_1


LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_2
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_1:
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_2:
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay
	goto LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_1


LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay_2
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1:
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay_5
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_4:
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay_8
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_7:
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay_11
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_10:
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_MeetMay_2:
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1

LittlerootTown_MaysHouse_2F_EventScript_MeetMay_5:
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_4

LittlerootTown_MaysHouse_2F_EventScript_MeetMay_8:
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_7

LittlerootTown_MaysHouse_2F_EventScript_MeetMay_11:
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_10


LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
	return


# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end

RivalsHouse_2F_EventScript_Rival::
# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_Rival_2
RivalsHouse_2F_EventScript_Rival_1:
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_Rival_5
RivalsHouse_2F_EventScript_Rival_4:
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RivalsHouse_2F_EventScript_Rival_8
RivalsHouse_2F_EventScript_Rival_7:
	end

RivalsHouse_2F_EventScript_Rival_2:
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_RivalPostLilycove
	goto RivalsHouse_2F_EventScript_Rival_1

RivalsHouse_2F_EventScript_Rival_5:
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_May
	goto RivalsHouse_2F_EventScript_Rival_4

RivalsHouse_2F_EventScript_Rival_8:
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_Brendan
	goto RivalsHouse_2F_EventScript_Rival_7


RivalsHouse_2F_EventScript_May::
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end


RivalsHouse_2F_EventScript_Brendan::
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end


RivalsHouse_2F_EventScript_RivalPostLilycove::
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_RivalPostLilycove_2
RivalsHouse_2F_EventScript_RivalPostLilycove_1:
# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq RivalsHouse_2F_EventScript_RivalPostLilycove_5
RivalsHouse_2F_EventScript_RivalPostLilycove_4:
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

RivalsHouse_2F_EventScript_RivalPostLilycove_2:
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call RivalsHouse_2F_EventScript_MayPostLilycove
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_1

RivalsHouse_2F_EventScript_RivalPostLilycove_5:
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call RivalsHouse_2F_EventScript_BrendanPostLilycove
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_4


RivalsHouse_2F_EventScript_MayPostLilycove::
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayPostLilycove_2
RivalsHouse_2F_EventScript_MayPostLilycove_1:
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
	return

RivalsHouse_2F_EventScript_MayPostLilycove_2:
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
	goto RivalsHouse_2F_EventScript_MayPostLilycove_1


RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanPostLilycove_2
RivalsHouse_2F_EventScript_BrendanPostLilycove_1:
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
	return

RivalsHouse_2F_EventScript_BrendanPostLilycove_2:
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
	goto RivalsHouse_2F_EventScript_BrendanPostLilycove_1


RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
	return


RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
	return


LittlerootTown_MaysHouse_2F_EventScript_PC::
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_PC_2
LittlerootTown_MaysHouse_2F_EventScript_PC_1:
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_PC_5
LittlerootTown_MaysHouse_2F_EventScript_PC_4:
	end

LittlerootTown_MaysHouse_2F_EventScript_PC_2:
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
	goto LittlerootTown_MaysHouse_2F_EventScript_PC_1

LittlerootTown_MaysHouse_2F_EventScript_PC_5:
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
	goto LittlerootTown_MaysHouse_2F_EventScript_PC_4


LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end


LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end


LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end


RivalsHouse_2F_Text_MayWhoAreYou::
# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh?\n"
	.string "Who… Who are you?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}.\n"
	.string "So your move was today.\p"
	.string "Um… I'm MAY.\n"
	.string "Glad to meet you!\p"
	.string "I…\n"
	.string "I have this dream of becoming friends\l"
	.string "with POKéMON all over the world.\p"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
	.string "my dad, PROF. BIRCH.\p"
	.string "I was hoping that you would be nice,\n"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
	.string "Oh, this is silly, isn't it?\n"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
	.string "Eheheh…\p"
	.string "Oh, no! I forgot!\p"
	.string "I was supposed to go help Dad catch\n"
	.string "some wild POKéMON!\p"
	.string "{PLAYER}{KUN}, I'll catch you later!$"

RivalsHouse_2F_Text_MayGettingReady::
# 422 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored!\n"
	.string "Items ready, and…$"

RivalsHouse_2F_Text_BrendanWhoAreYou::
# 427 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
	.string "You…\p"
	.string "Who are you?\p"
	.string "Oh, you're {PLAYER}, aren't you?\n"
	.string "Moved in next door, right?\p"
	.string "I didn't know that you're a girl.\p"
	.string "Dad, PROF. BIRCH, said that our new\n"
	.string "next-door neighbor is a GYM LEADER's\l"
	.string "kid, so I assumed you'd be a guy.\p"
	.string "My name's BRENDAN.\n"
	.string "So, hi, neighbor!\p"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
	.string "a POKéMON?\p"
	.string "Do you want me to go catch you one?\p"
	.string "Aw, darn, I forgot…\p"
	.string "I'm supposed to go help my dad catch\n"
	.string "some wild POKéMON.\p"
	.string "Some other time, okay?$"

RivalsHouse_2F_Text_BrendanGettingReady::
# 448 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored…\n"
	.string "Items all packed, and…$"

RivalsHouse_2F_Text_ItsRivalsPokeBall::
# 453 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s POKé BALL!\p"
	.string "Better leave it right where it is.$"

RivalsHouse_2F_Text_MayJustCheckingMyPokedex::
# 458 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
	.string "I was just checking my POKéDEX.\p"
	.string "There's still a lot of POKéMON that\n"
	.string "I've seen but haven't caught.\p"
	.string "And there are many others that\n"
	.string "I think will evolve.\p"
	.string "I wonder where I should go catch\n"
	.string "some POKéMON next?$"

RivalsHouse_2F_Text_MayWhereShouldIGoNext::
# 469 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: I wonder where I should go catch\n"
	.string "some POKéMON next?\p"
	.string "Wouldn't it be funny if we ran into each\n"
	.string "other, {PLAYER}{KUN}?$"

RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex::
# 476 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: Hey, it's {PLAYER}.\p"
	.string "I was just checking out my POKéDEX.\p"
	.string "There are still many POKéMON that\n"
	.string "I need to catch, I know, but this\l"
	.string "is looking pretty good.\p"
	.string "Checking this POKéDEX out gives me\n"
	.string "the urge to hit the road again.$"

RivalsHouse_2F_Text_BrendanWhereShouldIGoNext::
# 486 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: I'm having a hard time deciding\n"
	.string "where I should catch POKéMON next.\p"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
	.string "catching POKéMON, I can pitch you a\l"
	.string "battle if you'd like.$"
