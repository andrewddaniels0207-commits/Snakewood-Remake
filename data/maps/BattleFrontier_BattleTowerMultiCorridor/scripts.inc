# 1 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiCorridor_OnTransition
# 5 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiCorridor_OnWarp
# 7 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor
# 14 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 17 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnTransition::
# 18 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 20 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_OnTransition_2
# 21 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnTransition_1:
# 22 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 24 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_OnTransition_5
# 25 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnTransition_4:
# 26 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnTransition_2:
# 29 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx
# 31 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerMultiCorridor_OnTransition_1
# 32 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnTransition_5:
# 34 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 14 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_SetLinkPlayerGfx
# 36 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerMultiCorridor_OnTransition_4
# 37 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 38 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 39 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx::
# 40 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	tower_setpartnergfx
# 42 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	checkplayergender
# 44 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_RESULT, FEMALE
# 46 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx_2
# 47 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx_1:
# 48 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_BRENDAN_NORMAL
# 50 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 51 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx_2:
# 53 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerMultiCorridor_EventScript_SetPlayerGfxFemale
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerMultiCorridor_EventScript_SetObjGfx_1
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 58 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetPlayerGfxFemale::
# 59 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_MAY_NORMAL
# 61 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 62 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 63 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 64 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetLinkPlayerGfx::
# 65 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	special SetBattleTowerLinkPlayerGfx
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 68 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 69 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 70 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 72 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_OnWarp:
# 74 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiCorridor_EventScript_SetUpObjects
# 76 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	.2byte 0
# 78 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 79 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_SetUpObjects::
# 80 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 82 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 84 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 86 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	special OffsetCameraForBattle
# 88 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 89 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 90 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 91 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor::
# 92 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	lockall
# 94 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 96 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8004, 14
# 98 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8005, 1
# 100 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	opendoor 1, 1
# 102 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 104 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	clearflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 106 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	showobjectat LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 108 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	showobjectat LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 110 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator
# 112 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator
# 114 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 116 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 118 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8004, 14
# 120 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8005, 1
# 122 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	closedoor 1, 1
# 124 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 126 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	clearflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 128 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerWalkToDoor
# 130 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerWalkToDoor
# 132 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerAttendantWalkToDoor
# 134 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerAttendantWalkToDoor
# 136 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 138 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay 40
# 140 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, Common_Movement_WalkInPlaceFasterUp
# 142 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, Common_Movement_WalkInPlaceFasterUp
# 144 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 146 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	opendoor 7, 1
# 148 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 150 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor
# 152 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor
# 154 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor
# 156 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor
# 158 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 160 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	closedoor 7, 1
# 162 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 164 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay 30
# 166 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 168 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom
# 170 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	releaseall
# 172 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	end
# 173 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 174 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom::
# 176 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 177 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 178 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_2
# 179 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_1:
# 180 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 182 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_5
# 183 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_4:
# 184 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 186 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_8
# 187 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_7:
# 188 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 190 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_11
# 191 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_10:
# 192 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 193 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 194 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_2:
# 195 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom
# 197 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_1
# 198 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 199 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_5:
# 200 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom
# 202 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_4
# 203 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_8:
# 205 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToMultiBattleRoom
# 207 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_7
# 208 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 209 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_11:
# 210 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	call BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToLinkMultiBattleRoom
# 212 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	goto BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToBattleRoom_10
# 213 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 214 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToNormalBattleRoom::
# 216 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, 4, 8
# 218 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 220 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 221 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 222 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 223 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToMultiBattleRoom::
# 224 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 4, 5
# 226 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 227 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 228 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 229 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 230 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 231 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_WarpToLinkMultiBattleRoom::
# 232 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 233 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 4, 5
# 234 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 235 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 236 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	return
# 237 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 239 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerWalkToDoor:
# 241 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 243 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 245 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 247 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 249 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 251 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 252 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 253 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 255 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 257 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 258 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerWalkToDoor:
# 260 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 262 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 264 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 266 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 268 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 270 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 272 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 273 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 274 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 276 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PlayerAttendantWalkToDoor:
# 279 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 281 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 283 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 285 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 286 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 287 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 289 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 291 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 293 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_in_place_faster_right
# 295 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 297 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 298 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_PartnerAttendantWalkToDoor:
# 300 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 302 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 304 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 305 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 306 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 307 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 308 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 310 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 311 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 312 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 313 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 314 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 317 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 318 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 319 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_TrainerEnterDoor:
# 321 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay_16
# 323 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 325 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 327 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	set_invisible
# 329 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 331 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_AttendantEnterDoor:
# 334 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 335 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 336 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 337 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	set_invisible
# 338 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 339 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
# 340 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"

# 341 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_Movement_ExitElevator:
# 343 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 345 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_end
