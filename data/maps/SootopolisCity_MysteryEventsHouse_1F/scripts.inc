# 1 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_MapScripts::
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 2 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 4 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MysteryEventsHouse_1F_OnTransition
# 5 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 6 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 9 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 4 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 11 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
# 12 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 5 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
# 14 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 6 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 15 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.2byte 0
# 17 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 18 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 19 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_OnTransition::
# 20 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 11 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 21 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	frontier_checkvisittrainer
# 22 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 12 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 23 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, 0
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_OnTransition_2
# 25 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_OnTransition_1:
# 26 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 15 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 0
# 28 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_ne SootopolisCity_MysteryEventsHouse_1F_OnTransition_5
# 29 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_OnTransition_4:
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 31 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 32 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_OnTransition_2:
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_SetTrainerVisitingLayout
# 35 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_OnTransition_1
# 36 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 37 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_OnTransition_5:
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_MoveOldManToDoor
# 40 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_OnTransition_4
# 41 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 42 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 43 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_SetTrainerVisitingLayout::
# 44 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 22 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 45 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 46 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 23 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 47 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MYSTERY_EVENTS_OLD_MAN, 3, 2
# 48 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 49 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MYSTERY_EVENTS_OLD_MAN, MOVEMENT_TYPE_FACE_DOWN
# 50 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 25 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 51 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F_STAIRS_UNBLOCKED
# 52 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 53 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 54 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 55 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_MoveOldManToDoor::
# 56 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 57 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MYSTERY_EVENTS_OLD_MAN, 2, 2
# 58 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 31 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 59 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MYSTERY_EVENTS_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 60 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 61 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 62 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 63 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle::
# 64 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 36 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 65 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	lockall
# 66 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 37 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 67 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerExitStairs
# 68 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 69 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 71 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_MYSTERY_EVENTS_OLD_MAN, SootopolisCity_MysteryEventsHouse_1F_Movement_OldManWalkBehindPlayer
# 72 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 40 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 73 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 41 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 75 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	copyobjectxytoperm LOCALID_MYSTERY_EVENTS_OLD_MAN
# 76 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 42 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 77 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 78 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 43 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 79 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 80 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 44 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 81 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1
# 82 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_2
# 83 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_1:
# 84 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 47 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 85 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2
# 86 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_5
# 87 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_4:
# 88 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 50 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 89 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3
# 90 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_8
# 91 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_7:
# 92 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 53 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 93 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 94 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 54 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 95 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 0
# 96 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 55 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 97 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	releaseall
# 98 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 99 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 100 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_2:
# 101 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 45 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 102 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleWonComment
# 103 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_1
# 104 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 105 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_5:
# 106 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 48 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 107 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleLostComment
# 108 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_4
# 109 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 110 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_8:
# 111 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 51 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 112 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleTiedComment
# 113 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_7
# 114 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 115 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 116 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleWonComment::
# 117 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 60 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 118 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_ThatWasSuperlative, MSGBOX_DEFAULT
# 119 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 120 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 121 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 122 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleLostComment::
# 123 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 65 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 124 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou, MSGBOX_DEFAULT
# 125 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 126 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 127 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 128 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleTiedComment::
# 129 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 70 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 130 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff, MSGBOX_DEFAULT
# 131 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 132 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 133 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 134 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 74 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 135 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerExitStairs:
# 136 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 75 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 137 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_down
# 138 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 76 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 139 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 140 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 141 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 79 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 142 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_OldManWalkBehindPlayer:
# 143 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 80 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 144 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 145 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 81 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 146 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_in_place_faster_down
# 147 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 82 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 148 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 149 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 150 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan::
# 151 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 86 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 152 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	lock
# 153 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 87 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 154 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	faceplayer
# 155 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 88 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 156 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	frontier_checkvisittrainer
# 157 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 89 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 158 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, 1
# 159 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_2
# 160 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_1:
# 161 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 92 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 162 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 1
# 163 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_5
# 164 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_4:
# 165 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 95 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 166 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles, MSGBOX_DEFAULT
# 167 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 96 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 168 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	release
# 169 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 170 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 171 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_2:
# 172 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 90 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 173 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_InvalidVisitingTrainer
# 174 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_1
# 175 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 176 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_5:
# 177 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 93 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 178 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting
# 179 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_4
# 180 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 181 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 182 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_InvalidVisitingTrainer::
# 183 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 101 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 184 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles, MSGBOX_DEFAULT
# 185 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 102 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 186 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	release
# 187 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 188 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 189 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 190 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting::
# 191 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 107 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 192 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special SavePlayerParty
# 193 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 108 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 194 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special BufferEReaderTrainerName
# 195 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 109 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 196 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
# 197 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 110 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 198 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 199 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_2
# 200 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_1:
# 201 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 113 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 202 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_ChooseParty
# 203 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 114 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 204 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, 0
# 205 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_5
# 206 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_4:
# 207 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 117 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 208 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
# 209 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 118 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 210 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
# 211 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_8
# 212 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_7:
# 213 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 121 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 214 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 215 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 122 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 216 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call Common_EventScript_SaveGame
# 217 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 123 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 218 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 219 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_11
# 220 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_10:
# 221 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 126 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 222 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special SavePlayerParty
# 223 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 127 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 224 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 225 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 128 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 226 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch, MSGBOX_DEFAULT
# 227 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 129 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 228 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	closemessage
# 229 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 130 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 230 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 231 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_14
# 232 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_13:
# 233 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 133 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 234 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 235 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_17
# 236 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_16:
# 237 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 136 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 238 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 239 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_20
# 240 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_19:
# 241 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 139 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 242 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F, 3, 1
# 243 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 140 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 244 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitstate
# 245 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 141 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 246 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	release
# 247 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 248 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 249 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_2:
# 250 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 111 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 251 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
# 252 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_1
# 253 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 254 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_5:
# 255 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 115 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 256 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
# 257 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_4
# 258 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 259 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_8:
# 260 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 119 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 261 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
# 262 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_7
# 263 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 264 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_11:
# 265 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 124 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 266 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
# 267 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_10
# 268 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 269 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_14:
# 270 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 131 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 271 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementNorth
# 272 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_13
# 273 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 274 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_17:
# 275 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 134 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 276 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementEast
# 277 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_16
# 278 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 279 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_20:
# 280 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 137 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 281 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementWest
# 282 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_19
# 283 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 284 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 285 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle::
# 286 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 146 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 287 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 288 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 147 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 289 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_YouWontBattle, MSGBOX_DEFAULT
# 290 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 148 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 291 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	release
# 292 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 293 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 294 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 295 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_ChooseParty::
# 296 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 153 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 297 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_KeepItTo3On3, MSGBOX_DEFAULT
# 298 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 154 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 299 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 300 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 155 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 301 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special ChooseHalfPartyForBattle
# 302 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 156 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 303 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitstate
# 304 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 305 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 306 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 307 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementNorth::
# 308 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 161 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 309 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideLeft
# 310 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 162 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 311 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementNorth
# 312 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 163 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 313 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 314 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 315 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 316 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 317 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementEast::
# 318 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 168 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 319 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideRight
# 320 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 169 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 321 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementEast
# 322 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 170 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 323 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 324 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 325 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 326 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 327 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementWest::
# 328 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 175 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 329 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideLeft
# 330 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 176 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 331 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementWest
# 332 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 177 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 333 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 334 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 335 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 336 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 337 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 181 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 338 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementNorth:
# 339 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 182 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 340 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 341 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 183 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 342 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 343 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 184 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 344 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 345 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 185 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 346 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 347 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 348 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 188 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 349 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementEast:
# 350 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 189 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 351 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 352 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 190 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 353 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 354 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 191 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 355 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 356 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 192 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 357 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 358 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 359 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 195 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 360 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementWest:
# 361 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 196 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 362 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 363 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 197 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 364 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_left
# 365 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 198 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 366 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 367 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 199 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 368 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 369 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 370 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 202 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 371 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideLeft:
# 372 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 203 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 373 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_left
# 374 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 204 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 375 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 376 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 205 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 377 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 378 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 379 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 208 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 380 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideRight:
# 381 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 209 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 382 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 383 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 210 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 384 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 385 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 211 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 386 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 387 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 388 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles::
# 389 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 214 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 390 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "When I was young, I traveled the world\n"
# 391 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "as a POKéMON TRAINER.\p"
# 392 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Now that I've become an old buzzard,\n"
# 393 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "my only amusement is watching young\l"
# 394 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "TRAINERS battle.$"
# 395 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 396 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_DoorAppearsToBeLocked::
# 397 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 222 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 398 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "The door appears to be locked.$"
# 399 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 400 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_ChallengeVisitingTrainer::
# 401 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 226 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 402 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "A TRAINER named {STR_VAR_1}\n"
# 403 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "is visiting my home.\p"
# 404 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Would you like to challenge\n"
# 405 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}?$"
# 406 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 407 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_YouWontBattle::
# 408 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 233 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 409 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "You won't battle? I'm disappointed\n"
# 410 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "that I can't see you battle…$"
# 411 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 412 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_KeepItTo3On3::
# 413 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 238 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 414 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Oh, good, good!\p"
# 415 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "But my house isn't all that sturdy.\p"
# 416 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Could I ask you to keep it down to\n"
# 417 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "a 3-on-3 match?$"
# 418 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 419 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle::
# 420 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 245 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 421 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Before you two battle, you should\n"
# 422 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "save your progress.$"
# 423 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 424 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch::
# 425 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 250 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 426 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "I hope to see a good match!$"
# 427 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 428 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Tie::
# 429 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 254 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 430 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"
# 431 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 432 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw::
# 433 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 258 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 434 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "The match ended up a draw.$"
# 435 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 436 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff::
# 437 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 262 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 438 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "So, it became a standoff.\p"
# 439 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "It was a brilliant match in which\n"
# 440 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "neither side conceded a step!$"
# 441 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 442 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Won::
# 443 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 268 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 444 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"
# 445 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 446 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_ThatWasSuperlative::
# 447 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 272 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 448 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "That was superlative!\p"
# 449 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Why, it was like seeing myself in\n"
# 450 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "my youth again!$"
# 451 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 452 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Lost::
# 453 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 278 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 454 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"
# 455 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 456 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou::
# 457 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 282 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
# 458 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Ah, too bad for you!\p"
# 459 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "But it was a good match.\n"
# 460 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "I hope you can win next time.$"
