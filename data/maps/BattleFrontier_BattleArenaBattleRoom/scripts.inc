# 1 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleArenaBattleRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaBattleRoom_OnWarp
# 7 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleArenaBattleRoom_OnResume
# 9 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom
# 16 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.2byte 0
# 17 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 18 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 19 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnResume::
# 20 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 12 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special OffsetCameraForBattle
# 22 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 25 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnTransition::
# 26 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 18 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_settrainers
# 28 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx
# 30 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx::
# 34 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	checkplayergender
# 36 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 38 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx_2
# 40 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 41 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 42 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 43 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx_1::
# 44 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 46 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx_5
# 48 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 49 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 50 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 51 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx_4::
# 52 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 53 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 54 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 55 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx_2::
# 56 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 44 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxMale
# 58 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx_1
# 60 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 61 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 62 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 63 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx_5::
# 64 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxFemale
# 66 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 51 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfx_4
# 68 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 69 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 70 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 71 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxMale::
# 72 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 74 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 75 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 76 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 77 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetPlayerGfxFemale::
# 78 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 80 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 81 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 82 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 83 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom::
# 84 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	lockall
# 86 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	showobjectat LOCALID_ARENA_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM
# 88 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerEnter
# 90 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 94 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 96 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom_2
# 98 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 99 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 100 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 101 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom_1::
# 102 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown
# 104 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft
# 106 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 108 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 110 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 112 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 113 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 114 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 115 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom_2::
# 116 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers
# 118 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_EnterRoom_1
# 120 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 121 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 122 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 123 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers::
# 124 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	tower_setopponent
# 126 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addobject LOCALID_ARENA_BATTLE_OPPONENT
# 128 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentEnter
# 130 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 132 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 134 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 136 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 138 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 140 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward, MSGBOX_DEFAULT
# 142 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 144 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward
# 146 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 148 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 150 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 152 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 154 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 156 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_gettrainername
# 158 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward, MSGBOX_DEFAULT
# 160 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 162 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 164 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 166 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 168 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 170 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 172 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 174 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 176 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 177 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 178 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward
# 180 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 182 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 184 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	palace_getopponentintro
# 186 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 190 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 192 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 193 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 194 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 195 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers_2::
# 196 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 197 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent
# 198 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 199 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 200 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 201 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner::
# 202 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 204 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_1, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 206 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_2, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 208 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_3, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 210 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_4, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 212 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 214 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 197 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 215 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 216 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 218 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_gettrainername
# 220 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 221 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 222 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 223 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 224 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 225 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_WarpToLobbyLost::
# 226 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 227 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 228 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 229 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY, 7, 8
# 230 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 232 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 233 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 234 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 235 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent::
# 236 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 238 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 221 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 239 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 240 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 242 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 244 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 245 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 246 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 247 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent_1::
# 248 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 233 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerWalkBackToLine
# 250 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 235 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 251 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentExit
# 252 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 254 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 239 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	removeobject LOCALID_ARENA_BATTLE_OPPONENT
# 256 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown
# 258 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft
# 260 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 262 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 264 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special LoadPlayerParty
# 266 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 251 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special SavePlayerParty
# 268 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 270 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 272 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 273 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 274 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 276 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 277 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 278 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 279 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent_3::
# 280 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 282 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedOpponent_1
# 284 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 285 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 286 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 287 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent::
# 288 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 290 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 273 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 292 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 294 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_2
# 296 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 297 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 298 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 299 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_1::
# 300 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 302 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 304 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 305 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_5
# 306 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 307 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 308 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_4::
# 310 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 311 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 312 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_8
# 314 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 315 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 316 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_7::
# 318 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 3
# 320 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_11
# 322 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 323 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 324 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 325 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_10::
# 326 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 4
# 328 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 329 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_14
# 330 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 331 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 333 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_13::
# 334 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 335 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 5
# 336 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_17
# 338 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 339 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 340 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 341 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_16::
# 342 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 343 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 6
# 344 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 345 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_20
# 346 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 347 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 348 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 349 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_19::
# 350 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 351 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 352 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 353 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 354 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_23
# 356 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 357 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 358 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_22::
# 360 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 362 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 363 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_2::
# 366 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 367 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext
# 368 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 345 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 369 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_1
# 370 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 371 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 372 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 373 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_5::
# 374 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 375 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor2ndOpponent
# 376 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 351 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 377 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_4
# 378 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 379 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 380 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 381 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_8::
# 382 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor3rdOpponent
# 384 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 385 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_7
# 386 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 387 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 389 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_11::
# 390 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 391 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor4thOpponent
# 392 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 363 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_10
# 394 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 395 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 396 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 397 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_14::
# 398 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 368 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 399 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor5thOpponent
# 400 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 369 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_13
# 402 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 403 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 404 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_17::
# 406 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 374 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor6thOpponent
# 408 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 375 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_16
# 410 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 411 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 412 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 413 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_20::
# 414 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 380 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor7thOpponent
# 416 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_19
# 418 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 419 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 420 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 421 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_23::
# 422 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 424 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 387 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_22
# 426 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 427 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 428 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 429 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_26::
# 430 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 392 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge
# 432 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 433 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 434 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 435 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_27::
# 436 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 437 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle
# 438 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 439 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 440 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 441 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_28::
# 442 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 404 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 443 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 444 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 445 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_29::
# 448 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 410 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 450 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 451 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 452 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent_30::
# 454 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 416 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 456 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 457 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 458 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 459 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 460 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 422 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 462 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 463 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 464 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 465 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord_2::
# 466 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 437 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 467 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge
# 468 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 469 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 470 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord_3::
# 472 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 443 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 474 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 475 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 476 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord_4::
# 478 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 479 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 480 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 481 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 482 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 483 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponentNoRecord_5::
# 484 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 485 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 486 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 487 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 488 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 489 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle::
# 490 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 491 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle
# 492 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 463 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 493 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 494 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 465 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 496 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 497 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 499 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle_2::
# 500 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 478 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 502 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 503 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 504 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 505 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle_3::
# 506 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_RecordBattle
# 508 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 509 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 511 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle_4::
# 512 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 490 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 514 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 515 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 516 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_RecordBattle::
# 518 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 496 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 519 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 520 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 498 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 521 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 522 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 523 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 524 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 525 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge::
# 526 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 527 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 528 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 529 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 530 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 531 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge_2::
# 532 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 517 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 533 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 534 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 535 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 536 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 537 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge_3::
# 538 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 523 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 539 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_PauseChallenge
# 540 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 541 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 542 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 543 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge_4::
# 544 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 545 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 546 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 547 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 548 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 549 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge::
# 550 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 535 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 551 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
# 552 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 537 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 553 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 554 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 539 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 555 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 556 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 557 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 558 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 559 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge_2::
# 560 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 561 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 562 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 563 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 564 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 565 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge_3::
# 566 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 567 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_WarpToLobbyLost
# 568 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 569 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 570 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 571 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge_4::
# 572 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 573 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForOpponent
# 574 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 575 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 576 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 577 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ContinueChallenge::
# 578 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 579 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 580 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 581 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 582 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 583 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 584 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 585 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 586 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 587 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AnnounceTrainers
# 588 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 589 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 590 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 591 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 592 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 593 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon::
# 594 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 595 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay 60
# 596 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 597 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 598 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 599 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY, 7, 8
# 600 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 601 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 602 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 603 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 604 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 605 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor2ndOpponent::
# 606 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 607 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
# 608 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 609 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 610 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 611 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 612 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 613 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor3rdOpponent::
# 614 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 606 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
# 616 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 617 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 618 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 619 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 620 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 621 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor4thOpponent::
# 622 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 614 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 623 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent
# 624 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 616 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 625 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 626 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 627 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 628 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 629 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor5thOpponent::
# 630 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 631 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent
# 632 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 624 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 633 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 634 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 635 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 636 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 637 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor6thOpponent::
# 638 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 630 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 639 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent
# 640 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 632 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 641 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 642 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 643 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 644 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 645 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_ReadyFor7thOpponent::
# 646 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 638 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 647 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent
# 648 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 640 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 649 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 650 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 651 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 652 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 653 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_PauseChallenge::
# 654 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 655 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
# 656 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 657 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 658 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 650 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 659 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	arena_save CHALLENGE_STATUS_PAUSED
# 660 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 661 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_SAVE
# 662 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 654 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 663 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 664 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 656 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 665 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 666 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 667 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_reset
# 668 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 669 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 670 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 671 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext::
# 672 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 664 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_TEMP_2, 1
# 674 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 665 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 675 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext_2
# 676 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 677 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 679 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext_1::
# 680 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 670 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon, MSGBOX_DEFAULT
# 682 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 683 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 684 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 685 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 686 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 687 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext_2::
# 688 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 678 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 689 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 690 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 679 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_TycoonUpNext_1
# 692 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 693 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 694 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 695 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon::
# 696 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 684 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon
# 698 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 686 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 699 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 700 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 688 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 701 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 702 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 704 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 705 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_2
# 706 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 707 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 708 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 709 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_1::
# 710 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 696 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 711 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 712 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 713 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 714 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 715 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_2::
# 716 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 713 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 717 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord
# 718 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 719 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_1
# 720 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 721 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 722 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 723 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_5::
# 724 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 719 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 725 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta
# 726 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 727 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 728 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 729 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_6::
# 730 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 725 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 731 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskRecordBattle
# 732 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 733 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 734 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 735 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_7::
# 736 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 731 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 737 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 738 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 739 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 740 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 741 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_8::
# 742 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 737 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 743 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 744 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 745 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 746 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 747 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon_9::
# 748 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 743 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 749 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 750 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 751 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 752 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 753 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord::
# 754 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 749 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 755 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 756 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 757 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 758 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 759 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord_2::
# 760 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 764 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 761 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta
# 762 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 763 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 764 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 765 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord_3::
# 766 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 770 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 767 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskPauseChallenge
# 768 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 769 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 770 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 771 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord_4::
# 772 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 776 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 773 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskRetireChallenge
# 774 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 775 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 776 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 777 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoonNoRecord_5::
# 778 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 782 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 779 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_AskReadyForTycoon
# 780 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 781 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 782 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 783 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta::
# 784 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 788 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 785 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 786 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 790 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 787 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 788 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 792 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 789 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ATTENDANT, BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight
# 790 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 791 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 792 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 796 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 793 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 794 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 798 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 795 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 796 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 800 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 797 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 798 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 802 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 799 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 800 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 804 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 801 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward, MSGBOX_DEFAULT
# 802 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 806 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 803 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 804 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 808 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 805 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_PLAYER, BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForwardLong
# 806 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 810 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 807 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 808 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 812 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 809 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 810 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 814 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 811 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 812 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 816 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 813 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 814 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 818 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 815 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 816 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 820 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 817 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta, MSGBOX_DEFAULT
# 818 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 822 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 819 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 820 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 824 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 821 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	addobject LOCALID_ARENA_BATTLE_OPPONENT
# 822 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 826 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 823 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaEnter
# 824 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 828 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 825 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 826 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 830 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 827 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward
# 828 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 832 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 829 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 830 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 831 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 832 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 833 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_1::
# 834 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 844 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 835 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 836 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 837 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 838 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 847 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 839 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_7
# 840 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 841 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 842 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 843 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_6::
# 844 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 852 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 845 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger, MSGBOX_DEFAULT
# 846 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 854 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 847 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 848 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 849 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 850 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 858 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 851 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer
# 852 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 853 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 854 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 855 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight, MSGBOX_DEFAULT
# 856 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 864 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 857 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 858 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 866 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 859 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter
# 860 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 861 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 862 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 870 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 863 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy, MSGBOX_DEFAULT
# 864 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 865 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 866 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 867 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_3::
# 868 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 876 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 869 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold
# 870 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 877 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 871 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_1
# 872 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 873 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 874 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 875 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_4::
# 876 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 882 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 877 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver
# 878 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 883 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 879 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_1
# 880 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 881 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 882 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 883 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_5::
# 884 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 888 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 885 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold
# 886 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 889 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 887 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_1
# 888 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 889 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 890 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 891 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_7::
# 892 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 894 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 893 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver
# 894 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 895 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 895 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGreta_6
# 896 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 897 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 898 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 899 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver::
# 900 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 900 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 901 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle, MSGBOX_DEFAULT
# 902 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 902 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 903 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle
# 904 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 905 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 906 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 905 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 907 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver_2
# 908 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 909 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 910 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 911 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver_1::
# 912 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 910 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 913 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner
# 914 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 915 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 916 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 917 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver_2::
# 918 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 916 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 919 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver
# 920 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 917 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 921 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaSilver_1
# 922 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 923 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 924 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 925 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver::
# 926 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 922 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 927 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 928 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 924 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 929 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getsymbols
# 930 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 926 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 931 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 932 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 927 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 933 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver_2
# 934 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 935 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 936 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 937 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver_1::
# 938 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 932 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 939 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong
# 940 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 934 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 941 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 942 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 936 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 943 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll, MSGBOX_DEFAULT
# 944 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 938 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 945 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 946 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 947 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol
# 948 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 942 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 949 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 950 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 944 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 951 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 952 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 946 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 953 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_givesymbol
# 954 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 948 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 955 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime, MSGBOX_DEFAULT
# 956 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 950 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 957 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 958 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 959 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 960 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 961 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver_2::
# 962 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 956 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 963 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 964 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 957 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 965 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaSilver_1
# 966 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 967 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 968 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 969 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold::
# 970 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 962 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 971 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 972 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 964 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 973 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 974 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 965 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 975 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold_2
# 976 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 977 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 978 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 979 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold_1::
# 980 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 970 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 981 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain, MSGBOX_DEFAULT
# 982 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 972 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 983 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 984 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 974 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 985 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 986 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 976 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 987 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer
# 988 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 978 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 989 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 990 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 980 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 991 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady, MSGBOX_DEFAULT
# 992 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 982 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 993 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 994 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 984 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 995 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter
# 996 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 986 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 997 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 998 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 988 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 999 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort, MSGBOX_DEFAULT
# 1000 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1001 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1002 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1003 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold_2::
# 1004 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 994 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold
# 1006 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 995 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1007 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_IntroGretaGold_1
# 1008 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1009 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1010 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1011 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold::
# 1012 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1013 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted, MSGBOX_DEFAULT
# 1014 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1002 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1015 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle
# 1016 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1004 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1017 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 1018 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1019 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold_2
# 1020 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1021 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1022 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1023 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold_1::
# 1024 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1010 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DeclareOpponentWinner
# 1026 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1027 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1028 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1029 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold_2::
# 1030 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold
# 1032 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1017 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1033 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_BattleGretaGold_1
# 1034 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1035 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1036 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1037 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold::
# 1038 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1022 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner
# 1040 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1024 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1041 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_getsymbols
# 1042 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1026 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 1044 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1027 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold_2
# 1046 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1047 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1048 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1049 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold_1::
# 1050 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1032 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1051 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_OPPONENT, BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong
# 1052 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1034 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1053 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 1054 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway, MSGBOX_DEFAULT
# 1056 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1038 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 1058 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1040 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1059 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine
# 1060 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1042 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1061 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmessage
# 1062 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1044 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitfanfare
# 1064 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1046 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1065 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_givesymbol
# 1066 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1048 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1067 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose, MSGBOX_DEFAULT
# 1068 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1050 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1069 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 1070 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1071 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1072 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1073 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold_2::
# 1074 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1056 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1075 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_ReturnToLobbyWon
# 1076 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1077 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	goto BattleFrontier_BattleArenaBattleRoom_EventScript_DefeatedGretaGold_1
# 1078 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1079 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1080 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1081 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_StartArenaBattle::
# 1082 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1062 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1083 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 1084 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1064 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1085 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 1086 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1087 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1088 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1089 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle::
# 1090 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1070 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1091 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 1092 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1072 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1093 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 1094 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1074 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 1096 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1076 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1097 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 1098 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1078 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1099 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_ARENA
# 1100 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1080 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1101 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitstate
# 1102 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1082 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1103 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_restorehelditems
# 1104 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1084 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1105 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	special HealPlayerParty
# 1106 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1086 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	frontier_resetsketch
# 1108 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1109 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1110 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1111 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_DeclarePlayerWinner::
# 1112 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1092 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1113 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_ANNOUNCER, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 1114 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1094 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1115 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_1, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 1116 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1096 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1117 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_2, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown
# 1118 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1098 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1119 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_3, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 1120 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1100 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1121 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_ARENA_BATTLE_BLACK_BELT_4, BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp
# 1122 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1102 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1123 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	playse SE_BANG
# 1124 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1125 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitse
# 1126 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1106 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1127 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	waitmovement 0
# 1128 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1108 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1129 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 1130 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1110 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1131 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	closemessage
# 1132 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1112 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1133 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 1134 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1135 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1136 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1137 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerEnter::
# 1138 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1118 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1139 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1140 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1120 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1141 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1142 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1143 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1144 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1145 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForwardLong::
# 1146 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1126 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1147 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1148 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1149 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1150 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1151 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerStepForward::
# 1152 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1133 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1153 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1154 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1135 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1155 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1156 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1157 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1158 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1159 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_PlayerWalkBackToLine::
# 1160 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1141 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1161 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 1162 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1143 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1163 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 1164 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1145 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1165 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 1166 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1147 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1167 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1168 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1169 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1170 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1171 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceLeft::
# 1172 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1153 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1173 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_up
# 1174 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1155 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1175 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1176 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1177 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1178 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1179 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight::
# 1180 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1161 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1181 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 1182 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1163 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1183 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1184 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1185 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1186 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1187 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentEnter::
# 1188 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1168 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1189 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 1190 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1170 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1191 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 1192 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1193 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1194 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1195 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForwardLong::
# 1196 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1176 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1197 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 1198 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1199 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1200 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1201 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentStepForward::
# 1202 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1183 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1203 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_left
# 1204 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1185 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1205 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1206 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1207 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1208 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1209 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaEnter::
# 1210 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1191 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1211 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 1212 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1193 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 1214 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1195 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1215 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 1216 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1197 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1217 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 1218 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1199 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_fast_left
# 1220 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1221 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1222 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1223 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1224 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1225 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_OpponentExit::
# 1226 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1207 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1227 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1228 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1209 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1229 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1230 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1211 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1231 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1232 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1233 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1234 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1215 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1235 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1236 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1217 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1237 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1238 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1239 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_right
# 1240 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1221 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1241 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1242 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1243 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1244 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1245 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceDown::
# 1246 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1226 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1247 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 1248 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1228 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1249 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	jump_in_place_down
# 1250 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1230 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1251 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1252 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1253 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1254 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1255 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_JumpInPlaceUp::
# 1256 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1236 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1257 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 1258 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1238 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1259 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	jump_in_place_up
# 1260 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1240 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1261 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1262 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1263 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1264 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1265 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceDown::
# 1266 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1247 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1267 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 1268 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1249 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1269 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1270 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1271 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1272 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1273 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_WalkInPlaceRight2::
# 1274 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1255 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1275 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 1276 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1257 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1277 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1278 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1279 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1280 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1281 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1262 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1282 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1283 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1263 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1284 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_OnWarp:
# 1285 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1264 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1286 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	# 595 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1287 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1265 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1288 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaBattleRoom_EventScript_SetUpRoomObjects
# 1289 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1266 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1290 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	# 596 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1291 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1267 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1292 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.2byte 0
# 1293 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1294 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_EventScript_SetUpRoomObjects::
# 1295 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1273 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1296 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	hideobjectat LOCALID_ARENA_BATTLE_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM
# 1297 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1275 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1298 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	removeobject LOCALID_ARENA_BATTLE_OPPONENT
# 1299 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1277 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1300 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 1301 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1279 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1302 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible
# 1303 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1281 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1304 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1305 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	end
# 1306 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1307 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1308 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaLookAroundPlayer::
# 1309 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1288 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1310 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_down
# 1311 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1290 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1312 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 1313 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1292 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1314 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 1315 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1294 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1316 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 1317 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1296 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1318 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 1319 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1298 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1320 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	delay_16
# 1321 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1300 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1322 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_up
# 1323 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1302 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1324 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_up
# 1325 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1304 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1326 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 1327 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1306 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1328 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1329 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1330 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1331 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1332 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Movement_GretaWalkBackToCenter::
# 1333 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1312 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1334 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_down
# 1335 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1314 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1336 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 1337 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1316 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1338 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	step_end
# 1339 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	return
# 1340 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1341 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1342 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward::
# 1343 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1319 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1344 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: TRAINER {PLAYER}!\n"
# 1345 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Step forward, please!$"
# 1346 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward::
# 1348 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1324 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1349 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: TRAINER {STR_VAR_1}!\n"
# 1350 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Step forward, please!$"
# 1351 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1352 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin::
# 1353 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1329 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1354 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: Set KO Tourney!\n"
# 1355 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Begin!$"
# 1356 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1357 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer::
# 1358 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1334 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1359 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The winner is {PLAYER}!$"
# 1360 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1361 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent::
# 1362 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1338 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1363 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The winner is {STR_VAR_1}!$"
# 1364 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1365 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored::
# 1366 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1342 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1367 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Your POKéMON will be restored to\n"
# 1368 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "full health.$"
# 1369 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1370 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent::
# 1371 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1347 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1372 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your second opponent!\n"
# 1373 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 1374 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1375 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent::
# 1376 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1352 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1377 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your third opponent!\n"
# 1378 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 1379 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1380 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent::
# 1381 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1357 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1382 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your fourth opponent!\n"
# 1383 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 1384 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1385 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent::
# 1386 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1362 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1387 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your fifth opponent!\n"
# 1388 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 1389 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1390 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent::
# 1391 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1367 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1392 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your sixth opponent!\n"
# 1393 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 1394 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1395 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent::
# 1396 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1372 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1397 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Next up, your seventh opponent!\n"
# 1398 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you ready to move on?$"
# 1399 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1400 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown::
# 1401 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1377 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1402 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to save the game and\n"
# 1403 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "shut down now?$"
# 1404 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1405 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge::
# 1406 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1382 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1407 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to retire from your\n"
# 1408 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Set KO Tourney challenge?$"
# 1409 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1410 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait::
# 1411 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1387 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1412 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I am saving your game data.\n"
# 1413 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Please wait.$"
# 1414 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1415 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle::
# 1416 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1392 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1417 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Would you like to record your last\n"
# 1418 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "battle on your FRONTIER PASS?$"
# 1419 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1420 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon::
# 1421 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1397 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1422 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "My dear challenger!\p"
# 1423 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Your skill level is truly astounding!\p"
# 1424 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "We now would like you to face our\n"
# 1425 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "leader, the ARENA TYCOON!$"
# 1426 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1427 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon::
# 1428 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1404 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1429 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "A battle with the ARENA TYCOON!\n"
# 1430 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you prepared?$"
# 1431 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1432 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta::
# 1433 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1409 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1434 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "REFEREE: The ARENA TYCOON!\n"
# 1435 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Make way for GRETA!$"
# 1436 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1437 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger::
# 1438 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1414 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1439 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Hey!\n"
# 1440 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Howdy!\p"
# 1441 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "…Wait, are you the challenger?$"
# 1442 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1443 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight::
# 1444 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1420 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1445 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Is that right? Hmm…\n"
# 1446 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmhm…$"
# 1447 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1448 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy::
# 1449 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1425 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1450 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I don't know how to say it, but…\n"
# 1451 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "To put it bluntly, you look pretty weak.\l"
# 1452 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Are you sure you're up for me?\p"
# 1453 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmm…\p"
# 1454 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Well, all right!\n"
# 1455 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "We'll take things easy to start with!$"
# 1456 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1457 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle::
# 1458 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1434 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1459 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Okay! Let's see you ignite my passion\n"
# 1460 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "for battle!$"
# 1461 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1462 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll::
# 1463 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1439 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1464 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Ow, wait a second!\n"
# 1465 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "You are tough after all!\p"
# 1466 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I like you!\n"
# 1467 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS.$"
# 1468 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1469 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol::
# 1470 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1446 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1471 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "The Guts Symbol was embossed on\n"
# 1472 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 1473 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1474 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime::
# 1475 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1451 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1476 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Hmm…\p"
# 1477 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "It's going to be fun the next time!\n"
# 1478 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I'm looking forward to it!$"
# 1479 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1480 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain::
# 1481 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1457 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1482 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Hey! Howdy!\n"
# 1483 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "You finally won your way up to me!\p"
# 1484 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I was getting worried waiting for you!\n"
# 1485 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I was really looking forward to seeing\l"
# 1486 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "you again!$"
# 1487 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1488 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady::
# 1489 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1465 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1490 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "… … …\n"
# 1491 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "So, are you ready?$"
# 1492 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1493 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort::
# 1494 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1470 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1495 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "I won't allow a halfhearted effort!\n"
# 1496 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Be ready for a thrashing!$"
# 1497 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1498 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted::
# 1499 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1475 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1500 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Come on, REFEREE!\n"
# 1501 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's get this started!$"
# 1502 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1503 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway::
# 1504 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1480 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1505 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "GRETA: Gaaah! Blown away!\n"
# 1506 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Let's see your FRONTIER PASS!$"
# 1507 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1508 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine::
# 1509 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1485 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1510 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "The Guts Symbol took on\n"
# 1511 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 1512 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"

# 1513 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose::
# 1514 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1490 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
# 1515 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Arrrgh!\n"
# 1516 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "This is so infuriating!\p"
# 1517 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "If we ever battle again, I won't lose!\n"
# 1518 "data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.pory"
	.string "Don't you forget it! Bye-bye!$"
