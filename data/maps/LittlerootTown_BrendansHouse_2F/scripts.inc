# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition::
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_lt LittlerootTown_BrendansHouse_2F_OnTransition_2
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition_1:
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_BrendansHouse_2F_OnTransition_5
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition_4:
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_OnTransition_8
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition_7:
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition_2:
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_OnTransition_1
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition_5:
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_OnTransition_4
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition_8:
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_OnTransition_7
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_2
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_1:
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_5
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_4:
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_2:
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_1
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_5:
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos_4
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_2
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_1:
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_5
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_4:
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_2:
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_1
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_5:
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Ret
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos_4
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan_2
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan_1:
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan_2:
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan_1
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_2
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_1:
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_2:
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto SecretBase_EventScript_InitDecorations
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor_1
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_2
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_1:
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_2:
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_1
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_2
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1:
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_5
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_4:
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_8
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_7:
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_11
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_10:
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_2:
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_5:
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_4
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_8:
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_7
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_11:
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_10
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 332 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 337 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 342 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 343 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 344 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 345 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 348 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 349 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 351 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 357 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 360 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 361 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 362 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 364 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 369 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 370 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 371 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 372 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 373 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 374 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 377 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 378 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 383 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 384 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 385 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 386 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 387 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 388 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 390 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 391 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 392 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 393 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 399 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 400 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 403 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 407 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 408 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 409 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 410 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 411 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 412 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 413 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 414 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 415 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 417 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 418 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 421 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 422 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 424 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 433 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 436 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 437 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 438 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 439 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 440 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 441 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 442 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 444 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 445 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 448 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 449 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 451 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 453 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 454 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 455 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 456 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 457 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 458 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 459 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 460 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 461 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 467 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 468 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 469 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 470 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 473 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 474 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 475 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 476 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 477 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 478 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 479 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 480 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 484 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 485 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 486 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 487 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 488 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 489 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 491 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 495 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 496 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 497 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 498 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 499 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 500 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 504 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 505 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 507 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 508 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 509 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 517 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 518 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 519 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 520 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 521 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 522 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 525 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 527 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 528 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 529 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 531 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 532 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 534 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_PC_2
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC_1:
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_PC_5
# 539 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC_4:
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC_2:
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 544 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 545 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_PC_1
# 546 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC_5:
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 549 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 550 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_PC_4
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 553 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 554 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 555 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 556 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 561 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 563 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 564 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 566 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 567 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 568 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 570 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 571 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 572 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 573 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 574 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 575 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 576 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 577 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 578 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 579 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 580 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 581 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 582 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 583 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 584 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 585 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 587 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 588 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 590 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 591 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 592 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 593 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 594 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 596 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 597 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 598 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 599 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 600 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 601 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 602 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 603 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped::
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom::
# 609 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 343 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 610 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 612 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 613 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 614 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 615 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 616 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 617 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 618 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 619 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook::
# 620 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 621 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 622 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 623 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 624 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 625 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 626 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 627 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 628 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap::
# 629 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 630 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 631 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{REGION} region map.$"
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube::
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 368 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 636 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 637 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"
