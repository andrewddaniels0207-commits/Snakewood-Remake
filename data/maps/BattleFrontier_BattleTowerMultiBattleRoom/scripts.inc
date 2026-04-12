# 1 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiBattleRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiBattleRoom_OnWarp
# 7 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom
# 14 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnTransition::
# 18 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 20 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_2
# 21 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_1:
# 22 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 24 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_5
# 25 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_4:
# 26 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_2:
# 29 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx
# 31 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_1
# 32 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_5:
# 34 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 14 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetLinkPlayerGfx
# 36 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_OnTransition_4
# 37 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 38 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 39 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx::
# 40 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setpartnergfx
# 42 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	checkplayergender
# 44 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 46 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx_2
# 47 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx_1:
# 48 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 50 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 51 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx_2:
# 53 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetPlayerGfxFemale
# 55 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetObjGfx_1
# 56 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 57 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 58 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetPlayerGfxFemale::
# 59 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_MAY_NORMAL
# 61 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 62 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 63 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 64 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_SetLinkPlayerGfx::
# 65 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special SetBattleTowerLinkPlayerGfx
# 67 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 68 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 69 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 70 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 72 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_OnWarp:
# 74 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_HidePlayerObj
# 76 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.2byte 0
# 78 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 79 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_HidePlayerObj::
# 80 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM
# 82 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 83 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 84 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 85 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom::
# 86 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 88 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_PlayerEnterRoom
# 90 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_PartnerEnterRoom
# 92 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 96 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 98 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom_2
# 99 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom_1:
# 100 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 102 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 104 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 106 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 108 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 110 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 112 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 114 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 116 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 117 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 118 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom_2:
# 119 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter
# 121 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_EnterRoom_1
# 122 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 123 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 124 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter::
# 125 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setopponent
# 127 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	addobject LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1
# 129 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	addobject LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2
# 131 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Enter
# 133 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Enter
# 135 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 137 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 139 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter_2
# 140 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter_1:
# 141 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 143 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 15
# 145 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 147 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 149 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 153 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 1
# 155 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 157 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 159 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 163 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle
# 165 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 166 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 167 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter_2:
# 168 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoOpponentIntrosLink
# 170 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter_1
# 171 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 172 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 173 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoOpponentIntrosLink::
# 174 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 176 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 177 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 15
# 178 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 180 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 182 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll gStringVar4
# 184 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 186 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 188 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_getopponentintro 1
# 190 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft
# 192 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 194 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll gStringVar4
# 196 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 197 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 198 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 200 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 201 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 202 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 203 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle::
# 204 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerBattleRoom_EventScript_DoTowerBattle
# 206 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case B_OUTCOME_WON, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle_2
# 210 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 211 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 212 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DoTowerBattle_2:
# 213 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents
# 215 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 216 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 217 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 218 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost::
# 219 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 221 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 223 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 225 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 227 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 229 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 230 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 231 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents::
# 233 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 235 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_setbattlewon
# 237 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 239 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents_3
# 241 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents_1:
# 242 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Exit
# 244 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Exit
# 246 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 248 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	removeobject LOCALID_TOWER_MULTI_BATTLE_OPPONENT_1
# 250 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 251 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	removeobject LOCALID_TOWER_MULTI_BATTLE_OPPONENT_2
# 252 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 254 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer
# 256 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 258 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 260 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant
# 262 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 264 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 266 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents_5
# 267 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents_4:
# 268 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
# 270 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty
# 272 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 273 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 274 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents_3:
# 275 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyWon
# 277 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents_1
# 278 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 279 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents_5:
# 280 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetorePartyMsgLink
# 282 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_DefeatedOpponents_4
# 283 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 284 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetorePartyMsgLink::
# 286 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 287 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerBattleRoom_Text_RestoreMonsToFullHealth
# 288 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 290 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 292 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 293 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 294 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 295 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty::
# 296 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 297 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LoadPlayerParty
# 298 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_MULTI_PARTY_SIZE
# 300 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 302 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty_2
# 303 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty_1:
# 304 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 305 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 306 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitfanfare
# 308 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special HealPlayerParty
# 310 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 311 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 312 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty_2:
# 313 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReconnectLink
# 315 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RestoreParty_1
# 316 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 318 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents::
# 319 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 321 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet
# 323 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 325 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_2
# 326 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_1:
# 327 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 329 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 331 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_5
# 332 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_4:
# 333 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 335 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 336 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 337 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 338 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_8
# 339 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_9
# 341 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_10
# 343 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_11
# 345 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_12
# 347 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 348 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 349 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_2:
# 350 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 351 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 352 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_1
# 353 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 354 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_5:
# 355 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord
# 357 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_4
# 358 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_8:
# 360 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 362 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 363 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_9:
# 365 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 366 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle
# 367 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 368 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_10:
# 370 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 371 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge
# 372 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 373 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 374 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_11:
# 375 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 376 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge
# 377 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 378 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 379 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents_12:
# 380 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 382 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 383 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 385 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord::
# 386 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 387 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 388 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 389 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 390 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 391 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord_2
# 392 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 198 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord_3
# 394 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord_4
# 396 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 397 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord_5
# 398 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 399 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 400 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord_2:
# 401 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 197 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 402 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge
# 403 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 404 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord_3:
# 406 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge
# 408 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 409 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 410 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord_4:
# 411 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 412 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge
# 413 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 414 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 415 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsNoRecord_5:
# 416 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 418 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 419 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 420 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 421 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle::
# 422 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle
# 424 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 426 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 428 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 430 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle_2
# 432 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle_3
# 434 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 435 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle_4
# 436 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 437 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle_2:
# 439 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 441 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 442 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 443 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle_3:
# 444 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 215 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RecordBattle
# 446 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 447 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattle_4:
# 449 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 451 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 452 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 454 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RecordBattle::
# 455 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 457 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 459 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 460 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 461 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 462 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge::
# 463 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 227 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 464 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 465 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 466 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 467 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 229 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge_2
# 469 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge_3
# 471 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 233 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 472 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge_4
# 473 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 474 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 475 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge_2:
# 476 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 477 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 478 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 479 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 480 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge_3:
# 481 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_PauseChallenge
# 483 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 484 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskPauseChallenge_4:
# 486 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 487 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 488 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 489 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 490 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge::
# 492 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 239 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 493 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
# 494 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 496 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 497 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 498 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 499 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 500 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge_2
# 502 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 503 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge_3
# 504 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 505 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge_4
# 506 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 507 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 508 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge_2:
# 509 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 511 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 512 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge_3:
# 514 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 516 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 517 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallenge_4:
# 519 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 521 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 522 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 523 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 524 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallenge::
# 525 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	closemessage
# 527 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	clearflag FLAG_TEMP_2
# 529 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 530 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PLAYER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle
# 531 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_PARTNER, BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle
# 533 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 534 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 535 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_1, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos
# 537 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 538 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_BATTLE_ATTENDANT_2, BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos
# 539 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 540 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmovement 0
# 541 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_OpponentsEnter
# 543 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 544 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 545 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 546 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyWon::
# 547 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 549 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_set TOWER_DATA_LVL_MODE
# 551 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, FANCOUNTER_USED_BATTLE_TOWER
# 553 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 555 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 556 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerBattleRoom_EventScript_WarpToLobby
# 557 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 558 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 559 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_PauseChallenge::
# 561 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait
# 563 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 565 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	tower_save CHALLENGE_STATUS_PAUSED
# 567 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 277 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	playse SE_SAVE
# 569 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitse
# 571 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 279 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	fadescreen 1
# 573 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	frontier_reset
# 575 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 576 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 577 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 578 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet::
# 579 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 285 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 581 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_2
# 582 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_1:
# 583 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 585 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 587 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_5
# 589 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_6
# 591 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_7
# 593 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_8
# 595 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_9
# 597 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 6, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_10
# 599 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 600 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 601 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_2:
# 602 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 286 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 603 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink
# 604 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_1
# 605 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 606 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_5:
# 607 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSet
# 609 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 610 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 611 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_6:
# 612 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 613 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSet
# 614 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 615 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 616 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_7:
# 617 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 618 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSet
# 619 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 620 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 621 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_8:
# 622 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 297 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 623 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSet
# 624 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 625 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 626 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_9:
# 627 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 628 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSet
# 629 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 630 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 631 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSet_10:
# 632 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 633 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSet
# 634 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 635 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 636 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 637 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSet::
# 638 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 306 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 639 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet
# 640 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 641 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 642 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 643 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 644 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 645 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSet::
# 646 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 312 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 647 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet
# 648 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 649 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 650 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 651 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 652 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 653 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSet::
# 654 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 655 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet
# 656 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 657 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 658 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 659 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 660 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 661 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSet::
# 662 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 663 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet
# 664 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 325 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 665 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 666 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 667 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 668 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 669 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSet::
# 670 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 671 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet
# 672 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 331 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 674 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 675 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 676 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 677 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSet::
# 678 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 336 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 679 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet
# 680 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 682 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 683 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 684 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 685 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink::
# 686 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 687 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 688 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 343 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 689 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 690 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_2
# 692 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 693 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_3
# 694 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 695 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_4
# 696 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_5
# 698 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 352 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 699 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_6
# 700 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 354 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 701 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 6, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_7
# 702 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 703 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 704 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_2:
# 705 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 345 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 706 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSetLink
# 707 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 708 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 709 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_3:
# 710 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 347 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 711 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSetLink
# 712 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 713 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 714 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_4:
# 715 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 349 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSetLink
# 717 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 718 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 719 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_5:
# 720 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 351 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 721 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSetLink
# 722 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 723 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 724 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_6:
# 725 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 353 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 726 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSetLink
# 727 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 728 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 729 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyForNextOpponentSetLink_7:
# 730 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 731 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSetLink
# 732 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 733 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 734 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 735 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor2ndOpponentSetLink::
# 736 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 360 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 737 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet
# 738 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 739 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 740 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 741 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 742 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 743 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 744 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 745 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor3rdOpponentSetLink::
# 746 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 367 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 747 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet
# 748 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 368 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 749 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 750 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 369 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 751 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 752 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 753 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 754 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 755 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor4thOpponentSetLink::
# 756 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 374 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 757 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet
# 758 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 375 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 759 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 760 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 376 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 761 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 762 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 763 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 764 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 765 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor5thOpponentSetLink::
# 766 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 767 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet
# 768 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 382 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 769 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 770 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 771 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 772 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 773 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 774 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 775 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor6thOpponentSetLink::
# 776 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 388 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 777 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet
# 778 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 389 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 779 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 780 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 390 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 781 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 782 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 783 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 784 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 785 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReadyFor7thOpponentSetLink::
# 786 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 787 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet
# 788 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 789 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 790 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 397 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 791 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink
# 792 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 793 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 794 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 795 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_LinkDelayForMsg::
# 796 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 402 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 797 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 798 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 403 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 799 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	delay 48
# 800 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 801 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 802 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 803 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink::
# 804 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 408 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 805 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_2
# 806 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_1:
# 807 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 808 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 19, 6, MULTI_GO_ON_RECORD_RETIRE, TRUE
# 809 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 412 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 810 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 811 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 812 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_6
# 813 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 814 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_7
# 815 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 816 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_8
# 817 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 818 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_9
# 819 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_4:
# 820 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 821 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 822 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_2:
# 823 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 824 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord
# 825 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_1
# 826 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 827 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_6:
# 828 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 414 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 829 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink
# 830 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_4
# 831 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 832 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_7:
# 833 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 416 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 834 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink
# 835 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_4
# 836 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 837 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_8:
# 838 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 418 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 839 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 840 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_4
# 841 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 842 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_9:
# 843 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 420 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 844 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 845 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLink_4
# 846 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 847 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 848 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord::
# 849 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 426 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 850 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoice 20, 8, MULTI_GO_ON_RETIRE, TRUE
# 851 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 852 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 853 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 428 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 854 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_3
# 855 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 430 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_4
# 857 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 858 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_5
# 859 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_1:
# 860 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 861 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 862 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_3:
# 863 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 864 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink
# 865 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_1
# 866 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 867 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_4:
# 868 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 869 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 870 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_1
# 871 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 872 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_5:
# 873 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 874 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink
# 875 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponentsLinkNoRecord_1
# 876 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 877 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 878 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink::
# 879 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 439 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 880 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_TOWER_LINK_CONTINUE
# 881 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 882 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 883 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 441 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 884 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message gText_LinkStandby3
# 885 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 886 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 887 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 443 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 888 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LinkRetireStatusWithBattleTowerPartner
# 889 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 890 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitstate
# 891 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 892 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_RESULT, BATTLE_TOWER_LINKSTAT_CONTINUE
# 893 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink_2
# 894 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink_1:
# 895 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 448 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 896 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_LinkDelayForMsg
# 897 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 898 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 899 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink_2:
# 900 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 446 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 901 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 902 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ContinueChallengeLink_1
# 903 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 904 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 905 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink::
# 906 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 453 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 907 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_RecordYourBattle
# 908 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 454 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 909 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 910 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 911 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 912 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 913 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	switch VAR_RESULT
# 914 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 457 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 915 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink_3
# 916 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 459 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 917 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink_4
# 918 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink_1:
# 919 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 920 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 921 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 463 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 922 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 923 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 464 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 924 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 925 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 926 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 927 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink_3:
# 928 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 929 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 930 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink_1
# 931 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 932 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink_4:
# 933 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 460 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 934 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 935 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRecordBattleLink_1
# 936 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 937 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 938 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink::
# 939 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 469 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
# 941 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 942 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 943 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 944 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 945 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 472 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 946 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 947 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink_2
# 948 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink_1:
# 949 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 475 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 950 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskReadyForOpponents
# 951 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 952 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 953 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink_2:
# 954 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 955 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetireChallengeLink
# 956 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_AskRetireChallengeLink_1
# 957 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 958 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 959 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_RetireChallengeLink::
# 960 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 961 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_TOWER_LINK_RETIRE
# 962 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 963 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 964 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 965 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	message gText_LinkStandby3
# 966 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 483 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 967 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitmessage
# 968 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 969 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special LinkRetireStatusWithBattleTowerPartner
# 970 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 485 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 971 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	waitstate
# 972 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 486 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 973 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiBattleRoom_EventScript_WarpToLobbyLost
# 974 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	end
# 975 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 976 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 977 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_EventScript_ReconnectLink::
# 978 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 491 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 979 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	special BattleTowerReconnectLink
# 980 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	return
# 981 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 982 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 983 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 984 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_PlayerEnterRoom:
# 985 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 496 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 986 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 987 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 497 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 988 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 989 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 498 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 990 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 991 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 499 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 992 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 993 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 500 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 994 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_right
# 995 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 996 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 997 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 998 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 999 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_PartnerEnterRoom:
# 1000 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 505 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1001 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 1002 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 506 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1003 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1004 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1006 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 508 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1007 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1008 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 509 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1009 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_right
# 1010 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1011 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1012 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1013 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1014 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceAttendant:
# 1015 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 514 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 1017 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1018 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1019 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1020 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 518 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1021 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_FaceBattle:
# 1022 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 519 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1023 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 1024 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1026 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1027 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 523 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1028 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Enter:
# 1029 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 524 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1030 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 1031 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 525 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1032 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 1033 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1034 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 1035 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 527 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 1037 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1038 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 1039 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1040 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1041 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1042 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Enter:
# 1044 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 533 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 1046 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 534 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1047 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 1048 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 535 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1049 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 1050 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1051 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_down
# 1052 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 537 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1053 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	face_left
# 1054 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 538 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1056 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1057 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 541 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1058 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent2Exit:
# 1059 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1060 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1061 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 543 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1062 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1063 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 544 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1064 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1065 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 545 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1066 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	set_invisible
# 1067 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 546 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1068 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1069 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1070 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 549 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1071 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_Opponent1Exit:
# 1072 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1073 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1074 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 551 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1075 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1076 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1077 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1078 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 553 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1079 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_up
# 1080 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1081 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1082 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1083 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 557 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1084 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantApproachPlayer:
# 1085 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1086 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 1087 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 559 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1088 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_right
# 1089 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1090 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1091 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1092 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 563 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1093 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_AttendantReturnToPos:
# 1094 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 1096 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 565 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1097 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_left
# 1098 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1099 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 1100 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 567 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1101 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1102 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1103 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Movement_WalkInPlaceLeft:
# 1105 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 571 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1106 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	walk_in_place_left
# 1107 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1108 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	step_end
# 1109 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1110 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor2ndOpponentSet::
# 1111 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 575 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1112 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 2nd set of opponents is next.\n"
# 1113 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1114 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1115 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor3rdOpponentSet::
# 1116 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1117 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 3rd set of opponents is next.\n"
# 1118 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1119 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1120 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor4thOpponentSet::
# 1121 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 585 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1122 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 4th set of opponents is next.\n"
# 1123 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1124 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1125 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor5thOpponentSet::
# 1126 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1127 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 5th set of opponents is next.\n"
# 1128 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1129 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1130 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor6thOpponentSet::
# 1131 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 595 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1132 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 6th set of opponents is next.\n"
# 1133 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1134 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1135 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_ReadyFor7thOpponentSet::
# 1136 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1137 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 7th set of opponents is next.\n"
# 1138 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1139 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1140 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_2ndOpponentSetNext::
# 1141 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 605 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1142 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 2nd set of opponents is next.\n"
# 1143 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 1144 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1145 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_3rdOpponentSetNext::
# 1146 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 610 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1147 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 3rd set of opponents is next.\n"
# 1148 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 1149 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1150 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_4thOpponentSetNext::
# 1151 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1152 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 4th set of opponents is next.\n"
# 1153 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 1154 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1155 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_5thOpponentSetNext::
# 1156 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 620 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1157 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 5th set of opponents is next.\n"
# 1158 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 1159 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1160 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_6thOpponentSetNext::
# 1161 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 625 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1162 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 6th set of opponents is next.\n"
# 1163 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 1164 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1165 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
BattleFrontier_BattleTowerMultiBattleRoom_Text_7thOpponentSetNext::
# 1166 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 630 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1167 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "The 7th set of opponents is next.\n"
# 1168 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Do your best!$"
# 1169 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1170 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
gText_LinkStandby3::
# 1171 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 635 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1172 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Link standby…$"
# 1173 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"

# 1174 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
gText_YourPartnerHasRetired::
# 1175 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 639 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
# 1176 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Your partner has retired.\p"
# 1177 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "Your BATTLE ROOM challenge\n"
# 1178 "data/maps/BattleFrontier_BattleTowerMultiBattleRoom/scripts.pory"
	.string "will be canceled.$"
