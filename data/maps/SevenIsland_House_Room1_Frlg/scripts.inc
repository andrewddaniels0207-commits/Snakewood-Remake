# 1 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 2 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room1_OnTransition
# 5 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 3 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 9 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 4 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 11 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 12 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 5 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 13 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 14 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 6 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 16 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.2byte 0
# 17 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 18 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 19 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_OnTransition::
# 20 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 11 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 21 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ValidateEReaderTrainer
# 22 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 12 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 23 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 24 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_OnTransition_2
# 25 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_OnTransition_1:
# 26 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 15 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 27 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
# 28 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_ne SevenIsland_House_Room1_OnTransition_5
# 29 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_OnTransition_4:
# 30 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 31 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 32 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_OnTransition_2:
# 33 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 13 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 34 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout
# 35 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_OnTransition_1
# 36 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 37 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_OnTransition_5:
# 38 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 16 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 39 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor
# 40 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_OnTransition_4
# 41 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 42 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 43 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout::
# 44 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 22 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 45 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setvar TRAINER_VISITING, TRUE
# 46 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 23 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 47 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 4, 2
# 48 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 24 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 49 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN
# 50 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 25 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 51 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_SEVEN_ISLAND_HOUSE_ROOM1_DOOR_OPEN
# 52 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 53 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 54 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 55 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor::
# 56 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 30 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 57 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 3, 2
# 58 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 31 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 59 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 60 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 61 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 62 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 63 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle::
# 64 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 36 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 65 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	lockall
# 66 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 37 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 67 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 68 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 38 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 69 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerReEnterRoom
# 70 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 39 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 71 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 72 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 40 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 73 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer
# 74 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 41 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 75 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 76 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 42 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 77 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN
# 78 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 43 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 79 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 80 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 44 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 81 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 82 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 45 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 83 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1
# 84 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_2
# 85 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_1:
# 86 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 48 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 87 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2
# 88 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_5
# 89 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_4:
# 90 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 51 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 91 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3
# 92 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_8
# 93 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_7:
# 94 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 54 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 95 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 96 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 55 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 97 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
# 98 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 56 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 99 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	releaseall
# 100 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 101 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 102 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_2:
# 103 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 46 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 104 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_BattleWonComment
# 105 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_1
# 106 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 107 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_5:
# 108 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 49 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 109 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_BattleLostComment
# 110 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_4
# 111 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 112 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_8:
# 113 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 52 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 114 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_BattleTiedComment
# 115 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_7
# 116 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 117 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 118 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleWonComment::
# 119 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 61 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 120 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_AstoundingBattle
# 121 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 122 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 123 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 124 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleLostComment::
# 125 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 66 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 126 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_FeelYourDisappointment
# 127 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 128 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 129 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 130 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_BattleTiedComment::
# 131 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 71 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 132 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DrawWasIt
# 133 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 134 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 135 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 136 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 75 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 137 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerReEnterRoom:
# 138 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 76 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 139 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_down
# 140 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 77 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 141 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 142 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 143 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 80 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 144 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer:
# 145 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 81 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 146 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 147 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 82 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 148 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_in_place_faster_down
# 149 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 83 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 150 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 151 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 152 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWoman::
# 153 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 87 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 154 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	lock
# 155 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 88 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 156 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	faceplayer
# 157 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 89 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 158 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ValidateEReaderTrainer
# 159 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 90 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 160 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 161 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_OldWoman_2
# 162 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWoman_1:
# 163 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 93 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 164 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare TRAINER_VISITING, TRUE
# 165 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_OldWoman_5
# 166 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWoman_4:
# 167 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 96 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 168 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 169 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 97 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 170 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	release
# 171 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 172 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 173 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWoman_2:
# 174 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 91 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 175 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer
# 176 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_OldWoman_1
# 177 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 178 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWoman_5:
# 179 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 94 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 180 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting
# 181 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_OldWoman_4
# 182 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 183 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 184 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer::
# 185 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 102 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 186 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 187 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 103 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 188 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	release
# 189 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 190 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 191 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 192 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting::
# 193 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 108 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 194 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special SavePlayerParty
# 195 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 109 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 196 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special BufferEReaderTrainerName
# 197 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 110 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 198 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
# 199 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 111 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 200 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 201 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_2
# 202 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_1:
# 203 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 114 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 204 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_ChooseParty
# 205 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 115 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 206 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 207 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_5
# 208 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_4:
# 209 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 118 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 210 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
# 211 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 119 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 212 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 213 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_8
# 214 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_7:
# 215 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 122 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 216 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 217 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 123 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 218 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call Common_EventScript_SaveGame
# 219 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 124 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 220 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 221 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_11
# 222 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_10:
# 223 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 127 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 224 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special SavePlayerParty
# 225 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 128 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 226 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 227 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 129 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 228 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DontHoldAnythingBack
# 229 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 130 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 230 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	closemessage
# 231 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 131 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 232 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 233 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_14
# 234 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_13:
# 235 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 134 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 236 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 237 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_17
# 238 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_16:
# 239 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 137 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 240 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 241 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_20
# 242 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_19:
# 243 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 140 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 244 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM2, 3, 1
# 245 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 141 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 246 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitstate
# 247 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 142 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 248 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	release
# 249 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 250 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 251 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_2:
# 252 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 112 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 253 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_DeclineBattle
# 254 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_1
# 255 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 256 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_5:
# 257 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 116 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 258 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_DeclineBattle
# 259 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_4
# 260 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 261 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_8:
# 262 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 120 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 263 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_DeclineBattle
# 264 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_7
# 265 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 266 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_11:
# 267 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 125 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 268 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_DeclineBattle
# 269 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_10
# 270 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 271 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_14:
# 272 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 132 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 273 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth
# 274 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_13
# 275 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 276 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_17:
# 277 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 135 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 278 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_EnterBattleRoomEast
# 279 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_16
# 280 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 281 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_20:
# 282 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 138 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 283 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call SevenIsland_House_Room1_EventScript_EnterBattleRoomWest
# 284 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_19
# 285 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 286 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 287 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_DeclineBattle::
# 288 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 147 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 289 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 290 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 148 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 291 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OhYouWontBattle
# 292 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 149 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 293 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	release
# 294 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 295 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 296 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 297 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_ChooseParty::
# 298 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 154 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 299 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_LimitThreeMonsPerSide
# 300 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 155 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 301 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 302 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 156 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 303 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ChooseHalfPartyForBattle
# 304 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 157 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 305 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitstate
# 306 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 307 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 308 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 309 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth::
# 310 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 162 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 311 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
# 312 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 163 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 313 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth
# 314 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 164 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 315 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 316 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 317 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 318 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 319 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomEast::
# 320 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 169 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 321 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight
# 322 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 170 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 323 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast
# 324 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 171 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 325 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 326 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 327 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 328 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 329 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_EnterBattleRoomWest::
# 330 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 176 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 331 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
# 332 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 177 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 333 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest
# 334 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 178 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 335 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 336 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	return
# 337 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 338 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 339 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 182 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 340 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth:
# 341 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 183 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 342 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 343 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 184 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 344 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 345 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 185 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 346 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 347 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 186 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 348 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 349 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 350 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 189 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 351 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast:
# 352 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 190 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 353 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 354 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 191 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 355 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 356 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 192 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 357 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 358 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 193 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 359 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 360 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 361 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 196 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 362 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest:
# 363 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 197 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 364 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 365 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 198 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 366 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_left
# 367 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 199 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 368 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 369 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 200 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 370 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 371 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 372 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 203 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 373 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft:
# 374 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 204 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 375 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_left
# 376 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 205 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 377 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_in_place_faster_right
# 378 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 206 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 379 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 380 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 381 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 209 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 382 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight:
# 383 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 210 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 384 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 385 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 211 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 386 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_in_place_faster_left
# 387 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 212 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 388 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_end
# 389 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 390 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_Box::
# 391 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 216 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 392 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SlightBreezeAroundBox, MSGBOX_SIGN
# 393 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	end
# 394 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 395 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 396 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles::
# 397 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 220 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 398 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I may not look like much now,\n"
# 399 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "but when I was younger…\p"
# 400 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I flew everywhere, challenging\n"
# 401 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "TRAINERS wherever I found them.\p"
# 402 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Now, my only source of enjoyment\n"
# 403 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "is reminiscing about the past while\l"
# 404 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "watching battles.$"
# 405 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 406 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_SlightBreezeAroundBox::
# 407 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 230 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 408 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "There is a slight breeze blowing\n"
# 409 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "around the box.$"
# 410 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 411 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_ChallengeVisitingTrainer::
# 412 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 235 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 413 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Ah!\n"
# 414 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Welcome, my friend!\p"
# 415 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Let me tell you something. There's\n"
# 416 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "a hidden room in the basement.\p"
# 417 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "A TRAINER named {STR_VAR_1} is\n"
# 418 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "waiting there now.\p"
# 419 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Tell me, you did come to challenge\n"
# 420 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}, am I right?$"
# 421 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 422 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_OhYouWontBattle::
# 423 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 246 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 424 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Oh…\n"
# 425 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "You won't battle…\p"
# 426 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I see, I see.\n"
# 427 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "… …\p"
# 428 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Well, perhaps if you change your\n"
# 429 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "mind, do come back.$"
# 430 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 431 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_LimitThreeMonsPerSide::
# 432 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 255 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 433 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Ah!\n"
# 434 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "You will battle for me?\p"
# 435 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "It was worth my time moving the\n"
# 436 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "box aside, then.\p"
# 437 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "… …\n"
# 438 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "But there is one slight problem.\p"
# 439 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "This hidden room is not built very\n"
# 440 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "sturdy.\p"
# 441 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Can I get you to limit it to\n"
# 442 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "battles of three POKéMON per side?$"
# 443 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 444 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_SaveProgressBeforeBattle::
# 445 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 268 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 446 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Fine! Before your battle, would\n"
# 447 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "you like to save your game?$"
# 448 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 449 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_DontHoldAnythingBack::
# 450 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 273 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 451 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "All right.\n"
# 452 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Don't hold anything back!$"
# 453 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 454 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_StrVar1_1::
# 455 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 278 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 456 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"
# 457 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 458 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room2_Text_MatchEndedUpDraw::
# 459 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 282 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 460 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "The match ended up a draw.$"
# 461 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 462 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_DrawWasIt::
# 463 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 286 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 464 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "A draw, was it?\p"
# 465 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "However, let me say that it was\n"
# 466 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "a worthy spectacle.\p"
# 467 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I'd say it was a wonderful battle\n"
# 468 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "with a real sense of depth!$"
# 469 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 470 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_StrVar1_2::
# 471 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 294 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 472 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"
# 473 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 474 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_AstoundingBattle::
# 475 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 298 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 476 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Bravo!\p"
# 477 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Bravo, indeed!\n"
# 478 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "What an astounding battle!\p"
# 479 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "It was so astounding, why, it keeps\n"
# 480 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "filling my eyes with tears!\p"
# 481 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "The thrust and parry of expertly\n"
# 482 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "used techniques!\p"
# 483 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "The clash of power upon power!\p"
# 484 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Yes!\n"
# 485 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "It was sheer magnificence!$"
# 486 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 487 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_StrVar1_3::
# 488 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 311 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 489 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"
# 490 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"

# 491 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_Text_FeelYourDisappointment::
# 492 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 315 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
# 493 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Too bad!\n"
# 494 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I feel your disappointment.\p"
# 495 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "However, that disappointment is\n"
# 496 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "what will make you better.\p"
# 497 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Use it, learn from it, and make it\n"
# 498 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "motivate you to seek greatness.\p"
# 499 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Forget not this disappointment\n"
# 500 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "and redouble your training!$"
