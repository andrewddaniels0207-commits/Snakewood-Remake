# 1 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 2 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_MapScripts::
# 3 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 5 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 4 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentCorridor_OnWarp
# 5 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 2 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 6 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 9 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 3 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 11 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentCorridor_EventScript_EnterCorridor
# 12 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.2byte 0
# 13 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 14 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 15 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 8 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 16 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 17 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 9 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 18 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_OnWarp:
# 19 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 10 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 20 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentCorridor_EventScript_SetUpObjects
# 21 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 11 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 22 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.2byte 0
# 23 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 24 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SetUpObjects::
# 25 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 16 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 26 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 17 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 28 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_0x8006, 1
# 29 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_ne SlateportCity_BattleTentCorridor_EventScript_SetUpObjects_2
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SetUpObjects_1:
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 20 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 32 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setobjectxy LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, 2, 2
# 33 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 21 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 34 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	turnobject LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, DIR_SOUTH
# 35 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 36 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 37 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SetUpObjects_2:
# 38 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 18 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 39 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_TurnPlayerNorth
# 40 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_SetUpObjects_1
# 41 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 42 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 43 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_TurnPlayerNorth::
# 44 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 25 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 45 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 46 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 47 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 48 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 49 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor::
# 50 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 51 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_0x8006, 1
# 52 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_2
# 53 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_1:
# 54 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 33 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 56 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 34 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 57 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, SlateportCity_BattleTentCorridor_Movement_AttendantEnter
# 58 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 35 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 59 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentCorridor_Movement_PlayerEnter
# 60 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 36 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 61 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 62 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 37 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 63 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_0x8006, 2
# 64 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_5
# 65 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_4:
# 66 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 40 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 67 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generaterentalmons
# 68 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 41 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 69 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generateopponentmons
# 70 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 42 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 71 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection, MSGBOX_DEFAULT
# 72 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 43 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 73 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 44 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 75 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_rentmons
# 76 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 45 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 77 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 78 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 79 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 80 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_2:
# 81 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 82 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_ReturnToRoomFromBattle
# 83 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_1
# 84 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 85 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_5:
# 86 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 38 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 87 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_ResumeChallenge
# 88 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_4
# 89 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 90 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 91 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom::
# 92 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 49 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 93 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
# 94 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 50 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 95 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	closemessage
# 96 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 51 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 97 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
# 98 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 52 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 99 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 100 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 53 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 101 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 102 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 54 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 103 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitdooranim
# 104 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 105 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, SlateportCity_BattleTentCorridor_Movement_AttendantExit
# 106 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 56 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 107 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentCorridor_Movement_PlayerExit
# 108 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 57 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 109 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 110 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 58 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 111 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 112 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 59 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 113 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitdooranim
# 114 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 60 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 115 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM, 4, 4
# 116 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 61 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 117 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 118 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 119 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 120 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 121 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReturnToRoomFromBattle::
# 122 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 66 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 123 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_setopponentmons
# 124 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 67 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 125 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_resethelditems
# 126 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 68 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 127 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons, MSGBOX_DEFAULT
# 128 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 69 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 129 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	playfanfare MUS_HEAL
# 130 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 70 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 131 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitfanfare
# 132 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 71 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 133 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	special HealPlayerParty
# 134 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 135 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 136 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 137 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent::
# 138 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 75 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 139 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 140 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 76 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 141 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_RESULT, 1
# 142 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_2
# 143 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_1:
# 144 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 79 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 145 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_RESULT, 2
# 146 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_5
# 147 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_4:
# 148 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 82 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 149 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 150 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 83 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 151 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 84 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 153 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 0, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_8
# 154 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 86 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 155 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_9
# 156 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 88 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 157 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 2, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_10
# 158 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 159 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 160 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_2:
# 161 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 77 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 162 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	call SlateportCity_BattleTentCorridor_EventScript_ReadyFor2ndOpponent
# 163 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_1
# 164 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 165 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_5:
# 166 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 80 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 167 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	call SlateportCity_BattleTentCorridor_EventScript_ReadyFor3rdOpponent
# 168 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_4
# 169 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 170 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_8:
# 171 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 85 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 172 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskSwapMon
# 173 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 174 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 175 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_9:
# 176 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 87 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 177 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge
# 178 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 179 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 180 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_10:
# 181 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 89 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 182 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge
# 183 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 184 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 185 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 186 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge::
# 187 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 94 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 188 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 189 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 95 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 190 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 191 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 96 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 192 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case NO, SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_2
# 193 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 98 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 194 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case YES, SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_3
# 195 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 100 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 196 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_4
# 197 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 198 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 199 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_2:
# 200 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 97 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 201 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 202 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 203 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 204 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_3:
# 205 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 99 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 206 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_PauseChallenge
# 207 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 208 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 209 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_4:
# 210 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 101 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 211 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 212 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 213 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 214 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 215 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge::
# 216 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 106 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 217 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
# 218 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 107 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 219 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 220 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 108 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 221 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 222 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 109 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 223 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 224 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 110 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 225 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_2
# 226 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 112 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 227 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 0, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_3
# 228 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 114 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 229 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_4
# 230 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 231 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 232 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_2:
# 233 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 111 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 234 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 235 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 236 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 237 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_3:
# 238 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 113 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 239 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTent_EventScript_WarpToLobbyLost
# 240 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 241 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 242 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_4:
# 243 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 115 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 244 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 245 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 246 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 247 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 248 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskSwapMon::
# 249 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 120 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 250 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generateopponentmons
# 251 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 121 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 252 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon, MSGBOX_YESNO
# 253 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 122 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 254 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 255 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 123 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 256 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case NO, SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_2
# 257 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 125 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 258 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case YES, SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_3
# 259 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 127 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 260 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_4
# 261 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 262 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 263 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_2:
# 264 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 124 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 265 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 266 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 267 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 268 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_3:
# 269 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 126 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 270 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_SwapMons
# 271 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 272 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 273 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_4:
# 274 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 128 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 275 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 276 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 277 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 278 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 279 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SwapMons::
# 280 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 133 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 281 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 282 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 134 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 283 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_swapmons
# 284 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 135 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 285 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 286 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 136 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 287 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_RESULT, 1
# 288 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_SwapMons_2
# 289 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SwapMons_1:
# 290 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 139 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 291 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete, MSGBOX_DEFAULT
# 292 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 140 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 293 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 294 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 295 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 296 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_SwapMons_2:
# 297 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 137 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 298 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
# 299 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_SwapMons_1
# 300 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 301 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 302 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReadyFor2ndOpponent::
# 303 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 144 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 304 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
# 305 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 145 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 306 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 307 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 308 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 309 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 310 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ReadyFor3rdOpponent::
# 311 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 150 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 312 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
# 313 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 151 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 314 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 315 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 316 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 317 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 318 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_PauseChallenge::
# 319 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 156 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 320 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
# 321 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 157 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 322 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 323 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 158 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 324 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_save CHALLENGE_STATUS_PAUSED
# 325 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 159 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 326 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	playse SE_SAVE
# 327 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 160 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 328 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitse
# 329 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 161 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 330 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 331 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 162 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 332 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	frontier_reset
# 333 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	end
# 334 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 335 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 336 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_ResumeChallenge::
# 337 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 167 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 338 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	special SavePlayerParty
# 339 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 168 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 340 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_setparties 0
# 341 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 169 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 342 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
# 343 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	return
# 344 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 345 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 346 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 172 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 347 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_PlayerEnter:
# 348 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 173 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 349 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 350 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 174 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 351 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 352 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 175 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 353 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 354 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 176 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 355 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 356 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 177 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 357 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 358 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 359 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 180 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 360 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_PlayerExit:
# 361 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 181 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 362 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 363 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 182 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 364 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 365 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 183 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 366 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	set_invisible
# 367 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 184 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 368 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 369 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 370 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 187 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 371 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_AttendantEnter:
# 372 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 188 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 373 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 374 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 189 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 375 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 376 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 190 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 377 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 378 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 191 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 379 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 380 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 192 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 381 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_in_place_faster_down
# 382 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 193 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 383 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 384 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 385 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 196 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 386 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_Movement_AttendantExit:
# 387 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 197 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 388 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 389 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 198 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 390 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	set_invisible
# 391 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 199 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 392 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_end
# 393 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 394 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_AdviceForContests::
# 395 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 202 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 396 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Want a tasty little bit of advice\n"
# 397 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "for CONTESTS?\p"
# 398 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Using a certain move after another\n"
# 399 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "certain kind of move sometimes gets\l"
# 400 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "you extra attention.\p"
# 401 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "If you know what you're doing,\n"
# 402 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "you can score big in appeal.\p"
# 403 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Of course, your opponents might try\n"
# 404 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "disrupting your POKéMON's showing.$"
# 405 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 406 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MyPapaIsContestJudge::
# 407 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 214 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 408 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "My papa, he's a CONTEST JUDGE.\p"
# 409 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I wonder what I should be when I\n"
# 410 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "grow up, a JUDGE or a GYM LEADER?$"
# 411 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 412 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ImLikeMajorlyCheesed::
# 413 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 220 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 414 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, man, I'm like majorly cheesed,\n"
# 415 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "you know. Like, you know, I just\l"
# 416 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "wanted to know why my POKéMON\l"
# 417 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "never won, you know, like, hey?\p"
# 418 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "So, like, I gave the JUDGE my two\n"
# 419 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "cents, you know, they're free.\p"
# 420 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "And he wouldn't hear me out, like, hey!\n"
# 421 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "So, like, total bummer, man!\p"
# 422 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, like, you! Zip it, you know?\n"
# 423 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Just, you know, take this!$"
# 424 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 425 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ExplainTorment::
# 426 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 233 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 427 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "That's, like, TM41, you know?\n"
# 428 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, it's TORMENT, you hearing me?\p"
# 429 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Like, it won't let the other guy\n"
# 430 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "use the same move twice in a row, see?\p"
# 431 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, now, you listen here, like,\n"
# 432 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I'm not laying a torment on you!$"
# 433 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 434 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MCStepUpTakePartInContest::
# 435 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 242 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 436 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "MC: Oh, my, my!\n"
# 437 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Now isn't that a dandy of a POKéMON?\p"
# 438 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Please! Do step right up and take\n"
# 439 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "part in our splendid CONTESTS!\p"
# 440 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "You'll do well! I'm sure of it!\n"
# 441 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "My eyes have never failed me!$"
# 442 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 443 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_JudgeWouldntDoToMissContest::
# 444 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 251 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 445 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "JUDGE: Well, hello there!\n"
# 446 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I see that you're a TRAINER!\p"
# 447 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Then, it just wouldn't do for you\n"
# 448 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "to miss a POKéMON CONTEST!\p"
# 449 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Get a CONTEST PASS in VERDANTURF\n"
# 450 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "CITY and enter anytime!$"
# 451 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 452 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_ItsAppealTime::
# 453 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 260 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 454 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "It's appeal time!\n"
# 455 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "What should I lead with?$"
# 456 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 457 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_DidntPayAttentionToAppeal::
# 458 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 265 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 459 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "They didn't pay much attention to\n"
# 460 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "my POKéMON's appeal…\p"
# 461 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Humph, that JUDGE, he doesn't know\n"
# 462 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "a good thing when he sees it.$"
# 463 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 464 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_RewardWithSageAdvice::
# 465 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 272 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 466 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Oh, hi! You must be a serious fan to get\n"
# 467 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "this close to the action.\p"
# 468 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I'll reward your enthusiasm with\n"
# 469 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "this sage advice.\p"
# 470 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "If a move goes over really well,\n"
# 471 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "the audience will get excited.\p"
# 472 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "The POKéMON that makes its appeal\n"
# 473 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "right when everyone's excited…\p"
# 474 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Well, you'd think something good has\n"
# 475 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "to happen!$"
# 476 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 477 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MoreFreakedOutThanMon::
# 478 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 285 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 479 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I can't do this! I'm more freaked out\n"
# 480 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "than my POKéMON.\p"
# 481 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I'm shivering and my heart is racing!$"
# 482 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 483 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_BattleAndContestAlike::
# 484 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 291 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 485 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "A battle and a CONTEST aren't the\n"
# 486 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "same, but they are alike, too.\p"
# 487 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "You need to work hard and believe\n"
# 488 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "in the POKéMON you've raised.$"
# 489 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 490 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MonLooksOnTopOfGame::
# 491 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 298 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 492 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "That POKéMON looks like it's on top\n"
# 493 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "of its game, huh?\p"
# 494 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "A POKéMON that does good in the\n"
# 495 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "secondary judging seems to be more\l"
# 496 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "relaxed when it's doing appeals.$"
# 497 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 498 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_MyMonBetterThanThatLot::
# 499 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 306 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 500 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Will you look at that sorry sight?\p"
# 501 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Heh, my POKéMON's absolutely better\n"
# 502 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "than that lot!$"
# 503 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 504 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_GetUrgeToMoveWithMon::
# 505 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 312 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 506 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Don't you get the urge to move with\n"
# 507 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "POKéMON if they're putting on an\l"
# 508 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "energetic appeal?$"
# 509 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"

# 510 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_ContestHall_Text_HyperRankStage::
# 511 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 318 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
# 512 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "POKéMON CONTESTS\n"
# 513 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "HYPER RANK STAGE!$"
