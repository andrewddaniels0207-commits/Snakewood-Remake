# 1 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleDomeBattleRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeBattleRoom_OnWarp
# 7 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeBattleRoom_OnResume
# 9 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom
# 16 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.2byte 0
# 17 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 18 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 19 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnTransition::
# 20 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 12 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 22 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 14 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_setopponentgfx
# 24 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 26 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 18 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 28 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_ROUND1
# 30 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_OnTransition_2
# 32 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 33 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 34 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 35 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnTransition_1::
# 36 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 38 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 40 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 41 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnTransition_2::
# 42 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos
# 44 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_OnTransition_1
# 46 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 47 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 49 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx::
# 50 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 51 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	checkplayergender
# 52 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 54 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_2
# 56 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 57 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 58 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 59 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_1::
# 60 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 62 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_5
# 64 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 65 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 66 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 67 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_4::
# 68 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 69 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 70 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 71 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_2::
# 72 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxMale
# 74 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_1
# 76 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 77 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 78 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 79 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_5::
# 80 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxFemale
# 82 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_4
# 84 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 85 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 86 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 87 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxMale::
# 88 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 90 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 91 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 92 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfxFemale::
# 94 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 96 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 97 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 98 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 99 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom::
# 100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lockall
# 102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 104 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_ROUND1
# 106 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_2
# 108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 110 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 111 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_1::
# 112 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 114 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer
# 118 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome, MSGBOX_DEFAULT
# 120 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	showobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 124 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
# 126 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_5
# 128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 129 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 130 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 131 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_4::
# 132 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY
# 134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_7
# 136 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 137 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 138 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 139 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_2::
# 140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat
# 142 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_1
# 144 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 145 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 146 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_5::
# 148 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter
# 150 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_4
# 152 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 154 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 155 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_7::
# 156 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnterForTucker
# 158 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 159 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 161 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnter::
# 162 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter
# 164 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 168 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 169 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerEnterForTucker::
# 170 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnterForTucker
# 172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 173 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 174 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer::
# 176 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 177 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 178 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 180 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
# 184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_2
# 186 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 187 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 189 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_1::
# 190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY
# 192 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_4
# 194 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 195 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 196 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 197 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_2::
# 198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent
# 200 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_1
# 202 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 203 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_4::
# 206 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker
# 208 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 209 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 210 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 211 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent::
# 212 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getopponentname
# 214 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 215 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer, MSGBOX_DEFAULT
# 216 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 218 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward
# 220 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 221 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward
# 222 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 227 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 229 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_initopponentparty
# 232 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 233 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle
# 234 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 235 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, NO_DRAW
# 236 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 237 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 239 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1::
# 240 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, DRAW_TRAINER
# 242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 243 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 245 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_3::
# 246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent
# 248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1
# 250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 251 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 253 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_4::
# 254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
# 256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 257 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1
# 258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 259 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 260 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 261 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_5::
# 262 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
# 264 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1
# 266 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 267 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 268 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 269 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw::
# 270 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait, MSGBOX_DEFAULT
# 272 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 274 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 276 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 277 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 278 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 279 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 280 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter
# 282 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 284 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft
# 286 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 288 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 180
# 290 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit
# 292 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 294 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, DRAW_TUCKER
# 296 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_2
# 298 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 299 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 300 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_1::
# 302 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_compareseeds
# 304 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 307 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_2::
# 308 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
# 310 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_1
# 312 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 313 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 314 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 315 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_5::
# 316 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 317 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent
# 318 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 319 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 320 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 321 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent::
# 322 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 323 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 324 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 325 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 326 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getopponentname
# 328 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 329 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, NO_DRAW
# 330 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 331 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_2
# 332 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 333 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 334 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 335 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_1::
# 336 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 299 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, DRAW_TRAINER
# 338 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 339 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_5
# 340 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 341 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 342 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 343 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_4::
# 344 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 345 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, DRAW_TUCKER
# 346 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_8
# 348 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 349 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 350 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 351 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_7::
# 352 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 353 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 354 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 356 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 358 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 359 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 361 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_2::
# 362 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 363 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon
# 364 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_1
# 366 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 367 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 368 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_5::
# 370 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 371 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWonDraw
# 372 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 373 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_4
# 374 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 375 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 377 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_8::
# 378 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 379 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw
# 380 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_7
# 382 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 383 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 385 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney::
# 386 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 339 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 387 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_LOST_MATCH
# 388 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 389 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 391 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost::
# 392 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 345 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 394 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
# 396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 397 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 399 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWon::
# 400 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 353 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_gettrainername STR_VAR_2
# 402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
# 404 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 405 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 406 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 407 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_OpponentWonDraw::
# 410 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 363 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_gettrainername STR_VAR_1
# 412 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
# 414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 367 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 416 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 417 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 418 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 419 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerWonDraw::
# 420 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 373 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 421 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker
# 422 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 375 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 424 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 426 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 427 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent::
# 428 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_WalkInPlaceDown
# 430 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 432 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 385 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, NO_DRAW
# 434 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 435 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_2
# 436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 439 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_1::
# 440 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 391 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 441 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, DRAW_TRAINER
# 442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 392 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_5
# 444 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 445 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_4::
# 448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 397 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 450 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 399 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 451 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 452 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 453 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 454 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getroundtext
# 456 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 405 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 457 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 458 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 459 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 460 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 462 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 463 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 464 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 465 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 467 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_7::
# 468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 469 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 470 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 421 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 5, 3
# 472 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 474 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 475 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 476 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_2::
# 478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 479 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon
# 480 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 430 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_1
# 482 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 484 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_5::
# 486 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 435 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 487 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWonDraw
# 488 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_4
# 490 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 491 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_9::
# 494 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 441 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 497 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_7
# 498 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 499 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 500 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney::
# 502 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 447 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 503 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience
# 504 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 505 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 451 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 508 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 509 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 511 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_1::
# 512 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 459 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ, MSGBOX_DEFAULT
# 514 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin
# 516 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 517 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 519 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_3::
# 520 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 467 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 521 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney
# 522 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 523 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_1
# 524 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 525 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 527 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WonLvOpenTourney::
# 528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 529 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp, MSGBOX_DEFAULT
# 530 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 531 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 532 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_CelebrateWin::
# 534 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 479 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 535 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special DoDomeConfetti
# 536 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 537 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 538 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 539 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 540 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 485 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 541 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 542 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 487 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 543 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 545 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
# 546 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 547 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 548 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 549 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWon::
# 550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 551 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner, MSGBOX_DEFAULT
# 552 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 553 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 555 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_PlayerWonDraw::
# 556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 557 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer, MSGBOX_DEFAULT
# 558 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 559 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 561 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer::
# 562 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 563 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_ATTEMPTED_CHALLENGE
# 564 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 509 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 565 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 566 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 567 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_2
# 568 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 569 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 570 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 571 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_1::
# 572 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 573 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_HAS_WON_CHALLENGE
# 574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 517 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 575 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 576 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 518 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 577 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_5
# 578 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 579 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 581 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_4::
# 582 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 523 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 583 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_WIN_STREAK_ACTIVE
# 584 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 525 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 585 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 587 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_8
# 588 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 589 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 590 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 591 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_7::
# 592 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 531 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 593 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion
# 594 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 596 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 597 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_2::
# 598 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 537 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 599 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt
# 600 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 538 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 601 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_1
# 602 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 603 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 604 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 605 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_5::
# 606 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 543 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 607 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon
# 608 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 609 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_4
# 610 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 611 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 612 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 613 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_8::
# 614 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 549 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak
# 616 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 617 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_7
# 618 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 619 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 620 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 621 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt::
# 622 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 555 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 623 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 624 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 625 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 626 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 627 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1::
# 628 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 629 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 630 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 631 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_3::
# 632 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 573 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 633 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound1
# 634 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 635 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1
# 636 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 637 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 638 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 639 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_4::
# 640 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 579 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 641 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound2
# 642 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 643 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1
# 644 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 645 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 646 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_5::
# 648 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 585 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 649 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptSemifinal
# 650 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 651 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1
# 652 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 654 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 655 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_6::
# 656 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 591 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 657 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptFinal
# 658 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 659 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1
# 660 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 661 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 662 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 663 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound1::
# 664 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 597 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 665 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope
# 666 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 599 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 667 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 668 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 669 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 670 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptRound2::
# 672 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 605 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RisingStar
# 674 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 607 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 675 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 676 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 677 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 679 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptSemifinal::
# 680 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 613 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
# 682 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 683 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 684 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 685 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 686 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 687 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttemptFinal::
# 688 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 621 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 689 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
# 690 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 623 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 692 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 693 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 694 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon::
# 696 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 629 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 698 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 699 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 700 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 701 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1::
# 702 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 703 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 705 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_3::
# 706 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 707 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound1
# 708 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 709 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1
# 710 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 711 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 712 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 713 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_4::
# 714 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 715 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound2
# 716 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 654 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1
# 718 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 719 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 720 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 721 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_5::
# 722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 659 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonSemifinal
# 724 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 660 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 725 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1
# 726 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 727 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 728 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 729 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_6::
# 730 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 665 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 731 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonFinal
# 732 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 666 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 733 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1
# 734 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 735 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 736 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 737 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound1::
# 738 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 739 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
# 740 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 741 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 742 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 743 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 744 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 745 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonRound2::
# 746 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 679 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 747 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
# 748 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 749 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 750 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 751 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 752 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 753 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonSemifinal::
# 754 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 687 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 755 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
# 756 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 689 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 757 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 758 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 759 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 760 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 761 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWonFinal::
# 762 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 763 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
# 764 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 765 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 766 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 767 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 768 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 769 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion::
# 770 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 771 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
# 772 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 773 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_2
# 774 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 775 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 776 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 777 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_1::
# 778 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 779 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 780 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 781 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_2::
# 782 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 783 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker
# 784 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 785 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_1
# 786 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 787 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 788 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 789 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_5::
# 790 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 728 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 791 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver
# 792 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 793 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 794 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 795 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_6::
# 796 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 734 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 797 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold
# 798 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 799 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 800 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 801 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_7::
# 802 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 740 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 803 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver
# 804 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 805 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 806 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 807 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_8::
# 808 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 746 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 809 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold
# 810 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 811 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 812 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 813 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker::
# 814 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 815 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 816 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 817 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 818 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 819 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1::
# 820 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 821 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 822 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 823 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_3::
# 824 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 770 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 825 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound1
# 826 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 771 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 827 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1
# 828 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 829 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 830 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 831 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_4::
# 832 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 776 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 833 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound2
# 834 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 777 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 835 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1
# 836 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 837 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 838 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 839 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_5::
# 840 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 782 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 841 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionSemifinal
# 842 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 783 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 843 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1
# 844 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 845 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 846 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 847 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_6::
# 848 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 788 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 849 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionFinal
# 850 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 789 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 851 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1
# 852 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 853 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 854 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 855 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound1::
# 856 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 857 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion
# 858 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 796 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 859 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 860 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 861 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 862 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 863 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionRound2::
# 864 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 802 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 865 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer
# 866 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 804 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 867 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 868 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 869 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 870 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 871 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionSemifinal::
# 872 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 810 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 873 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
# 874 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 812 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 875 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 876 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 877 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 878 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 879 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionFinal::
# 880 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 818 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 881 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
# 882 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 820 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 883 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 884 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 885 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 886 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 887 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerSilver::
# 888 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 826 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 889 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster, MSGBOX_DEFAULT
# 890 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 891 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 892 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 893 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerPreTuckerGold::
# 894 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 832 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 895 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched, MSGBOX_DEFAULT
# 896 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 897 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 898 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 899 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak::
# 900 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 838 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 901 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum
# 902 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 903 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 904 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 905 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1::
# 906 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 907 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 908 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 909 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_3::
# 910 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 911 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound1
# 912 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 857 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 913 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1
# 914 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 915 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 916 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 917 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_4::
# 918 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 919 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound2
# 920 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 863 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 921 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1
# 922 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 923 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 924 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 925 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_5::
# 926 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 927 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakSemifinal
# 928 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 869 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 929 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1
# 930 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 931 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 932 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 933 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_6::
# 934 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 874 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 935 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakFinal
# 936 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 875 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 937 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1
# 938 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 939 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 940 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 941 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound1::
# 942 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 880 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 943 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
# 944 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 882 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 945 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 946 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 947 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 948 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 949 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakRound2::
# 950 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 888 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 951 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
# 952 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 890 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 953 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 954 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 955 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 956 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 957 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakSemifinal::
# 958 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 896 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 959 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
# 960 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 898 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 961 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 962 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 963 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 964 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 965 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreakFinal::
# 966 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 967 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
# 968 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 906 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 969 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 970 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 971 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 972 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 973 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_GetRoundNum::
# 974 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 912 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 975 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 976 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 977 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 978 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 979 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker::
# 980 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 981 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 982 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 983 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_2::
# 984 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 931 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 985 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver
# 986 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 987 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 988 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 989 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_3::
# 990 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 937 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 991 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold
# 992 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 993 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 994 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 995 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_4::
# 996 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 943 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 997 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver
# 998 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 999 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1000 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1001 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_5::
# 1002 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 949 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1003 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold
# 1004 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1005 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1006 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1007 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerSilver::
# 1008 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 955 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1009 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker, MSGBOX_DEFAULT
# 1010 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 957 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1011 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter
# 1012 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1013 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1014 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1015 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTuckerGold::
# 1016 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 963 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1017 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker, MSGBOX_DEFAULT
# 1018 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1019 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1020 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1021 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter::
# 1022 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 969 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1023 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 1024 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 971 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_AUDIENCE_TWIN, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump
# 1026 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 973 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1027 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance
# 1028 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 975 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1029 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance
# 1030 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 977 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1032 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 979 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1033 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1034 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 981 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1035 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1036 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 983 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1038 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 985 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1040 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 987 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1041 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1042 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 989 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1044 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 991 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1046 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 993 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1047 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1048 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 995 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1049 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1050 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 997 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1051 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1052 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 999 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1053 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1054 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1001 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1056 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1003 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1058 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1059 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1060 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1007 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1061 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 1062 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1009 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
# 1064 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1011 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1065 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 1066 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1013 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1067 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1068 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1015 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1069 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1070 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1017 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1071 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1072 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1073 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1074 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1075 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1::
# 1076 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1029 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1077 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 1078 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1079 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 1080 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1032 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1081 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_7
# 1082 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1083 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1084 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1085 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_6::
# 1086 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1087 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro, MSGBOX_DEFAULT
# 1088 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1089 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 1090 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1091 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1092 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1093 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_3::
# 1094 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro
# 1096 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1046 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1097 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1
# 1098 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1099 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1101 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_4::
# 1102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1051 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
# 1104 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1052 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1105 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1
# 1106 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1107 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_5::
# 1110 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1057 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1111 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
# 1112 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1058 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1113 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1
# 1114 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1117 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_7::
# 1118 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1119 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
# 1120 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1064 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_6
# 1122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1123 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1124 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1125 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver::
# 1126 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1069 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy, MSGBOX_DEFAULT
# 1128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1071 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1129 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle
# 1130 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1131 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1132 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1::
# 1134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1083 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1135 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer, MSGBOX_DEFAULT
# 1136 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1085 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1137 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 1138 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1087 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1139 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getsymbols
# 1140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1089 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1141 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
# 1142 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1090 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1143 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_7
# 1144 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1145 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1146 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_6::
# 1148 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1149 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 1150 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1097 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1151 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer
# 1152 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1099 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 1154 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1101 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1155 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass, MSGBOX_DEFAULT
# 1156 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1157 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 1158 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1105 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1159 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
# 1160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1161 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 1162 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1163 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitfanfare
# 1164 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1111 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1165 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_givesymbol
# 1166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1113 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime, MSGBOX_DEFAULT
# 1168 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1169 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 1170 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1171 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1173 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_3::
# 1174 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 1176 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1177 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1
# 1178 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1179 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1180 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1181 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_4::
# 1182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1183 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 1184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1
# 1186 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1187 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1189 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_5::
# 1190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1191 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw
# 1192 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1193 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1
# 1194 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1195 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1196 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1197 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_7::
# 1198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1139 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 1200 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_6
# 1202 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1203 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1204 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro::
# 1206 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1145 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1207 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 1208 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1209 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 1210 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1148 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1211 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_2
# 1212 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1213 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1214 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1215 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_1::
# 1216 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1217 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro, MSGBOX_DEFAULT
# 1218 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1155 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 1220 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1221 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1222 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_2::
# 1224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1161 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
# 1226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1162 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1227 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_1
# 1228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1229 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold::
# 1232 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1233 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess, MSGBOX_DEFAULT
# 1234 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1169 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1235 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle
# 1236 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1237 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1239 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1::
# 1240 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1181 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1241 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer, MSGBOX_DEFAULT
# 1242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1183 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1243 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 1244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1245 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getsymbols
# 1246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1187 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1247 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 1248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1249 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_7
# 1250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1251 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1253 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_6::
# 1254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1193 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1255 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 1256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1195 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1257 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer
# 1258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1197 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1259 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 1260 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1261 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed, MSGBOX_DEFAULT
# 1262 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1263 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 1264 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1203 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
# 1266 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1267 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 1268 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1207 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1269 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitfanfare
# 1270 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1209 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1271 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_givesymbol
# 1272 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1211 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter, MSGBOX_DEFAULT
# 1274 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 1276 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1277 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1278 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1279 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_3::
# 1280 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 1282 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1220 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1
# 1284 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1286 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_4::
# 1288 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker
# 1290 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1291 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1
# 1292 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1294 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_5::
# 1296 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw
# 1298 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1232 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1299 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1
# 1300 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1301 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1302 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_7::
# 1304 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1237 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
# 1306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1307 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_6
# 1308 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1309 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1310 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DoTuckerBattle::
# 1312 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1243 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1313 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker, MSGBOX_DEFAULT
# 1314 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1245 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1315 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 1316 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1247 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1317 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward2
# 1318 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1249 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1319 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward
# 1320 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1251 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1321 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 1322 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1253 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1323 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle
# 1324 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1325 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1326 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1327 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToTucker::
# 1328 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1259 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1329 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker, MSGBOX_DEFAULT
# 1330 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1261 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1331 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 1332 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1263 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1333 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 1334 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1335 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 1336 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1267 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1337 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostTourney
# 1338 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1339 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1340 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1341 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerDraw::
# 1342 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1343 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, DRAW_TUCKER
# 1344 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1345 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw
# 1346 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1348 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1349 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle::
# 1350 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1351 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 1352 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1353 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special HealPlayerParty
# 1354 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1355 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1356 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1357 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_DOME
# 1358 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1359 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 1360 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1291 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1361 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1362 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1363 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_restorehelditems
# 1364 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special HealPlayerParty
# 1366 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1367 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resetsketch
# 1368 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1369 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1370 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1371 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1372 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1373 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1304 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1374 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnWarp:
# 1375 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1376 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	# 614 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1377 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1378 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects
# 1379 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1307 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1380 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1381 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1308 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1382 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.2byte 0
# 1383 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects::
# 1385 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1314 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1386 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	hideobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 1387 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1316 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1388 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience
# 1389 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1318 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 1391 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1320 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1392 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1393 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1322 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1394 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible
# 1395 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1324 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 1397 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1326 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1398 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_FINAL
# 1399 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1327 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1400 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_2
# 1401 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1404 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_1::
# 1405 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1332 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1406 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 1407 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1334 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 1409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1336 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1410 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 1411 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1337 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1412 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_5
# 1413 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1415 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1416 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_4::
# 1417 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1342 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1418 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 1419 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1344 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1420 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_DOME_OPPONENT, 13, 9
# 1421 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1346 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1422 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	removeobject LOCALID_DOME_OPPONENT
# 1423 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1348 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1424 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 1
# 1425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1350 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1426 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	addobject LOCALID_DOME_OPPONENT
# 1427 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1352 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1428 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisibleFacingUp
# 1429 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1430 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1432 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_2::
# 1433 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1358 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1434 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects
# 1435 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1359 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_1
# 1437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1438 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1439 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1440 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_5::
# 1441 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1364 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects
# 1443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1444 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_4
# 1445 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1446 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1447 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EndSetUpObjects::
# 1449 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 1450 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1451 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1452 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnResume::
# 1453 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1374 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1454 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_9, 1
# 1455 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1375 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1456 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_OnResume_2
# 1457 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1458 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1459 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1460 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnResume_1::
# 1461 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 1462 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1463 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1464 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_OnResume_2::
# 1465 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1466 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience
# 1467 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1385 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_OnResume_1
# 1469 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1470 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1471 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1472 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_CallAddAudience::
# 1473 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1474 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience
# 1475 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1476 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1477 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience::
# 1479 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1480 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_ROUND1
# 1481 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1397 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1482 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_2
# 1483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1484 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1485 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1486 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_1::
# 1487 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1488 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_ROUND2
# 1489 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1490 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_5
# 1491 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1492 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1493 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1494 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_4::
# 1495 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_SEMIFINAL
# 1497 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1498 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_8
# 1499 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1500 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1502 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_7::
# 1503 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1504 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
# 1505 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1415 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_11
# 1507 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1508 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1509 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_10::
# 1511 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1512 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1513 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1514 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_2::
# 1515 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1424 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1516 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience
# 1517 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1518 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_1
# 1519 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1520 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1521 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1522 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_5::
# 1523 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1430 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1524 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience
# 1525 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_4
# 1527 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1529 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1530 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_8::
# 1531 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1532 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience
# 1533 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1534 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_7
# 1535 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1536 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1537 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1538 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_11::
# 1539 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1540 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience
# 1541 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1542 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_10
# 1543 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1545 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1546 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound1Audience::
# 1547 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1548 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1549 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience::
# 1551 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1452 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1552 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 1553 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1454 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1554 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 1555 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1456 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 1557 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1458 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1558 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 1559 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1460 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1560 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 1561 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1462 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1562 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 1563 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1464 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1564 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 1565 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1466 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1566 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 1567 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1568 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 1569 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1470 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1570 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 1571 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1472 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1572 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 1573 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1575 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1576 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience::
# 1577 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1578 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 1579 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1480 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 1581 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1482 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1582 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 1583 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1484 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1584 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 1585 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1486 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 1587 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1488 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1588 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 1589 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1490 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1590 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 1591 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1492 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1592 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 1593 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1494 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1594 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 1595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1596 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 1597 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1498 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1598 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 1599 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1500 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1600 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 1601 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1502 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1602 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 1603 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1504 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1604 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 1605 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1606 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 1607 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1508 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1608 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 1609 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1610 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 1611 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1512 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1612 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 1613 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1514 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1614 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 1615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1516 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1616 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 1617 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1518 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1618 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
# 1619 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1620 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1621 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1622 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience::
# 1623 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1524 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1624 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 0, 2, 0
# 1625 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1626 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 1627 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1628 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 2, 15, 0
# 1629 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1530 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1630 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 3, 5, 0
# 1631 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1532 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1632 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 1633 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1534 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1634 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 5, 7, 0
# 1635 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1536 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1636 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 1637 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1538 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1638 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 1639 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1540 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1640 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 8, 10, 0
# 1641 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1542 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1642 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 1643 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1644 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 1645 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1546 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1646 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 1647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1548 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1648 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 12, 14, 0
# 1649 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1650 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 2
# 1651 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1552 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1652 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 14, 12, 2
# 1653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1554 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1654 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 1655 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1656 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 1657 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1558 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1658 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 1659 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1560 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1660 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 18, 6, 1
# 1661 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1562 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1662 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 1663 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1564 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1664 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 1665 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1566 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1666 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 21, 10, 1
# 1667 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1568 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1668 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 1669 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1570 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1670 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 1671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1572 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1672 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 14, 1
# 1673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1674 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 1675 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1576 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1676 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 1677 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1578 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1678 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 3, 2
# 1679 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1680 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 1681 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1582 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1682 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 1683 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1584 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1684 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 1685 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1686 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
# 1687 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1688 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1689 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1690 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisible::
# 1691 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1593 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1692 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_invisible
# 1693 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1694 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 1695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1696 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1697 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1698 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnter::
# 1699 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1600 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1700 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 1701 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1602 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1702 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1703 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1604 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1705 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1606 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1706 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1707 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1608 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1708 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1709 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1610 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1710 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1711 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1712 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1713 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1714 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward::
# 1715 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1617 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1716 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1619 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1718 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 1719 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1720 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1721 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerApproachAudience::
# 1723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1625 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1724 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1725 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1627 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1726 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 1727 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1728 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1729 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1730 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerEnterForTucker::
# 1731 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1633 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1732 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 1733 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1635 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1734 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1735 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1637 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1736 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1737 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1639 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1738 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1739 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1641 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1740 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1741 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1643 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1742 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1743 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1645 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1744 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1745 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1746 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 1747 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1748 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1749 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1750 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_PlayerStepForward2::
# 1751 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1752 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1753 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1655 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1754 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 1755 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1756 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1757 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1758 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_OpponentStepForward::
# 1759 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1661 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1760 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1761 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1663 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1762 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 1763 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1764 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1765 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1766 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_SetInvisibleFacingUp::
# 1767 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1669 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1768 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1769 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1770 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_invisible
# 1771 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1772 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 1773 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1774 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1775 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1776 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance::
# 1777 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1678 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1778 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 1779 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1680 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1780 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1781 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1682 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1782 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1783 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1684 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1784 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 1785 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1686 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1786 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1787 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1688 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1788 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1789 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1690 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1790 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1791 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1692 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1792 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1793 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1694 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1794 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1795 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1696 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1796 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1797 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1698 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1798 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1799 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1700 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1800 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1801 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1702 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1802 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1803 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1804 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1805 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1706 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1806 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1807 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1708 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1808 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1809 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1710 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1810 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1811 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1712 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1812 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1813 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1714 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1814 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_fast_up
# 1815 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1716 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1816 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_fast_up
# 1817 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1718 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1818 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1819 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1720 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1820 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1821 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1822 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1823 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1724 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1824 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1825 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1726 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1826 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1827 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1728 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1828 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1829 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1730 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1830 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1831 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1732 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1832 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1833 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1734 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1834 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1835 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1736 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1836 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1837 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1738 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1838 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1839 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1740 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1840 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1841 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1742 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1842 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1843 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1744 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1844 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 1845 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1746 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1846 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 1847 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1748 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1848 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1849 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1750 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1850 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 1851 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1752 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1852 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 1853 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1754 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1854 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 1855 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1756 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1856 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 1857 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1758 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1858 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1859 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1760 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1860 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 1861 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1762 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1862 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 1863 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1764 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1864 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 1865 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1766 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1866 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1867 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1768 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1868 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1869 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1770 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1870 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1871 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1772 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1872 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1873 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1774 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1874 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1875 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1776 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1876 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1877 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1778 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1878 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1879 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1780 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1880 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1881 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1782 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1882 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1883 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1784 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1884 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1885 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1786 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1886 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1887 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1788 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1888 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1889 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1790 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1890 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 1891 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1792 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1892 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1893 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1794 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1894 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1895 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1796 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1896 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1897 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1798 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1898 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1899 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1800 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1900 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1901 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1802 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1902 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1903 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1804 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1904 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1905 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1806 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1906 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1907 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1808 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1908 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1909 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1810 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1910 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1911 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1812 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1912 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1913 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1814 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1914 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1915 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1816 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1916 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1917 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1818 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1918 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1919 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1820 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1920 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1921 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1822 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1922 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1923 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1824 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1924 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1925 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1826 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1926 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1927 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1828 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1928 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_facing_direction
# 1929 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1830 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1930 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1931 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1832 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1932 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_slow_right
# 1933 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1834 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1934 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1935 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1836 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1936 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_slow_right
# 1937 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1838 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1938 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_facing_direction
# 1939 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1840 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1940 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1941 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1842 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1942 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1943 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1844 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1944 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 1945 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1846 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1946 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 1947 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1848 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1948 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1949 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1850 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1950 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1951 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1852 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1952 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1953 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1854 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1954 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1955 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1856 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1956 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 1957 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1858 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1958 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1959 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1860 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1960 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 1961 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1862 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1962 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 1963 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1864 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1964 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 1965 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1866 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1966 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1967 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1868 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1968 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1969 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1870 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1970 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 1971 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1872 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1972 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1973 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1874 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1974 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 1975 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1876 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1976 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1977 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1878 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1978 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 1979 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1880 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1980 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 1981 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1882 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1982 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 1983 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1884 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1984 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 1985 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1886 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1986 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1987 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1888 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1988 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 1989 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1890 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1990 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 1991 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 1992 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1993 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 1994 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance::
# 1995 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1897 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1996 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1997 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1899 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1998 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 1999 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1901 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2000 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2001 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1903 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2002 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2003 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1905 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2004 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_right
# 2005 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1907 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2006 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2007 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1909 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2008 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2009 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1911 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2010 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2011 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1913 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2012 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2013 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1915 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2014 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2015 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1917 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2016 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2017 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1919 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2018 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2019 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1921 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2020 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2021 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1923 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2022 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2023 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1925 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2024 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2025 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1927 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2026 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2027 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1929 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2028 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2029 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1931 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2030 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2031 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1933 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2032 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2033 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1935 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2034 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2035 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1937 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2036 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2037 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1939 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2038 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2039 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1941 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2040 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2041 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1943 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2042 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2043 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1945 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2044 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2045 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1947 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2046 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2047 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1949 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2048 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2049 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1951 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2050 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2051 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1953 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2052 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2053 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1955 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2054 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2055 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1957 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2056 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2057 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1959 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2058 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2059 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1961 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2060 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2061 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1963 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2062 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2063 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1965 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2064 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2065 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1967 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2066 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2067 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1969 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2068 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2069 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1971 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2070 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2071 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1973 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2072 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2073 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1975 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2074 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2075 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1977 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2076 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2077 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1979 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2078 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2079 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1981 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2080 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2081 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1983 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2082 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2083 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1985 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2084 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2085 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1987 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2086 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2087 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1989 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2088 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 2089 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1991 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2090 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 2091 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2092 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2093 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2094 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_TuckerStepForward::
# 2095 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1997 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2096 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2097 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 1999 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2098 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 2099 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2101 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_TuckerApproachPlayer::
# 2103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2005 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2104 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2105 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2007 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2106 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2107 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2009 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 2109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2110 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2111 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2112 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround::
# 2113 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2014 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2114 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 0, DIR_EAST
# 2115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2016 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 2, DIR_EAST
# 2117 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2018 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2118 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 4, DIR_EAST
# 2119 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2020 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2120 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 6, DIR_EAST
# 2121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2022 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 8, DIR_EAST
# 2123 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2024 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2124 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 10, DIR_WEST
# 2125 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2026 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2126 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 12, DIR_WEST
# 2127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2028 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 14, DIR_WEST
# 2129 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2030 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2130 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 16, DIR_WEST
# 2131 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2032 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2132 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 18, DIR_WEST
# 2133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2034 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 20, DIR_EAST
# 2135 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2036 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2136 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 22, DIR_EAST
# 2137 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2038 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2138 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 24, DIR_EAST
# 2139 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2040 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 26, DIR_EAST
# 2141 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2042 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2142 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 28, DIR_EAST
# 2143 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2044 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2144 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 30, DIR_EAST
# 2145 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2046 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2146 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 2147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2048 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2148 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 2149 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2050 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2150 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 2151 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2052 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2152 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 4, DIR_SOUTH
# 2153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2054 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2154 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 6, DIR_SOUTH
# 2155 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2056 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2156 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 8, DIR_SOUTH
# 2157 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2058 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2158 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 10, DIR_SOUTH
# 2159 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2060 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 12, DIR_SOUTH
# 2161 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2062 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2162 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 14, DIR_SOUTH
# 2163 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2064 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2164 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 16, DIR_SOUTH
# 2165 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2066 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 18, DIR_SOUTH
# 2167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2068 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2168 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 20, DIR_SOUTH
# 2169 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2070 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2170 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 22, DIR_SOUTH
# 2171 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2072 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 24, DIR_SOUTH
# 2173 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2074 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2174 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 26, DIR_SOUTH
# 2175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2076 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2176 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 28, DIR_SOUTH
# 2177 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2078 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2178 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 30, DIR_SOUTH
# 2179 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2080 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2180 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 2181 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2082 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 1, DIR_EAST
# 2183 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2084 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 3, DIR_EAST
# 2185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2086 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2186 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 5, DIR_EAST
# 2187 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2088 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 7, DIR_EAST
# 2189 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2090 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 9, DIR_EAST
# 2191 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2092 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2192 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 11, DIR_WEST
# 2193 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2094 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2194 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 13, DIR_WEST
# 2195 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2096 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2196 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 15, DIR_WEST
# 2197 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2098 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 17, DIR_WEST
# 2199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2100 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2200 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 19, DIR_WEST
# 2201 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2202 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 21, DIR_EAST
# 2203 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2104 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2204 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 23, DIR_EAST
# 2205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2106 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2206 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 25, DIR_EAST
# 2207 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2208 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 27, DIR_WEST
# 2209 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2110 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2210 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 31, DIR_WEST
# 2211 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2112 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2212 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 2213 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2114 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2214 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 2215 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2216 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 3, DIR_SOUTH
# 2217 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2118 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2218 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 5, DIR_SOUTH
# 2219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2120 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2220 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 7, DIR_SOUTH
# 2221 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2122 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2222 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 9, DIR_SOUTH
# 2223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2124 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 11, DIR_SOUTH
# 2225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2126 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 13, DIR_SOUTH
# 2227 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 15, DIR_SOUTH
# 2229 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2130 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 17, DIR_SOUTH
# 2231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2132 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2232 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 19, DIR_SOUTH
# 2233 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2234 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 21, DIR_SOUTH
# 2235 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2136 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2236 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 23, DIR_SOUTH
# 2237 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2138 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 25, DIR_SOUTH
# 2239 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2240 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 27, DIR_SOUTH
# 2241 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2142 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 31, DIR_SOUTH
# 2243 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2144 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 2245 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2247 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby::
# 2249 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2150 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 2251 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2152 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
# 2253 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_2
# 2255 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2257 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_1::
# 2259 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2158 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2260 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 5, 11
# 2261 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2160 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2262 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 2263 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 2264 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2266 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_2::
# 2267 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2268 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles
# 2269 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2167 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2270 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_1
# 2271 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2272 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2274 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_WarpToLobbyDoubles::
# 2275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2276 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 17, 11
# 2277 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2174 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2278 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 2279 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	end
# 2280 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2282 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos::
# 2283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2180 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2284 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	random 2
# 2285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2286 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 2287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2288 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_D, 0
# 2289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2290 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_2
# 2291 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2292 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2294 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_1::
# 2295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2296 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_DOME_AUDIENCE_WALKING, 2, 0
# 2297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2192 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2298 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectmovementtype LOCALID_DOME_AUDIENCE_WALKING, MOVEMENT_TYPE_FACE_RIGHT
# 2299 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2300 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2301 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2302 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_2::
# 2303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2304 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto Common_EventScript_NopReturn
# 2305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetWalkingAudienceMemberPos_1
# 2307 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2308 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2309 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2310 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat::
# 2311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2204 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2312 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_D, 0
# 2313 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2314 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_2
# 2315 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2316 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2317 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2318 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_1::
# 2319 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2210 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2320 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_AUDIENCE_WALKING, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat
# 2321 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2322 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2323 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2324 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_2::
# 2325 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2216 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2326 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto Common_EventScript_NopReturn
# 2327 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2217 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2328 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TryDoAudienceMemberWalkToSeat_1
# 2329 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2330 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2331 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2332 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump::
# 2333 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2222 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2334 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2335 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2336 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2337 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2338 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2339 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2340 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2341 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2342 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2343 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2232 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2344 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2345 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2234 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2346 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2236 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2348 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2349 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2238 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2350 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2351 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2240 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2352 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2353 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2354 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2355 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2356 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 2357 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2358 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 2359 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2360 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	disable_jump_landing_ground_effect
# 2361 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2362 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_down
# 2363 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2364 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 2365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2366 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_down
# 2367 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2368 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	enable_jump_landing_ground_effect
# 2369 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2370 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 2371 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2372 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2373 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2374 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AudienceMemberWalkToSeat::
# 2375 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2376 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 2377 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2267 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2378 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 2379 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2269 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2380 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2381 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2271 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2382 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2383 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_down
# 2385 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2275 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2386 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 2387 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2388 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2389 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_RefereeEnter::
# 2391 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2392 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2393 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2394 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2395 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2397 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2398 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 2399 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2400 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 2401 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2404 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerFaceLeft::
# 2405 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2406 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_in_place_faster_left
# 2407 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 2409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2410 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2411 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2412 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_RefereeExit::
# 2413 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2415 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2416 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2417 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2307 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2418 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2419 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2309 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2420 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 2421 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2422 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_end
# 2423 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	return
# 2424 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2426 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome::
# 2427 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2314 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2428 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} has entered the BATTLE DOME!$"
# 2429 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2430 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer::
# 2431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2318 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2432 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{STR_VAR_1}\n"
# 2433 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "match!\p"
# 2434 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} versus {STR_VAR_2}!\p"
# 2435 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let the battle begin!$"
# 2436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner::
# 2438 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2325 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2439 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the winner!\n"
# 2440 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 2441 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner::
# 2443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2330 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2444 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{STR_VAR_2} is the winner!\n"
# 2445 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 2446 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2447 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ::
# 2448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2335 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2449 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Level 50\n"
# 2450 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Battle Tournament Champion!\p"
# 2451 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 2452 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2453 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp::
# 2454 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2341 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2455 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Open Level\n"
# 2456 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Battle Tournament Champion!\p"
# 2457 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 2458 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2459 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait::
# 2460 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2461 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "What an unbelievable finish!\n"
# 2462 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "We have a double knockout!\p"
# 2463 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "In this event, the Battle Tournament\n"
# 2464 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "rules call for a REFEREE'S decision.\p"
# 2465 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Please wait while the judging\n"
# 2466 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "is under way.$"
# 2467 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer::
# 2469 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2356 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2470 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
# 2471 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a decision!\p"
# 2472 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is…\n"
# 2473 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Oh, my goodness!\l"
# 2474 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is {STR_VAR_1}!\l"
# 2475 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 2476 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2477 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer::
# 2478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2479 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
# 2480 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a decision!\p"
# 2481 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is…\n"
# 2482 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Oh, my goodness!\l"
# 2483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is {PLAYER}!\l"
# 2484 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 2485 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2486 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope::
# 2487 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2374 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2488 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The bright new hope!\p"
# 2489 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2490 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2491 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RisingStar::
# 2492 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2379 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2493 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The rising star!\p"
# 2494 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2495 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship::
# 2497 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2498 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will this TRAINER race to\n"
# 2499 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "the championship?\p"
# 2500 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2502 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry::
# 2503 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2504 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the feat of a championship\n"
# 2505 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "on the first try be achieved?\p"
# 2506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2507 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2508 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged::
# 2509 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the loss of the last match\n"
# 2511 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "be avenged?\p"
# 2512 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2513 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2514 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship::
# 2515 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2516 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The TRAINER is on fire for\n"
# 2517 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "the first championship try!\p"
# 2518 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2519 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2520 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal::
# 2521 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2522 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "A win here means this TRAINER\n"
# 2523 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "advances to the final!\p"
# 2524 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2525 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue::
# 2527 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will the long-held dream of\n"
# 2529 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a championship finally come true?\p"
# 2530 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2531 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2532 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion::
# 2533 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2420 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2534 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The invincible champion!\p"
# 2535 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2536 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2537 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer::
# 2538 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2539 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can anyone hope to beat this\n"
# 2540 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TRAINER?\p"
# 2541 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2542 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2543 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer::
# 2544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2545 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Do battles exist solely for\n"
# 2546 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "this TRAINER?\p"
# 2547 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2548 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2549 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle::
# 2550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2551 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The current champion aiming to\n"
# 2552 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "retain the title!\p"
# 2553 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2554 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2555 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned::
# 2556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2557 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The former champion has returned!\p"
# 2558 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2559 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2560 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned::
# 2561 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2562 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The former toughness has returned!\p"
# 2563 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2564 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2565 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals::
# 2566 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2453 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2567 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will this TRAINER do as expected\n"
# 2568 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "and advance to the finals?\p"
# 2569 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2570 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2571 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory::
# 2572 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2459 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2573 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will the former champ regain\n"
# 2574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "lost glory?\p"
# 2575 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "$"
# 2576 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2577 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster::
# 2578 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2465 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2579 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Feel the glow of a true master!$"
# 2580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2581 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker::
# 2582 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2469 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2583 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "And now… The TRAINER standing in\n"
# 2584 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER}'s record-setting path…\p"
# 2585 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Yes! The one and only!\n"
# 2586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The BATTLE DOME COMMISSIONER!\l"
# 2587 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Our very own DOME ACE!\l"
# 2588 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Make way for TUCKER!$"
# 2589 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2590 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant::
# 2591 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2592 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Spectators: TUCKER! TUCKER!\n"
# 2593 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER! TUCKER! TUCKER!$"
# 2594 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro::
# 2596 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2597 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Ahahah!\p"
# 2598 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Do you hear it? This crowd!\n"
# 2599 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "They're all itching to see our match!\p"
# 2600 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Ahahah!\p"
# 2601 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I bet you're twitching all over from\n"
# 2602 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "the tension of getting to battle me!\p"
# 2603 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "But don't you worry about a thing!\p"
# 2604 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I'm the no. 1 star of the BATTLE DOME!\n"
# 2605 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I, TUCKER the DOME ACE, will bathe you\l"
# 2606 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "in my brilliant glow!$"
# 2607 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2608 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy::
# 2609 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2610 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Your strategy!\n"
# 2611 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let's see it!$"
# 2612 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2613 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer::
# 2614 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Unbelievable! It's incredible!\n"
# 2616 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The victor is {PLAYER}!$"
# 2617 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2618 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker::
# 2619 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2620 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is TUCKER!\n"
# 2621 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The DOME ACE has prevailed!\p"
# 2622 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations, TUCKER!$"
# 2623 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2624 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass::
# 2625 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2512 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2626 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Rules are rules!\n"
# 2627 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let me see your FRONTIER PASS.$"
# 2628 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2629 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol::
# 2630 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2517 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2631 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The Tactics Symbol was embossed on\n"
# 2632 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "the FRONTIER PASS!$"
# 2633 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2634 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime::
# 2635 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2522 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2636 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "… … … … … …\p"
# 2637 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I sorely underestimated you. I won't\n"
# 2638 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "make the same mistake next time…$"
# 2639 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2640 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched::
# 2641 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2642 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the win streak be stretched?\n"
# 2643 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The confidence is there!$"
# 2644 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2645 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker::
# 2646 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2533 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Ladies and gentlemen!\n"
# 2648 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Boys, girls, and POKéMON!\p"
# 2649 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Finally!\n"
# 2650 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Finally, the legend has returned!\p"
# 2651 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Yes, the name of that legend!\n"
# 2652 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Our very own DOME ACE!\l"
# 2653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "It's none other than TUCKER!$"
# 2654 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2655 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro::
# 2656 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2543 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2657 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: Ah…\n"
# 2658 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The pummeling roar of the crowd…\l"
# 2659 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Their furnace-like heat of excitement…\l"
# 2660 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "This is a wonderful place…\p"
# 2661 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "To the crowd, I am the DOME ACE…\n"
# 2662 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I represent their hopes and dreams…\l"
# 2663 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I must never fade from their sight…\p"
# 2664 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I must burn!\n"
# 2665 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Brighter and more brilliant!\l"
# 2666 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I must light all that gather here!$"
# 2667 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2668 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess::
# 2669 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2670 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I will unleash all the power that\n"
# 2671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I possess! Right here and now!$"
# 2672 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed::
# 2674 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2561 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2675 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "TUCKER: You're genuinely fantastic!\p"
# 2676 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Never before! I haven't ever lost in the\n"
# 2677 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "times I've had to unleash my power.\p"
# 2678 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Yes, quite fantastic!\n"
# 2679 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Your FRONTIER PASS, please?$"
# 2680 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2681 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine::
# 2682 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2569 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2683 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The Tactics Symbol took on\n"
# 2684 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a golden shine!$"
# 2685 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2686 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter::
# 2687 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2688 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "You're strong, but above all,\n"
# 2689 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "you have a unique charm!\p"
# 2690 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "In you, I see a definite potential for\n"
# 2691 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a superstar like me.\p"
# 2692 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I will very much look forward to\n"
# 2693 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "our next encounter!$"
# 2694 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ2::
# 2696 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2583 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2697 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Level 50\n"
# 2698 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Battle Tournament Champion!\p"
# 2699 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 2700 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2701 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp2::
# 2702 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2589 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2703 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Open Level\n"
# 2704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Battle Tournament Champion!\p"
# 2705 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations!$"
# 2706 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2707 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker::
# 2708 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2709 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The final match!\p"
# 2710 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} versus the DOME ACE, TUCKER!\p"
# 2711 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let the battle begin!$"
# 2712 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"

# 2713 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker::
# 2714 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2601 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
# 2715 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
# 2716 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "a decision!\p"
# 2717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is…\n"
# 2718 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Oh, my goodness!\l"
# 2719 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is our very own DOME ACE!\l"
# 2720 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "It's TUCKER!\p"
# 2721 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Congratulations! And thank you!\n"
# 2722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Let's hear it for the DOME ACE, TUCKER!$"
