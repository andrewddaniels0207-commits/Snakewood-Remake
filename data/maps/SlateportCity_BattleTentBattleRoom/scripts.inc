# 1 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 2 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_MapScripts::
# 3 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 2 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 4 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_BattleTentBattleRoom_OnTransition
# 5 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 3 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 6 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentBattleRoom_OnWarp
# 7 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 4 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 8 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	.byte 0
# 10 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 11 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 5 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 13 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom
# 14 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	.2byte 0
# 15 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 16 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 17 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_OnTransition::
# 18 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 10 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 19 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	call SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx
# 20 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	end
# 21 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 22 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 23 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx::
# 24 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 15 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 25 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	checkplayergender
# 26 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 16 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 27 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 28 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto_if_eq SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx_2
# 29 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx_1:
# 30 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 19 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 31 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 32 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto_if_eq SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx_5
# 33 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx_4:
# 34 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 35 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx_2:
# 37 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 17 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 38 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxMale
# 39 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx_1
# 40 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 41 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx_5:
# 42 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 20 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 43 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale
# 44 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfx_4
# 45 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 46 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 47 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxMale::
# 48 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 26 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 49 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 50 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 51 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 52 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 53 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 54 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 31 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 55 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 56 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 57 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 58 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 59 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 35 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 60 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 61 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 62 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_OnWarp:
# 63 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 37 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 64 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentBattleRoom_EventScript_SetUpObjects
# 65 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 38 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 66 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	.2byte 0
# 67 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 68 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_SetUpObjects::
# 69 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 43 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 70 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 71 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 44 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 72 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 73 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 45 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 74 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM
# 75 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	end
# 76 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 77 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 78 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom::
# 79 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 50 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 80 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_BATTLE_PLAYER, SlateportCity_BattleTentBattleRoom_Movement_PlayerEnter
# 81 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 51 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 82 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 83 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 52 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 84 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	factory_setopponentgfx
# 85 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 53 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 86 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, 5, 1
# 87 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 54 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 88 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT
# 89 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 55 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 90 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	delay 1
# 91 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 56 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 92 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT
# 93 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 57 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 94 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, SlateportCity_BattleTentBattleRoom_Movement_OpponentEnter
# 95 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 58 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 96 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 97 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 59 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 98 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 99 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 60 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 100 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	lockall
# 101 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 61 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 102 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 103 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 62 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 104 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 105 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 63 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 106 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	closemessage
# 107 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 64 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 108 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 109 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 65 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 110 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_FACTORY
# 111 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 66 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 112 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 113 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 67 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 114 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 68 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 116 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	case 1, SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_2
# 117 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 118 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 119 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_2:
# 120 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 69 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 121 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent
# 122 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 123 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 124 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 125 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTent_EventScript_WarpToLobbyLost::
# 126 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 74 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 127 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 128 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 75 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 129 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 130 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 76 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 131 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 6, 6
# 132 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 77 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 133 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 134 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 135 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 136 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 137 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent::
# 138 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 81 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 139 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 140 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 82 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 141 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 142 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 83 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 143 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 144 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 84 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 145 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 85 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 147 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	case 3, SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent_3
# 148 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent_1:
# 149 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 88 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 150 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 151 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 89 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 152 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 2, 3
# 153 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 90 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 154 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 155 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 156 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 157 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent_3:
# 158 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 86 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 159 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTentBattleRoom_EventScript_WarpToLobbyWon
# 160 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent_1
# 161 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 162 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 163 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
# 164 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 94 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 165 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 166 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 95 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 167 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 168 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 96 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 169 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 6, 6
# 170 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 97 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 171 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 172 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	return
# 173 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 174 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 175 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 100 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 176 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_Movement_PlayerEnter:
# 177 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 101 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 178 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 179 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 102 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 180 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 181 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 103 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 182 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 183 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 104 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 184 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 185 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 105 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 186 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	step_end
# 187 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"

# 188 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 108 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 189 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_Movement_OpponentEnter:
# 190 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 109 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 191 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 192 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 110 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 193 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 194 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 111 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 195 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 196 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 112 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 197 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 198 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 113 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 199 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 200 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 114 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
# 201 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	step_end
