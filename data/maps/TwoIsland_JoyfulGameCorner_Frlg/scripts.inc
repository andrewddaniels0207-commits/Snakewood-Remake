# 1 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Frlg_MapScripts::
# 3 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 2 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 4 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_JoyfulGameCorner_OnTransition
# 5 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 3 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 6 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwoIsland_JoyfulGameCorner_OnWarp
# 7 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 9 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 8 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad_Frlg
# 9 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 4 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 10 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.byte 0
# 12 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 13 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 5 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 15 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 0, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene
# 16 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 6 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 17 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene
# 18 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 7 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 19 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
# 20 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.2byte 0
# 21 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 22 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 23 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_OnTransition::
# 24 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 13 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 25 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_OnTransition_2
# 26 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_OnTransition_1:
# 27 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 28 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 29 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_OnTransition_2:
# 30 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 14 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 31 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	call TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos
# 32 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_OnTransition_1
# 33 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 34 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 35 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos::
# 36 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 20 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 37 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectxyperm LOCALID_JOYFUL_GAME_CORNER_DADDY, 6, 2
# 38 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 21 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 39 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_DADDY, MOVEMENT_TYPE_FACE_DOWN
# 40 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 22 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 41 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, MOVEMENT_TYPE_LOOK_AROUND
# 42 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 23 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 43 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	return
# 45 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 46 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 47 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 27 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 48 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 49 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 28 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 50 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_OnWarp:
# 51 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 29 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 52 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth
# 53 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 30 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 54 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant_Frlg
# 55 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 31 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 56 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.2byte 0
# 57 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 58 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth::
# 59 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 36 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 60 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 61 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 62 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 63 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 64 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene::
# 65 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 41 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 66 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lockall
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 42 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 68 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 69 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 43 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 70 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle
# 71 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 72 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 73 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 45 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 74 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 75 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 46 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 76 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy
# 77 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 47 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 78 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 79 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 48 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 80 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, Common_Movement_WalkInPlaceFasterDown
# 81 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 49 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 82 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 83 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 50 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 84 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
# 85 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 51 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 86 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	releaseall
# 87 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 88 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 89 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 90 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene::
# 91 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 56 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 92 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lockall
# 93 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 57 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 94 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 95 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 58 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 96 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyPacing
# 97 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 59 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 98 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 99 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 60 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 100 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo
# 101 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 61 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 102 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 103 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 62 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 104 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_WalkInPlaceFasterDown
# 105 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 63 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 106 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 107 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 64 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 108 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_PIN
# 109 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 65 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 110 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_ExclamationMark
# 111 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 66 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 112 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 113 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 114 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_Delay48
# 115 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 68 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 116 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 117 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 69 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 118 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer
# 119 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 70 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 120 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 121 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 71 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 122 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 72 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 124 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 125 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 73 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 126 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle
# 127 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 74 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 128 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 129 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 75 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 130 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_DOOR
# 131 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 76 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 132 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitse
# 133 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 77 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 134 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy
# 135 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 78 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 136 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 137 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 79 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 138 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 139 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 80 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 140 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	addobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 141 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 81 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 142 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, TwoIsland_JoyfulGameCorner_Movement_BikerLookAround
# 143 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 82 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 144 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 145 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 83 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 146 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland
# 147 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 84 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 148 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterRight
# 149 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 85 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 150 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 151 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 86 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 152 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt
# 153 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 87 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 154 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing
# 155 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 88 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 156 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 157 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 89 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 158 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterDown
# 159 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 90 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 160 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 161 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 91 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 162 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_EXIT
# 163 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 92 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 164 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	removeobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 165 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 93 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 166 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	fadedefaultbgm
# 167 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 94 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 168 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay 60
# 169 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 95 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 170 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor
# 171 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 96 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 172 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	clearflag FLAG_HIDE_THREE_ISLAND_LONE_BIKER
# 173 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 97 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 174 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 2
# 175 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 98 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 176 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 1
# 177 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 99 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 178 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	releaseall
# 179 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 180 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 181 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 182 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 103 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 183 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyPacing:
# 184 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 104 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 185 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_left
# 186 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 105 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 187 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_right
# 188 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 106 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 189 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_right
# 190 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 107 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 191 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 192 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 108 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 193 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_up
# 194 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 109 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 195 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_16
# 196 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 110 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 197 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end
# 198 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 199 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 113 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 200 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer:
# 201 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 114 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 202 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 203 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 115 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 204 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 205 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 116 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 206 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 207 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 117 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 208 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_left
# 209 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 118 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 210 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end
# 211 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 212 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 121 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 213 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy:
# 214 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 122 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 215 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_left
# 216 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 123 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 217 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_right
# 218 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 124 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 219 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end
# 220 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 221 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 127 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 222 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_BikerLookAround:
# 223 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 128 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 224 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_left
# 225 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 129 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 226 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 227 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 130 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 228 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_right
# 229 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 131 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 230 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 231 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 132 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 232 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_up
# 233 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 133 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 234 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end
# 235 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 236 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_InfoMan::
# 237 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 137 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 238 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 239 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 138 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 240 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 241 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 139 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 242 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
# 243 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_InfoMan_2
# 244 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_InfoMan_1:
# 245 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 142 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 246 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_JoyfulGameCorner_EventScript_InfoMan_5
# 247 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_InfoMan_4:
# 248 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 145 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 249 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday
# 250 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 146 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 251 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 252 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 253 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 254 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_InfoMan_2:
# 255 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 140 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 256 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto JoyfulGameCorner_EventScript_InfoMan2_Frlg
# 257 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_InfoMan_1
# 258 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 259 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_InfoMan_5:
# 260 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 143 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 261 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon
# 262 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_InfoMan_4
# 263 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 264 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 265 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon::
# 266 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 151 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 267 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon
# 268 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 152 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 269 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 270 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 271 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 272 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 273 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy::
# 274 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 157 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 275 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 276 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 158 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 277 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 278 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 159 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 279 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
# 280 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_2
# 281 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_1:
# 282 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 162 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 283 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_5
# 284 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_4:
# 285 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 165 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 286 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
# 287 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_8
# 288 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_7:
# 289 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 168 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 290 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland
# 291 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 169 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 292 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 293 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 294 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 295 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_2:
# 296 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 160 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 297 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto JoyfulGameCorner_EventScript_MinigameAttendant_Frlg
# 298 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_1
# 299 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 300 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_5:
# 301 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 163 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 302 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning
# 303 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_4
# 304 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 305 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_8:
# 306 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 166 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 307 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite
# 308 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_7
# 309 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 310 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 311 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite::
# 312 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 174 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 313 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE, TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_2
# 314 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_1:
# 315 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 177 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 316 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsForMe
# 317 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 178 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 318 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
# 319 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 179 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 320 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 321 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 180 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 322 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 323 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 181 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 324 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	message TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy
# 325 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 182 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 326 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmessage
# 327 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 183 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 328 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitfanfare
# 329 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 184 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 330 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 331 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 185 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 332 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	removeitem ITEM_METEORITE
# 333 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 186 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 334 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill
# 335 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 187 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 336 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
# 337 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 338 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 339 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_2:
# 340 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 175 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 341 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
# 342 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_1
# 343 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 344 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 345 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone::
# 346 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 192 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 347 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	checkitemspace ITEM_MOON_STONE
# 348 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 193 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 349 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 350 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone_2
# 351 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone_1:
# 352 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 196 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 353 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	additem ITEM_MOON_STONE
# 354 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 197 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 355 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER
# 356 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 198 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 357 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgreceiveditem TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy, ITEM_MOON_STONE
# 358 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 199 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 359 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 360 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 361 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 362 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone_2:
# 363 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 194 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 364 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone
# 365 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone_1
# 366 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 367 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 368 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning::
# 369 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 204 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 370 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning
# 371 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 205 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 372 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 373 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 374 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 375 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 376 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone::
# 377 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 210 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 378 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE
# 379 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 211 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 380 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag
# 381 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 212 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 382 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 383 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 384 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 385 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 386 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_Lostelle::
# 387 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 217 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 388 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 389 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 218 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 390 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 391 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 219 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 392 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool
# 393 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 220 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 394 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
# 395 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	end
# 396 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 397 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 398 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo::
# 399 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 224 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 400 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Now, where's LOSTELLE gotten to\n"
# 401 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "today?\p"
# 402 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "She always brings me lunch every\n"
# 403 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "day right about now…$"
# 404 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 405 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle::
# 406 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 231 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 407 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hm? You, there!\n"
# 408 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Are you a friend of LOSTELLE's?\p"
# 409 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Have you seen LOSTELLE around?\n"
# 410 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I don't know where she might be.\l"
# 411 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "She should've been here long ago.\p"
# 412 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE's a cutie - she got my\n"
# 413 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "looks - so what if someone…\p"
# 414 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "What if something's happened to\n"
# 415 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "my LOSTELLE?!\p"
# 416 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Please, help me find her!\n"
# 417 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Please go search THREE ISLAND!$"
# 418 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 419 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland::
# 420 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 245 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 421 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hah? What is this GAME CORNER?\n"
# 422 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "How much sadder can this get?\p"
# 423 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Those clowns…\p"
# 424 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "They said they'd be waiting on the\n"
# 425 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "island, so where are they?\p"
# 426 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hey, you! Is this the only THREE\n"
# 427 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "ISLAND around here?$"
# 428 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 429 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt::
# 430 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 255 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 431 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Try waking up before you crawl out\n"
# 432 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "of bed, you punk.\p"
# 433 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "This is TWO ISLAND!\p"
# 434 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Move it! Get your filthy motorbike\n"
# 435 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "out of my place!$"
# 436 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 437 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing::
# 438 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 263 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 439 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Huh…\n"
# 440 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, oh, gotcha.\p"
# 441 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Tch…\n"
# 442 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "These islands are confusing…$"
# 443 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 444 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor::
# 445 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 270 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 446 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Would you look at that?\n"
# 447 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "That punk scuffed up my floor.$"
# 448 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 449 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland::
# 450 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 275 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 451 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hey, but listen! I'm begging you,\n"
# 452 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "you have to go to THREE ISLAND.\p"
# 453 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "If anything were to happen to my\n"
# 454 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE…\p"
# 455 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "My place is the house with the red\n"
# 456 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "roof on THREE ISLAND.\p"
# 457 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "She may just show up late here,\n"
# 458 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "so I can't run off anywhere.\p"
# 459 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "That's why I have to get you to do\n"
# 460 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "me this big favor.$"
# 461 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 462 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday::
# 463 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 288 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 464 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I'm sorry.\n"
# 465 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "We're not running any games today.$"
# 466 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 467 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon::
# 468 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 293 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 469 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "We'll get the games going soon\n"
# 470 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "for you!$"
# 471 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 472 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle::
# 473 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 298 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 474 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "So you rescued LOSTELLE?\n"
# 475 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "How can I thank you?\p"
# 476 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE, darling, forgive me!\p"
# 477 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Daddy didn't know you were scared\n"
# 478 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "and in trouble!$"
# 479 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 480 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy::
# 481 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 306 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 482 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE: It's okay, Daddy.\n"
# 483 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I got to be friends with {PLAYER}!$"
# 484 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 485 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_ThisIsForMe::
# 486 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 311 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 487 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, what's that?\n"
# 488 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You're saying that this is for me?\p"
# 489 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "How did you know that I love rare\n"
# 490 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "rocks and gems?\p"
# 491 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You sure know how to make a guy\n"
# 492 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "happy.$"
# 493 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 494 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy::
# 495 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 320 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 496 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "{PLAYER} handed the METEORITE\n"
# 497 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "to LOSTELLE's daddy.$"
# 498 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 499 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill::
# 500 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 325 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 501 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, I see, this is from BILL!\n"
# 502 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You have to thank him for me!\p"
# 503 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You know, you've been fantastic.\n"
# 504 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I want you to have this.$"
# 505 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 506 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy::
# 507 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 332 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 508 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received a MOON STONE\n"
# 509 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "from LOSTELLE's daddy.$"
# 510 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 511 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag::
# 512 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 337 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 513 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Your BAG's not going to fit another\n"
# 514 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "thing…$"
# 515 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 516 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning::
# 517 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 342 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 518 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "All right, I'll get the GAME CORNER\n"
# 519 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "running right away.\p"
# 520 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "You have to come visit with a\n"
# 521 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "friend.$"
# 522 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 523 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool::
# 524 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 349 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
# 525 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Listen, listen!\p"
# 526 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Please show me you being cool\n"
# 527 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "again!$"
