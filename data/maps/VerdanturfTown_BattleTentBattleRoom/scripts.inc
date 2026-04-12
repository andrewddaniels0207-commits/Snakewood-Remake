# 1 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 2 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_MapScripts::
# 3 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 2 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 4 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_BattleTentBattleRoom_OnTransition
# 5 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 6 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 6 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, VerdanturfTown_BattleTentBattleRoom_OnWarp
# 7 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 3 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 8 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	.byte 0
# 10 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 11 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 4 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 13 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentBattleRoom_EventScript_EnterRoom
# 14 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 16 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 17 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_OnTransition::
# 18 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 10 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 19 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
# 20 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	end
# 21 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 22 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 23 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx::
# 24 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 15 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 25 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	checkplayergender
# 26 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 16 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 27 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 28 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2
# 29 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1:
# 30 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 19 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 31 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 32 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_5
# 33 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_4:
# 34 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 35 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 36 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2:
# 37 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 17 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 38 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale
# 39 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1
# 40 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 41 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_5:
# 42 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 20 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 43 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale
# 44 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_4
# 45 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 46 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 47 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale::
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 26 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 49 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 50 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 27 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 51 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 52 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 53 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 54 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 55 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 56 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 32 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 57 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 58 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 33 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 59 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 60 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 61 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 62 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 63 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_EnterRoom::
# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 38 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 65 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	showobjectat LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM
# 66 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 39 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 67 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, VerdanturfTown_BattleTentBattleRoom_Movement_PlayerEnter
# 68 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 40 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 69 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 70 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 41 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 71 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 72 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 42 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 73 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 74 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto_if_ne VerdanturfTown_BattleTentBattleRoom_EventScript_EnterRoom_1
# 75 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 76 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 77 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_EnterRoom_1:
# 78 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 43 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 79 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 80 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 81 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 82 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 83 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter::
# 84 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 85 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	tower_setopponent
# 86 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 49 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 87 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
# 88 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 50 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 89 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT, VerdanturfTown_BattleTentBattleRoom_Movement_OpponentEnter
# 90 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 51 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 91 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 52 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 93 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 94 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 53 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 95 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 96 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 54 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 97 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 98 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 55 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 99 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 100 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 56 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 101 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 57 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 103 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_2
# 104 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 105 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 106 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_2:
# 107 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 58 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 108 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent
# 109 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 110 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 111 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 112 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost::
# 113 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 63 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 114 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 115 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 116 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 117 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 65 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 118 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 119 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 66 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 120 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 121 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 122 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 123 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 124 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent::
# 125 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 70 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 126 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 127 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 71 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 128 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 129 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 72 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 130 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 131 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 73 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 132 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 74 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 134 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 3, VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent_3
# 135 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent_1:
# 136 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 77 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 137 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT, VerdanturfTown_BattleTentBattleRoom_Movement_OpponentExit
# 138 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 78 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 139 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 140 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 79 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 141 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
# 142 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 80 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 143 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterDown
# 144 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 81 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 145 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 146 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 82 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 147 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 148 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 83 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 149 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons, MSGBOX_DEFAULT
# 150 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 84 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 151 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 152 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 85 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 153 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 154 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 86 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 155 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 156 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 87 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 157 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 158 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 88 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 159 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitfanfare
# 160 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 89 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 161 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 162 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 163 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 164 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent_3:
# 165 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 75 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 166 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon
# 167 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent_1
# 168 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 169 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 170 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge::
# 171 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 93 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 172 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 173 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 94 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 174 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 175 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_2
# 176 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1:
# 177 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 97 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 178 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 179 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5
# 180 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4:
# 181 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 100 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 182 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 183 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 101 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 184 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 185 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 102 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 186 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 0, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8
# 187 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 104 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 188 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9
# 189 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 106 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 190 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 2, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10
# 191 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 192 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 193 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_2:
# 194 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 95 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 195 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent
# 196 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1
# 197 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 198 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5:
# 199 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 98 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 200 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent
# 201 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4
# 202 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 203 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8:
# 204 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 103 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 205 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_ContinueChallenge
# 206 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 207 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 208 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9:
# 209 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 105 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 210 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge
# 211 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 212 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 213 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10:
# 214 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 107 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 215 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge
# 216 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 217 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 218 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 219 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge::
# 220 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 112 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 221 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 222 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 113 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 223 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 114 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 225 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case NO, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_2
# 226 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 116 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 227 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case YES, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3
# 228 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 118 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 229 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4
# 230 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 231 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 232 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_2:
# 233 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 115 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 234 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 235 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 236 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 237 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3:
# 238 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 117 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 239 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_PauseChallenge
# 240 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 241 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 242 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4:
# 243 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 119 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 244 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 245 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 246 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 247 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 248 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge::
# 249 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 124 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 250 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
# 251 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 125 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 252 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 253 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 126 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 254 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 255 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 127 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 256 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 257 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 128 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 258 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_2
# 259 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 130 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 260 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 0, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3
# 261 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 132 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 262 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4
# 263 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 264 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 265 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_2:
# 266 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 129 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 267 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 268 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 269 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 270 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3:
# 271 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 131 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 272 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
# 273 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 274 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 275 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4:
# 276 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 133 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 277 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 278 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 279 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 280 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 281 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_ContinueChallenge::
# 282 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 138 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 283 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 284 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 139 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 285 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 286 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 140 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 287 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 288 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 141 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 289 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 290 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 142 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 291 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
# 292 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 293 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 294 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 295 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
# 296 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 146 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 297 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 298 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 147 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 299 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 300 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 148 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 301 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 302 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 149 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 303 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 304 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 305 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 306 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 307 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_PauseChallenge::
# 308 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 153 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 309 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
# 310 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 154 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 311 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 312 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 155 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 313 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	verdanturftent_save CHALLENGE_STATUS_PAUSED
# 314 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 156 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 315 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 316 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 157 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 317 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 318 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 158 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 319 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 320 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 159 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 321 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_reset
# 322 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	end
# 323 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 324 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 325 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 163 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 326 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 327 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 164 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 328 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_OnWarp:
# 329 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 165 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 330 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, VerdanturfTown_BattleTentBattleRoom_EventScript_SetUpObjects
# 331 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 166 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 332 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	.2byte 0
# 333 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 334 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_SetUpObjects::
# 335 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 171 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 336 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM
# 337 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 172 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 338 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
# 339 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 173 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 340 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 341 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 174 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 342 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentBattleRoom_Movement_SetInvisible
# 343 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 175 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 344 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
# 345 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	end
# 346 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 347 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 348 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent::
# 349 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 180 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 350 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
# 351 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 181 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 352 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 353 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 354 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 355 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 356 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent::
# 357 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 186 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 358 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
# 359 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 187 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 360 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 361 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	return
# 362 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 363 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 364 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 191 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 365 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_Movement_SetInvisible:
# 366 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 192 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 367 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	set_invisible
# 368 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 193 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 369 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 370 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 371 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 196 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 372 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_Movement_PlayerEnter:
# 373 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 197 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 374 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	set_visible
# 375 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 198 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 376 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 377 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 199 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 378 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 379 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 200 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 380 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 381 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 201 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 382 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	face_right
# 383 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 202 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 384 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 385 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 386 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 205 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 387 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_Movement_OpponentEnter:
# 388 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 206 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 389 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 390 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 207 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 391 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 392 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 208 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 393 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 394 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 209 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 395 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 396 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 210 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 397 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	face_left
# 398 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 211 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 399 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 400 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 401 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 214 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 402 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_Movement_OpponentExit:
# 403 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 215 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 404 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 405 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 216 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 406 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 407 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 217 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 408 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 409 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 218 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 410 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 411 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 219 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
# 412 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	step_end
