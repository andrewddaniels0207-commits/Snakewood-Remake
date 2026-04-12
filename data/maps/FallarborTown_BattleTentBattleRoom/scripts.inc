# 1 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 2 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_MapScripts::
# 3 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 2 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 4 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_BattleTentBattleRoom_OnTransition
# 5 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 6 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 6 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FallarborTown_BattleTentBattleRoom_OnWarp
# 7 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 3 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 8 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	.byte 0
# 10 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 11 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 4 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 13 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom
# 14 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 16 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 17 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_OnTransition::
# 18 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 10 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 19 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	end
# 21 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 22 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 23 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx::
# 24 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 15 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 25 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	checkplayergender
# 26 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 16 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 27 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 28 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2
# 29 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1:
# 30 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 19 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 31 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 32 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_5
# 33 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_4:
# 34 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 35 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 36 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2:
# 37 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 17 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 38 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale
# 39 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1
# 40 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 41 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_5:
# 42 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 43 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale
# 44 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_4
# 45 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 46 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 47 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale::
# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 26 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 49 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 50 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 27 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 51 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 52 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 53 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 54 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 55 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 56 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 32 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 57 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 58 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 33 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 59 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 60 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 61 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 62 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 63 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom::
# 64 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 38 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 65 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	lockall
# 66 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 39 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 67 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	showobjectat LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 68 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 40 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 69 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerEnter
# 70 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 41 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 71 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 72 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 42 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 73 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 74 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 43 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 75 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 76 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_ne FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom_1
# 77 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 78 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 79 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_EnterRoom_1:
# 80 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 44 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 81 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_ResumeChallenge
# 82 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 83 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 84 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 85 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter::
# 86 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 49 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 87 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	tower_setopponent
# 88 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 50 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 89 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 90 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 51 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT, FallarborTown_BattleTentBattleRoom_Movement_OpponentEnter
# 92 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 52 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 93 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 53 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 95 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 96 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 54 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 97 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 98 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 55 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 99 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 100 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 56 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 101 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 102 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 57 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 103 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 104 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 58 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 105 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 106 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 59 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 107 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 108 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 60 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 109 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 110 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 61 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 111 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 112 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 62 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 113 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 63 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 115 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_3
# 116 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_1:
# 117 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 66 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 118 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 119 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 67 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 121 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 68 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 122 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 123 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 69 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 124 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 125 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 70 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 126 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fallarbortent_getopponentname
# 127 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 71 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 128 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 129 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 130 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 131 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_3:
# 132 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 64 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 133 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_DefeatedOpponent
# 134 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_1
# 135 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 136 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 137 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost::
# 138 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 75 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 139 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 140 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 76 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 141 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 142 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 77 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 143 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 144 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 78 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 145 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 146 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 147 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 148 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 149 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_DefeatedOpponent::
# 150 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 82 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 151 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantJump
# 152 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 83 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 153 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_BANG
# 154 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 84 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 155 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 156 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 85 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 157 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 158 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 86 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 159 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 160 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 87 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 161 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 162 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 163 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 164 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 165 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum::
# 166 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 167 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 168 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 92 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 169 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 170 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 93 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 171 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 172 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 94 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 173 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 174 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 95 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 175 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 3, FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_3
# 176 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_1:
# 177 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 98 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 178 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT, FallarborTown_BattleTentBattleRoom_Movement_OpponentExit
# 179 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 99 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 180 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 181 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 100 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 182 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 183 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 101 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 184 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer
# 185 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 102 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 186 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 187 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 103 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 188 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant
# 189 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 104 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 190 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 191 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 105 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 192 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 193 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 106 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 194 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 195 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 107 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 196 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 197 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 108 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 198 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 199 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 109 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 200 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 201 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 110 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 202 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitfanfare
# 203 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 111 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 204 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 205 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 206 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 207 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_3:
# 208 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 96 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 209 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon
# 210 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_1
# 211 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 212 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 213 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge::
# 214 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 115 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 215 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 216 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 116 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 217 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 218 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_2
# 219 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1:
# 220 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 119 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 221 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 222 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5
# 223 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4:
# 224 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 122 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 225 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 226 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 123 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 227 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 228 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 124 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 229 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8
# 230 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 126 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 231 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9
# 232 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 128 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 233 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 2, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10
# 234 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 235 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 236 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_2:
# 237 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 117 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 238 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent
# 239 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1
# 240 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 241 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5:
# 242 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 243 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent
# 244 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4
# 245 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 246 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8:
# 247 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 125 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 248 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_ContinueChallenge
# 249 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 250 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 251 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9:
# 252 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 127 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 253 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge
# 254 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 255 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 256 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10:
# 257 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 129 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 258 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge
# 259 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 260 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 261 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 262 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge::
# 263 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 134 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 264 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 265 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 135 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 266 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 267 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 136 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 268 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case NO, FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_2
# 269 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 138 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 270 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case YES, FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3
# 271 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 140 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 272 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4
# 273 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 274 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 275 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_2:
# 276 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 137 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 277 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 278 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 279 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 280 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3:
# 281 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 139 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 282 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_PauseChallenge
# 283 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 284 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 285 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4:
# 286 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 141 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 287 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 288 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 289 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 290 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 291 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge::
# 292 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 146 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 293 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
# 294 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 147 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 295 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 296 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 148 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 297 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 298 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 149 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 299 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 150 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 301 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_2
# 302 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 152 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 303 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3
# 304 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 154 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 305 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4
# 306 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 307 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 308 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_2:
# 309 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 151 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 310 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 311 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 312 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 313 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3:
# 314 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 153 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 315 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
# 316 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 317 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 318 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4:
# 319 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 155 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 320 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 321 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 322 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 323 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 324 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_ContinueChallenge::
# 325 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 160 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 326 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 327 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 161 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 328 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantReturnToPos
# 329 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 162 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 330 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 331 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 163 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 332 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceBattle
# 333 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 164 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 334 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 335 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 165 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 336 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
# 337 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 166 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 338 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 339 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 340 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 341 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 342 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
# 343 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 170 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 344 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	delay 60
# 345 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 171 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 346 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 347 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 172 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 348 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 349 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 173 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 350 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 351 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 174 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 352 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
# 353 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 175 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 354 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	arena_get ARENA_DATA_WIN_STREAK
# 355 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 176 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 356 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
# 357 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon_2
# 358 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon_1:
# 359 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 179 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 360 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 361 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 180 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 362 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, VAR_RESULT
# 363 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 364 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 365 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon_2:
# 366 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 177 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 367 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum
# 368 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon_1
# 369 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 370 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 371 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent::
# 372 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 184 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 373 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
# 374 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 185 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 375 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 376 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 377 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 378 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 379 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent::
# 380 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 190 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 381 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
# 382 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 191 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 383 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 384 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 385 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 386 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 387 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_PauseChallenge::
# 388 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 196 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 389 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
# 390 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 197 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 391 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 392 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 198 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 393 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fallarbortent_save CHALLENGE_STATUS_PAUSED
# 394 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 199 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 395 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 396 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 200 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 397 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 398 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 201 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 399 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 400 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 202 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 401 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_reset
# 402 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	end
# 403 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 404 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 405 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_ResumeChallenge::
# 406 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 207 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 407 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer
# 408 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 208 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 409 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 410 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 209 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 411 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant
# 412 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 210 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 413 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 414 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 211 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 415 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
# 416 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	end
# 417 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 418 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 419 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 215 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 420 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerEnter:
# 421 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 216 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 422 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 423 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 217 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 424 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 425 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 218 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 426 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 427 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 219 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 428 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 429 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 220 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 430 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 431 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 432 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 223 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 433 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceBattle:
# 434 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 224 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 435 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 436 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 225 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 437 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 438 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 439 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 228 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 440 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_PlayerFaceAttendant:
# 441 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 229 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 442 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 443 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 230 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 444 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 445 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 446 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 233 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 447 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentEnter:
# 448 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 234 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 449 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 450 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 235 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 451 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 452 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 236 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 453 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 454 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 237 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 455 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 456 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 238 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 457 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 458 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 239 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 459 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 460 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 461 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 242 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 462 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentStepForward:
# 463 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 243 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 464 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_left
# 465 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 244 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 466 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 467 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 468 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 247 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 469 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentExit:
# 470 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 248 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 471 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 472 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 249 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 473 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 474 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 250 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 475 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 476 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 251 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 477 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 478 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 252 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 479 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 480 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 481 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_AttendantJump::
# 482 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 256 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 483 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 484 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 257 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 485 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	jump_in_place_down
# 486 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 258 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 487 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 488 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	return
# 489 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 490 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 491 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 261 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 492 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_AttendantApproachPlayer:
# 493 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 262 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 494 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 495 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 263 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 496 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 497 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 264 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 498 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 499 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 265 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 500 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 501 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 266 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 502 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 503 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 504 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 269 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 505 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_AttendantReturnToPos:
# 506 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 270 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 507 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 508 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 271 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 509 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 510 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 272 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 511 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 512 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 273 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 513 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 514 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 274 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 515 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_end
# 516 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 517 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 277 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 518 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 519 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 278 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 520 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_OnWarp:
# 521 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 279 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 522 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FallarborTown_BattleTentBattleRoom_EventScript_SetUpObjects
# 523 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 280 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 524 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	.2byte 0
# 525 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"

# 526 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_SetUpObjects::
# 527 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 285 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 528 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 529 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 286 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 530 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 531 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 287 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 532 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 533 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 288 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
# 534 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 535 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	end
