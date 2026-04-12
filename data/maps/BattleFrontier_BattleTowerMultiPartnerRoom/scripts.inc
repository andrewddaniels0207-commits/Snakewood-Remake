# 1 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiPartnerRoom_OnResume
# 5 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition
# 7 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp
# 9 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom
# 16 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 7 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom
# 18 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 20 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 21 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnResume::
# 22 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 12 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	pyramid_resetparty
# 24 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 27 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition::
# 28 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition_2
# 30 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition_1:
# 31 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
# 33 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
# 35 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
# 37 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
# 39 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 24 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
# 41 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
# 43 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 44 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
# 45 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
# 47 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_loadpartners
# 49 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 51 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition_2:
# 52 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 18 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner
# 54 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition_1
# 55 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 56 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 57 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner::
# 58 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BOY_1
# 60 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BOY_1
# 62 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_BOY_1
# 64 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BOY_1
# 66 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_BOY_1
# 68 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BOY_1
# 70 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_BOY_1
# 72 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_BOY_1
# 74 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 76 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 1
# 78 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setobjectxyperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, 10, 2
# 80 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 81 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 82 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 83 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 85 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp:
# 87 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth
# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.2byte 0
# 91 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 92 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth::
# 93 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 95 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 96 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 97 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 98 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom::
# 99 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 0
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator
# 105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom::
# 109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom
# 113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit
# 117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	copyobjectxytoperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT
# 121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	special HealPlayerParty
# 129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
# 133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom:
# 138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_down
# 140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit:
# 145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_in_place_faster_down
# 149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant::
# 153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner
# 159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	compare VAR_RESULT, 0
# 165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_2
# 166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_1:
# 167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_2:
# 174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge
# 176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_1
# 177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge::
# 180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator::
# 188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
# 194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	opendoor 10, 1
# 198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator
# 202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closedoor 10, 1
# 204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
# 212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator::
# 216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator
# 220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorEast::
# 226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast
# 230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorWest::
# 236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest
# 240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator:
# 247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast:
# 258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_right
# 260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest:
# 269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator:
# 280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner1::
# 288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner::
# 300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_2
# 302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_1:
# 303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_INTRO
# 305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON1
# 311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON2_ASK
# 317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	switch VAR_RESULT
# 323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_6
# 325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_7
# 327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_4:
# 328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_ACCEPT
# 330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_9
# 339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_8:
# 340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_12
# 343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_11:
# 344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 10, 3
# 350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_2:
# 357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_1
# 360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_6:
# 362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_4
# 365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_7:
# 367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_4
# 370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_9:
# 372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit
# 374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_8
# 375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_12:
# 377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth
# 379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_11
# 380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner::
# 383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_REJECT
# 385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit::
# 395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit
# 397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth::
# 403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth
# 405 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 408 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 410 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit:
# 412 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 414 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 420 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 424 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 429 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 430 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth:
# 431 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_left
# 433 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 436 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 438 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 439 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 441 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 447 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner2::
# 451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 452 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 457 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 462 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner3::
# 463 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 466 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner4::
# 475 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 478 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 483 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner5::
# 487 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 491 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 492 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 493 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 496 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner6::
# 499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 501 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 506 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 507 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 509 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner7::
# 511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 514 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 517 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 519 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 522 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner8::
# 523 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 524 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 527 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 531 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner::
# 535 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please find a partner from out of\n"
# 537 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the TRAINERS gathered here.$"
# 538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner::
# 540 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, you have not found a partner\n"
# 542 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "for your tag team.\p"
# 543 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Would you like to quit looking and\n"
# 544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "return to the reception counter?$"
# 545 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2::
# 547 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Then, please find a partner from\n"
# 549 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the TRAINERS gathered here.$"
# 550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner::
# 552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 553 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you for choosing a partner.\p"
# 554 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I will now show you to your\n"
# 555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "MULTI BATTLE ROOM.$"
# 556 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Intro::
# 558 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
# 560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You can call me {STR_VAR_3}!$"
# 561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 562 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon1::
# 563 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "On {STR_VAR_1}'s advice, I brought\n"
# 565 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"
# 566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 567 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon2Ask::
# 568 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 569 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 570 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, let me join you as a tag team.$"
# 571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Accept::
# 573 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
# 575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register right now.$"
# 576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 577 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Reject::
# 578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 579 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I really wanted to form a tag team\n"
# 580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "with you, {PLAYER}…$"
# 581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 582 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Intro::
# 583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
# 585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My name is {STR_VAR_3}.$"
# 586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 587 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon1::
# 588 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I got advice from {STR_VAR_1} and chose\n"
# 590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"
# 591 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 592 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon2Ask::
# 593 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, let's form a tag team!$"
# 596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 597 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Accept::
# 598 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 599 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you very much!\n"
# 600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll be done with registration quickly!$"
# 601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 602 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Reject::
# 603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 604 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, I was hoping that I could\n"
# 605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "partner up with you…$"
# 606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 607 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro::
# 608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 609 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Um, my name's {STR_VAR_3}, and I'm\n"
# 610 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}'s no. {STR_VAR_2} apprentice.\p"
# 611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Snivel…\p"
# 612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm sorry!\n"
# 613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "This tension is making me cry…$"
# 614 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 615 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1::
# 616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 617 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} advised me, so I have\n"
# 618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 620 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask::
# 621 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Snivel…\n"
# 624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, please team up with me!$"
# 625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 626 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept::
# 627 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, really? You will?\n"
# 629 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Awesome! Wicked! Awoooh!\p"
# 630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh… I'm sorry…\n"
# 631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm so happy, I'm crying…\p"
# 632 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register right away.\n"
# 633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please don't go away!$"
# 634 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 635 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject::
# 636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 637 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, b-but…\n"
# 638 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sob… Waaaaah!$"
# 639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro::
# 641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 642 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, there! I'm {STR_VAR_3}!\n"
# 643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"
# 644 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 645 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1::
# 646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} recommended my crew.\n"
# 648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 649 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 650 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask::
# 651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1},\n"
# 653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that's what I have! Cool, huh?\p"
# 654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "So come on!\n"
# 655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let's form a tag team!$"
# 656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 657 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept::
# 658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 659 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay! Great!\n"
# 660 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay, I'll go register, okay?$"
# 661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 662 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject::
# 663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 664 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aww, why?\n"
# 665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I wanted to team up, {PLAYER}!$"
# 666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro::
# 668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 669 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3}, the no. {STR_VAR_2} apprentice\n"
# 670 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "of the famous {STR_VAR_1}!$"
# 671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1::
# 673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 674 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I looked to {STR_VAR_3} for advice.\n"
# 675 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
# 676 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask::
# 678 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} with {STR_VAR_1},\n"
# 680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that's my pair.\p"
# 681 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, will you join me in\n"
# 682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a tag team?$"
# 683 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept::
# 685 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 686 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
# 687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll register right away!$"
# 688 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject::
# 690 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, I had been hoping to join\n"
# 692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "you in a tag team…$"
# 693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro::
# 695 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 696 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Um… I'm sincerely happy that you\n"
# 697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "would take the time to talk to me.\p"
# 698 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3}.\n"
# 699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice…$"
# 700 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 701 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1::
# 702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} gave me advice.\n"
# 704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm very grateful for it.\p"
# 705 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I have a team of one {STR_VAR_2}\n"
# 706 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "with {STR_VAR_1} and$"
# 707 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 708 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask::
# 709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 710 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
# 711 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I know I'm asking a lot…\p"
# 712 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I don't think you'll be willing to,\n"
# 713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "but may I join you as a partner?$"
# 714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 715 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept::
# 716 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Really? I can't believe it!\n"
# 718 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I can't believe you'll let me join you!\l"
# 719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I… I won't let you down!\p"
# 720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Um… If it's really okay, I'll go register\n"
# 721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "right this instant!$"
# 722 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 723 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject::
# 724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh…\n"
# 726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I didn't think I was good enough…$"
# 727 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 728 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro::
# 729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, I'm {STR_VAR_3}.\n"
# 731 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"
# 732 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 733 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1::
# 734 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} told me that it would be\n"
# 736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "good to make this team:\l"
# 737 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}$"
# 738 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask::
# 740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} that knows how\n"
# 742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "to use {STR_VAR_1}.\p"
# 743 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Not bad, huh?\n"
# 744 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want me to team up with you?$"
# 745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept::
# 747 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 748 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay, glad to join you!\n"
# 749 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I hope you won't mess things up for me!\l"
# 750 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll do my registration now.$"
# 751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject::
# 753 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 754 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Huh? Why did you turn me down?\n"
# 755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You're no judge of character!$"
# 756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro::
# 758 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 759 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3} and I'm a TRIATHLETE.\n"
# 760 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm busy every day what with jogging,\l"
# 761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "training, and rapping.\p"
# 762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I also happen to be {STR_VAR_1}'s\n"
# 763 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "no. {STR_VAR_2} apprentice.$"
# 764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 765 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1::
# 766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 767 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "This is what {STR_VAR_3} recommended.\n"
# 768 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
# 769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 770 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask::
# 771 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 772 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
# 773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}.\p"
# 774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I put a lot of effort into raising\n"
# 775 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "them, even though I'm busy.\p"
# 776 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let's form a tag team\n"
# 777 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and give it a go!$"
# 778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept::
# 780 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 781 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thanks, that's the spirit!\n"
# 782 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hang tight while I go register, okay?$"
# 783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject::
# 785 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I took time from my busy schedule\n"
# 787 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "to be here! Give me a break!$"
# 788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 789 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro::
# 790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi!\n"
# 792 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How's it going?\p"
# 793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3}, {STR_VAR_1}'s\n"
# 794 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "no. {STR_VAR_2} apprentice. Glad to meet you!$"
# 795 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 796 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1::
# 797 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 798 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Listen, listen! You have to hear about\n"
# 799 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the POKéMON {STR_VAR_3} recommended.\l"
# 800 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 801 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 802 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask::
# 803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 804 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
# 805 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Of course I raised them superbly!\p"
# 806 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "So, want to team up?\n"
# 807 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm sure it'll be a great combo!$"
# 808 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 809 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept::
# 810 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 811 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay, I think this will be fun!\n"
# 812 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register!$"
# 813 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 814 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject::
# 815 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 816 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, you're mean!\n"
# 817 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I come recommended, you know.$"
# 818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 819 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro::
# 820 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 821 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please let me introduce myself.\n"
# 822 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_3}.\p"
# 823 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I serve as {STR_VAR_1}'s\n"
# 824 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "no. {STR_VAR_2} apprentice.$"
# 825 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 826 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1::
# 827 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 828 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I sought the sage advice of\n"
# 829 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} and raised my team\l"
# 830 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "of one {STR_VAR_2} with {STR_VAR_1}$"
# 831 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 832 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask::
# 833 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 834 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} with {STR_VAR_1}.\p"
# 835 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please agree to a tag team with me!$"
# 836 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 837 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept::
# 838 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 839 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh… I'm delighted!\n"
# 840 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I promise to give you my best!\p"
# 841 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Of course I will register us!\n"
# 842 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please wait!$"
# 843 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 844 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject::
# 845 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I had been hoping to join you,\n"
# 847 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}…$"
# 848 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 849 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro::
# 850 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 851 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Eek! You spoke to me!\n"
# 852 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I… I'm overjoyed!\p"
# 853 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3}! I'm {STR_VAR_1}'s\n"
# 854 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "no. {STR_VAR_2} apprentice!$"
# 855 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 856 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1::
# 857 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 858 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "On {STR_VAR_3}'s advice, I trained\n"
# 859 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}$"
# 860 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 861 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask::
# 862 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 863 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
# 864 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}.\p"
# 865 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, can you grant me my wish?\n"
# 866 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I want to be your tag-team partner!$"
# 867 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 868 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept::
# 869 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 870 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Eek! I… I feel giddy!\n"
# 871 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you so much!\l"
# 872 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register us right away!$"
# 873 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 874 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject::
# 875 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 876 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Waaah! Don't you feel any pity?\n"
# 877 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "But that makes you cooler…$"
# 878 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 879 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro::
# 880 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 881 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yeehaw! I'm {STR_VAR_1}'s\n"
# 882 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "no. {STR_VAR_2} apprentice!\p"
# 883 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3}'s my name, hello, hello!$"
# 884 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 885 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1::
# 886 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 887 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My mentor {STR_VAR_3} recommended\n"
# 888 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-master {STR_VAR_2}$"
# 889 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 890 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask::
# 891 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 892 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-master\n"
# 893 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}.\p"
# 894 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good stuff, huh?\n"
# 895 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll partner with me, won't you?$"
# 896 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 897 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept::
# 898 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 899 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay, excellent!\n"
# 900 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll get the registration done quickly!$"
# 901 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 902 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject::
# 903 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gwaaah!\n"
# 905 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You're a calculating one, {PLAYER}!$"
# 906 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 907 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro::
# 908 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 909 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey! There's big trouble! This is\n"
# 910 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the BATTLE TOWER's last day!\p"
# 911 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "… … … … … …\n"
# 912 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm only joking!\p"
# 913 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "People call me {STR_VAR_3} and I do, too!\n"
# 914 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s 1,000th apprentice!\l"
# 915 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Actually, I'm no. {STR_VAR_2}!$"
# 916 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 917 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1::
# 918 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 919 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} gave me some advice.\n"
# 920 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"
# 921 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 922 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask::
# 923 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 924 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} with {STR_VAR_1}.\n"
# 925 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've got ten of each kind!\l"
# 926 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Actually, just one of each!\p"
# 927 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How about it?\n"
# 928 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to try tag battles with me?$"
# 929 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 930 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept::
# 931 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 932 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yippee!\n"
# 933 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll give you a POKéMON as my thanks!\p"
# 934 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Just joking! But I will really go do\n"
# 935 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the registration, okay?$"
# 936 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 937 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject::
# 938 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 939 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, that's so cold! I'll have to wreck\n"
# 940 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the BATTLE TOWER for that!\p"
# 941 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Of course I won't!$"
# 942 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 943 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro::
# 944 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 945 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, there, I'm rockin' and a-rollin'!\n"
# 946 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "POKéMON, I be controllin'!\p"
# 947 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3} the rappin' SAILOR.\n"
# 948 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Don't be mistakin' me for no wailer!\p"
# 949 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
# 950 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me, you shouldn't be quick to dismiss!$"
# 951 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 952 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1::
# 953 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 954 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "With the advice of {STR_VAR_3} I did\n"
# 955 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "abide, put together my team of pride!\l"
# 956 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
# 957 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 958 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask::
# 959 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 960 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
# 961 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}!\p"
# 962 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Our meeting we should commemorate,\n"
# 963 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "with a tag-team victory to celebrate!$"
# 964 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 965 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept::
# 966 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 967 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, hey, I like your style!\n"
# 968 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Our registration, I will go file!$"
# 969 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 970 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject::
# 971 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 972 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, hey, {PLAYER}, now that's cold!\n"
# 973 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If I may be so bold!$"
# 974 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 975 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro::
# 976 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 977 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yippee-yahoo!\n"
# 978 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, don't run! I was just having fun!\p"
# 979 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Howdy! I'm {STR_VAR_3}!\n"
# 980 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"
# 981 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 982 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1::
# 983 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 984 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} told me what to do.\n"
# 985 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "So one {STR_VAR_1}-using {STR_VAR_2}$"
# 986 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 987 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask::
# 988 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 989 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
# 990 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, I did choose.\p"
# 991 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "So, what do you say?\n"
# 992 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Come on, make my day!\p"
# 993 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, I'm begging you!\n"
# 994 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let me join you, don't leave me blue!$"
# 995 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 996 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept::
# 997 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 998 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yeahah! Luck is with me!\n"
# 999 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It sure makes me happy!\p"
# 1000 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Before we go join the fray,\n"
# 1001 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register right away!$"
# 1002 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1003 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject::
# 1004 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You're turning me down?\n"
# 1006 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, you're making me frown!$"
# 1007 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1008 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro::
# 1009 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 795 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1010 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Cough!\p"
# 1011 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, sorry, I have a cold.\n"
# 1012 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are fine, though.\p"
# 1013 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My name's {STR_VAR_3}, {STR_VAR_1}'s\n"
# 1014 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "no. {STR_VAR_2} apprentice. Cough!$"
# 1015 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1016 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1::
# 1017 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1018 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I took {STR_VAR_3}'s advice to heart\n"
# 1019 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and put together my team of\l"
# 1020 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 1021 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1022 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask::
# 1023 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 809 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1024 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 1025 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I trained them every day,\n"
# 1026 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "even in wind and rain.\p"
# 1027 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's why I have this cold,\n"
# 1028 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I think.\p"
# 1029 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's what I'm about.\n"
# 1030 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to be my tag partner?$"
# 1031 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1032 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept::
# 1033 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 819 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1034 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thanks, I appreciate this!\n"
# 1035 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Cough, cough!\l"
# 1036 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hang on while I go register.$"
# 1037 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1038 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject::
# 1039 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 825 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1040 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, you won't?\n"
# 1041 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, I think we'd make a good pair.$"
# 1042 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1043 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro::
# 1044 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 830 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, hello!\n"
# 1046 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "This is nerve-racking.\p"
# 1047 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3}.\n"
# 1048 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm the no. {STR_VAR_2} apprentice of {STR_VAR_1}.$"
# 1049 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1050 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1::
# 1051 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 837 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1052 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} said this team'll be good--\n"
# 1053 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 1054 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1055 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask::
# 1056 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 842 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 1058 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm feeling self-conscious about this,\n"
# 1059 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "but will you let me join you?$"
# 1060 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1061 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept::
# 1062 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 848 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, gee, thank you!\n"
# 1064 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I feel bashful, but I'll do my best!\p"
# 1065 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go get the registration done.$"
# 1066 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1067 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject::
# 1068 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 854 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1069 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, please don't say no!\n"
# 1070 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I feel self-conscious enough already…$"
# 1071 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1072 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro::
# 1073 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 859 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1074 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_3}, and that's no lie.\n"
# 1075 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_1}'s no. {STR_VAR_2} apprentice.$"
# 1076 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1077 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1::
# 1078 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 864 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1079 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} recommended my team.\p"
# 1080 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Since the advice sounded sincere,\n"
# 1081 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I decided to bring with me\l"
# 1082 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "my {STR_VAR_1}-using {STR_VAR_2} and$"
# 1083 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1084 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask::
# 1085 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 871 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1086 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "my {STR_VAR_1}-using {STR_VAR_2}.\p"
# 1087 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If possible, I would like you to accept\n"
# 1088 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "me as your tag-team partner.$"
# 1089 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1090 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept::
# 1091 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 877 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1092 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You really will accept me?\n"
# 1093 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It would be too terrible otherwise.\p"
# 1094 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "But since you've agreed, this is fine.\n"
# 1095 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I shall go register the both of us.$"
# 1096 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1097 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject::
# 1098 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 884 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1099 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm? Now why would you refuse?\n"
# 1100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Is this your idea of a joke?$"
# 1101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro::
# 1103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 889 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a LASS!$"
# 1105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1::
# 1107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 893 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What I have are one {STR_VAR_2}\n"
# 1109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that uses {STR_VAR_1} and one$"
# 1110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask::
# 1112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 898 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} that uses {STR_VAR_1}.\n"
# 1114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Those are what I have with me.\p"
# 1115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Will you be my partner?$"
# 1116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept::
# 1118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
# 1120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go do the registration!$"
# 1121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject::
# 1123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 909 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You don't want to be my partner?\n"
# 1125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll regret it later!$"
# 1126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro::
# 1128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 914 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello!\p"
# 1130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm YOUNGSTER {STR_VAR_1}!$"
# 1131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1::
# 1133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 919 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to know what I have?\n"
# 1135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask::
# 1138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 924 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll be my tag-team partner,\n"
# 1141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "won't you?$"
# 1142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept::
# 1144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 930 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay!\n"
# 1146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go and register, okay?$"
# 1147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject::
# 1149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 935 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aww! If you'd form a tag team with\n"
# 1151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "my POKéMON, we'd be unstoppable!$"
# 1152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro::
# 1154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yahoo!\n"
# 1156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm HIKER {STR_VAR_1}!$"
# 1157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1::
# 1159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 945 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Know what I have with me?\n"
# 1161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My {STR_VAR_1}-using {STR_VAR_2} and$"
# 1162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask::
# 1164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 950 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "my {STR_VAR_1}-using {STR_VAR_2}!\p"
# 1166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sounds good, eh?\n"
# 1167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to form a tag team?$"
# 1168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept::
# 1170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 956 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yahoo!\n"
# 1172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go do the registering, then.$"
# 1173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject::
# 1175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 961 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I would've liked to battle with you\n"
# 1177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "at my side.$"
# 1178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro::
# 1180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 966 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello!\n"
# 1182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a BEAUTY!$"
# 1183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1::
# 1185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 971 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Do you know what I've been raising?\n"
# 1187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask::
# 1190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 976 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What do you think?\n"
# 1193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to make a tag team together?$"
# 1194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept::
# 1196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 982 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wonderful!\n"
# 1198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll get the registration done now!$"
# 1199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject::
# 1201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 987 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How disappointing!\p"
# 1203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We two together--we would've been\n"
# 1204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the best!$"
# 1205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro::
# 1207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 993 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo!\p"
# 1209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You know who I am?\n"
# 1210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1} the FISHERMAN!$"
# 1211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1::
# 1213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 999 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've got with me a team of one\n"
# 1215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
# 1216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask::
# 1218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1004 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
# 1220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "So, how about it?\n"
# 1221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Will you battle at my side?$"
# 1222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept::
# 1224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1010 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good, good!\n"
# 1226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Leave it up to me!\p"
# 1227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go and register us now.$"
# 1228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject::
# 1230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We matched up perfectly, too…$"
# 1232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro::
# 1234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1020 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Glad to make your acquaintance.\n"
# 1236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_1}, a LADY.$"
# 1237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1::
# 1239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am accompanied by a team of\n"
# 1241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 1242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask::
# 1244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1030 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 1246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I hope I meet your approval.\n"
# 1247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "For I wish to have you as my partner.$"
# 1248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept::
# 1250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I thank you sincerely.\n"
# 1252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I shall handle the registration.$"
# 1253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject::
# 1255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1041 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm sure that you will regret not\n"
# 1257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "having me as your partner.$"
# 1258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro::
# 1260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1046 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm TRIATHLETE {STR_VAR_1}!$"
# 1262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1::
# 1264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1050 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What I have…\n"
# 1266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask::
# 1269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\n"
# 1271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's my pair!\p"
# 1272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please?\n"
# 1273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Will you form a tag team with me?$"
# 1274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept::
# 1276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1062 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gee, thanks!\n"
# 1278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register at the counter.$"
# 1279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject::
# 1281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1067 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We two together, we would've been\n"
# 1283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "tough for certain!$"
# 1284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro::
# 1286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1072 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hiya!\n"
# 1288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm BUG CATCHER {STR_VAR_1}!$"
# 1289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1::
# 1291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1077 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Check out what I have!\n"
# 1293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask::
# 1296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1082 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "So, listen!\n"
# 1299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Do you want to form a tag team?$"
# 1300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept::
# 1302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1088 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gotcha!\p"
# 1304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go do the registration stuff\n"
# 1305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "at the counter.$"
# 1306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject::
# 1308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1094 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aww, my POKéMON are awesome.\n"
# 1310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I hope you won't regret this!$"
# 1311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro::
# 1313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1099 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good day!\n"
# 1315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm SCHOOL KID {STR_VAR_1}!$"
# 1316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1::
# 1318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What I've been raising are one\n"
# 1320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} that uses {STR_VAR_1}$"
# 1321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask::
# 1323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} that uses\n"
# 1325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 1326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Not too bad, don't you think?\n"
# 1327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Would you care to form a tag team?$"
# 1328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept::
# 1330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you very much!\n"
# 1332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll get done with the registration.$"
# 1333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject::
# 1335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's too bad…\p"
# 1337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I was hoping that I could learn\n"
# 1338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "from you as your partner…$"
# 1339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro::
# 1341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo! Let me tell you who I am!\n"
# 1343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm RICH BOY {STR_VAR_1}!$"
# 1344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1::
# 1346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Guess what I got!\n"
# 1348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask::
# 1351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm willing to offer you the chance\n"
# 1354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "to be in a tag team with me.$"
# 1355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept::
# 1357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Smart move!\p"
# 1359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll finish up the registration\n"
# 1360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "process quick!$"
# 1361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject::
# 1363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'd turn me of all people down?\n"
# 1365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll regret that decision for sure!$"
# 1366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro::
# 1368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hiyah!\n"
# 1370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am BLACK BELT {STR_VAR_1}.$"
# 1371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1::
# 1373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "As my companions, I have\n"
# 1375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} using {STR_VAR_1}$"
# 1376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask::
# 1378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} using\n"
# 1380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 1381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, grant me my wish!\n"
# 1382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Allow me to be your tag partner!$"
# 1383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept::
# 1385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hiyah!\n"
# 1387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I will go register forthwith!$"
# 1388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject::
# 1390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I see… I hope for an opportunity\n"
# 1392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the next time we meet…$"
# 1393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro::
# 1395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, there!\n"
# 1397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a TUBER!$"
# 1398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1::
# 1400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll tell you what I have.\n"
# 1402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask::
# 1405 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\n"
# 1407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "May I please be on your tag team?$"
# 1408 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1409 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept::
# 1410 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
# 1412 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register us now!$"
# 1413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1414 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject::
# 1415 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If we'd become partners, we could\n"
# 1417 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "have been so strong!$"
# 1418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1419 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro::
# 1420 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Greetings…\n"
# 1422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am HEX MANIAC {STR_VAR_1}…$"
# 1423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1424 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1::
# 1425 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I bear with me one {STR_VAR_1}-using\n"
# 1427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} together with one$"
# 1428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1429 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask::
# 1430 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1431 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2}…\p"
# 1432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I beseech you…\n"
# 1433 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Join me in a tag team…$"
# 1434 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept::
# 1436 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I thank you…\n"
# 1438 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I shall register us…$"
# 1439 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject::
# 1441 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I so longed to join you…$"
# 1443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro::
# 1445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How do you do? I'm {STR_VAR_1},\n"
# 1447 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and I'm a POKéMON BREEDER!$"
# 1448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1::
# 1450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm raising a couple good ones!\n"
# 1452 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask::
# 1455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1456 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1457 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How about it?\n"
# 1458 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Feel like making a tag team with me?$"
# 1459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept::
# 1461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1462 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you kindly!\p"
# 1463 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go take care of the registration\n"
# 1464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "stuff, so you wait right here!$"
# 1465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1466 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject::
# 1467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1468 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I was looking forward to being\n"
# 1469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "your partner…$"
# 1470 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro::
# 1472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1473 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Well, hello!\n"
# 1474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm TRIATHLETE {STR_VAR_1}!$"
# 1475 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1::
# 1477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1478 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to know what I run with?\n"
# 1479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1480 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask::
# 1482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1483 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Well?\n"
# 1485 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to be in a tag team with me?$"
# 1486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1487 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept::
# 1488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good going!\p"
# 1490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll be quick and get the registration\n"
# 1491 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "all done!$"
# 1492 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1493 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject::
# 1494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You and me, we would've been tops.\n"
# 1496 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It's too bad…$"
# 1497 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1498 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro::
# 1499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, there! My name's {STR_VAR_1}!\n"
# 1501 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm a TRIATHLETE!$"
# 1502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1::
# 1504 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I go on runs with my durable team--\n"
# 1506 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 1507 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask::
# 1509 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Not too shabby, huh?\n"
# 1512 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We should be in a tag team together!$"
# 1513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1514 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept::
# 1515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "All right!\n"
# 1517 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register in a flash!$"
# 1518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1519 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject::
# 1520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I really wanted to battle as your\n"
# 1522 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "tag-team partner…$"
# 1523 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1524 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro::
# 1525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm BATTLE GIRL {STR_VAR_1}!$"
# 1527 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1528 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1::
# 1529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've been toughening up one\n"
# 1531 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
# 1532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask::
# 1534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1535 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}!\p"
# 1536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Do you like that combo?\n"
# 1537 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How about you and me join up?$"
# 1538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept::
# 1540 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Why, thanks!\p"
# 1542 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll get the registration done\n"
# 1543 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "right now!$"
# 1544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1545 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject::
# 1546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1547 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "With you, I thought we could form\n"
# 1548 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the ultimate tag team…$"
# 1549 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro::
# 1551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm TRIATHLETE {STR_VAR_1}!$"
# 1553 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1554 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1::
# 1555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1556 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've been running with one {STR_VAR_2}\n"
# 1557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that knows how to use {STR_VAR_1}$"
# 1558 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask::
# 1560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1562 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We could be in a tag team.\n"
# 1563 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wouldn't that be great?$"
# 1564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1565 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept::
# 1566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1567 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\p"
# 1568 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register us, and that's\n"
# 1569 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "right now!$"
# 1570 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject::
# 1572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1573 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aww, that's too bad. We would've been\n"
# 1574 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the toughest tag team around!$"
# 1575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro::
# 1577 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me?\n"
# 1579 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm TUBER {STR_VAR_1}!$"
# 1580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1::
# 1582 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What do I have with me?\n"
# 1584 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask::
# 1587 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1588 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey?\n"
# 1590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll team up with me, right?$"
# 1591 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1592 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept::
# 1593 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay!\p"
# 1595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register!\n"
# 1596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let's be excellent together!$"
# 1597 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1598 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject::
# 1599 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are tough for sure…\n"
# 1601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It's too bad you don't want to team up.$"
# 1602 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro::
# 1604 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay-hey!\n"
# 1606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Call me GUITARIST {STR_VAR_1}!$"
# 1607 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1::
# 1609 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1610 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Check out my entourage!\n"
# 1611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask::
# 1614 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1615 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay-hey! Pretty wild, huh?\n"
# 1617 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We'll have to do a duet in a tag team!$"
# 1618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept::
# 1620 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1621 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay-hey! Right on!\n"
# 1622 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll do that registration stuff now!$"
# 1623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject::
# 1625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1626 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON rock hard!\n"
# 1627 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll be sorry, I tell you!$"
# 1628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1629 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro::
# 1630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pleased to meet you.\n"
# 1632 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_1}, a GENTLEMAN.$"
# 1633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1634 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1::
# 1635 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am accompanied by my trusted\n"
# 1637 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
# 1638 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask::
# 1640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
# 1642 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "May I ask you to join me in a tag-team\n"
# 1643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "partnership arrangement?$"
# 1644 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1645 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept::
# 1646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ah, I thank you for your trust.\n"
# 1648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I shall be done with the registration.$"
# 1649 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1650 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject::
# 1651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1652 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That is most unfortunate…\p"
# 1653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I shall look forward to the next\n"
# 1654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "opportunity…$"
# 1655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro::
# 1657 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello, I'm {STR_VAR_1},\n"
# 1659 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and I'm a POKéFAN.$"
# 1660 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1::
# 1662 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I have with me now one {STR_VAR_2}\n"
# 1664 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that knows the move {STR_VAR_1} and$"
# 1665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask::
# 1667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 1669 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Do you like what you see?\n"
# 1670 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Why don't you be my tag partner?$"
# 1671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept::
# 1673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1674 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
# 1675 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll look after the registration!$"
# 1676 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject::
# 1678 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are top grade…\n"
# 1680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It's too bad you can't appreciate that.$"
# 1681 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro::
# 1683 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm!\n"
# 1685 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_1}, and an EXPERT am I!$"
# 1686 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1::
# 1688 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON that I've toughened up are\n"
# 1690 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 1691 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask::
# 1693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1695 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What say you to a tag team with me?$"
# 1696 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept::
# 1698 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm!\n"
# 1700 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I shall register us right away!\l"
# 1701 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let us both do our best!$"
# 1702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1703 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject::
# 1704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1705 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I will hope that your choice is\n"
# 1706 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "indeed correct…$"
# 1707 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1708 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro::
# 1709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1710 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello, hello.\n"
# 1711 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm an EXPERT.$"
# 1712 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1::
# 1714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1715 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've raised my POKéMON thoroughly.\n"
# 1716 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1718 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask::
# 1719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
# 1721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "they're what I have.\p"
# 1722 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wouldn't you like to team up with me?$"
# 1723 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept::
# 1725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good, good.\n"
# 1727 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll see to the registration right away.$"
# 1728 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject::
# 1730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1731 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Perhaps we can form a team the next\n"
# 1732 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "time we meet.$"
# 1733 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1734 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro::
# 1735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm DRAGON TAMER {STR_VAR_1}!$"
# 1737 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1738 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1::
# 1739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The team I've been toughening up is\n"
# 1741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 1742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1743 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask::
# 1744 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How about it?\n"
# 1747 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to be my partner?$"
# 1748 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1749 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept::
# 1750 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay, I'll give it my best!\n"
# 1752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register now, all right?$"
# 1753 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1754 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject::
# 1755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You're not going to find many tougher\n"
# 1757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "partners than me!$"
# 1758 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1759 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro::
# 1760 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm BIRD KEEPER {STR_VAR_1}!$"
# 1762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1763 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1::
# 1764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1765 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What POKéMON do I have?\n"
# 1766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1767 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1768 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask::
# 1769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1770 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 1771 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Don't you think we'd make a decent\n"
# 1772 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "tag team?$"
# 1773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept::
# 1775 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1776 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Great, thanks!\n"
# 1777 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll look after the registration!$"
# 1778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject::
# 1780 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1781 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON and I are strong.\n"
# 1782 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What a letdown.$"
# 1783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro::
# 1785 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm NINJA BOY {STR_VAR_1}!$"
# 1787 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1::
# 1789 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON team consists of one\n"
# 1791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"
# 1792 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask::
# 1794 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1795 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1796 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let's be in a tag team together!$"
# 1797 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1798 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept::
# 1799 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1800 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay!\n"
# 1801 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let me go register!$"
# 1802 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject::
# 1804 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1805 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll regret not having my tough\n"
# 1806 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "POKéMON on your side!$"
# 1807 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1808 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro::
# 1809 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1810 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello!\n"
# 1811 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm PARASOL LADY {STR_VAR_1}!$"
# 1812 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1813 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1::
# 1814 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1815 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Escorting me now are my {STR_VAR_2}\n"
# 1816 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that uses {STR_VAR_1} and$"
# 1817 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask::
# 1819 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1820 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} that uses\n"
# 1821 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 1822 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aren't they nice?\n"
# 1823 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Care to join us in a tag team?$"
# 1824 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1825 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept::
# 1826 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1827 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thanks a bunch!\p"
# 1828 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register at the counter.\n"
# 1829 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let's not disappoint each other!$"
# 1830 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1831 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject::
# 1832 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1833 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are tremendously strong.\n"
# 1834 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How disappointing…$"
# 1835 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1836 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro::
# 1837 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1838 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello.\n"
# 1839 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a BUG MANIAC!$"
# 1840 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1841 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1::
# 1842 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1843 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I have found my POKéMON, yes.\n"
# 1844 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1845 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1846 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask::
# 1847 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1848 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
# 1849 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "they are what I found.\p"
# 1850 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Could I interest you in forming\n"
# 1851 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a tag team?$"
# 1852 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1853 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept::
# 1854 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1855 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay!\n"
# 1856 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Understood!\p"
# 1857 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I won't be long with the registration!$"
# 1858 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1859 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject::
# 1860 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1861 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "With the POKéMON I found, we wouldn't\n"
# 1862 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "have lost…$"
# 1863 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1864 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro::
# 1865 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1866 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ahoy, there!\n"
# 1867 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm SAILOR {STR_VAR_1}!$"
# 1868 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1869 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1::
# 1870 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1871 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let me show you my pride and joy!\n"
# 1872 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 1873 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1874 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask::
# 1875 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1876 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1877 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Of course you're not going to turn\n"
# 1878 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "me down. We will team up, right?$"
# 1879 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1880 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept::
# 1881 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1882 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I didn't expect any less!\n"
# 1883 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register now.$"
# 1884 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1885 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject::
# 1886 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1887 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We would've stormed through\n"
# 1888 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the opposition! Too bad!$"
# 1889 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1890 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro::
# 1891 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1892 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, I'm {STR_VAR_1}.\n"
# 1893 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm a COLLECTOR.$"
# 1894 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1895 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1::
# 1896 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1897 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The jewels in my collection are\n"
# 1898 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "my {STR_VAR_2} with {STR_VAR_1} and$"
# 1899 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1900 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask::
# 1901 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1902 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1903 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Swell, huh?\n"
# 1904 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We should be in a team together.$"
# 1905 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1906 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept::
# 1907 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1908 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, yeah!\p"
# 1909 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Well, let's not waste any time.\n"
# 1910 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register the two of us.$"
# 1911 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1912 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject::
# 1913 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1914 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Well, that's upsetting.\n"
# 1915 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You don't appreciate my POKéMON.$"
# 1916 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1917 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro::
# 1918 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1919 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Howdy, I'm {STR_VAR_1}.\n"
# 1920 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm a POKéMON RANGER.$"
# 1921 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1922 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1::
# 1923 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1924 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Keeping me company are one\n"
# 1925 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
# 1926 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1927 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask::
# 1928 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1929 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1930 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Don't you think we'd make an impressive\n"
# 1931 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "tag team?$"
# 1932 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1933 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept::
# 1934 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1935 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's super!\n"
# 1936 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll deal with the registration now.$"
# 1937 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1938 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject::
# 1939 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1940 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Next time, choose my POKéMON,\n"
# 1941 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "will you?$"
# 1942 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1943 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro::
# 1944 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1945 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My name's {STR_VAR_1}.\n"
# 1946 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm a POKéMON RANGER!$"
# 1947 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1948 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1::
# 1949 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1950 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let me tell you about my team. I have\n"
# 1951 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 1952 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1953 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask::
# 1954 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1955 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 1956 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How would you like to form a tag team\n"
# 1957 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "with my little posse?$"
# 1958 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1959 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept::
# 1960 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1961 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We'll be at our best!\n"
# 1962 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll get the registration done quick!$"
# 1963 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1964 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject::
# 1965 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1966 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I hope you'll choose my POKéMON\n"
# 1967 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "next time.$"
# 1968 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1969 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro::
# 1970 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1971 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pleased to meet you. I'm {STR_VAR_1}.\n"
# 1972 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I consider myself an AROMA LADY.$"
# 1973 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1974 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1::
# 1975 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1976 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I travel with one {STR_VAR_2}\n"
# 1977 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that uses {STR_VAR_1} and$"
# 1978 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1979 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask::
# 1980 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1981 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} that uses\n"
# 1982 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 1983 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I hope they strike your fancy.\n"
# 1984 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Would you care to be my partner?$"
# 1985 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1986 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept::
# 1987 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1988 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm honored by your acceptance.\n"
# 1989 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I will go register right this instant.$"
# 1990 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1991 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject::
# 1992 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1993 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It would be wonderful if we could form\n"
# 1994 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a tag team the next time we meet.$"
# 1995 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1996 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro::
# 1997 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1998 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to know who I am?\n"
# 1999 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, the RUIN MANIAC!$"
# 2000 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2001 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1::
# 2002 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2003 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON that I have with me are\n"
# 2004 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 2005 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2006 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask::
# 2007 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2008 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 2009 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Intriguing, eh?\n"
# 2010 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How about you and I partner up?$"
# 2011 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2012 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept::
# 2013 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1799 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2014 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's a sound decision!\n"
# 2015 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go do the registration paperwork.$"
# 2016 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2017 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject::
# 2018 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1804 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2019 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hmm…\n"
# 2020 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I think my POKéMON are tough…$"
# 2021 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2022 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro::
# 2023 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1809 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2024 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm COOLTRAINER {STR_VAR_1}!$"
# 2025 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2026 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1::
# 2027 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1813 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2028 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON I have right now are one\n"
# 2029 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"
# 2030 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2031 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask::
# 2032 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2033 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
# 2034 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Cool, huh?\p"
# 2035 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Don't you think it'd be pretty cool\n"
# 2036 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "if we made a tag team?$"
# 2037 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2038 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept::
# 2039 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1825 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2040 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Cool!\n"
# 2041 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go do the registration in a flash!$"
# 2042 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2043 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject::
# 2044 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1830 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2045 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I thought that we'd make just\n"
# 2046 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the greatest team ever.$"
# 2047 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2048 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro::
# 2049 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1835 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2050 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm COOLTRAINER {STR_VAR_1}!$"
# 2051 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2052 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1::
# 2053 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1839 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2054 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The team I've been raising has one\n"
# 2055 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"
# 2056 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2057 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask::
# 2058 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1844 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2059 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 2060 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Does that sound okay?\n"
# 2061 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How about we become tag partners?$"
# 2062 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2063 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept::
# 2064 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1850 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2065 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sounds A-OK!\n"
# 2066 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'd better do the registration.$"
# 2067 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2068 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject::
# 2069 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1855 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2070 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I was thinking how we would be\n"
# 2071 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one tough team…$"
# 2072 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2073 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro::
# 2074 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1860 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2075 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Heyo!\n"
# 2076 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, the POKéMANIAC!$"
# 2077 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2078 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1::
# 2079 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1865 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2080 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What does a guy like me have?\n"
# 2081 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 2082 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2083 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask::
# 2084 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1870 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2085 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1},\n"
# 2086 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that's what!\p"
# 2087 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let's do it!\n"
# 2088 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We'll stomp around as a tag team!$"
# 2089 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2090 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept::
# 2091 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1877 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2092 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good call!\n"
# 2093 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll register the both of us!$"
# 2094 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2095 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject::
# 2096 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1882 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2097 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are brutal!\n"
# 2098 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It's not my fault if you regret this!$"
# 2099 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro::
# 2101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1887 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo, there!\n"
# 2103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm KINDLER {STR_VAR_1}!$"
# 2104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1::
# 2106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1892 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You know what my training cooked up?\n"
# 2108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 2109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask::
# 2111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1897 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 2113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Well, what do you say?\n"
# 2114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to form a tag team?$"
# 2115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept::
# 2117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1903 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "All right!\n"
# 2119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll get on with the registration.$"
# 2120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject::
# 2122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1908 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Promise you'll partner up with me\n"
# 2124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "the next time we run into each other.$"
# 2125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro::
# 2127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1913 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a CAMPER!$"
# 2129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1::
# 2131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1917 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've been raising one {STR_VAR_1}-\n"
# 2133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "using {STR_VAR_2} and one$"
# 2134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask::
# 2136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1922 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2}.\p"
# 2138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Do you think it'd be fun to team up?\n"
# 2139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I bet it would be!$"
# 2140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept::
# 2142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1928 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yeah!\n"
# 2144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Off I go to register!$"
# 2145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject::
# 2147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1933 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Next time, okay?\n"
# 2149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I want to be on your team.$"
# 2150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro::
# 2152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1938 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello!\n"
# 2154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a PICNICKER!$"
# 2155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1::
# 2157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1943 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON I've been taking are\n"
# 2159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 2160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask::
# 2162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1948 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 2164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Are you interested in joining me\n"
# 2165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "on a tag team?$"
# 2166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept::
# 2168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1954 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Why, thank you!\n"
# 2170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I will do the registration now.$"
# 2171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject::
# 2173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1959 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It would be nice if I could join you\n"
# 2175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "some other time.$"
# 2176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro::
# 2178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1964 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm PSYCHIC {STR_VAR_1}!$"
# 2180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1::
# 2182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1968 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The twosome I've been raising are\n"
# 2184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 2185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask::
# 2187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1973 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 2189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Would you like to form a tag team\n"
# 2190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "with me?$"
# 2191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept::
# 2193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1979 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sure thing!\n"
# 2195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll take care of the registration!$"
# 2196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject::
# 2198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1984 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If we meet again, that's when I'd like\n"
# 2200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "to team up with you.$"
# 2201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro::
# 2203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1989 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}.\n"
# 2205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm a PSYCHIC.$"
# 2206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1::
# 2208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1994 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 2210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask::
# 2212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 1998 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
# 2214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "they're my disciples.\p"
# 2215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Doesn't the idea of forming a tag-team\n"
# 2216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "partnership intrigue you?$"
# 2217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept::
# 2219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2005 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you.\n"
# 2221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go deal with the registration.$"
# 2222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject::
# 2224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2010 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I hope there will be another chance\n"
# 2226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "to forge an alliance.$"
# 2227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro::
# 2229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2015 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm SCHOOL KID {STR_VAR_1}!$"
# 2231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1::
# 2233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2019 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
# 2235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask::
# 2237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2023 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
# 2239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} are my POKéMON pair.\p"
# 2240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "May I please be your partner on\n"
# 2241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a tag team?$"
# 2242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept::
# 2244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2030 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ooh, thank you!\n"
# 2246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll register at the counter right away!$"
# 2247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject::
# 2249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2035 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please?\n"
# 2251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "May I join you the next time?$"
# 2252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro::
# 2254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2040 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hiya! The name's {STR_VAR_1}!\n"
# 2256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm a POKéMON BREEDER!$"
# 2257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1::
# 2259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2045 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON I've raised are one\n"
# 2261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
# 2262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask::
# 2264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2050 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
# 2266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sound interesting?\n"
# 2267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How about we form a tag team, then?$"
# 2268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept::
# 2270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2056 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "All righty!\n"
# 2272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You leave the registration to me!$"
# 2273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject::
# 2275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2061 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You have to team up with me next time,\n"
# 2277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "all right?$"
# 2278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro::
# 2280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2066 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm proud to say\n"
# 2282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "that I am a POKéFAN.$"
# 2283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1::
# 2285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2071 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The darling POKéMON I've raised are\n"
# 2287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
# 2288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask::
# 2290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2076 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 2292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aren't they just the cutest?\n"
# 2293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We ought to make a team!$"
# 2294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept::
# 2296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2082 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you, dear!\n"
# 2298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll be on my way to register!$"
# 2299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject::
# 2301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2087 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My darling POKéMON are the best,\n"
# 2303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll have you know. How annoying!$"
# 2304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro::
# 2306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2092 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, I'm SWIMMER {STR_VAR_1}.$"
# 2308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1::
# 2310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2096 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
# 2312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask::
# 2314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
# 2316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} are what I've trained.\p"
# 2317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You and me, let's make a tag team.$"
# 2318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept::
# 2320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's cool!\n"
# 2322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll register the two of us.$"
# 2323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject::
# 2325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If we meet again, you owe me\n"
# 2327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a tag team!$"
# 2328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro::
# 2330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What's happening?\n"
# 2332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a TRIATHLETE.$"
# 2333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1::
# 2335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I got a couple decent POKéMON.\n"
# 2337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 2338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask::
# 2340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 2342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It'd be neat if we made a tag team\n"
# 2343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "together, so how about it?$"
# 2344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept::
# 2346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Right on!\n"
# 2348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You wait while I register, okay?$"
# 2349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject::
# 2351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I expect you'll let me join you\n"
# 2353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "next time, how's that?$"
# 2354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro::
# 2356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm the TRIATHLETE {STR_VAR_1}!$"
# 2358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1::
# 2360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 2362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask::
# 2364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "another {STR_VAR_2} that knows how\n"
# 2366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "to use {STR_VAR_1}. That's my pair.\p"
# 2367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What do you think?\n"
# 2368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We'd make a good team, I'd say.$"
# 2369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept::
# 2371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I like that answer!\n"
# 2373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll get done with registration fast!$"
# 2374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject::
# 2376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll give me another chance to form\n"
# 2378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "a partnership, won't you?$"
# 2379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro::
# 2381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, there! Hello!\n"
# 2383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a SWIMMER!$"
# 2384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1::
# 2386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Check out what I've been raising!\n"
# 2388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
# 2389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask::
# 2391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
# 2393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sweet, huh?\n"
# 2394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It'd be sweet to form a team, too!$"
# 2395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept::
# 2397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Much obliged!\n"
# 2399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll get this registration thing done!$"
# 2400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject::
# 2402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
# 2403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If we meet again, you have to team up\n"
# 2404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "with me. You'll do that, right?$"
