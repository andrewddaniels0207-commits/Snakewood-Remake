# 1 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePalaceBattleRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceBattleRoom_OnWarp
# 7 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 11 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom
# 14 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 16 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnTransition::
# 18 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_settrainers
# 20 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx
# 22 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 24 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx::
# 26 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	checkplayergender
# 28 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 30 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_2
# 32 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 33 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 34 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 35 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_1::
# 36 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 38 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 28 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_5
# 40 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 41 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 42 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 43 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_4::
# 44 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 45 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 47 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_2::
# 48 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxMale
# 50 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_1
# 52 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 53 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 54 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 55 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_5::
# 56 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxFemale
# 58 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 59 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx_4
# 60 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 61 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 62 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 63 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxMale::
# 64 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 66 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 68 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 69 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 70 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 71 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfxFemale::
# 72 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 74 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 59 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 76 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 77 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 78 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 79 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom::
# 80 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	showobjectat LOCALID_PALACE_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 82 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 84 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 86 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom_2
# 88 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 89 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 90 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 91 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom_1::
# 92 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerReturnToChallenge
# 94 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 96 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 98 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 100 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 102 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 104 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 105 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 106 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 107 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom_2::
# 108 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BeginChallenge
# 110 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_EnterRoom_1
# 112 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 113 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 114 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 115 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BeginChallenge::
# 116 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerEnterRoom
# 118 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 120 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 121 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 122 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 123 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter::
# 124 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	tower_setopponent
# 126 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addobject LOCALID_PALACE_BATTLE_OPPONENT
# 128 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentEnter
# 130 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 132 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_getopponentintro
# 134 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 136 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 138 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 140 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 141 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 142 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 143 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter_2::
# 144 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent
# 146 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 147 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 148 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 149 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost::
# 150 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 152 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby
# 154 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 155 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 156 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 157 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent::
# 158 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 142 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 160 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 161 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 162 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 164 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 166 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 167 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 168 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 169 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent_1::
# 170 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 171 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentExit
# 172 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 174 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	removeobject LOCALID_PALACE_BATTLE_OPPONENT
# 176 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 178 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 179 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 180 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 182 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 168 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 170 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special LoadPlayerParty
# 186 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 172 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special SavePlayerParty
# 188 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 190 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 192 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 194 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 196 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 197 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 198 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 199 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent_3::
# 200 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 202 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedOpponent_1
# 204 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 205 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 206 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 207 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent::
# 208 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 192 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 210 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 212 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 196 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 214 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 197 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 215 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_2
# 216 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 217 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 218 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 219 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_1::
# 220 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 222 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 224 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_5
# 226 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 227 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 228 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_4::
# 230 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 210 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 232 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 233 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_8
# 234 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 235 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 236 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_7::
# 238 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 239 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 3
# 240 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 241 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_11
# 242 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 243 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 244 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 245 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_10::
# 246 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 247 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 4
# 248 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_14
# 250 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 251 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 252 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 253 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_13::
# 254 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 5
# 256 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 229 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_17
# 258 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 259 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 260 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 261 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_16::
# 262 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 234 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 6
# 264 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 235 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_20
# 266 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 267 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 268 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_19::
# 270 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 272 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 274 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_23
# 276 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 277 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 278 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 279 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_22::
# 280 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 282 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 283 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 284 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_2::
# 286 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 287 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext
# 288 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_1
# 290 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 291 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 292 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 293 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_5::
# 294 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor2ndOpponent
# 296 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 297 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_4
# 298 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 299 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 300 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_8::
# 302 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 277 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 303 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor3rdOpponent
# 304 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 278 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 305 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_7
# 306 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 307 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 309 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_11::
# 310 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 311 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor4thOpponent
# 312 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 284 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_10
# 314 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 315 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 317 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_14::
# 318 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 319 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor5thOpponent
# 320 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 290 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_13
# 322 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 323 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_17::
# 326 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor6thOpponent
# 328 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 296 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 329 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_16
# 330 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 331 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 332 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_20::
# 334 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 335 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor7thOpponent
# 336 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_19
# 338 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 339 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 340 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 341 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_23::
# 342 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 344 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 308 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 345 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_22
# 346 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 347 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_26::
# 350 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 351 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge
# 352 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 353 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 354 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 355 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_27::
# 356 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 319 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle
# 358 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 359 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 360 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 361 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_28::
# 362 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 325 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 363 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 364 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 365 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 366 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 367 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_29::
# 368 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 331 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 369 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 370 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 371 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 372 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 373 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent_30::
# 374 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 375 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 376 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 377 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 378 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 379 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 380 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 382 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 383 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 384 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 385 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord_2::
# 386 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 358 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 387 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge
# 388 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 389 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 390 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 391 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord_3::
# 392 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 364 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 393 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 394 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 395 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 396 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 397 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord_4::
# 398 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 370 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 399 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 400 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 401 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 402 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 403 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponentNoRecord_5::
# 404 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 376 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 405 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 406 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 407 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 408 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 409 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle::
# 410 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 382 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch
# 412 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 384 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 414 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 386 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 415 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 416 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 417 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 418 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle_2::
# 420 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 399 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 421 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 422 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 423 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 424 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 425 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle_3::
# 426 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 405 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_RecordBattle
# 428 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 429 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 430 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 431 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle_4::
# 432 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 434 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 435 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 436 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 437 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_RecordBattle::
# 438 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 417 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 439 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 440 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 441 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 442 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 443 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 444 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 445 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge::
# 446 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 447 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 448 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 449 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 450 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 451 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge_2::
# 452 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 438 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 453 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 454 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 455 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 456 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 457 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge_3::
# 458 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 444 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 459 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_PauseChallenge
# 460 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 461 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 462 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 463 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge_4::
# 464 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 450 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 465 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 466 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 467 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 468 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 469 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge::
# 470 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 456 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
# 472 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 458 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 474 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 460 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 475 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 476 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 477 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 478 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 479 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge_2::
# 480 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 482 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 483 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge_3::
# 486 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 479 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 487 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 488 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 489 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 490 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 491 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge_4::
# 492 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 485 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 493 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForOpponent
# 494 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 495 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 496 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 497 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ContinueChallenge::
# 498 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 491 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 499 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 500 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 493 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 501 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 502 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 503 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 504 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 497 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 505 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_NextOpponentEnter
# 506 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 507 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 508 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 509 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon::
# 510 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 503 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 511 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 512 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 505 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby
# 514 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 515 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 516 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 517 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_PauseChallenge::
# 518 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 511 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 519 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
# 520 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 521 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 522 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 523 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_save CHALLENGE_STATUS_PAUSED
# 524 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 517 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 525 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playse SE_SAVE
# 526 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 519 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 527 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitse
# 528 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 521 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 530 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 523 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 531 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_reset
# 532 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 533 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 534 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 535 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext::
# 536 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 537 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_TEMP_2, 1
# 538 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 530 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 539 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext_2
# 540 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 541 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 542 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 543 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext_1::
# 544 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 535 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 545 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven, MSGBOX_DEFAULT
# 546 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 537 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 547 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 548 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 549 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 550 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 551 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext_2::
# 552 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 543 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 553 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 554 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 544 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 555 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_MavenUpNext_1
# 556 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 557 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 558 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 559 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven::
# 560 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 549 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 561 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven
# 562 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 551 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 563 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 564 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 553 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 565 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 566 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 555 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 567 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 568 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 556 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 569 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_2
# 570 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 571 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 572 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 573 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_1::
# 574 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 561 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 575 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 576 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 577 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 578 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 579 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_2::
# 580 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 578 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 581 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord
# 582 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 579 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 583 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_1
# 584 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 585 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 586 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 587 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_5::
# 588 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 584 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 589 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser
# 590 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 591 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 592 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 593 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_6::
# 594 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 595 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRecordBattle
# 596 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 597 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 598 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 599 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_7::
# 600 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 596 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 601 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 602 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 603 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 604 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 605 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_8::
# 606 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 602 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 607 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 608 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 609 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 610 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 611 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven_9::
# 612 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 608 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 613 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 614 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 615 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 616 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 617 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord::
# 618 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 614 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 619 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 620 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 621 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 622 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 623 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord_2::
# 624 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 629 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 625 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser
# 626 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 627 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 628 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 629 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord_3::
# 630 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 635 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 631 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskPauseChallenge
# 632 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 633 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 634 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 635 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord_4::
# 636 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 641 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 637 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskRetireChallenge
# 638 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 639 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 640 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 641 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMavenNoRecord_5::
# 642 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 647 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 643 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_AskReadyForMaven
# 644 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 645 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 646 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 647 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser::
# 648 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 653 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 649 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 650 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 655 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 651 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser, MSGBOX_DEFAULT
# 652 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 657 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 653 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 654 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 659 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 655 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 656 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 661 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 657 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight
# 658 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 663 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 659 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_PALACE_BATTLE_OPPONENT, 15, 1
# 660 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 665 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 661 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	addobject LOCALID_PALACE_BATTLE_OPPONENT
# 662 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 667 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 663 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	hideobjectat LOCALID_PALACE_BATTLE_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 664 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 669 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 665 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxy LOCALID_PALACE_BATTLE_OPPONENT, 13, 1
# 666 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 671 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 667 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_PALACE_BATTLE_OPPONENT, 13, 1
# 668 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 673 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 669 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_DUSCLOPS, BattleFrontier_BattlePalaceBattleRoom_Movement_DusclopsEnter
# 670 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 675 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 671 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_AZURILL, BattleFrontier_BattlePalaceBattleRoom_Movement_AzurillEnter
# 672 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 677 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 673 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, BattleFrontier_BattlePalaceBattleRoom_Movement_SpenserEnter
# 674 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 679 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 675 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 676 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 677 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 678 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 679 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_1::
# 680 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 681 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 682 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 693 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 683 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 684 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 694 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 685 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_7
# 686 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 687 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 688 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 689 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_6::
# 690 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 699 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro, MSGBOX_DEFAULT
# 692 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 701 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 693 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 694 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 695 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 696 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 697 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_3::
# 698 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 707 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 699 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold
# 700 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 708 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 701 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_1
# 702 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 703 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 704 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 705 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_4::
# 706 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 713 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 707 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver
# 708 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 714 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 709 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_1
# 710 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 711 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 712 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 713 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_5::
# 714 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 719 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 715 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold
# 716 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 720 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 717 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_1
# 718 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 719 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 720 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 721 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_7::
# 722 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 725 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 723 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver
# 724 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 726 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 725 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenser_6
# 726 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 727 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 728 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 729 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver::
# 730 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 731 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 731 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons, MSGBOX_DEFAULT
# 732 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 733 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 733 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 734 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 735 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 735 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 736 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 736 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 737 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver_2
# 738 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 739 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 740 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 741 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver_1::
# 742 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 741 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 743 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 744 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 745 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 746 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 747 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver_2::
# 748 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 747 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 749 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver
# 750 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 748 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 751 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserSilver_1
# 752 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 753 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 754 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 755 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver::
# 756 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 753 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 757 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_incrementstreak
# 758 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 755 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 759 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getsymbols
# 760 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 757 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 761 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 762 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 758 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 763 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver_2
# 764 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 765 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 766 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 767 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver_1::
# 768 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 763 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 769 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle, MSGBOX_DEFAULT
# 770 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 765 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 771 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 772 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 767 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 773 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 774 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 769 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 775 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass, MSGBOX_DEFAULT
# 776 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 771 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 777 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 778 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 773 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 779 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol
# 780 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 775 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 781 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 782 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 777 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 783 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 784 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 779 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 785 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_givesymbol
# 786 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 781 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 787 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, Common_Movement_WalkInPlaceLeft
# 788 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 783 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 789 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 790 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 785 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 791 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 792 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 787 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 793 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 794 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 789 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 795 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 796 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 791 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 797 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime, MSGBOX_DEFAULT
# 798 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 793 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 799 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 800 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 801 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 802 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 803 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver_2::
# 804 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 799 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 805 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 806 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 800 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 807 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserSilver_1
# 808 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 809 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 810 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 811 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold::
# 812 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 805 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 813 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 814 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 807 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 815 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 816 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 808 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 817 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold_2
# 818 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 819 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 820 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 821 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold_1::
# 822 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 813 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 823 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack, MSGBOX_DEFAULT
# 824 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 815 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 825 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 826 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 827 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 828 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 829 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold_2::
# 830 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 821 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 831 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold
# 832 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 822 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 833 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_IntroSpenserGold_1
# 834 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 835 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 836 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 837 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold::
# 838 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 827 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 839 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah, MSGBOX_DEFAULT
# 840 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 829 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 841 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 842 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 831 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 843 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 844 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 832 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 845 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold_2
# 846 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 847 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 848 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 849 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold_1::
# 850 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 837 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 851 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyLost
# 852 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 853 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 854 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 855 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold_2::
# 856 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 843 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 857 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold
# 858 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 844 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 859 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_BattleSpenserGold_1
# 860 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 861 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 862 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 863 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold::
# 864 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 849 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 865 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	palace_incrementstreak
# 866 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 851 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 867 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_getsymbols
# 868 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 853 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 869 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 870 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 854 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 871 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold_2
# 872 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 873 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 874 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 875 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold_1::
# 876 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 859 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 877 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable, MSGBOX_DEFAULT
# 878 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 861 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 879 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp
# 880 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 863 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 881 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown
# 882 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 865 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 883 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass, MSGBOX_DEFAULT
# 884 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 867 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 885 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 886 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 869 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 887 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine
# 888 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 871 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 889 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 890 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 873 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 891 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitfanfare
# 892 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 875 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 893 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_givesymbol
# 894 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 877 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 895 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_OPPONENT, Common_Movement_WalkInPlaceLeft
# 896 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 879 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 897 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 898 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 881 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 899 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 900 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 883 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 901 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 902 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 885 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 903 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmovement 0
# 904 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 887 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 905 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain, MSGBOX_DEFAULT
# 906 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 889 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 907 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 908 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 909 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 910 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 911 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold_2::
# 912 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 895 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 913 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyWon
# 914 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 896 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 915 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_DefeatedSpenserGold_1
# 916 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 917 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 918 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 919 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle::
# 920 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 901 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 921 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	closemessage
# 922 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 903 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 923 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 924 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 905 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 925 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 926 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 907 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 927 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 928 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 909 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 929 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PALACE
# 930 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 911 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 931 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 932 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 913 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 933 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_restorehelditems
# 934 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 915 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 935 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	special HealPlayerParty
# 936 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 917 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 937 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	frontier_resetsketch
# 938 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 939 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 940 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 941 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 923 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 942 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 943 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 924 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 944 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_OnWarp:
# 945 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 925 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 946 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	# 392 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 947 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 926 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 948 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceBattleRoom_EventScript_SetUpRoomObjects
# 949 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 927 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 950 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	# 393 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 951 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 928 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 952 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.2byte 0
# 953 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 954 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_SetUpRoomObjects::
# 955 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 934 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 956 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	hideobjectat LOCALID_PALACE_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM
# 957 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 936 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 958 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_SetPlayerGfx
# 959 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 938 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 960 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 961 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 940 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 962 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 963 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 942 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 964 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	removeobject LOCALID_PALACE_BATTLE_OPPONENT
# 965 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 944 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 966 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_DUSCLOPS, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 967 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 946 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 968 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	applymovement LOCALID_PALACE_AZURILL, BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible
# 969 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 970 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 971 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 972 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor2ndOpponent::
# 973 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 952 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 974 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
# 975 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 954 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 976 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 977 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 978 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 979 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 980 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor3rdOpponent::
# 981 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 960 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 982 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
# 983 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 962 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 984 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 985 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 986 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 987 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 988 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor4thOpponent::
# 989 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 968 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 990 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent
# 991 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 970 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 992 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 993 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 994 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 995 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 996 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor5thOpponent::
# 997 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 976 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 998 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent
# 999 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 978 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 1001 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1002 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1003 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1004 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor6thOpponent::
# 1005 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 984 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1006 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent
# 1007 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 986 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1008 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 1009 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1010 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1011 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1012 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_ReadyFor7thOpponent::
# 1013 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 992 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1014 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent
# 1015 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 994 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitmessage
# 1017 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1018 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1019 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1020 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_SetInvisible::
# 1021 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1001 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1022 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_invisible
# 1023 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1003 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1024 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1025 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1026 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1027 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1028 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerEnterRoom::
# 1029 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1008 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1030 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1031 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1010 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1032 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1033 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1012 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1034 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1035 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1014 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1037 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1038 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1039 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1040 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1041 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1042 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceRight::
# 1043 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1023 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1044 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_right
# 1045 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1046 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1047 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1048 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1049 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1050 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceUp::
# 1051 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1052 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_up
# 1053 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1033 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1054 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1055 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1056 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1057 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1058 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_PlayerReturnToChallenge::
# 1059 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1060 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1061 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1041 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1062 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1063 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1064 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1065 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1066 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1067 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1047 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1068 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1069 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1049 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1070 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1071 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1072 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1073 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1074 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentEnter::
# 1075 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1076 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1077 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1078 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1079 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1059 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1080 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1081 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1061 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1082 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1083 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1084 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 1085 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1065 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1086 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1087 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1088 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1089 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1090 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_OpponentExit::
# 1091 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1071 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1092 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1093 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1073 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1094 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1095 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1075 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1096 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1097 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1077 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1098 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_up
# 1099 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1079 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1100 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1101 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1102 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1103 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1104 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_FaceDown::
# 1105 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1085 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1106 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_down
# 1107 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1087 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1108 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1109 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1110 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1111 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1112 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter1::
# 1113 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1093 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1114 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1115 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1116 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1117 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1097 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1118 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1119 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1099 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1120 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 1121 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1101 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1122 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1123 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1124 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1125 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1126 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter2::
# 1127 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1128 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1129 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1130 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1131 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1111 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1132 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1133 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1134 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1135 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1136 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_UnusedOpponentEnter3::
# 1137 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1117 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1138 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1139 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1119 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1140 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1141 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1121 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1142 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1143 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1123 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1144 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 1145 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1125 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1146 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1147 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1148 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1149 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1150 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby::
# 1151 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1130 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1152 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 1153 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1132 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1154 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
# 1155 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1133 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1156 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby_2
# 1157 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1158 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1159 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1160 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby_1::
# 1161 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1138 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1162 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 5, 7
# 1163 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1140 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1164 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 1165 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 1166 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1167 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1168 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby_2::
# 1169 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1146 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1170 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyDoubles
# 1171 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1147 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1172 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	goto BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobby_1
# 1173 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1174 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1175 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1176 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_EventScript_WarpToLobbyDoubles::
# 1177 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1152 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1178 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY, 19, 7
# 1179 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1154 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1180 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	waitstate
# 1181 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	end
# 1182 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1183 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1184 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_DusclopsEnter::
# 1185 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1161 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1186 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1187 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1163 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1188 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1189 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1165 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1190 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1191 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1167 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1192 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1193 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1169 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1194 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_right
# 1195 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1171 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1196 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_down
# 1197 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1173 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1198 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 1199 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1175 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1200 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1201 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1202 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1203 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1204 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_AzurillEnter::
# 1205 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1181 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1206 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1207 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1183 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1208 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1209 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1185 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1210 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_right
# 1211 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1187 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1212 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1213 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1189 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1214 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1215 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1191 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1216 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1217 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1193 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1218 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1219 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1195 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1220 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_fast_down
# 1221 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1197 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1222 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 1223 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1199 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1224 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1225 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1226 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1227 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1228 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1229 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1230 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Movement_SpenserEnter::
# 1231 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1207 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1232 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1233 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1209 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1234 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1235 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1211 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1236 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1237 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1238 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1239 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1215 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1240 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1241 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1217 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1242 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1243 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1244 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	delay_16
# 1245 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1221 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1246 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	set_visible
# 1247 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1223 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1248 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1249 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1225 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1250 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1251 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1227 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1252 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1253 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1229 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1254 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	walk_slow_down
# 1255 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1231 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1256 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	face_left
# 1257 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1233 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1258 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	step_end
# 1259 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	return
# 1260 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1261 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1262 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons::
# 1263 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1236 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1264 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Excellent…\n"
# 1265 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let me restore your POKéMON.$"
# 1266 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1267 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent::
# 1268 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1241 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1269 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 2nd opponent is next.\n"
# 1270 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 1271 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1272 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent::
# 1273 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1246 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1274 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 3rd opponent is next.\n"
# 1275 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 1276 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1277 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor4thOpponent::
# 1278 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1251 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1279 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 4th opponent is next.\n"
# 1280 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 1281 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1282 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor5thOpponent::
# 1283 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1256 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1284 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 5th opponent is next.\n"
# 1285 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 1286 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1287 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor6thOpponent::
# 1288 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1261 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1289 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 6th opponent is next.\n"
# 1290 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 1291 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1292 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor7thOpponent::
# 1293 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1266 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1294 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The 7th opponent is next.\n"
# 1295 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 1296 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1297 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame::
# 1298 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1271 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1299 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Would you like to save and quit\n"
# 1300 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "the game?$"
# 1301 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1302 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge::
# 1303 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1276 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1304 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you wish to quit your challenge?$"
# 1305 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1306 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SavingData::
# 1307 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1280 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1308 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Saving the data.\n"
# 1309 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Have patience…$"
# 1310 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1311 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_RecordLastMatch::
# 1312 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1285 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1313 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you wish to record your latest\n"
# 1314 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "match on your FRONTIER PASS?$"
# 1315 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1316 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ChallengingPalaceMaven::
# 1317 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1290 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1318 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "And now…\p"
# 1319 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "By winning consistently, you have\n"
# 1320 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "earned the privilege of challenging\l"
# 1321 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "our master, the PALACE MAVEN…$"
# 1322 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1323 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ReadyForPalaceMaven::
# 1324 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1297 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1325 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "I shall send for the PALACE MAVEN.\n"
# 1326 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1327 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1328 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser::
# 1329 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1302 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1330 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let great fanfare announce the arrival\n"
# 1331 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "of the PALACE MAVEN, SPENSER!$"
# 1332 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1333 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserFirstIntro::
# 1334 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1307 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1335 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: My physical being is with\n"
# 1336 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "POKéMON always!\p"
# 1337 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My heart beats as one with\n"
# 1338 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "POKéMON always!\p"
# 1339 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Young one of a TRAINER!\n"
# 1340 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Do you believe in your POKéMON?\p"
# 1341 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Can you believe them through\n"
# 1342 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "and through?\p"
# 1343 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "If your bonds of trust are frail,\n"
# 1344 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "you will never beat my brethren!$"
# 1345 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1346 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ProveYourBondWithMons::
# 1347 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1320 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1348 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The bond you share with your POKéMON!\n"
# 1349 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Prove it to me here!$"
# 1350 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1351 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserPostSilverBattle::
# 1352 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1325 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1353 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\p"
# 1354 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Hah, you never fell for my bluster!\n"
# 1355 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Sorry for trying that stunt!\p"
# 1356 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 1357 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Bring me the thing!$"
# 1358 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1359 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_LetsSeeFrontierPass::
# 1360 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1333 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1361 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My, my, if only you could maintain that\n"
# 1362 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "facade of distinguished authority…\p"
# 1363 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 1364 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS!$"
# 1365 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_ReceivedSpiritsSymbol::
# 1367 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1340 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1368 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The Spirits Symbol was embossed on\n"
# 1369 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 1370 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1371 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserAwaitNextTime::
# 1372 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1345 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1373 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Your POKéMON's eyes are \n"
# 1374 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "truly clear and unclouded.\p"
# 1375 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "I will eagerly await the next\n"
# 1376 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "opportunity to see you.$"
# 1377 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1378 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserThisTimeWontHoldBack::
# 1379 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1352 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1380 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\n"
# 1381 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "You've battled your way up again?\p"
# 1382 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "You must have developed a truly\n"
# 1383 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "formidable bond with your POKéMON.\p"
# 1384 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "So be it!\p"
# 1385 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "This time, I won't bluster or hold back.\n"
# 1386 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "This time, there's no fooling around.\p"
# 1387 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Ready now?\n"
# 1388 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Prepare to lose!$"
# 1389 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1390 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_Kaaah::
# 1391 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1364 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1392 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "… … …Kaaah!$"
# 1393 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1394 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable::
# 1395 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1368 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1396 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Well, that was some display!\n"
# 1397 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Even fully unleashed, my brethren\l"
# 1398 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "could not overpower you.\p"
# 1399 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Your team spirit is truly admirable!\p"
# 1400 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Here!\n"
# 1401 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Bring me that thing, will you?$"
# 1402 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1403 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_HurryWithFrontierPass::
# 1404 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1377 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1405 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My, my, if only you could maintain\n"
# 1406 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "a certain level of decorum…\p"
# 1407 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Gaaah, here!\n"
# 1408 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Hurry with that FRONTIER PASS, you!$"
# 1409 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1410 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpiritsSymbolTookGoldenShine::
# 1411 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1384 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1412 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "The Spirits Symbol took on\n"
# 1413 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 1414 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"

# 1415 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
BattleFrontier_BattlePalaceBattleRoom_Text_SpenserComeSeeMeAgain::
# 1416 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1389 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
# 1417 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "SPENSER: Gwahahah!\p"
# 1418 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "Come see me time and again!\n"
# 1419 "data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.pory"
	.string "My brethren and I will be waiting!$"
