BattleFrontier_BattleFactoryBattleRoom_MapScripts::
# 2 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleFactoryBattleRoom_OnTransition
# 3 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryBattleRoom_OnWarp
# 4 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom
	.2byte 0


BattleFrontier_BattleFactoryBattleRoom_OnTransition::
# 10 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_settrainers
# 11 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	checkplayergender
# 12 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_OnTransition_2
BattleFrontier_BattleFactoryBattleRoom_OnTransition_1:
# 15 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_OnTransition_5
BattleFrontier_BattleFactoryBattleRoom_OnTransition_4:
# 18 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 19 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 20 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_OnTransition_8
BattleFrontier_BattleFactoryBattleRoom_OnTransition_7:
	end

BattleFrontier_BattleFactoryBattleRoom_OnTransition_2:
# 13 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale
	goto BattleFrontier_BattleFactoryBattleRoom_OnTransition_1

BattleFrontier_BattleFactoryBattleRoom_OnTransition_5:
# 16 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale
	goto BattleFrontier_BattleFactoryBattleRoom_OnTransition_4

BattleFrontier_BattleFactoryBattleRoom_OnTransition_8:
# 21 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj
	goto BattleFrontier_BattleFactoryBattleRoom_OnTransition_7


BattleFrontier_BattleFactoryBattleRoom_EventScript_SetUpFactoryHeadObj::
# 27 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 28 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 9
	end


# 32 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_OnWarp:
# 34 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects
# 35 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.2byte 0

BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects::
# 40 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
# 42 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects_1:
# 45 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	hideobjectat LOCALID_FACTORY_BATTLE_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects_2:
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_HideObjects_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_EndHideObjects::
	end


BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxMale::
# 53 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_SetPlayerGfxFemale::
# 58 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle::
# 63 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 65 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle
# 66 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 67 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 68 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 69 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
# 70 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent
	end


BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom::
# 75 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_1:
# 78 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 79 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom
# 80 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 81 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
# 82 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_setopponentgfx
# 83 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	removeobject LOCALID_FACTORY_BATTLE_OPPONENT
# 84 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 1
# 85 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addobject LOCALID_FACTORY_BATTLE_OPPONENT
# 86 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter
# 87 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_2:
# 76 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoomFactoryHeadBattle
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent::
# 91 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_1:
# 94 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	palace_getopponentintro
# 95 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	lockall
# 96 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 98 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 99 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 100 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special HealPlayerParty
# 101 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	dofacilitytrainerbattle FRONTIER_FACILITY_FACTORY
# 102 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 103 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_5
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_2:
# 92 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleOpponent_5:
# 105 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost::
# 110 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 111 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent::
# 115 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
# 116 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent_1:
# 119 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 120 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 121 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent_2:
# 117 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedOpponent_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak::
# 125 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum::
# 129 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 130 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 131 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 132 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case 7, BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_3
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_1:
# 136 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 137 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 8
# 138 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_3:
# 134 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon::
# 142 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 143 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland::
# 147 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 148 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_3
# 150 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_4
# 152 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_5
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1:
# 155 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 156 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_7
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_6:
# 159 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead, MSGBOX_DEFAULT
# 160 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_3:
# 149 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_4:
# 151 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_5:
# 153 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_7:
# 157 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_6


BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver::
# 164 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
# 166 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_1:
# 169 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_2:
# 167 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver::
# 173 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getsymbols
# 174 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver_1:
# 177 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass, MSGBOX_DEFAULT
# 178 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 179 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland
# 180 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 181 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 182 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol
# 183 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 184 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitfanfare
# 185 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_givesymbol
# 186 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred, MSGBOX_DEFAULT
# 187 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver_2:
# 175 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandSilver_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold::
# 191 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 192 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_1:
# 195 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime, MSGBOX_DEFAULT
# 196 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_2:
# 193 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold::
# 200 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn, MSGBOX_DEFAULT
# 201 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
# 202 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_1:
# 205 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_2:
# 203 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold::
# 209 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getsymbols
# 210 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold_1:
# 213 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass, MSGBOX_DEFAULT
# 214 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 215 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland
# 216 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 217 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 218 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine
# 219 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 220 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitfanfare
# 221 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_givesymbol
# 222 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou, MSGBOX_DEFAULT
# 223 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	return

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold_2:
# 211 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNolandGold_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle::
# 227 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 228 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 229 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special HealPlayerParty
# 230 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_FACTORY
# 231 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland::
# 236 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
# 237 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_1:
# 240 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 241 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 242 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS
# 243 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK
# 244 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_5
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_4:
# 247 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 248 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, VAR_RESULT
# 249 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 250 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 251 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_2:
# 238 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_5:
# 245 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_4


# 255 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerEnterRoom:
# 256 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 257 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 258 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 259 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 260 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 261 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_right
# 262 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end

# 265 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_PlayerApproachNoland:
# 266 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_right
# 267 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end

# 270 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_OpponentEnter:
# 271 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 272 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 273 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 274 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 275 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 276 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_left
# 277 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end

# 280 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_Movement_NolandMoveToBattle:
# 281 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 282 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 283 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 284 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_left
# 285 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	step_end

BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby::
# 289 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 290 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_1:
# 293 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 4, 8
# 294 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_2:
# 291 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyDoubles::
# 299 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 14, 8
# 300 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
	end


BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle::
# 305 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_1, Common_Movement_WalkInPlaceFasterRight
# 306 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_2, Common_Movement_WalkInPlaceFasterRight
# 307 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_3, Common_Movement_WalkInPlaceFasterRight
# 308 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_4, Common_Movement_WalkInPlaceFasterLeft
# 309 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_5, Common_Movement_WalkInPlaceFasterLeft
# 310 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_6, Common_Movement_WalkInPlaceFasterLeft
# 311 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
	return


BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn::
# 315 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Hey, hey!\n"
	.string "Get a move on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead::
# 320 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Hey, my name's NOLAND!\n"
	.string "I'm basically in charge of this place,\l"
	.string "which is why I'm the FACTORY HEAD!\p"
	.string "I had a look at your Battle Swap data.\p"
	.string "You seem to have the right idea,\n"
	.string "but you're still square in your head!\p"
	.string "Listen up, okay? Knowledge isn't only\n"
	.string "about reading books or doing desk work.\p"
	.string "Just doing that sort of thing…\n"
	.string "It may as well be useless!\p"
	.string "You have to experience things with\n"
	.string "your heart and your body, understand?\p"
	.string "I'll take you on under the same\n"
	.string "conditions as you.\p"
	.string "I'll be using rental POKéMON, too!$"

BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn::
# 338 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Shake out every last bit of your\n"
	.string "knowledge and bring it on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass::
# 343 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: Smart going!\n"
	.string "Let's see your FRONTIER PASS.$"

BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol::
# 348 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "The Knowledge Symbol was embossed\n"
	.string "on the FRONTIER PASS!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred::
# 353 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Heh…\n"
	.string "You're a pretty bright spark…\p"
	.string "Next time, I'll come after you hard.\n"
	.string "No holds barred, understand?\p"
	.string "You keep up your studies!$"

BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime::
# 361 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: Hey, hey! How's it going?\n"
	.string "You keeping up with your studies?\p"
	.string "…Oh?\p"
	.string "You've taken on a harder look than\n"
	.string "the last time I saw you.\p"
	.string "Now, this should be fun!\n"
	.string "I'm getting excited, hey!$"

BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn::
# 371 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "All right!\n"
	.string "Bring it on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass::
# 376 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: What the…\n"
	.string "You're getting out of my league!\p"
	.string "Sheesh!\n"
	.string "Let's see that FRONTIER PASS!$"

BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine::
# 383 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "The Knowledge Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou::
# 388 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Pfft, man!\p"
	.string "That's absolutely the last time\n"
	.string "I lose to you!\p"
	.string "We have to do this again, hey?$"
