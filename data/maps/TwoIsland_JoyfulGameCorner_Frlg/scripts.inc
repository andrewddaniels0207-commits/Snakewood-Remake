TwoIsland_JoyfulGameCorner_Frlg_MapScripts::
# 2 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_JoyfulGameCorner_OnTransition
# 3 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwoIsland_JoyfulGameCorner_OnWarp
# 9 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad_Frlg
# 4 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 0, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene
# 6 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene
# 7 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0


TwoIsland_JoyfulGameCorner_OnTransition::
# 13 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_OnTransition_2
TwoIsland_JoyfulGameCorner_OnTransition_1:
	end

TwoIsland_JoyfulGameCorner_OnTransition_2:
# 14 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	call TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos
	goto TwoIsland_JoyfulGameCorner_OnTransition_1


TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos::
# 20 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectxyperm LOCALID_JOYFUL_GAME_CORNER_DADDY, 6, 2
# 21 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_DADDY, MOVEMENT_TYPE_FACE_DOWN
# 22 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, MOVEMENT_TYPE_LOOK_AROUND
# 23 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
	return


# 27 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"

# 28 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_OnWarp:
# 29 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth
# 30 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant_Frlg
# 31 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.2byte 0

TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth::
# 36 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene::
# 41 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lockall
# 42 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 43 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 45 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 46 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy
# 47 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, Common_Movement_WalkInPlaceFasterDown
# 49 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
# 51 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	releaseall
	end


TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene::
# 56 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lockall
# 57 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 58 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyPacing
# 59 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 60 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo
# 61 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 62 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_WalkInPlaceFasterDown
# 63 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 64 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_PIN
# 65 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_ExclamationMark
# 66 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_Delay48
# 68 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer
# 70 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 71 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 72 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle
# 74 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 75 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_DOOR
# 76 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitse
# 77 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy
# 78 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 79 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 80 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	addobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 81 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, TwoIsland_JoyfulGameCorner_Movement_BikerLookAround
# 82 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 83 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland
# 84 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 86 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt
# 87 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing
# 88 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 89 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_EXIT
# 92 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	removeobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 93 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	fadedefaultbgm
# 94 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay 60
# 95 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor
# 96 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	clearflag FLAG_HIDE_THREE_ISLAND_LONE_BIKER
# 97 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 2
# 98 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 1
# 99 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	releaseall
	end


# 103 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyPacing:
# 104 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_left
# 105 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_right
# 106 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_right
# 107 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 108 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_up
# 109 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_16
# 110 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end

# 113 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer:
# 114 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 115 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 116 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 117 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_left
# 118 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end

# 121 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy:
# 122 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_left
# 123 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_right
# 124 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end

# 127 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_Movement_BikerLookAround:
# 128 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_left
# 129 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 130 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_right
# 131 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 132 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_in_place_faster_up
# 133 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_end

TwoIsland_JoyfulGameCorner_EventScript_InfoMan::
# 137 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 138 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 139 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_InfoMan_2
TwoIsland_JoyfulGameCorner_EventScript_InfoMan_1:
# 142 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_JoyfulGameCorner_EventScript_InfoMan_5
TwoIsland_JoyfulGameCorner_EventScript_InfoMan_4:
# 145 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday
# 146 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
	end

TwoIsland_JoyfulGameCorner_EventScript_InfoMan_2:
# 140 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto JoyfulGameCorner_EventScript_InfoMan2_Frlg
	goto TwoIsland_JoyfulGameCorner_EventScript_InfoMan_1

TwoIsland_JoyfulGameCorner_EventScript_InfoMan_5:
# 143 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon
	goto TwoIsland_JoyfulGameCorner_EventScript_InfoMan_4


TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon::
# 151 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon
# 152 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy::
# 157 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 158 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 159 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_2
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_1:
# 162 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_5
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_4:
# 165 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_8
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_7:
# 168 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland
# 169 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
	end

TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_2:
# 160 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto JoyfulGameCorner_EventScript_MinigameAttendant_Frlg
	goto TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_1

TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_5:
# 163 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning
	goto TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_4

TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_8:
# 166 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite
	goto TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_7


TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite::
# 174 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE, TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_2
TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_1:
# 177 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsForMe
# 178 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
# 179 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 180 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 181 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	message TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy
# 182 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmessage
# 183 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitfanfare
# 184 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 185 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	removeitem ITEM_METEORITE
# 186 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill
# 187 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
	end

TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_2:
# 175 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
	goto TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_1


TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone::
# 192 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	checkitemspace ITEM_MOON_STONE
# 193 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone_2
TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone_1:
# 196 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	additem ITEM_MOON_STONE
# 197 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER
# 198 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgreceiveditem TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy, ITEM_MOON_STONE
# 199 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
	end

TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone_2:
# 194 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone_1


TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning::
# 204 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning
# 205 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone::
# 210 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE
# 211 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag
# 212 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_EventScript_Lostelle::
# 217 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock
# 218 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	faceplayer
# 219 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool
# 220 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	release
	end


TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo::
# 224 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Now, where's LOSTELLE gotten to\n"
	.string "today?\p"
	.string "She always brings me lunch every\n"
	.string "day right about now…$"

TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle::
# 231 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hm? You, there!\n"
	.string "Are you a friend of LOSTELLE's?\p"
	.string "Have you seen LOSTELLE around?\n"
	.string "I don't know where she might be.\l"
	.string "She should've been here long ago.\p"
	.string "LOSTELLE's a cutie - she got my\n"
	.string "looks - so what if someone…\p"
	.string "What if something's happened to\n"
	.string "my LOSTELLE?!\p"
	.string "Please, help me find her!\n"
	.string "Please go search THREE ISLAND!$"

TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland::
# 245 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hah? What is this GAME CORNER?\n"
	.string "How much sadder can this get?\p"
	.string "Those clowns…\p"
	.string "They said they'd be waiting on the\n"
	.string "island, so where are they?\p"
	.string "Hey, you! Is this the only THREE\n"
	.string "ISLAND around here?$"

TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt::
# 255 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Try waking up before you crawl out\n"
	.string "of bed, you punk.\p"
	.string "This is TWO ISLAND!\p"
	.string "Move it! Get your filthy motorbike\n"
	.string "out of my place!$"

TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing::
# 263 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Huh…\n"
	.string "Oh, oh, gotcha.\p"
	.string "Tch…\n"
	.string "These islands are confusing…$"

TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor::
# 270 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Would you look at that?\n"
	.string "That punk scuffed up my floor.$"

TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland::
# 275 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hey, but listen! I'm begging you,\n"
	.string "you have to go to THREE ISLAND.\p"
	.string "If anything were to happen to my\n"
	.string "LOSTELLE…\p"
	.string "My place is the house with the red\n"
	.string "roof on THREE ISLAND.\p"
	.string "She may just show up late here,\n"
	.string "so I can't run off anywhere.\p"
	.string "That's why I have to get you to do\n"
	.string "me this big favor.$"

TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday::
# 288 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I'm sorry.\n"
	.string "We're not running any games today.$"

TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon::
# 293 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "We'll get the games going soon\n"
	.string "for you!$"

TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle::
# 298 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "So you rescued LOSTELLE?\n"
	.string "How can I thank you?\p"
	.string "LOSTELLE, darling, forgive me!\p"
	.string "Daddy didn't know you were scared\n"
	.string "and in trouble!$"

TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy::
# 306 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE: It's okay, Daddy.\n"
	.string "I got to be friends with {PLAYER}!$"

TwoIsland_JoyfulGameCorner_Text_ThisIsForMe::
# 311 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, what's that?\n"
	.string "You're saying that this is for me?\p"
	.string "How did you know that I love rare\n"
	.string "rocks and gems?\p"
	.string "You sure know how to make a guy\n"
	.string "happy.$"

TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy::
# 320 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "{PLAYER} handed the METEORITE\n"
	.string "to LOSTELLE's daddy.$"

TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill::
# 325 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, I see, this is from BILL!\n"
	.string "You have to thank him for me!\p"
	.string "You know, you've been fantastic.\n"
	.string "I want you to have this.$"

TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy::
# 332 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received a MOON STONE\n"
	.string "from LOSTELLE's daddy.$"

TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag::
# 337 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Your BAG's not going to fit another\n"
	.string "thing…$"

TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning::
# 342 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "All right, I'll get the GAME CORNER\n"
	.string "running right away.\p"
	.string "You have to come visit with a\n"
	.string "friend.$"

TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool::
# 349 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Listen, listen!\p"
	.string "Please show me you being cool\n"
	.string "again!$"
