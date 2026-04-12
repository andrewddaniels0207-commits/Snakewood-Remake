# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition::
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_lt LittlerootTown_MaysHouse_2F_OnTransition_2
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition_1:
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_MaysHouse_2F_OnTransition_5
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition_4:
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_OnTransition_8
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition_7:
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition_2:
# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_OnTransition_1
# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition_5:
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_OnTransition_4
# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition_8:
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_OnTransition_7
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_2
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_1:
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_5
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_4:
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_2:
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_1
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_5:
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Ret
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos_4
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_2
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_1:
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_5
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_4:
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 8, 2
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_2:
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Ret
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_1
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_5:
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_Ret
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos_4
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay_2
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay_1:
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay_2:
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay_1
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor_2
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor_1:
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor_2:
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto SecretBase_EventScript_InitDecorations
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor_1
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_2
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_1:
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_2:
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_1
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay_2
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1:
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay_5
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_4:
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay_8
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_7:
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay_11
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_10:
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_2:
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_5:
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_4
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_8:
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_7
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_11:
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_10
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 394 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 395 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 396 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 398 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 399 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 400 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 401 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 402 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 403 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 404 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 405 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 406 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 407 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 408 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 409 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 410 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 411 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 412 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 413 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 414 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 415 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 416 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 417 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 418 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 419 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 420 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 421 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 422 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 423 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 424 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 425 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 426 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 427 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 428 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 429 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 430 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 431 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 432 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 433 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 434 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 435 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 436 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 437 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 438 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 439 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 440 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 441 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 442 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 443 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 444 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 445 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 446 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 447 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 448 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 449 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 450 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 451 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 452 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 453 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 454 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 455 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 456 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 457 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 458 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 459 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 460 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 461 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 462 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 463 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 464 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 465 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 466 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 467 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 468 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 469 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 470 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 471 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 472 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 473 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 474 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 475 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 476 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 477 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 478 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 479 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 480 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 481 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 482 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 483 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 484 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 485 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 486 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 487 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 488 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 489 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 490 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 491 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 492 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 493 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 494 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 495 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 496 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 497 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 498 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 499 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 500 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 501 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 502 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 503 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 504 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 505 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 506 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 507 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 508 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 509 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 510 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 511 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 512 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 513 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 514 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 515 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 516 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 517 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 518 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 519 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 520 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 521 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 522 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 523 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 524 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 525 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 526 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 527 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 528 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 529 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 530 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 531 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 532 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 533 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_Rival_2
# 534 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival_1:
# 535 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 536 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 537 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 538 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 539 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq RivalsHouse_2F_EventScript_Rival_5
# 540 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival_4:
# 541 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 542 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 543 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq RivalsHouse_2F_EventScript_Rival_8
# 544 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival_7:
# 545 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 546 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 547 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival_2:
# 548 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 549 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_RivalPostLilycove
# 550 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_Rival_1
# 551 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 552 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival_5:
# 553 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 554 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_May
# 555 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_Rival_4
# 556 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 557 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival_8:
# 558 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 559 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_Brendan
# 560 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_Rival_7
# 561 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 562 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 563 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 564 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 565 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 566 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 567 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 568 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 569 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 570 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 571 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 572 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 573 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 574 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 575 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 576 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 577 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 578 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 579 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 580 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 581 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 582 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 583 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 584 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 585 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 586 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 587 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 588 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq RivalsHouse_2F_EventScript_RivalPostLilycove_2
# 589 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove_1:
# 590 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 591 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 592 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq RivalsHouse_2F_EventScript_RivalPostLilycove_5
# 593 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove_4:
# 594 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 595 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 596 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 597 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 598 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 599 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 600 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove_2:
# 601 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 602 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call RivalsHouse_2F_EventScript_MayPostLilycove
# 603 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_1
# 604 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 605 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove_5:
# 606 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 607 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call RivalsHouse_2F_EventScript_BrendanPostLilycove
# 608 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_4
# 609 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 610 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 611 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 612 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 613 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayPostLilycove_2
# 614 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove_1:
# 615 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 616 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 617 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 618 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 619 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove_2:
# 620 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 621 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 622 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_MayPostLilycove_1
# 623 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 624 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 625 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 626 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 627 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanPostLilycove_2
# 628 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove_1:
# 629 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 630 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 631 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 632 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 633 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove_2:
# 634 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 635 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 636 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_BrendanPostLilycove_1
# 637 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 638 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 639 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 640 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 641 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 642 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 643 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 644 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 645 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 646 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 647 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 648 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 649 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 650 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 651 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 652 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 653 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 654 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 655 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 656 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 657 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 658 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_PC_2
# 659 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC_1:
# 660 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 661 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 662 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_PC_5
# 663 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC_4:
# 664 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 665 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 666 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC_2:
# 667 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 668 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 669 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_PC_1
# 670 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 671 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC_5:
# 672 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 673 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 674 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_PC_4
# 675 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 676 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 677 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 678 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 679 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 680 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 681 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 682 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 683 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 684 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 685 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 686 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 687 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 688 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 689 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 690 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 691 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 692 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 693 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 694 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 695 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 696 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 697 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 698 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 699 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 700 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 701 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 702 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 703 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 704 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 705 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 706 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 707 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 708 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 709 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 710 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 711 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 712 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 713 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 714 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 715 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou::
# 716 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 717 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh?\n"
# 718 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who… Who are you?\p"
# 719 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\n"
# 720 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\p"
# 721 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 722 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So your move was today.\p"
# 723 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 724 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Glad to meet you!\p"
# 725 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I…\n"
# 726 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 727 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 728 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 729 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 730 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 731 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 732 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 733 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 734 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Eheheh…\p"
# 735 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 736 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 737 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild POKéMON!\p"
# 738 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 739 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 740 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady::
# 741 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 422 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 742 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored!\n"
# 743 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items ready, and…$"
# 744 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 745 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou::
# 746 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 427 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 747 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
# 748 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "You…\p"
# 749 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who are you?\p"
# 750 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 751 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Moved in next door, right?\p"
# 752 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 753 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 754 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 755 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 756 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 757 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 758 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 759 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a POKéMON?\p"
# 760 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 761 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 762 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 763 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild POKéMON.\p"
# 764 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Some other time, okay?$"
# 765 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 766 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady::
# 767 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 448 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 768 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored…\n"
# 769 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items all packed, and…$"
# 770 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 771 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall::
# 772 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 453 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 773 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s POKé BALL!\p"
# 774 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 775 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 776 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex::
# 777 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 458 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 778 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 779 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my POKéDEX.\p"
# 780 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of POKéMON that\n"
# 781 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 782 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 783 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 784 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 785 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some POKéMON next?$"
# 786 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 787 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext::
# 788 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 469 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 789 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: I wonder where I should go catch\n"
# 790 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some POKéMON next?\p"
# 791 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 792 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 793 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 794 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex::
# 795 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 476 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 796 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: Hey, it's {PLAYER}.\p"
# 797 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my POKéDEX.\p"
# 798 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many POKéMON that\n"
# 799 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 800 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 801 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this POKéDEX out gives me\n"
# 802 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 803 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 804 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext::
# 805 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 486 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
# 806 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: I'm having a hard time deciding\n"
# 807 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch POKéMON next.\p"
# 808 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 809 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching POKéMON, I can pitch you a\l"
# 810 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"
