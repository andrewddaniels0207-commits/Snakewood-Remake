LittlerootTown_BrendansHouse_2F_MapScripts::
# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
	.byte 0


LittlerootTown_BrendansHouse_2F_OnTransition::
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
	goto_if_lt LittlerootTown_BrendansHouse_2F_OnTransition_2
LittlerootTown_BrendansHouse_2F_OnTransition_1:
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_ge LittlerootTown_BrendansHouse_2F_OnTransition_5
LittlerootTown_BrendansHouse_2F_OnTransition_4:
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq LittlerootTown_BrendansHouse_2F_OnTransition_8
LittlerootTown_BrendansHouse_2F_OnTransition_7:
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

LittlerootTown_BrendansHouse_2F_OnTransition_2:
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
	goto LittlerootTown_BrendansHouse_2F_OnTransition_1

LittlerootTown_BrendansHouse_2F_OnTransition_5:
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
	goto LittlerootTown_BrendansHouse_2F_OnTransition_4

LittlerootTown_BrendansHouse_2F_OnTransition_8:
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
	goto LittlerootTown_BrendansHouse_2F_OnTransition_7


LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_2
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_1:
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
	goto_if_ge LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_5
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_4:
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
	return

LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_2:
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_1

LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_5:
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_Ret
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_4


LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_2
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_1:
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_ge LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_5
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_4:
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_2:
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_Ret
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_1

LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_5:
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Ret
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_4


LittlerootTown_BrendansHouse_2F_EventScript_Ret::
	return


LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan_2
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan_1:
	return

LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan_2:
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan_1


LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
	return


# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0

LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_2
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_1:
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_2:
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto SecretBase_EventScript_InitDecorations
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_1


LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_2
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_1:
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_2:
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
	goto LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_1


LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_2
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1:
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_5
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_4:
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_8
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_7:
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_11
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_10:
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_2:
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_5:
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_4

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_8:
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_7

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_11:
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_10


LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
	return


LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
	return


# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_PC_2
LittlerootTown_BrendansHouse_2F_EventScript_PC_1:
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_PC_5
LittlerootTown_BrendansHouse_2F_EventScript_PC_4:
	end

LittlerootTown_BrendansHouse_2F_EventScript_PC_2:
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	goto LittlerootTown_BrendansHouse_2F_EventScript_PC_1

LittlerootTown_BrendansHouse_2F_EventScript_PC_5:
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
	goto LittlerootTown_BrendansHouse_2F_EventScript_PC_4


LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


PlayersHouse_2F_EventScript_Notebook::
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end


PlayersHouse_2F_EventScript_GameCube::
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
	end


PlayersHouse_2F_Text_ClockIsStopped::
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"

PlayersHouse_2F_Text_HowDoYouLikeYourRoom::
# 343 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
	.string "new room?\p"
	.string "Good! Everything's put away neatly!\p"
	.string "They finished moving everything in\n"
	.string "downstairs, too.\p"
	.string "POKéMON movers are so convenient!\p"
	.string "Oh, you should make sure that\n"
	.string "everything's all there on your desk.$"

PlayersHouse_2F_Text_Notebook::
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"

Common_Text_LookCloserAtMap::
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
	.string "{REGION} region map.$"

PlayersHouse_2F_Text_ItsAGameCube::
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
	.string "A Game Boy Advance is connected to\n"
	.string "serve as the Controller.$"
