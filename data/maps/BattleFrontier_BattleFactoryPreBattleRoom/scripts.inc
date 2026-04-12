# 1 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryPreBattleRoom_OnWarp
# 5 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryPreBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom
# 12 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 14 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 15 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 17 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 18 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_OnWarp:
# 19 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 10 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 20 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	# 10 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SetUpObjects
# 23 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 12 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 24 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	# 11 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.2byte 0
# 27 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SetUpObjects::
# 29 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 31 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, 1
# 33 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SetUpObjects_2
# 35 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 36 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 37 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 38 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SetUpObjects_1::
# 39 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	setobjectxy LOCALID_FACTORY_PRE_BATTLE_ATTENDANT, 8, 7
# 41 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	turnobject LOCALID_FACTORY_PRE_BATTLE_ATTENDANT, DIR_SOUTH
# 43 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 44 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 45 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 46 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SetUpObjects_2::
# 47 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 35 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_TurnPlayerNorth
# 49 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SetUpObjects_1
# 51 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 52 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 53 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 54 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_TurnPlayerNorth::
# 55 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 57 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 59 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 60 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom::
# 61 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, 1
# 63 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom_2
# 65 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 66 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 67 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 68 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom_1::
# 69 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 71 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleFactoryPreBattleRoom_Movement_AttendantEnterRoom
# 73 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryPreBattleRoom_Movement_PlayerEnterRoom
# 75 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmovement 0
# 77 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, 2
# 79 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom_5
# 81 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 82 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 83 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 84 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom_4::
# 85 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_generaterentalmons
# 87 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_generateopponentmons
# 89 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_getopponentmontype
# 91 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 93 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_getopponentstyle
# 95 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 77 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 97 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType
# 99 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle
# 101 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 83 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 85 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_setswapped
# 107 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_rentmons
# 109 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitstate
# 111 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 112 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 113 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 114 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom_2::
# 115 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReturnToRoomFromBattle
# 117 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom_1
# 119 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 120 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 121 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 122 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom_5::
# 123 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ResumeChallenge
# 125 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterRoom_4
# 127 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 128 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 129 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 130 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom::
# 131 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
# 133 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	closemessage
# 135 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 137 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_50
# 139 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom_2
# 141 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 142 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 143 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 144 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom_1::
# 145 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
# 147 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom_5
# 149 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 150 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 151 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 152 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom_4::
# 153 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmovement 0
# 155 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM, 6, 11
# 157 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitstate
# 159 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	end
# 160 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 161 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 162 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom_2::
# 163 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_WalkToBattleRoomLv50
# 165 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom_1
# 167 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 168 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 169 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 170 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom_5::
# 171 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_WalkToBattleRoomLvOpen
# 173 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom_4
# 175 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 176 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 177 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 178 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReturnToRoomFromBattle::
# 179 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_setopponentmons
# 181 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_resethelditems
# 183 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 153 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons, MSGBOX_DEFAULT
# 185 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 187 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitfanfare
# 189 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	special HealPlayerParty
# 191 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 161 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 192 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 193 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 195 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReturnToRoomFromBattle_2
# 197 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 198 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 199 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 200 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReturnToRoomFromBattle_1::
# 201 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 169 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	playse SE_POKENAV_CALL
# 203 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitse
# 205 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_WaitFewMoments, MSGBOX_DEFAULT
# 207 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	closemessage
# 209 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 177 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleFactoryPreBattleRoom_Movement_AttendantMoveToReceiveCall
# 211 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 179 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmovement 0
# 213 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 181 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_UnderstoodSirWillDo, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 183 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	closemessage
# 217 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleFactoryPreBattleRoom_Movement_AttendantReturnToPlayer
# 219 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmovement 0
# 221 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_MessageFromHeadComeRightNow, MSGBOX_DEFAULT
# 223 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 191 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	closemessage
# 225 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	delay 16
# 227 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 195 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead
# 229 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	end
# 230 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 231 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReturnToRoomFromBattle_2::
# 233 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent
# 235 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReturnToRoomFromBattle_1
# 237 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 238 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 239 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 240 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent::
# 241 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 207 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 243 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 209 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 245 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_ne BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent_1
# 247 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 248 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 249 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 250 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent_1::
# 251 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 252 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead
# 253 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 254 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 255 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 256 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent::
# 257 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 259 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, 1
# 261 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_2
# 263 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 265 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 266 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_1::
# 267 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
# 269 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_5
# 271 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 274 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_4::
# 275 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, 3
# 277 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_8
# 279 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 281 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 282 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_7::
# 283 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 284 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, 4
# 285 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 286 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_11
# 287 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 290 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_10::
# 291 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, 5
# 293 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_14
# 295 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 297 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 298 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_13::
# 299 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 300 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, 6
# 301 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_17
# 303 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 304 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 306 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_16::
# 307 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 309 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 311 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 312 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_20
# 313 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 314 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 315 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 316 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_19::
# 317 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 319 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 321 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_2::
# 323 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 285 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor2ndOpponent
# 325 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 286 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_1
# 327 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 328 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 329 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 330 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_5::
# 331 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 332 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor3rdOpponent
# 333 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_4
# 335 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 337 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 338 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_8::
# 339 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 297 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor4thOpponent
# 341 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_7
# 343 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 344 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 345 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 346 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_11::
# 347 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor5thOpponent
# 349 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_10
# 351 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 352 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 353 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 354 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_14::
# 355 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor6thOpponent
# 357 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 358 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_13
# 359 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 360 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 361 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 362 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_17::
# 363 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor7thOpponent
# 365 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 366 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_16
# 367 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 368 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 370 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_20::
# 371 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 372 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponentNoRecord
# 373 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 374 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_19
# 375 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 376 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 377 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 378 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_23::
# 379 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 380 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapMon
# 381 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 382 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 383 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_24::
# 385 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRecordBattle
# 387 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 388 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 389 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 390 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_25::
# 391 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 339 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 392 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskPauseChallenge
# 393 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 394 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 395 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 396 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_26::
# 397 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 345 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRetireChallenge
# 399 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 400 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 401 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 402 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForRegularOpponent_27::
# 403 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 351 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 404 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 405 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 406 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 407 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 408 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponentNoRecord::
# 409 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 410 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 411 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 412 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 413 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 414 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponentNoRecord_2::
# 415 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 372 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 416 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapMon
# 417 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 418 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 419 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 420 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponentNoRecord_3::
# 421 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 378 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 422 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskPauseChallenge
# 423 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 424 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 425 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 426 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponentNoRecord_4::
# 427 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 428 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRetireChallenge
# 429 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 430 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 431 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 432 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponentNoRecord_5::
# 433 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 390 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 435 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 436 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 437 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRecordBattle::
# 439 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_RecordLatestBattle
# 441 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 443 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 400 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 445 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 446 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRecordBattle_2::
# 449 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 451 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 452 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 454 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRecordBattle_3::
# 455 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_RecordBattle
# 457 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 458 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 459 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 460 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRecordBattle_4::
# 461 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 463 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 464 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 465 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_RecordBattle::
# 467 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 469 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 471 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 472 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 474 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskPauseChallenge::
# 475 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 439 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 477 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 478 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 479 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 480 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskPauseChallenge_2::
# 481 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 452 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 483 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 484 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskPauseChallenge_3::
# 487 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 488 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_PauseChallenge
# 489 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 490 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskPauseChallenge_4::
# 493 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 464 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 495 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 496 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRetireChallenge::
# 499 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 500 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
# 501 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 472 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 503 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 474 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 505 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 506 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 507 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 508 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRetireChallenge_2::
# 509 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 487 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 511 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 512 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 514 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRetireChallenge_3::
# 515 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 493 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 516 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
# 517 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 518 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 519 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 520 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRetireChallenge_4::
# 521 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 499 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 522 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 523 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 524 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 525 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 526 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapMon::
# 527 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 505 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_generateopponentmons
# 529 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 530 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_getopponentmontype
# 531 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 509 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8005, VAR_RESULT
# 533 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 511 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 534 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_getopponentstyle
# 535 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 537 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 515 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 538 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType
# 539 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 517 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 540 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle
# 541 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 519 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon, MSGBOX_YESNO
# 543 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 544 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 545 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 546 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapMon_2::
# 547 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom
# 549 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 550 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 552 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapMon_3::
# 553 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 538 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SwapMons
# 555 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 556 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 557 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 558 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapMon_4::
# 559 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 544 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom
# 561 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 562 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 563 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 564 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SwapMons::
# 565 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 567 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_swapmons
# 569 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitstate
# 571 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 556 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 573 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 557 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SwapMons_2
# 575 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 576 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 577 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 578 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SwapMons_1::
# 579 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_setswapped
# 581 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 582 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete, MSGBOX_DEFAULT
# 583 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom
# 585 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 586 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 587 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 588 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SwapMons_2::
# 589 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom
# 591 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 573 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SwapMons_1
# 593 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 594 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 595 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 596 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor2ndOpponent::
# 597 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
# 599 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 601 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 602 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 603 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 604 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor3rdOpponent::
# 605 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 606 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
# 607 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 609 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 610 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 611 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 612 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor4thOpponent::
# 613 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 614 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor4thOpponent
# 615 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 616 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 617 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 618 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 619 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 620 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor5thOpponent::
# 621 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 602 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor5thOpponent
# 623 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 604 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 624 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 625 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 626 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 627 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 628 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor6thOpponent::
# 629 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 610 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 630 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent
# 631 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 612 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 632 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 633 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 634 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 635 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 636 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ReadyFor7thOpponent::
# 637 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 618 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 638 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor7thOpponent
# 639 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 620 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 640 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 641 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 642 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 643 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 644 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_PauseChallenge::
# 645 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 626 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
# 647 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 628 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 649 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 630 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 650 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_save CHALLENGE_STATUS_PAUSED
# 651 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 632 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	playse SE_SAVE
# 653 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 634 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 654 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitse
# 655 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 636 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 656 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 657 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 638 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	frontier_reset
# 659 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	end
# 660 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 661 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 662 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_ResumeChallenge::
# 663 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 644 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 664 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	special SavePlayerParty
# 665 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 666 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	factory_setparties 0
# 667 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 668 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 669 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 650 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 670 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	special CalculatePlayerPartyCount
# 671 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForOpponent
# 673 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 674 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 675 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 676 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType::
# 677 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 678 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent, MSGBOX_DEFAULT
# 679 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 660 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 680 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_NORMAL
# 681 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 661 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 682 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_2
# 683 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 684 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 685 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 686 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_1::
# 687 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 666 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 688 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_FIGHTING
# 689 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 667 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_5
# 691 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 692 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 693 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 694 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_4::
# 695 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 696 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_FLYING
# 697 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 698 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_8
# 699 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 700 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 701 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 702 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_7::
# 703 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 678 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 704 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_POISON
# 705 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 679 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 706 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_11
# 707 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 708 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 709 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 710 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_10::
# 711 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 684 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 712 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_GROUND
# 713 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 685 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_14
# 715 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 716 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 717 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 718 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_13::
# 719 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 720 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_ROCK
# 721 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 722 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_17
# 723 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 724 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 725 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 726 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_16::
# 727 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 696 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 728 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_BUG
# 729 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 730 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_20
# 731 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 732 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 733 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 734 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_19::
# 735 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 702 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 736 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_GHOST
# 737 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 738 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_23
# 739 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 740 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 741 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 742 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_22::
# 743 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 708 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 744 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_STEEL
# 745 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 709 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 746 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_26
# 747 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 748 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 749 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 750 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_25::
# 751 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_FIRE
# 753 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 715 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 754 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_29
# 755 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 756 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 757 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 758 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_28::
# 759 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 720 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 760 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_WATER
# 761 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 721 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_32
# 763 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 764 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 765 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 766 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_31::
# 767 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 726 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 768 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_GRASS
# 769 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 727 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 770 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_35
# 771 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 772 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 773 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 774 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_34::
# 775 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 732 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 776 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_ELECTRIC
# 777 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 733 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 778 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_38
# 779 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 780 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 781 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 782 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_37::
# 783 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 738 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 784 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_PSYCHIC
# 785 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 739 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 786 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_41
# 787 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 788 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 789 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 790 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_40::
# 791 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 744 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 792 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_ICE
# 793 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 745 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_44
# 795 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 796 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 797 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 798 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_43::
# 799 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 750 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 800 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_DRAGON
# 801 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 751 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 802 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_47
# 803 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 804 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 805 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 806 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_46::
# 807 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 756 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 808 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_DARK
# 809 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 757 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 810 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_50
# 811 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 812 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 813 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 814 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_49::
# 815 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 816 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, TYPE_FAIRY
# 817 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 763 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 818 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_53
# 819 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 820 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 821 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 822 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_52::
# 823 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 768 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 824 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8005, NUMBER_OF_MON_TYPES
# 825 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 769 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 826 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_56
# 827 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 828 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 829 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 830 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_55::
# 831 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 832 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 833 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 834 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_2::
# 835 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 778 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 836 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesNormal
# 837 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 779 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 838 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_1
# 839 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 840 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 841 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 842 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_5::
# 843 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 784 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 844 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesFighting
# 845 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 785 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_4
# 847 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 848 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 849 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 850 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_8::
# 851 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 790 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 852 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesFlying
# 853 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 791 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 854 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_7
# 855 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 856 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 857 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 858 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_11::
# 859 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 796 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesPoison
# 861 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 797 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_10
# 863 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 864 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 865 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 866 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_14::
# 867 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 802 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesGround
# 869 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 803 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 870 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_13
# 871 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 872 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 873 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 874 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_17::
# 875 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 808 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 876 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesRock
# 877 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 809 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 878 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_16
# 879 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 880 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 881 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 882 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_20::
# 883 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 814 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 884 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesBug
# 885 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 815 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 886 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_19
# 887 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 888 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 889 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 890 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_23::
# 891 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 820 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 892 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesGhost
# 893 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 821 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 894 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_22
# 895 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 896 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 897 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 898 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_26::
# 899 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 826 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 900 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesSteel
# 901 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 827 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 902 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_25
# 903 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 904 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 905 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 906 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_29::
# 907 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 832 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 908 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesFire
# 909 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 833 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 910 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_28
# 911 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 912 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 913 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 914 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_32::
# 915 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 838 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 916 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesWater
# 917 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 839 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 918 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_31
# 919 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 920 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 921 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 922 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_35::
# 923 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 844 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 924 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesGrass
# 925 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 845 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 926 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_34
# 927 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 928 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 929 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 930 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_38::
# 931 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 850 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 932 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesElectric
# 933 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 851 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 934 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_37
# 935 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 936 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 937 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 938 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_41::
# 939 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesPsychic
# 941 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 857 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 942 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_40
# 943 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 944 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 945 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 946 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_44::
# 947 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 948 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesIce
# 949 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 863 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 950 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_43
# 951 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 952 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 953 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 954 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_47::
# 955 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 956 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesDragon
# 957 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 869 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 958 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_46
# 959 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 960 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 961 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 962 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_50::
# 963 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 874 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 964 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesDark
# 965 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 875 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 966 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_49
# 967 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 968 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 969 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 970 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_53::
# 971 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 880 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 972 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesFairy
# 973 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 881 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 974 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_52
# 975 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 976 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 977 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 978 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_56::
# 979 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 886 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 980 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentHasNoMostCommonType
# 981 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 887 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 982 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentType_55
# 983 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 984 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 985 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 986 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesNormal::
# 987 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 892 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 988 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInNormalType, MSGBOX_DEFAULT
# 989 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 990 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 991 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 992 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesFighting::
# 993 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 898 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 994 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType, MSGBOX_DEFAULT
# 995 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 996 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 997 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 998 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesFlying::
# 999 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFlyingType, MSGBOX_DEFAULT
# 1001 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1002 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1003 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1004 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesPoison::
# 1005 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 910 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1006 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPoisonType, MSGBOX_DEFAULT
# 1007 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1008 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1009 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1010 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesGround::
# 1011 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 916 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1012 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGroundType, MSGBOX_DEFAULT
# 1013 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1014 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1015 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1016 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesRock::
# 1017 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 922 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1018 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType, MSGBOX_DEFAULT
# 1019 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1020 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1021 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1022 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesBug::
# 1023 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 928 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1024 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInBugType, MSGBOX_DEFAULT
# 1025 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1026 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1027 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1028 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesGhost::
# 1029 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 934 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1030 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGhostType, MSGBOX_DEFAULT
# 1031 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1032 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1033 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1034 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesSteel::
# 1035 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInSteelType, MSGBOX_DEFAULT
# 1037 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1038 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1039 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1040 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesFire::
# 1041 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 946 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1042 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType, MSGBOX_DEFAULT
# 1043 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1044 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1045 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1046 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesWater::
# 1047 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 952 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1048 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInWaterType, MSGBOX_DEFAULT
# 1049 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1050 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1051 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1052 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesGrass::
# 1053 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 958 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1054 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGrassType, MSGBOX_DEFAULT
# 1055 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1056 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1057 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1058 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesElectric::
# 1059 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 964 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1060 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInElectricType, MSGBOX_DEFAULT
# 1061 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1062 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1063 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1064 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesPsychic::
# 1065 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 970 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1066 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType, MSGBOX_DEFAULT
# 1067 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1068 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1069 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1070 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesIce::
# 1071 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 976 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1072 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInIceType, MSGBOX_DEFAULT
# 1073 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1074 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1075 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1076 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesDragon::
# 1077 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 982 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1078 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDragonType, MSGBOX_DEFAULT
# 1079 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1080 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1081 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1082 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesDark::
# 1083 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 988 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1084 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDarkType, MSGBOX_DEFAULT
# 1085 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1086 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1087 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1088 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentUsesFairy::
# 1089 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 994 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1090 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFairyType, MSGBOX_DEFAULT
# 1091 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1092 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1093 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1094 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_OpponentHasNoMostCommonType::
# 1095 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1096 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite, MSGBOX_DEFAULT
# 1097 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1098 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1099 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1100 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle::
# 1101 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1006 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1102 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_STYLE_NONE
# 1103 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1007 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_2
# 1105 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1106 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1107 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1108 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_1::
# 1109 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1012 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1110 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_STYLE_PREPARATION
# 1111 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1013 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1112 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_5
# 1113 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1114 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1115 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1116 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_4::
# 1117 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1018 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1118 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_STYLE_SLOW_STEADY
# 1119 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1019 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1120 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_8
# 1121 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1122 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1123 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1124 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_7::
# 1125 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1024 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1126 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_STYLE_ENDURANCE
# 1127 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1128 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_11
# 1129 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1130 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1131 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1132 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_10::
# 1133 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1030 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1134 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_STYLE_HIGH_RISK
# 1135 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1136 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_14
# 1137 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1138 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1139 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1140 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_13::
# 1141 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1142 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_STYLE_WEAKENING
# 1143 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1144 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_17
# 1145 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1146 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1147 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1148 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_16::
# 1149 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1042 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1150 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_STYLE_UNPREDICTABLE
# 1151 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1152 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_20
# 1153 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1154 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1155 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1156 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_19::
# 1157 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1048 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1158 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_STYLE_WEATHER
# 1159 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1049 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1160 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_23
# 1161 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1162 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1163 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1164 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_22::
# 1165 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1054 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1166 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_0x8006, FACTORY_NUM_STYLES
# 1167 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1168 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_26
# 1169 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1170 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1171 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1172 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_25::
# 1173 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1174 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1175 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1176 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_2::
# 1177 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1064 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1178 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleUnrestrained
# 1179 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1065 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1180 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_1
# 1181 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1182 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1183 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1184 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_5::
# 1185 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1070 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1186 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleTotalPreparation
# 1187 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1071 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1188 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_4
# 1189 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1190 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1191 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1192 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_8::
# 1193 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1076 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1194 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleSlowAndSteady
# 1195 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1077 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1196 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_7
# 1197 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1198 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1199 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1200 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_11::
# 1201 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1082 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1202 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleEndurance
# 1203 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1083 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1204 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_10
# 1205 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1206 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1207 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1208 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_14::
# 1209 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1088 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1210 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleHighRisk
# 1211 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1089 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1212 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_13
# 1213 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1214 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1215 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1216 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_17::
# 1217 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1094 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1218 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleWeakenFoe
# 1219 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1220 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_16
# 1221 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1222 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1223 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1224 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_20::
# 1225 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1100 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1226 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleImpossibleToPredict
# 1227 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1101 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1228 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_19
# 1229 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1230 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1231 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1232 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_23::
# 1233 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1106 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1234 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleDependsOnFlow
# 1235 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1236 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_22
# 1237 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1238 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1239 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1240 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_26::
# 1241 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1112 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1242 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleFlexible
# 1243 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1113 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1244 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_CommentOnOpponentStyle_25
# 1245 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1246 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1247 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1248 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleUnrestrained::
# 1249 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1118 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1250 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleUnrestrained, MSGBOX_DEFAULT
# 1251 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1252 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1253 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1254 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleTotalPreparation::
# 1255 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1124 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1256 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleTotalPreparation, MSGBOX_DEFAULT
# 1257 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1258 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1259 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1260 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleSlowAndSteady::
# 1261 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1130 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1262 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleSlowAndSteady, MSGBOX_DEFAULT
# 1263 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1264 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1265 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1266 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleEndurance::
# 1267 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1136 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1268 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance, MSGBOX_DEFAULT
# 1269 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1270 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1271 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1272 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleHighRisk::
# 1273 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1142 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1274 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleHighRisk, MSGBOX_DEFAULT
# 1275 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1276 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1277 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1278 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleWeakenFoe::
# 1279 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1148 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1280 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleWeakenFoe, MSGBOX_DEFAULT
# 1281 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1282 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1283 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1284 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleImpossibleToPredict::
# 1285 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1154 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1286 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleImpossibleToPredict, MSGBOX_DEFAULT
# 1287 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1288 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1289 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1290 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleDependsOnFlow::
# 1291 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1160 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1292 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow, MSGBOX_DEFAULT
# 1293 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1294 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1295 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1296 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_StyleFlexible::
# 1297 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1166 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1298 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleFlexible, MSGBOX_DEFAULT
# 1299 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1300 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1301 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1302 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead::
# 1303 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1172 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1304 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_PreparedToFaceHead
# 1305 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1174 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1306 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	waitmessage
# 1307 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1176 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1308 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 1309 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1178 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1310 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 1311 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1179 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1312 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_2
# 1313 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1314 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1315 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1316 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_1::
# 1317 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1184 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1318 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	multichoice 19, 4, MULTI_GO_ON_RECORD_REST_RETIRE, TRUE
# 1319 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1320 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1321 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1322 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_2::
# 1323 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1201 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1324 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHeadNoRecord
# 1325 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1202 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1326 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_1
# 1327 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1328 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1329 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1330 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_5::
# 1331 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1207 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1332 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapBeforeHead
# 1333 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1334 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1335 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1336 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_6::
# 1337 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1338 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRecordBattle
# 1339 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1340 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1341 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1342 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_7::
# 1343 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1344 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskPauseChallenge
# 1345 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1346 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1347 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1348 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_8::
# 1349 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1225 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1350 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRetireChallenge
# 1351 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1352 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1353 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1354 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead_9::
# 1355 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1231 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1356 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead
# 1357 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1358 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1359 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1360 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHeadNoRecord::
# 1361 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1237 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1362 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 1363 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1364 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1365 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHeadNoRecord_2::
# 1367 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1252 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1368 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapBeforeHead
# 1369 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1370 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1371 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1372 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHeadNoRecord_3::
# 1373 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1258 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1374 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskPauseChallenge
# 1375 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1376 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1377 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1378 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHeadNoRecord_4::
# 1379 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1264 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1380 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskRetireChallenge
# 1381 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1382 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1383 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1384 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHeadNoRecord_5::
# 1385 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1270 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1386 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskReadyForHead
# 1387 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1388 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1389 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1390 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapBeforeHead::
# 1391 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1276 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1392 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_CantTellAnythingAboutHead, MSGBOX_DEFAULT
# 1393 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1278 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1394 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon, MSGBOX_YESNO
# 1395 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1396 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1397 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1398 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapBeforeHead_2::
# 1399 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1291 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1400 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom
# 1401 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1402 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1403 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1404 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapBeforeHead_3::
# 1405 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1297 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1406 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_SwapMons
# 1407 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1408 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1409 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1410 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_AskSwapBeforeHead_4::
# 1411 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1303 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1412 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryPreBattleRoom_EventScript_EnterBattleRoom
# 1413 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1414 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1415 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1416 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_WalkToBattleRoomLv50::
# 1417 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1309 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1418 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleFactoryPreBattleRoom_Movement_GuideWalkToBattleRoomLv50
# 1419 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1311 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1420 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryPreBattleRoom_Movement_PlayerWalkToBattleRoomLv50
# 1421 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1422 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1423 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1424 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_EventScript_WalkToBattleRoomLvOpen::
# 1425 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1317 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1426 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleFactoryPreBattleRoom_Movement_GuideWalkToBattleRoomLvOpen
# 1427 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1319 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1428 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryPreBattleRoom_Movement_PlayerWalkToBattleRoomLvOpen
# 1429 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1430 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1431 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1432 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Movement_PlayerEnterRoom::
# 1433 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1326 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1434 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1435 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1328 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1436 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1437 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1330 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1438 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1439 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1332 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1440 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1441 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1334 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1443 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1336 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1444 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	step_end
# 1445 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1446 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1447 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1448 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Movement_PlayerWalkToBattleRoomLv50::
# 1449 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1342 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1450 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1451 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1344 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1452 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_left
# 1453 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1346 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1454 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_left
# 1455 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1348 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1456 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1457 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1350 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1458 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1459 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1352 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1460 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	step_end
# 1461 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1462 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1463 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1464 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Movement_PlayerWalkToBattleRoomLvOpen::
# 1465 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1358 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1466 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1467 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1360 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1468 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_right
# 1469 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1362 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1470 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_right
# 1471 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1364 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1472 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1473 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1366 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1474 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1475 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1368 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1476 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	step_end
# 1477 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1478 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1479 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1480 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Movement_AttendantEnterRoom::
# 1481 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1374 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1482 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1483 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1376 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1484 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1485 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1378 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1486 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1487 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1380 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1488 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1489 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1382 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1490 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1491 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1384 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1492 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	face_down
# 1493 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1386 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1494 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	step_end
# 1495 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1496 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1497 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1498 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Movement_GuideWalkToBattleRoomLv50::
# 1499 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1392 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1500 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_left
# 1501 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1394 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1502 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_left
# 1503 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1396 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1504 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1505 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1398 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1506 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1507 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1400 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1508 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	set_invisible
# 1509 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1402 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1510 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	step_end
# 1511 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1512 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1513 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1514 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Movement_GuideWalkToBattleRoomLvOpen::
# 1515 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1408 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1516 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_right
# 1517 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1410 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1518 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_right
# 1519 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1412 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1520 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1521 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1414 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1522 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_up
# 1523 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1416 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1524 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	set_invisible
# 1525 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1418 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1526 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	step_end
# 1527 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1528 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1529 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1530 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Movement_AttendantMoveToReceiveCall::
# 1531 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1424 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1532 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_left
# 1533 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1426 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1534 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_left
# 1535 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1428 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1536 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_left
# 1537 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1430 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1538 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	step_end
# 1539 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1540 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1541 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1542 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Movement_AttendantReturnToPlayer::
# 1543 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1436 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1544 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_right
# 1545 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1438 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1546 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_right
# 1547 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1440 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1548 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	walk_right
# 1549 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1550 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	face_down
# 1551 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1444 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1552 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	step_end
# 1553 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	return
# 1554 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1555 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1556 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection::
# 1557 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1447 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1558 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "First, we will hold your POKéMON for\n"
# 1559 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "safekeeping.\p"
# 1560 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "You may then choose from our\n"
# 1561 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "selection of POKéMON.$"
# 1562 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1563 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons::
# 1564 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1454 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1565 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Thank you for competing!\n"
# 1566 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Let us restore your POKéMON!$"
# 1567 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1568 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent::
# 1569 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1459 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1570 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The 2nd match is next!\n"
# 1571 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1572 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1573 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent::
# 1574 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1464 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1575 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The 3rd match is next!\n"
# 1576 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1577 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1578 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor4thOpponent::
# 1579 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1469 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1580 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The 4th match is next!\n"
# 1581 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1582 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1583 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor5thOpponent::
# 1584 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1474 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1585 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The 5th match is next!\n"
# 1586 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1587 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1588 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor6thOpponent::
# 1589 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1479 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1590 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The 6th match is next!\n"
# 1591 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1592 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1593 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor7thOpponent::
# 1594 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1484 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1595 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Finally, the 7th match is next!\n"
# 1596 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Are you ready?$"
# 1597 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1598 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame::
# 1599 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1489 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1600 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Would you like to save and quit\n"
# 1601 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "the game?$"
# 1602 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1603 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge::
# 1604 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1494 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1605 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Would you like to retire from your\n"
# 1606 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Battle Swap challenge?$"
# 1607 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1608 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_InvestigatedUpcomingOpponent::
# 1609 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1499 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1610 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "I've conducted a little investigation\n"
# 1611 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "about your upcoming opponent.$"
# 1612 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1613 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInNormalType::
# 1614 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1504 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1615 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1616 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the NORMAL type.$"
# 1617 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1618 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFireType::
# 1619 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1509 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1620 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1621 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the FIRE type.$"
# 1622 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1623 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInWaterType::
# 1624 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1514 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1625 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1626 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the WATER type.$"
# 1627 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1628 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInElectricType::
# 1629 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1519 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1630 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1631 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the ELECTRIC type.$"
# 1632 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1633 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGrassType::
# 1634 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1524 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1635 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1636 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the GRASS type.$"
# 1637 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1638 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInIceType::
# 1639 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1529 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1640 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1641 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the ICE type.$"
# 1642 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1643 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFightingType::
# 1644 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1534 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1645 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1646 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the FIGHTING type.$"
# 1647 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1648 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPoisonType::
# 1649 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1539 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1650 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1651 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the POISON type.$"
# 1652 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1653 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGroundType::
# 1654 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1544 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1655 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1656 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the GROUND type.$"
# 1657 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1658 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFlyingType::
# 1659 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1549 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1660 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1661 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the FLYING type.$"
# 1662 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1663 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInPsychicType::
# 1664 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1554 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1665 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1666 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the PSYCHIC type.$"
# 1667 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1668 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInBugType::
# 1669 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1559 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1670 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1671 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the BUG type.$"
# 1672 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1673 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInRockType::
# 1674 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1564 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1675 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1676 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the ROCK type.$"
# 1677 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1678 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInGhostType::
# 1679 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1569 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1680 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1681 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the GHOST type.$"
# 1682 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1683 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDragonType::
# 1684 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1574 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1685 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1686 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the DRAGON type.$"
# 1687 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1688 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInDarkType::
# 1689 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1579 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1690 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1691 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the DARK type.$"
# 1692 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1693 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInFairyType::
# 1694 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1584 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1695 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1696 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the FAIRY type.$"
# 1697 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1698 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerSkilledInSteelType::
# 1699 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1589 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1700 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER is apparently skilled\n"
# 1701 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "in the handling of the STEEL type.$"
# 1702 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1703 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_TrainerHasNoClearFavorite::
# 1704 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1594 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1705 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The TRAINER appears to have no clear\n"
# 1706 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "favorites when it comes to type.$"
# 1707 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1708 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleSlowAndSteady::
# 1709 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1599 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1710 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears to\n"
# 1711 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "be slow and steady.$"
# 1712 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1713 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleEndurance::
# 1714 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1604 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1715 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears to\n"
# 1716 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "be one of endurance.$"
# 1717 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1718 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleHighRisk::
# 1719 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1609 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1720 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears to\n"
# 1721 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "be high risk, high return.$"
# 1722 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1723 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleDependsOnFlow::
# 1724 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1614 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1725 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears to\n"
# 1726 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "depend on the battle's flow.$"
# 1727 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1728 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleTotalPreparation::
# 1729 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1619 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1730 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears to\n"
# 1731 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "be one based on total preparation.$"
# 1732 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1733 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleWeakenFoe::
# 1734 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1624 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1735 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears\n"
# 1736 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "to be weakening the foe to start.$"
# 1737 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1738 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleFlexible::
# 1739 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1629 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1740 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears to\n"
# 1741 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "be flexibly adaptable to the situation.$"
# 1742 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1743 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleImpossibleToPredict::
# 1744 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1634 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1745 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears to\n"
# 1746 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "be impossible to predict.$"
# 1747 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1748 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_StyleUnrestrained::
# 1749 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1639 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1750 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The favorite battle style appears to\n"
# 1751 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "be free-spirited and unrestrained.$"
# 1752 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1753 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon::
# 1754 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1644 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1755 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Before starting the battle, would you\n"
# 1756 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "like to swap a POKéMON?$"
# 1757 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1758 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete::
# 1759 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1649 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1760 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Thank you!\n"
# 1761 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Your POKéMON swap is complete.$"
# 1762 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1763 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay::
# 1764 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1654 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1765 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Right this way, please!$"
# 1766 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1767 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait::
# 1768 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1658 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1769 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "I am saving your data.\n"
# 1770 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Please wait.$"
# 1771 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1772 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_RecordLatestBattle::
# 1773 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1663 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1774 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Would you like to record your latest\n"
# 1775 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "battle on your FRONTIER PASS?$"
# 1776 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1777 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_WaitFewMoments::
# 1778 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1668 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1779 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Excuse me! Excuse me, please!\n"
# 1780 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "May I get you to wait a few moments?$"
# 1781 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1782 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_UnderstoodSirWillDo::
# 1783 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1673 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1784 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "…Uh-huh? What?! …Whoa!\n"
# 1785 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Understood, sir! Will do!$"
# 1786 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1787 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_MessageFromHeadComeRightNow::
# 1788 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1678 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1789 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Oh, my…\n"
# 1790 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Sorry to keep you waiting!\p"
# 1791 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "I have a message from this facility's\n"
# 1792 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "boss, the FACTORY HEAD.\p"
# 1793 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "He says, “We're going to do it!\n"
# 1794 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Come here right now!”$"
# 1795 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1796 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_PreparedToFaceHead::
# 1797 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1687 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1798 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "The FACTORY HEAD is demanding you.\n"
# 1799 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "Are you prepared to face him?$"
# 1800 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"

# 1801 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryPreBattleRoom_Text_CantTellAnythingAboutHead::
# 1802 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1692 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
# 1803 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "I'm terribly sorry, but I can't tell you\n"
# 1804 "data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.pory"
	.string "anything about the FACTORY HEAD.$"
