VerdanturfTown_BattleTentBattleRoom_MapScripts::
# 2 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_BattleTentBattleRoom_OnTransition
# 6 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, VerdanturfTown_BattleTentBattleRoom_OnWarp
# 3 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentBattleRoom_EventScript_EnterRoom
	.2byte 0


VerdanturfTown_BattleTentBattleRoom_OnTransition::
# 10 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
	end


VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx::
# 15 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	checkplayergender
# 16 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1:
# 19 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_5
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_4:
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2:
# 17 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1

VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_5:
# 20 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_4


VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfxMale::
# 26 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 27 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfxFemale::
# 32 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 33 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_EnterRoom::
# 38 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	showobjectat LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM
# 39 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, VerdanturfTown_BattleTentBattleRoom_Movement_PlayerEnter
# 40 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 41 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 42 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VerdanturfTown_BattleTentBattleRoom_EventScript_EnterRoom_1
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_EnterRoom_1:
# 43 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter::
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	tower_setopponent
# 49 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
# 50 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT, VerdanturfTown_BattleTentBattleRoom_Movement_OpponentEnter
# 51 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 52 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 53 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 54 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 55 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 56 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_2
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_2:
# 58 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost::
# 63 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 65 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 66 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent::
# 70 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 71 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 72 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 73 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 74 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 3, VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent_3
VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent_1:
# 77 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT, VerdanturfTown_BattleTentBattleRoom_Movement_OpponentExit
# 78 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 79 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
# 80 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterDown
# 81 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 82 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 83 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons, MSGBOX_DEFAULT
# 84 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 85 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 86 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 87 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 88 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitfanfare
# 89 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent_3:
# 75 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_DefeatedOpponent_1


VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge::
# 93 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 94 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_2
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1:
# 97 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4:
# 100 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 101 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 0, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8
# 104 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9
# 106 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 2, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_2:
# 95 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5:
# 98 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8:
# 103 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_ContinueChallenge
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9:
# 105 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10:
# 107 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge::
# 112 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 113 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case NO, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_2
# 116 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case YES, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3
# 118 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_2:
# 115 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3:
# 117 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_PauseChallenge
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4:
# 119 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge::
# 124 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
# 125 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 126 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 127 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 128 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_2
# 130 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 0, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3
# 132 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_2:
# 129 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3:
# 131 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4:
# 133 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_ContinueChallenge::
# 138 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_ATTENDANT, Common_Movement_WalkInPlaceFasterRight
# 139 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 140 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 141 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 142 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
# 146 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 147 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 148 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 149 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_PauseChallenge::
# 153 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
# 154 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 155 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	verdanturftent_save CHALLENGE_STATUS_PAUSED
# 156 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 157 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 158 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 159 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_reset
	end


# 163 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"

# 164 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_OnWarp:
# 165 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, VerdanturfTown_BattleTentBattleRoom_EventScript_SetUpObjects
# 166 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	.2byte 0

VerdanturfTown_BattleTentBattleRoom_EventScript_SetUpObjects::
# 171 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM
# 172 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
# 173 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 174 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentBattleRoom_Movement_SetInvisible
# 175 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
	end


VerdanturfTown_BattleTentBattleRoom_EventScript_ReadyFor2ndOpponent::
# 180 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
# 181 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_ReadyFor3rdOpponent::
# 186 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
# 187 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
	return


# 191 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_Movement_SetInvisible:
# 192 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	set_invisible
# 193 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 196 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_Movement_PlayerEnter:
# 197 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	set_visible
# 198 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 199 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 200 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 201 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	face_right
# 202 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 205 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_Movement_OpponentEnter:
# 206 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 207 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 208 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 209 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 210 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	face_left
# 211 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	step_end

# 214 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_Movement_OpponentExit:
# 215 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 216 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 217 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 218 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 219 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	step_end
