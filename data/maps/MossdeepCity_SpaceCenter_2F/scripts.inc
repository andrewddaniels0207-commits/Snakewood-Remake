# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition::
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_OnTransition_2
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition_1:
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_OnTransition_5
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition_4:
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition_2:
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_OnTransition_1
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition_5:
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_OnTransition_4
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 3
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_RICH_BOY, 3, 2
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_GENTLEMAN, 1, 3
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_6, 11, 2
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_7, 15, 2
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_5, 13, 4
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_2
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_1:
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_2:
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_1
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_6
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_7
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_5
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated::
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated::
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated::
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_Scientist_2
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist_1:
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_Scientist_5
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist_4:
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_Scientist_8
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist_7:
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist_2:
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Scientist_1
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist_5:
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Scientist_4
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist_8:
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Scientist_7
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_2
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_1:
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_5
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_4:
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_8
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_7:
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_2:
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_1
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_5:
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_4
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_8:
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_7
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_2
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_1:
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_5
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_4:
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_8
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_7:
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_2:
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_1
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_5:
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_4
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_8:
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_7
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_Steven_2
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven_1:
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_Steven_6
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven_4:
# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven_2:
# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Steven_1
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven_6:
# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_Steven_4
# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight::
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth::
# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 474 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 475 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 477 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 478 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 479 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 480 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 482 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 483 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 484 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 485 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 487 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 488 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 489 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 490 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 492 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 493 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 494 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 495 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 496 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 497 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 498 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 499 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 500 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
# 502 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt_2
# 503 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt_1:
# 504 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 505 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 507 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 508 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 509 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 510 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 512 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 513 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 514 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 515 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 516 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt_2:
# 517 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 518 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt_1
# 520 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 521 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 522 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 523 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 524 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 525 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 526 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 527 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 528 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 529 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 530 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 531 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 532 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 533 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 534 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 535 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 536 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
# 537 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_2
# 538 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_1:
# 539 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 540 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 541 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 542 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 543 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 544 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 545 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_2:
# 546 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 547 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
# 548 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_1
# 549 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 550 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 551 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
# 552 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 553 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_STEVEN
# 554 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 555 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 556 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 557 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_3
# 558 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_1:
# 559 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 560 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 561 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 562 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 563 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 564 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 565 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 566 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 567 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_3:
# 568 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 569 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
# 570 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle_1
# 571 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 572 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 573 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 574 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 575 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 576 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 577 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 578 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 579 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 580 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 581 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 582 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 583 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 584 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 585 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 586 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 587 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 588 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 589 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 590 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 591 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 592 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 593 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 594 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 595 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 596 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 597 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 598 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 599 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 600 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 601 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 602 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 603 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 604 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 605 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 606 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 607 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 608 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 609 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 610 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 611 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 612 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 613 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 614 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 615 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_6
# 616 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 617 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_7
# 618 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 619 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_5
# 620 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 621 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_TABITHA
# 622 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 623 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_MAXIE
# 624 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 625 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 626 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 627 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_SCIENTIST, DIR_SOUTH
# 628 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 629 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_GENTLEMAN, 11, 8
# 630 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 631 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_GENTLEMAN, DIR_NORTH
# 632 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 633 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_RICH_BOY, 6, 2
# 634 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 635 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_RICH_BOY, DIR_NORTH
# 636 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 637 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 638 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 639 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 640 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 641 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 642 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 643 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 644 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 645 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 646 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 647 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 648 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 649 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 650 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 651 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_STEVEN
# 652 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 653 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 654 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 655 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 656 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 657 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 658 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 659 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 660 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 661 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 662 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 663 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 664 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 665 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 666 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 667 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 668 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 669 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 670 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 671 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 672 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 673 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 674 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 675 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 676 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 677 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 678 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 679 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer_3
# 680 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 681 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer_4
# 682 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer_1:
# 683 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 684 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 685 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer_3:
# 686 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 687 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 688 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer_1
# 689 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 690 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer_4:
# 691 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 692 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
# 693 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer_1
# 694 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 695 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 696 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 697 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 698 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_NORTH
# 699 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 700 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 701 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 702 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
# 703 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 704 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_EAST
# 705 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 706 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 707 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 708 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 709 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 710 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 711 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 712 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 713 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 714 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 715 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_2
# 716 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_1:
# 717 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 718 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 719 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_5
# 720 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_4:
# 721 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 722 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 723 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 724 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 725 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 726 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 727 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 728 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 729 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_2:
# 730 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 731 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 732 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_1
# 733 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 734 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_5:
# 735 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 736 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 737 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_4
# 738 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 739 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 740 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 741 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 742 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 743 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 744 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 745 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 746 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 747 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 748 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 749 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 750 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 751 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 752 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 753 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 754 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 755 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 756 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets::
# 757 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 758 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MOSSDEEP has mainly sunny weather,\n"
# 759 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 760 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 761 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 762 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 763 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel::
# 764 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 765 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would TEAM MAGMA want to steal\n"
# 766 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "our rocket fuel in the first place?$"
# 767 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 768 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut::
# 769 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 770 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 771 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 772 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 773 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 774 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 775 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis::
# 776 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 777 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If TEAM MAGMA takes the rocket fuel,\n"
# 778 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I won't be able to go to space!\p"
# 779 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "They can't be allowed to get away\n"
# 780 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "with such an outrage!$"
# 781 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 782 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace::
# 783 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 784 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 785 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 786 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 787 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace::
# 788 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 789 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "TEAM MAGMA…\n"
# 790 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Do they want to go to space, too?$"
# 791 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 792 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn::
# 793 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 794 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's wrong with you?\p"
# 795 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're outnumbered three to one,\n"
# 796 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "but you still want to take us on?$"
# 797 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 798 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer::
# 799 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 800 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 801 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 802 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 803 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro::
# 804 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 805 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 806 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, I'll go first!$"
# 807 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 808 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat::
# 809 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 810 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 811 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 812 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 813 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro::
# 814 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 815 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
# 816 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm up next!$"
# 817 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 818 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat::
# 819 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 820 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 821 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 822 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 823 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro::
# 824 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 825 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
# 826 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 827 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 828 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat::
# 829 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 830 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 831 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 832 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 833 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle::
# 834 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 496 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 835 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 836 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 837 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 838 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle::
# 839 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 840 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
# 841 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We look worse than usual by triple!$"
# 842 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 843 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle::
# 844 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 845 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
# 846 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "at all?$"
# 847 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 848 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou::
# 849 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 850 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehehe!\p"
# 851 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We come all the way here to get some\n"
# 852 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel, and we're interfered with again!\p"
# 853 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you're going to mess with us too,\n"
# 854 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we'll take care of you at the same time!$"
# 855 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 856 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere::
# 857 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 858 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Clear out of the way!\n"
# 859 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Don't you dare interfere!$"
# 860 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 861 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel::
# 862 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 524 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 863 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: TEAM MAGMA…\p"
# 864 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's the point of stealing rocket\n"
# 865 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel?$"
# 866 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 867 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano::
# 868 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 530 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 869 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Fufufu… Since you're so\n"
# 870 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "curious, you deserve an explanation.\p"
# 871 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We're going to jettison the entire\n"
# 872 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "load into MT. CHIMNEY!\p"
# 873 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "With GROUDON gone, we have no need\n"
# 874 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for that slag heap of a mountain!\p"
# 875 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "So we'll use the fuel's power to make\n"
# 876 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the volcano erupt!\p"
# 877 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It will be savage!$"
# 878 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 879 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle::
# 880 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 542 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 881 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 882 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're going to help me?\p"
# 883 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Let's go into battle together!\n"
# 884 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are you ready?$"
# 885 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 886 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly::
# 887 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 549 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 888 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Then, hurry!\n"
# 889 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Get ready quickly!$"
# 890 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 891 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand::
# 892 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 554 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 893 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
# 894 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I just want to expand the land mass…$"
# 895 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 896 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_TabithaDefeat::
# 897 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 559 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 898 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"
# 899 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 900 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided::
# 901 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 563 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 902 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: We failed to make the volcano\n"
# 903 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "erupt…\p"
# 904 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We failed to control GROUDON after\n"
# 905 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we had awoken it…\p"
# 906 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Is our goal to expand the land\n"
# 907 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "misguided?\p"
# 908 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\n"
# 909 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 910 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If…\n"
# 911 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If we, TEAM MAGMA, are wrong…\l"
# 912 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 913 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Then might TEAM AQUA's goal to expand\n"
# 914 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the sea also be equally misguided?$"
# 915 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 916 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp::
# 917 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 579 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 918 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: All right…\n"
# 919 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We will give up on the fuel…\p"
# 920 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "There appear to be more important\n"
# 921 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "matters that I must examine…$"
# 922 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 923 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome::
# 924 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 586 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
# 925 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Whew, that was too tense.\n"
# 926 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}{KUN}, thank you.\p"
# 927 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I have something to give you as\n"
# 928 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "thanks for your support.\p"
# 929 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Please come see me at home\n"
# 930 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "after this.\p"
# 931 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
# 932 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I live right here on this island.$"
