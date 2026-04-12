# 1 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleFactoryBattleRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryBattleRoom_OnWarp
# 7 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom
# 14 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnTransition::
# 18 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_settrainers
# 20 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	checkplayergender
# 22 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 24 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_OnTransition_2
# 26 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 27 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 29 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnTransition_1::
# 30 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 32 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_OnTransition_5
# 34 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 35 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 36 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 37 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnTransition_4::
# 38 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 40 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 42 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 44 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_OnTransition_8
# 46 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 47 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 49 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnTransition_7::
# 50 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 51 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 53 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnTransition_2::
# 54 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale
# 56 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_OnTransition_1
# 58 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 59 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 60 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 61 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnTransition_5::
# 62 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale
# 64 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_OnTransition_4
# 66 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 67 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 68 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 69 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnTransition_8::
# 70 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj
# 72 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_OnTransition_7
# 74 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 75 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 76 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 77 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj::
# 78 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 80 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 9
# 82 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 83 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 84 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 85 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 87 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnWarp:
# 89 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	# 34 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects
# 93 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	# 35 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.2byte 0
# 97 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 98 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects::
# 99 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 101 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
# 103 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
# 105 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects_2
# 107 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 108 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 109 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 110 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects_1::
# 111 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	hideobjectat LOCALID_FACTORY_BATTLE_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
# 113 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 114 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 115 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 116 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects_2::
# 117 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects
# 119 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects_1
# 121 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 122 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 123 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 124 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects::
# 125 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 126 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 127 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 128 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale::
# 129 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 131 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 132 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 133 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 134 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale::
# 135 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 137 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 138 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 139 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 140 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle::
# 141 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn, MSGBOX_DEFAULT
# 143 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 145 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle
# 147 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 149 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 151 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 153 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
# 155 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent
# 157 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 158 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 159 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 160 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom::
# 161 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
# 163 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_2
# 165 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 166 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 167 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 168 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_1::
# 169 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 171 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 173 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 175 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
# 177 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_setopponentgfx
# 179 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	removeobject LOCALID_FACTORY_BATTLE_OPPONENT
# 181 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 1
# 183 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addobject LOCALID_FACTORY_BATTLE_OPPONENT
# 185 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter
# 187 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 189 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 190 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 191 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 192 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_2::
# 193 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle
# 195 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_1
# 197 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 198 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 199 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 200 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent::
# 201 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
# 203 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_2
# 205 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 206 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 207 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 208 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_1::
# 209 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	palace_getopponentintro
# 211 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	lockall
# 213 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 217 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 219 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 221 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special HealPlayerParty
# 223 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	dofacilitytrainerbattle FRONTIER_FACILITY_FACTORY
# 225 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 227 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 228 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 229 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 230 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_2::
# 231 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland
# 233 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_1
# 235 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 236 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 237 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_5::
# 239 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent
# 241 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 242 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 243 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 244 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost::
# 245 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 215 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 247 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby
# 249 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 250 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 251 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 252 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent::
# 253 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
# 255 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
# 257 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent_2
# 259 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 260 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 261 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 262 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent_1::
# 263 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 265 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 233 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 267 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 235 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS
# 269 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 270 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 271 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 272 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent_2::
# 273 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
# 275 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent_1
# 277 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 278 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 279 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak::
# 281 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 283 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 286 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum::
# 287 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 289 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 291 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 293 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 294 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 295 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 296 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_1::
# 297 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 299 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 8
# 301 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 303 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 304 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 306 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_3::
# 307 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
# 309 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_1
# 311 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 312 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 313 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 314 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon::
# 315 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 317 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby
# 319 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 321 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland::
# 323 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 324 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 326 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1::
# 327 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 329 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 331 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 332 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_7
# 333 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 334 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 335 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 336 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_6::
# 337 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 338 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead, MSGBOX_DEFAULT
# 339 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 341 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 342 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 343 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 344 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_3::
# 345 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold
# 347 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1
# 349 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 350 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 351 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 352 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_4::
# 353 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 354 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
# 355 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1
# 357 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 358 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_5::
# 361 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
# 363 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1
# 365 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 366 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 367 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 368 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_7::
# 369 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 370 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
# 371 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 372 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_6
# 373 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 374 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 375 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver::
# 377 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 339 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 378 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn, MSGBOX_DEFAULT
# 379 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 341 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 380 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
# 381 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 343 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 382 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 383 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_2
# 385 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 386 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 387 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_1::
# 389 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 349 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 390 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
# 391 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 392 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 393 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 394 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_2::
# 395 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver
# 397 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_1
# 399 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 400 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 401 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 402 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver::
# 403 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 404 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getsymbols
# 405 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 363 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 406 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 407 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 408 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver_2
# 409 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 410 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 411 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 412 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver_1::
# 413 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 369 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 414 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass, MSGBOX_DEFAULT
# 415 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 371 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 416 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 417 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 373 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 418 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland
# 419 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 375 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 420 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 421 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 377 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 422 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 423 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 379 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 424 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol
# 425 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 426 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 427 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 428 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitfanfare
# 429 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 385 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 430 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_givesymbol
# 431 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 387 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred, MSGBOX_DEFAULT
# 433 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 389 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
# 435 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 436 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 437 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver_2::
# 439 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
# 441 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver_1
# 443 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 444 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 445 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold::
# 447 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 448 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 449 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 403 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 451 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 404 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 452 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_2
# 453 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 454 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 456 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_1::
# 457 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime, MSGBOX_DEFAULT
# 459 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 460 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 461 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 462 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 463 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 464 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_2::
# 465 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 466 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
# 467 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 418 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_1
# 469 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 470 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 472 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold::
# 473 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 474 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn, MSGBOX_DEFAULT
# 475 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
# 477 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 478 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 479 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 428 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_2
# 481 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 482 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 483 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 484 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_1::
# 485 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 486 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
# 487 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 488 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 489 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 490 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_2::
# 491 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 439 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 492 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold
# 493 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_1
# 495 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 496 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold::
# 499 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 500 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getsymbols
# 501 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 447 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 503 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 448 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold_2
# 505 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 506 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 507 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 508 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold_1::
# 509 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 453 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass, MSGBOX_DEFAULT
# 511 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 513 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 457 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 514 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland
# 515 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 459 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 516 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 517 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 518 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 519 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 463 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine
# 521 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 465 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 522 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 523 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 467 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 524 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitfanfare
# 525 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 469 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_givesymbol
# 527 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou, MSGBOX_DEFAULT
# 529 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 530 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
# 531 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 532 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 534 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold_2::
# 535 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 479 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
# 537 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 538 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold_1
# 539 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 540 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 541 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 542 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle::
# 543 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 485 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 544 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 545 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 487 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 546 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 547 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special HealPlayerParty
# 549 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 491 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_FACTORY
# 551 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 493 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 553 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 554 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 555 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 556 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland::
# 557 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 499 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
# 559 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
# 561 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_2
# 563 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 564 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 565 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 566 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_1::
# 567 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 569 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 509 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 571 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 511 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS
# 573 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK
# 575 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
# 577 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 516 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_5
# 579 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 580 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 581 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 582 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_4::
# 583 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 521 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 585 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 523 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, VAR_RESULT
# 587 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 525 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 589 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 527 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 591 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
# 593 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 594 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 595 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 596 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_2::
# 597 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 535 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
# 599 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_1
# 601 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 602 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 603 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 604 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_5::
# 605 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 541 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 606 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum
# 607 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_4
# 609 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 610 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 611 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 612 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom::
# 613 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 614 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 615 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 616 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 617 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 618 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 619 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 620 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 621 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 556 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 623 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 624 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_right
# 625 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 626 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end
# 627 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 628 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 629 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 630 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland::
# 631 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 632 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_right
# 633 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 634 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end
# 635 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 636 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 637 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 638 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter::
# 639 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 640 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 641 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 642 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 643 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 644 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 645 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 647 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 582 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 649 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 650 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_left
# 651 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end
# 653 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 654 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 655 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 656 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle::
# 657 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 659 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 660 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 661 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 662 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 663 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 664 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_left
# 665 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 666 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end
# 667 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 668 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 669 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 670 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby::
# 671 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 605 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 673 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 607 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 674 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
# 675 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 676 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_2
# 677 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 678 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 679 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 680 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_1::
# 681 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 613 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 682 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 4, 8
# 683 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 684 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 685 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 686 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 687 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 688 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_2::
# 689 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 621 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles
# 691 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_1
# 693 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 694 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 695 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 696 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles::
# 697 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 627 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 698 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 14, 8
# 699 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 629 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 700 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 701 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	end
# 702 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 703 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 704 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle::
# 705 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 635 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 706 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_1, Common_Movement_WalkInPlaceFasterRight
# 707 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 637 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 708 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_2, Common_Movement_WalkInPlaceFasterRight
# 709 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 639 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 710 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_3, Common_Movement_WalkInPlaceFasterRight
# 711 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 641 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 712 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_4, Common_Movement_WalkInPlaceFasterLeft
# 713 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 643 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_5, Common_Movement_WalkInPlaceFasterLeft
# 715 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 645 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_6, Common_Movement_WalkInPlaceFasterLeft
# 717 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 647 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 718 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 719 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	return
# 720 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 721 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 722 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn::
# 723 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 651 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 724 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Hey, hey!\n"
# 725 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Get a move on!$"
# 726 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 727 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead::
# 728 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 656 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 729 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Hey, my name's NOLAND!\n"
# 730 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "I'm basically in charge of this place,\l"
# 731 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "which is why I'm the FACTORY HEAD!\p"
# 732 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "I had a look at your Battle Swap data.\p"
# 733 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "You seem to have the right idea,\n"
# 734 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "but you're still square in your head!\p"
# 735 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Listen up, okay? Knowledge isn't only\n"
# 736 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "about reading books or doing desk work.\p"
# 737 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Just doing that sort of thing…\n"
# 738 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "It may as well be useless!\p"
# 739 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "You have to experience things with\n"
# 740 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "your heart and your body, understand?\p"
# 741 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "I'll take you on under the same\n"
# 742 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "conditions as you.\p"
# 743 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "I'll be using rental POKéMON, too!$"
# 744 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 745 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn::
# 746 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 674 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 747 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Shake out every last bit of your\n"
# 748 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "knowledge and bring it on!$"
# 749 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 750 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass::
# 751 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 679 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: Smart going!\n"
# 753 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS.$"
# 754 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 755 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol::
# 756 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 684 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 757 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "The Knowledge Symbol was embossed\n"
# 758 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "on the FRONTIER PASS!$"
# 759 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 760 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred::
# 761 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 689 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Heh…\n"
# 763 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "You're a pretty bright spark…\p"
# 764 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Next time, I'll come after you hard.\n"
# 765 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "No holds barred, understand?\p"
# 766 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "You keep up your studies!$"
# 767 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 768 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime::
# 769 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 770 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: Hey, hey! How's it going?\n"
# 771 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "You keeping up with your studies?\p"
# 772 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "…Oh?\p"
# 773 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "You've taken on a harder look than\n"
# 774 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "the last time I saw you.\p"
# 775 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Now, this should be fun!\n"
# 776 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "I'm getting excited, hey!$"
# 777 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 778 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn::
# 779 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 707 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 780 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "All right!\n"
# 781 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Bring it on!$"
# 782 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 783 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass::
# 784 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 712 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 785 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: What the…\n"
# 786 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "You're getting out of my league!\p"
# 787 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Sheesh!\n"
# 788 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Let's see that FRONTIER PASS!$"
# 789 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 790 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine::
# 791 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 719 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 792 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "The Knowledge Symbol took on\n"
# 793 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 794 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 795 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou::
# 796 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 724 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
# 797 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Pfft, man!\p"
# 798 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "That's absolutely the last time\n"
# 799 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "I lose to you!\p"
# 800 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "We have to do this again, hey?$"
