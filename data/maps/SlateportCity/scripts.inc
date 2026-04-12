# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 3 "data/maps/SlateportCity/scripts.pory"
# 2 "data/maps/SlateportCity/scripts.pory"
# 4 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 5 "data/maps/SlateportCity/scripts.pory"
# 3 "data/maps/SlateportCity/scripts.pory"
# 6 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity/scripts.pory"

# 9 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SlateportCity/scripts.pory"
# 4 "data/maps/SlateportCity/scripts.pory"
# 11 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 12 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 13 "data/maps/SlateportCity/scripts.pory"

# 14 "data/maps/SlateportCity/scripts.pory"

# 15 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition::
# 16 "data/maps/SlateportCity/scripts.pory"
# 9 "data/maps/SlateportCity/scripts.pory"
# 17 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 18 "data/maps/SlateportCity/scripts.pory"
# 10 "data/maps/SlateportCity/scripts.pory"
# 19 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 20 "data/maps/SlateportCity/scripts.pory"
# 11 "data/maps/SlateportCity/scripts.pory"
# 21 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 22 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_OnTransition_2
# 23 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition_1:
# 24 "data/maps/SlateportCity/scripts.pory"
# 14 "data/maps/SlateportCity/scripts.pory"
# 25 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 26 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_OnTransition_5
# 27 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition_4:
# 28 "data/maps/SlateportCity/scripts.pory"
	end
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition_2:
# 31 "data/maps/SlateportCity/scripts.pory"
# 12 "data/maps/SlateportCity/scripts.pory"
# 32 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_MovePeopleForSternInterview
# 33 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_OnTransition_1
# 34 "data/maps/SlateportCity/scripts.pory"

# 35 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition_5:
# 36 "data/maps/SlateportCity/scripts.pory"
# 15 "data/maps/SlateportCity/scripts.pory"
# 37 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_SetReadyForScottScene
# 38 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_OnTransition_4
# 39 "data/maps/SlateportCity/scripts.pory"

# 40 "data/maps/SlateportCity/scripts.pory"

# 41 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 42 "data/maps/SlateportCity/scripts.pory"
# 21 "data/maps/SlateportCity/scripts.pory"
# 43 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 44 "data/maps/SlateportCity/scripts.pory"
# 22 "data/maps/SlateportCity/scripts.pory"
# 45 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 46 "data/maps/SlateportCity/scripts.pory"
# 23 "data/maps/SlateportCity/scripts.pory"
# 47 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 48 "data/maps/SlateportCity/scripts.pory"
	return
# 49 "data/maps/SlateportCity/scripts.pory"

# 50 "data/maps/SlateportCity/scripts.pory"

# 51 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 52 "data/maps/SlateportCity/scripts.pory"
# 28 "data/maps/SlateportCity/scripts.pory"
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 54 "data/maps/SlateportCity/scripts.pory"
# 29 "data/maps/SlateportCity/scripts.pory"
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 56 "data/maps/SlateportCity/scripts.pory"
# 30 "data/maps/SlateportCity/scripts.pory"
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 58 "data/maps/SlateportCity/scripts.pory"
# 31 "data/maps/SlateportCity/scripts.pory"
# 59 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 60 "data/maps/SlateportCity/scripts.pory"
# 32 "data/maps/SlateportCity/scripts.pory"
# 61 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 62 "data/maps/SlateportCity/scripts.pory"
# 33 "data/maps/SlateportCity/scripts.pory"
# 63 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 64 "data/maps/SlateportCity/scripts.pory"
# 34 "data/maps/SlateportCity/scripts.pory"
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 66 "data/maps/SlateportCity/scripts.pory"
# 35 "data/maps/SlateportCity/scripts.pory"
# 67 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 68 "data/maps/SlateportCity/scripts.pory"
# 36 "data/maps/SlateportCity/scripts.pory"
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 70 "data/maps/SlateportCity/scripts.pory"
# 37 "data/maps/SlateportCity/scripts.pory"
# 71 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 72 "data/maps/SlateportCity/scripts.pory"
# 38 "data/maps/SlateportCity/scripts.pory"
# 73 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 74 "data/maps/SlateportCity/scripts.pory"
# 39 "data/maps/SlateportCity/scripts.pory"
# 75 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 76 "data/maps/SlateportCity/scripts.pory"
# 40 "data/maps/SlateportCity/scripts.pory"
# 77 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 78 "data/maps/SlateportCity/scripts.pory"
# 41 "data/maps/SlateportCity/scripts.pory"
# 79 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 80 "data/maps/SlateportCity/scripts.pory"
	return
# 81 "data/maps/SlateportCity/scripts.pory"

# 82 "data/maps/SlateportCity/scripts.pory"

# 83 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 84 "data/maps/SlateportCity/scripts.pory"
# 46 "data/maps/SlateportCity/scripts.pory"
# 85 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 86 "data/maps/SlateportCity/scripts.pory"
# 47 "data/maps/SlateportCity/scripts.pory"
# 87 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 88 "data/maps/SlateportCity/scripts.pory"
# 48 "data/maps/SlateportCity/scripts.pory"
# 89 "data/maps/SlateportCity/scripts.pory"
	compare VAR_0x8004, 30
# 90 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_SetReadyForScottScene_2
# 91 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene_1:
# 92 "data/maps/SlateportCity/scripts.pory"
# 51 "data/maps/SlateportCity/scripts.pory"
# 93 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 94 "data/maps/SlateportCity/scripts.pory"
# 52 "data/maps/SlateportCity/scripts.pory"
# 95 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 96 "data/maps/SlateportCity/scripts.pory"
	return
# 97 "data/maps/SlateportCity/scripts.pory"

# 98 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene_2:
# 99 "data/maps/SlateportCity/scripts.pory"
# 49 "data/maps/SlateportCity/scripts.pory"
# 100 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_MoveScottLeft
# 101 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_SetReadyForScottScene_1
# 102 "data/maps/SlateportCity/scripts.pory"

# 103 "data/maps/SlateportCity/scripts.pory"

# 104 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 105 "data/maps/SlateportCity/scripts.pory"
# 57 "data/maps/SlateportCity/scripts.pory"
# 106 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 107 "data/maps/SlateportCity/scripts.pory"
# 58 "data/maps/SlateportCity/scripts.pory"
# 108 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 109 "data/maps/SlateportCity/scripts.pory"
	return
# 110 "data/maps/SlateportCity/scripts.pory"

# 111 "data/maps/SlateportCity/scripts.pory"

# 112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 113 "data/maps/SlateportCity/scripts.pory"
# 63 "data/maps/SlateportCity/scripts.pory"
# 114 "data/maps/SlateportCity/scripts.pory"
	lockall
# 115 "data/maps/SlateportCity/scripts.pory"
# 64 "data/maps/SlateportCity/scripts.pory"
# 116 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 117 "data/maps/SlateportCity/scripts.pory"
# 65 "data/maps/SlateportCity/scripts.pory"
# 118 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 119 "data/maps/SlateportCity/scripts.pory"
# 66 "data/maps/SlateportCity/scripts.pory"
# 120 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 121 "data/maps/SlateportCity/scripts.pory"
# 67 "data/maps/SlateportCity/scripts.pory"
# 122 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/SlateportCity/scripts.pory"
# 68 "data/maps/SlateportCity/scripts.pory"
# 124 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 125 "data/maps/SlateportCity/scripts.pory"
# 69 "data/maps/SlateportCity/scripts.pory"
# 126 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 127 "data/maps/SlateportCity/scripts.pory"
# 70 "data/maps/SlateportCity/scripts.pory"
# 128 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 129 "data/maps/SlateportCity/scripts.pory"
# 71 "data/maps/SlateportCity/scripts.pory"
# 130 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/SlateportCity/scripts.pory"
# 72 "data/maps/SlateportCity/scripts.pory"
# 132 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 133 "data/maps/SlateportCity/scripts.pory"
# 73 "data/maps/SlateportCity/scripts.pory"
# 134 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 135 "data/maps/SlateportCity/scripts.pory"
# 74 "data/maps/SlateportCity/scripts.pory"
# 136 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 137 "data/maps/SlateportCity/scripts.pory"
# 75 "data/maps/SlateportCity/scripts.pory"
# 138 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 139 "data/maps/SlateportCity/scripts.pory"
# 76 "data/maps/SlateportCity/scripts.pory"
# 140 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 141 "data/maps/SlateportCity/scripts.pory"
# 77 "data/maps/SlateportCity/scripts.pory"
# 142 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 143 "data/maps/SlateportCity/scripts.pory"
# 78 "data/maps/SlateportCity/scripts.pory"
# 144 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 145 "data/maps/SlateportCity/scripts.pory"
# 79 "data/maps/SlateportCity/scripts.pory"
# 146 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 147 "data/maps/SlateportCity/scripts.pory"
# 80 "data/maps/SlateportCity/scripts.pory"
# 148 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 149 "data/maps/SlateportCity/scripts.pory"
# 81 "data/maps/SlateportCity/scripts.pory"
# 150 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 151 "data/maps/SlateportCity/scripts.pory"
# 82 "data/maps/SlateportCity/scripts.pory"
# 152 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 153 "data/maps/SlateportCity/scripts.pory"
# 83 "data/maps/SlateportCity/scripts.pory"
# 154 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 155 "data/maps/SlateportCity/scripts.pory"
# 84 "data/maps/SlateportCity/scripts.pory"
# 156 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 157 "data/maps/SlateportCity/scripts.pory"
# 85 "data/maps/SlateportCity/scripts.pory"
# 158 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 159 "data/maps/SlateportCity/scripts.pory"
# 86 "data/maps/SlateportCity/scripts.pory"
# 160 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 161 "data/maps/SlateportCity/scripts.pory"
# 87 "data/maps/SlateportCity/scripts.pory"
# 162 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 163 "data/maps/SlateportCity/scripts.pory"
# 88 "data/maps/SlateportCity/scripts.pory"
# 164 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 165 "data/maps/SlateportCity/scripts.pory"
# 89 "data/maps/SlateportCity/scripts.pory"
# 166 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 167 "data/maps/SlateportCity/scripts.pory"
# 90 "data/maps/SlateportCity/scripts.pory"
# 168 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 169 "data/maps/SlateportCity/scripts.pory"
# 91 "data/maps/SlateportCity/scripts.pory"
# 170 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 171 "data/maps/SlateportCity/scripts.pory"
# 92 "data/maps/SlateportCity/scripts.pory"
# 172 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 173 "data/maps/SlateportCity/scripts.pory"
# 93 "data/maps/SlateportCity/scripts.pory"
# 174 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 175 "data/maps/SlateportCity/scripts.pory"
# 94 "data/maps/SlateportCity/scripts.pory"
# 176 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 177 "data/maps/SlateportCity/scripts.pory"
# 95 "data/maps/SlateportCity/scripts.pory"
# 178 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 179 "data/maps/SlateportCity/scripts.pory"
	end
# 180 "data/maps/SlateportCity/scripts.pory"

# 181 "data/maps/SlateportCity/scripts.pory"

# 182 "data/maps/SlateportCity/scripts.pory"
# 99 "data/maps/SlateportCity/scripts.pory"
# 183 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 184 "data/maps/SlateportCity/scripts.pory"
# 100 "data/maps/SlateportCity/scripts.pory"
# 185 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 186 "data/maps/SlateportCity/scripts.pory"
# 101 "data/maps/SlateportCity/scripts.pory"
# 187 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 188 "data/maps/SlateportCity/scripts.pory"
# 102 "data/maps/SlateportCity/scripts.pory"
# 189 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 190 "data/maps/SlateportCity/scripts.pory"
# 103 "data/maps/SlateportCity/scripts.pory"
# 191 "data/maps/SlateportCity/scripts.pory"
	step_end
# 192 "data/maps/SlateportCity/scripts.pory"

# 193 "data/maps/SlateportCity/scripts.pory"
# 106 "data/maps/SlateportCity/scripts.pory"
# 194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 195 "data/maps/SlateportCity/scripts.pory"
# 107 "data/maps/SlateportCity/scripts.pory"
# 196 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 197 "data/maps/SlateportCity/scripts.pory"
# 108 "data/maps/SlateportCity/scripts.pory"
# 198 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 199 "data/maps/SlateportCity/scripts.pory"
# 109 "data/maps/SlateportCity/scripts.pory"
# 200 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 201 "data/maps/SlateportCity/scripts.pory"
# 110 "data/maps/SlateportCity/scripts.pory"
# 202 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 203 "data/maps/SlateportCity/scripts.pory"
# 111 "data/maps/SlateportCity/scripts.pory"
# 204 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 205 "data/maps/SlateportCity/scripts.pory"
# 112 "data/maps/SlateportCity/scripts.pory"
# 206 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 207 "data/maps/SlateportCity/scripts.pory"
# 113 "data/maps/SlateportCity/scripts.pory"
# 208 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 209 "data/maps/SlateportCity/scripts.pory"
# 114 "data/maps/SlateportCity/scripts.pory"
# 210 "data/maps/SlateportCity/scripts.pory"
	step_end
# 211 "data/maps/SlateportCity/scripts.pory"

# 212 "data/maps/SlateportCity/scripts.pory"
# 117 "data/maps/SlateportCity/scripts.pory"
# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 214 "data/maps/SlateportCity/scripts.pory"
# 118 "data/maps/SlateportCity/scripts.pory"
# 215 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 216 "data/maps/SlateportCity/scripts.pory"
# 119 "data/maps/SlateportCity/scripts.pory"
# 217 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 218 "data/maps/SlateportCity/scripts.pory"
# 120 "data/maps/SlateportCity/scripts.pory"
# 219 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 220 "data/maps/SlateportCity/scripts.pory"
# 121 "data/maps/SlateportCity/scripts.pory"
# 221 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 222 "data/maps/SlateportCity/scripts.pory"
# 122 "data/maps/SlateportCity/scripts.pory"
# 223 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 224 "data/maps/SlateportCity/scripts.pory"
# 123 "data/maps/SlateportCity/scripts.pory"
# 225 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 226 "data/maps/SlateportCity/scripts.pory"
# 124 "data/maps/SlateportCity/scripts.pory"
# 227 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 228 "data/maps/SlateportCity/scripts.pory"
# 125 "data/maps/SlateportCity/scripts.pory"
# 229 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 230 "data/maps/SlateportCity/scripts.pory"
# 126 "data/maps/SlateportCity/scripts.pory"
# 231 "data/maps/SlateportCity/scripts.pory"
	step_end
# 232 "data/maps/SlateportCity/scripts.pory"

# 233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 234 "data/maps/SlateportCity/scripts.pory"
# 130 "data/maps/SlateportCity/scripts.pory"
# 235 "data/maps/SlateportCity/scripts.pory"
	lock
# 236 "data/maps/SlateportCity/scripts.pory"
# 131 "data/maps/SlateportCity/scripts.pory"
# 237 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 238 "data/maps/SlateportCity/scripts.pory"
# 132 "data/maps/SlateportCity/scripts.pory"
# 239 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 240 "data/maps/SlateportCity/scripts.pory"
# 133 "data/maps/SlateportCity/scripts.pory"
# 241 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 242 "data/maps/SlateportCity/scripts.pory"
# 134 "data/maps/SlateportCity/scripts.pory"
# 243 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 244 "data/maps/SlateportCity/scripts.pory"
# 135 "data/maps/SlateportCity/scripts.pory"
# 245 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 246 "data/maps/SlateportCity/scripts.pory"
# 136 "data/maps/SlateportCity/scripts.pory"
# 247 "data/maps/SlateportCity/scripts.pory"
	release
# 248 "data/maps/SlateportCity/scripts.pory"
	end
# 249 "data/maps/SlateportCity/scripts.pory"

# 250 "data/maps/SlateportCity/scripts.pory"

# 251 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru::
# 252 "data/maps/SlateportCity/scripts.pory"
# 141 "data/maps/SlateportCity/scripts.pory"
# 253 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 254 "data/maps/SlateportCity/scripts.pory"
	return
# 255 "data/maps/SlateportCity/scripts.pory"

# 256 "data/maps/SlateportCity/scripts.pory"

# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 258 "data/maps/SlateportCity/scripts.pory"
# 145 "data/maps/SlateportCity/scripts.pory"
# 259 "data/maps/SlateportCity/scripts.pory"
	lock
# 260 "data/maps/SlateportCity/scripts.pory"
# 146 "data/maps/SlateportCity/scripts.pory"
# 261 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 262 "data/maps/SlateportCity/scripts.pory"
# 147 "data/maps/SlateportCity/scripts.pory"
# 263 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 264 "data/maps/SlateportCity/scripts.pory"
# 148 "data/maps/SlateportCity/scripts.pory"
# 265 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 266 "data/maps/SlateportCity/scripts.pory"
# 149 "data/maps/SlateportCity/scripts.pory"
# 267 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 268 "data/maps/SlateportCity/scripts.pory"
# 150 "data/maps/SlateportCity/scripts.pory"
# 269 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, TRUE
# 270 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_EffortRibbonWoman_2
# 271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman_1:
# 272 "data/maps/SlateportCity/scripts.pory"
# 153 "data/maps/SlateportCity/scripts.pory"
# 273 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 274 "data/maps/SlateportCity/scripts.pory"
# 154 "data/maps/SlateportCity/scripts.pory"
# 275 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 276 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_EffortRibbonWoman_5
# 277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman_4:
# 278 "data/maps/SlateportCity/scripts.pory"
# 157 "data/maps/SlateportCity/scripts.pory"
# 279 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 280 "data/maps/SlateportCity/scripts.pory"
# 158 "data/maps/SlateportCity/scripts.pory"
# 281 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/SlateportCity/scripts.pory"
# 159 "data/maps/SlateportCity/scripts.pory"
# 283 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 284 "data/maps/SlateportCity/scripts.pory"
# 160 "data/maps/SlateportCity/scripts.pory"
# 285 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 286 "data/maps/SlateportCity/scripts.pory"
# 161 "data/maps/SlateportCity/scripts.pory"
# 287 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 288 "data/maps/SlateportCity/scripts.pory"
# 162 "data/maps/SlateportCity/scripts.pory"
# 289 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 290 "data/maps/SlateportCity/scripts.pory"
# 163 "data/maps/SlateportCity/scripts.pory"
# 291 "data/maps/SlateportCity/scripts.pory"
	release
# 292 "data/maps/SlateportCity/scripts.pory"
	end
# 293 "data/maps/SlateportCity/scripts.pory"

# 294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman_2:
# 295 "data/maps/SlateportCity/scripts.pory"
# 151 "data/maps/SlateportCity/scripts.pory"
# 296 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_MonHasEffortRibbon
# 297 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_EffortRibbonWoman_1
# 298 "data/maps/SlateportCity/scripts.pory"

# 299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman_5:
# 300 "data/maps/SlateportCity/scripts.pory"
# 155 "data/maps/SlateportCity/scripts.pory"
# 301 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_MonEVsNotMaxed
# 302 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_EffortRibbonWoman_4
# 303 "data/maps/SlateportCity/scripts.pory"

# 304 "data/maps/SlateportCity/scripts.pory"

# 305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 306 "data/maps/SlateportCity/scripts.pory"
# 168 "data/maps/SlateportCity/scripts.pory"
# 307 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 308 "data/maps/SlateportCity/scripts.pory"
# 169 "data/maps/SlateportCity/scripts.pory"
# 309 "data/maps/SlateportCity/scripts.pory"
	release
# 310 "data/maps/SlateportCity/scripts.pory"
	end
# 311 "data/maps/SlateportCity/scripts.pory"

# 312 "data/maps/SlateportCity/scripts.pory"

# 313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 314 "data/maps/SlateportCity/scripts.pory"
# 174 "data/maps/SlateportCity/scripts.pory"
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 316 "data/maps/SlateportCity/scripts.pory"
# 175 "data/maps/SlateportCity/scripts.pory"
# 317 "data/maps/SlateportCity/scripts.pory"
	release
# 318 "data/maps/SlateportCity/scripts.pory"
	end
# 319 "data/maps/SlateportCity/scripts.pory"

# 320 "data/maps/SlateportCity/scripts.pory"

# 321 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 322 "data/maps/SlateportCity/scripts.pory"
# 180 "data/maps/SlateportCity/scripts.pory"
# 323 "data/maps/SlateportCity/scripts.pory"
	lock
# 324 "data/maps/SlateportCity/scripts.pory"
# 181 "data/maps/SlateportCity/scripts.pory"
# 325 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 326 "data/maps/SlateportCity/scripts.pory"
# 182 "data/maps/SlateportCity/scripts.pory"
# 327 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 328 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_Cook_2
# 329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook_1:
# 330 "data/maps/SlateportCity/scripts.pory"
# 185 "data/maps/SlateportCity/scripts.pory"
# 331 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 332 "data/maps/SlateportCity/scripts.pory"
# 186 "data/maps/SlateportCity/scripts.pory"
# 333 "data/maps/SlateportCity/scripts.pory"
	release
# 334 "data/maps/SlateportCity/scripts.pory"
	end
# 335 "data/maps/SlateportCity/scripts.pory"

# 336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook_2:
# 337 "data/maps/SlateportCity/scripts.pory"
# 183 "data/maps/SlateportCity/scripts.pory"
# 338 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_CookSternInterview
# 339 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Cook_1
# 340 "data/maps/SlateportCity/scripts.pory"

# 341 "data/maps/SlateportCity/scripts.pory"

# 342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 343 "data/maps/SlateportCity/scripts.pory"
# 191 "data/maps/SlateportCity/scripts.pory"
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 345 "data/maps/SlateportCity/scripts.pory"
# 192 "data/maps/SlateportCity/scripts.pory"
# 346 "data/maps/SlateportCity/scripts.pory"
	release
# 347 "data/maps/SlateportCity/scripts.pory"
	end
# 348 "data/maps/SlateportCity/scripts.pory"

# 349 "data/maps/SlateportCity/scripts.pory"

# 350 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 351 "data/maps/SlateportCity/scripts.pory"
# 197 "data/maps/SlateportCity/scripts.pory"
# 352 "data/maps/SlateportCity/scripts.pory"
	lock
# 353 "data/maps/SlateportCity/scripts.pory"
# 198 "data/maps/SlateportCity/scripts.pory"
# 354 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 355 "data/maps/SlateportCity/scripts.pory"
# 199 "data/maps/SlateportCity/scripts.pory"
# 356 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 357 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_OldWoman_2
# 358 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman_1:
# 359 "data/maps/SlateportCity/scripts.pory"
# 202 "data/maps/SlateportCity/scripts.pory"
# 360 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 361 "data/maps/SlateportCity/scripts.pory"
# 203 "data/maps/SlateportCity/scripts.pory"
# 362 "data/maps/SlateportCity/scripts.pory"
	release
# 363 "data/maps/SlateportCity/scripts.pory"
	end
# 364 "data/maps/SlateportCity/scripts.pory"

# 365 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman_2:
# 366 "data/maps/SlateportCity/scripts.pory"
# 200 "data/maps/SlateportCity/scripts.pory"
# 367 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_OldWomanSternInterview
# 368 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_OldWoman_1
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"

# 371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 372 "data/maps/SlateportCity/scripts.pory"
# 208 "data/maps/SlateportCity/scripts.pory"
# 373 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 374 "data/maps/SlateportCity/scripts.pory"
# 209 "data/maps/SlateportCity/scripts.pory"
# 375 "data/maps/SlateportCity/scripts.pory"
	release
# 376 "data/maps/SlateportCity/scripts.pory"
	end
# 377 "data/maps/SlateportCity/scripts.pory"

# 378 "data/maps/SlateportCity/scripts.pory"

# 379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 380 "data/maps/SlateportCity/scripts.pory"
# 214 "data/maps/SlateportCity/scripts.pory"
# 381 "data/maps/SlateportCity/scripts.pory"
	lock
# 382 "data/maps/SlateportCity/scripts.pory"
# 215 "data/maps/SlateportCity/scripts.pory"
# 383 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 384 "data/maps/SlateportCity/scripts.pory"
# 216 "data/maps/SlateportCity/scripts.pory"
# 385 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 386 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_Girl_2
# 387 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl_1:
# 388 "data/maps/SlateportCity/scripts.pory"
# 219 "data/maps/SlateportCity/scripts.pory"
# 389 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_Girl_5
# 390 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl_4:
# 391 "data/maps/SlateportCity/scripts.pory"
# 222 "data/maps/SlateportCity/scripts.pory"
# 392 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 393 "data/maps/SlateportCity/scripts.pory"
# 223 "data/maps/SlateportCity/scripts.pory"
# 394 "data/maps/SlateportCity/scripts.pory"
	release
# 395 "data/maps/SlateportCity/scripts.pory"
	end
# 396 "data/maps/SlateportCity/scripts.pory"

# 397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl_2:
# 398 "data/maps/SlateportCity/scripts.pory"
# 217 "data/maps/SlateportCity/scripts.pory"
# 399 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_GirlSternInterview
# 400 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Girl_1
# 401 "data/maps/SlateportCity/scripts.pory"

# 402 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl_5:
# 403 "data/maps/SlateportCity/scripts.pory"
# 220 "data/maps/SlateportCity/scripts.pory"
# 404 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_GirlSecretBase
# 405 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Girl_4
# 406 "data/maps/SlateportCity/scripts.pory"

# 407 "data/maps/SlateportCity/scripts.pory"

# 408 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 409 "data/maps/SlateportCity/scripts.pory"
# 228 "data/maps/SlateportCity/scripts.pory"
# 410 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 411 "data/maps/SlateportCity/scripts.pory"
# 229 "data/maps/SlateportCity/scripts.pory"
# 412 "data/maps/SlateportCity/scripts.pory"
	release
# 413 "data/maps/SlateportCity/scripts.pory"
	end
# 414 "data/maps/SlateportCity/scripts.pory"

# 415 "data/maps/SlateportCity/scripts.pory"

# 416 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 417 "data/maps/SlateportCity/scripts.pory"
# 234 "data/maps/SlateportCity/scripts.pory"
# 418 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 419 "data/maps/SlateportCity/scripts.pory"
# 235 "data/maps/SlateportCity/scripts.pory"
# 420 "data/maps/SlateportCity/scripts.pory"
	release
# 421 "data/maps/SlateportCity/scripts.pory"
	end
# 422 "data/maps/SlateportCity/scripts.pory"

# 423 "data/maps/SlateportCity/scripts.pory"

# 424 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 425 "data/maps/SlateportCity/scripts.pory"
# 240 "data/maps/SlateportCity/scripts.pory"
# 426 "data/maps/SlateportCity/scripts.pory"
	lock
# 427 "data/maps/SlateportCity/scripts.pory"
# 241 "data/maps/SlateportCity/scripts.pory"
# 428 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 429 "data/maps/SlateportCity/scripts.pory"
# 242 "data/maps/SlateportCity/scripts.pory"
# 430 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 431 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_RichBoy_2
# 432 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy_1:
# 433 "data/maps/SlateportCity/scripts.pory"
# 245 "data/maps/SlateportCity/scripts.pory"
# 434 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 435 "data/maps/SlateportCity/scripts.pory"
# 246 "data/maps/SlateportCity/scripts.pory"
# 436 "data/maps/SlateportCity/scripts.pory"
	release
# 437 "data/maps/SlateportCity/scripts.pory"
	end
# 438 "data/maps/SlateportCity/scripts.pory"

# 439 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy_2:
# 440 "data/maps/SlateportCity/scripts.pory"
# 243 "data/maps/SlateportCity/scripts.pory"
# 441 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_RichBoySternInterview
# 442 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_RichBoy_1
# 443 "data/maps/SlateportCity/scripts.pory"

# 444 "data/maps/SlateportCity/scripts.pory"

# 445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 446 "data/maps/SlateportCity/scripts.pory"
# 251 "data/maps/SlateportCity/scripts.pory"
# 447 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 448 "data/maps/SlateportCity/scripts.pory"
# 252 "data/maps/SlateportCity/scripts.pory"
# 449 "data/maps/SlateportCity/scripts.pory"
	release
# 450 "data/maps/SlateportCity/scripts.pory"
	end
# 451 "data/maps/SlateportCity/scripts.pory"

# 452 "data/maps/SlateportCity/scripts.pory"

# 453 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 454 "data/maps/SlateportCity/scripts.pory"
# 257 "data/maps/SlateportCity/scripts.pory"
# 455 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 456 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_FatMan_2
# 457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan_1:
# 458 "data/maps/SlateportCity/scripts.pory"
# 260 "data/maps/SlateportCity/scripts.pory"
# 459 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 460 "data/maps/SlateportCity/scripts.pory"
	end
# 461 "data/maps/SlateportCity/scripts.pory"

# 462 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan_2:
# 463 "data/maps/SlateportCity/scripts.pory"
# 258 "data/maps/SlateportCity/scripts.pory"
# 464 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_FatManSternInterview
# 465 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_FatMan_1
# 466 "data/maps/SlateportCity/scripts.pory"

# 467 "data/maps/SlateportCity/scripts.pory"

# 468 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 469 "data/maps/SlateportCity/scripts.pory"
# 265 "data/maps/SlateportCity/scripts.pory"
# 470 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"

# 474 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 475 "data/maps/SlateportCity/scripts.pory"
# 270 "data/maps/SlateportCity/scripts.pory"
# 476 "data/maps/SlateportCity/scripts.pory"
	lock
# 477 "data/maps/SlateportCity/scripts.pory"
# 271 "data/maps/SlateportCity/scripts.pory"
# 478 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 479 "data/maps/SlateportCity/scripts.pory"
# 272 "data/maps/SlateportCity/scripts.pory"
# 480 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 481 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_Man1_2
# 482 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1_1:
# 483 "data/maps/SlateportCity/scripts.pory"
# 275 "data/maps/SlateportCity/scripts.pory"
# 484 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 485 "data/maps/SlateportCity/scripts.pory"
# 276 "data/maps/SlateportCity/scripts.pory"
# 486 "data/maps/SlateportCity/scripts.pory"
	release
# 487 "data/maps/SlateportCity/scripts.pory"
	end
# 488 "data/maps/SlateportCity/scripts.pory"

# 489 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1_2:
# 490 "data/maps/SlateportCity/scripts.pory"
# 273 "data/maps/SlateportCity/scripts.pory"
# 491 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_Man1SternInterview
# 492 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Man1_1
# 493 "data/maps/SlateportCity/scripts.pory"

# 494 "data/maps/SlateportCity/scripts.pory"

# 495 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 496 "data/maps/SlateportCity/scripts.pory"
# 281 "data/maps/SlateportCity/scripts.pory"
# 497 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 498 "data/maps/SlateportCity/scripts.pory"
# 282 "data/maps/SlateportCity/scripts.pory"
# 499 "data/maps/SlateportCity/scripts.pory"
	release
# 500 "data/maps/SlateportCity/scripts.pory"
	end
# 501 "data/maps/SlateportCity/scripts.pory"

# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 504 "data/maps/SlateportCity/scripts.pory"
# 287 "data/maps/SlateportCity/scripts.pory"
# 505 "data/maps/SlateportCity/scripts.pory"
	lock
# 506 "data/maps/SlateportCity/scripts.pory"
# 288 "data/maps/SlateportCity/scripts.pory"
# 507 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 508 "data/maps/SlateportCity/scripts.pory"
# 289 "data/maps/SlateportCity/scripts.pory"
# 509 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1_2
# 510 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1_1:
# 511 "data/maps/SlateportCity/scripts.pory"
# 292 "data/maps/SlateportCity/scripts.pory"
# 512 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 513 "data/maps/SlateportCity/scripts.pory"
# 293 "data/maps/SlateportCity/scripts.pory"
# 514 "data/maps/SlateportCity/scripts.pory"
	release
# 515 "data/maps/SlateportCity/scripts.pory"
	end
# 516 "data/maps/SlateportCity/scripts.pory"

# 517 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1_2:
# 518 "data/maps/SlateportCity/scripts.pory"
# 290 "data/maps/SlateportCity/scripts.pory"
# 519 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Woman1AquaGone
# 520 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Woman1_1
# 521 "data/maps/SlateportCity/scripts.pory"

# 522 "data/maps/SlateportCity/scripts.pory"

# 523 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 524 "data/maps/SlateportCity/scripts.pory"
# 298 "data/maps/SlateportCity/scripts.pory"
# 525 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 526 "data/maps/SlateportCity/scripts.pory"
# 299 "data/maps/SlateportCity/scripts.pory"
# 527 "data/maps/SlateportCity/scripts.pory"
	release
# 528 "data/maps/SlateportCity/scripts.pory"
	end
# 529 "data/maps/SlateportCity/scripts.pory"

# 530 "data/maps/SlateportCity/scripts.pory"

# 531 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 532 "data/maps/SlateportCity/scripts.pory"
# 304 "data/maps/SlateportCity/scripts.pory"
# 533 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 534 "data/maps/SlateportCity/scripts.pory"
	end
# 535 "data/maps/SlateportCity/scripts.pory"

# 536 "data/maps/SlateportCity/scripts.pory"

# 537 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 538 "data/maps/SlateportCity/scripts.pory"
# 309 "data/maps/SlateportCity/scripts.pory"
# 539 "data/maps/SlateportCity/scripts.pory"
	lockall
# 540 "data/maps/SlateportCity/scripts.pory"
# 310 "data/maps/SlateportCity/scripts.pory"
# 541 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardSign_2
# 542 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign_1:
# 543 "data/maps/SlateportCity/scripts.pory"
# 313 "data/maps/SlateportCity/scripts.pory"
# 544 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardSign_5
# 545 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign_4:
# 546 "data/maps/SlateportCity/scripts.pory"
# 316 "data/maps/SlateportCity/scripts.pory"
# 547 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 548 "data/maps/SlateportCity/scripts.pory"
# 317 "data/maps/SlateportCity/scripts.pory"
# 549 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 550 "data/maps/SlateportCity/scripts.pory"
	end
# 551 "data/maps/SlateportCity/scripts.pory"

# 552 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign_2:
# 553 "data/maps/SlateportCity/scripts.pory"
# 311 "data/maps/SlateportCity/scripts.pory"
# 554 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_SternsShipyardFerryComplete
# 555 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_SternsShipyardSign_1
# 556 "data/maps/SlateportCity/scripts.pory"

# 557 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign_5:
# 558 "data/maps/SlateportCity/scripts.pory"
# 314 "data/maps/SlateportCity/scripts.pory"
# 559 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_SternsShipyardNearsCompletion
# 560 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_SternsShipyardSign_4
# 561 "data/maps/SlateportCity/scripts.pory"

# 562 "data/maps/SlateportCity/scripts.pory"

# 563 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 564 "data/maps/SlateportCity/scripts.pory"
# 322 "data/maps/SlateportCity/scripts.pory"
# 565 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 566 "data/maps/SlateportCity/scripts.pory"
# 323 "data/maps/SlateportCity/scripts.pory"
# 567 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 568 "data/maps/SlateportCity/scripts.pory"
	end
# 569 "data/maps/SlateportCity/scripts.pory"

# 570 "data/maps/SlateportCity/scripts.pory"

# 571 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 572 "data/maps/SlateportCity/scripts.pory"
# 328 "data/maps/SlateportCity/scripts.pory"
# 573 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 574 "data/maps/SlateportCity/scripts.pory"
# 329 "data/maps/SlateportCity/scripts.pory"
# 575 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 576 "data/maps/SlateportCity/scripts.pory"
	end
# 577 "data/maps/SlateportCity/scripts.pory"

# 578 "data/maps/SlateportCity/scripts.pory"

# 579 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 580 "data/maps/SlateportCity/scripts.pory"
# 334 "data/maps/SlateportCity/scripts.pory"
# 581 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 582 "data/maps/SlateportCity/scripts.pory"
	end
# 583 "data/maps/SlateportCity/scripts.pory"

# 584 "data/maps/SlateportCity/scripts.pory"

# 585 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 586 "data/maps/SlateportCity/scripts.pory"
# 339 "data/maps/SlateportCity/scripts.pory"
# 587 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 588 "data/maps/SlateportCity/scripts.pory"
	end
# 589 "data/maps/SlateportCity/scripts.pory"

# 590 "data/maps/SlateportCity/scripts.pory"

# 591 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 592 "data/maps/SlateportCity/scripts.pory"
# 344 "data/maps/SlateportCity/scripts.pory"
# 593 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 594 "data/maps/SlateportCity/scripts.pory"
	end
# 595 "data/maps/SlateportCity/scripts.pory"

# 596 "data/maps/SlateportCity/scripts.pory"

# 597 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 598 "data/maps/SlateportCity/scripts.pory"
# 349 "data/maps/SlateportCity/scripts.pory"
# 599 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 600 "data/maps/SlateportCity/scripts.pory"
	end
# 601 "data/maps/SlateportCity/scripts.pory"

# 602 "data/maps/SlateportCity/scripts.pory"

# 603 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 604 "data/maps/SlateportCity/scripts.pory"
# 354 "data/maps/SlateportCity/scripts.pory"
# 605 "data/maps/SlateportCity/scripts.pory"
	lockall
# 606 "data/maps/SlateportCity/scripts.pory"
# 355 "data/maps/SlateportCity/scripts.pory"
# 607 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSign_2
# 608 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign_1:
# 609 "data/maps/SlateportCity/scripts.pory"
# 358 "data/maps/SlateportCity/scripts.pory"
# 610 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 611 "data/maps/SlateportCity/scripts.pory"
# 359 "data/maps/SlateportCity/scripts.pory"
# 612 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 613 "data/maps/SlateportCity/scripts.pory"
	end
# 614 "data/maps/SlateportCity/scripts.pory"

# 615 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign_2:
# 616 "data/maps/SlateportCity/scripts.pory"
# 356 "data/maps/SlateportCity/scripts.pory"
# 617 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_HarborSignFerryComplete
# 618 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_HarborSign_1
# 619 "data/maps/SlateportCity/scripts.pory"

# 620 "data/maps/SlateportCity/scripts.pory"

# 621 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 622 "data/maps/SlateportCity/scripts.pory"
# 364 "data/maps/SlateportCity/scripts.pory"
# 623 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 624 "data/maps/SlateportCity/scripts.pory"
# 365 "data/maps/SlateportCity/scripts.pory"
# 625 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 626 "data/maps/SlateportCity/scripts.pory"
	end
# 627 "data/maps/SlateportCity/scripts.pory"

# 628 "data/maps/SlateportCity/scripts.pory"

# 629 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 630 "data/maps/SlateportCity/scripts.pory"
# 370 "data/maps/SlateportCity/scripts.pory"
# 631 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 632 "data/maps/SlateportCity/scripts.pory"
	end
# 633 "data/maps/SlateportCity/scripts.pory"

# 634 "data/maps/SlateportCity/scripts.pory"

# 635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 636 "data/maps/SlateportCity/scripts.pory"
# 375 "data/maps/SlateportCity/scripts.pory"
# 637 "data/maps/SlateportCity/scripts.pory"
	lock
# 638 "data/maps/SlateportCity/scripts.pory"
# 376 "data/maps/SlateportCity/scripts.pory"
# 639 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 640 "data/maps/SlateportCity/scripts.pory"
# 377 "data/maps/SlateportCity/scripts.pory"
# 641 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 642 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_Maniac_2
# 643 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac_1:
# 644 "data/maps/SlateportCity/scripts.pory"
# 380 "data/maps/SlateportCity/scripts.pory"
# 645 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 646 "data/maps/SlateportCity/scripts.pory"
# 381 "data/maps/SlateportCity/scripts.pory"
# 647 "data/maps/SlateportCity/scripts.pory"
	release
# 648 "data/maps/SlateportCity/scripts.pory"
	end
# 649 "data/maps/SlateportCity/scripts.pory"

# 650 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac_2:
# 651 "data/maps/SlateportCity/scripts.pory"
# 378 "data/maps/SlateportCity/scripts.pory"
# 652 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_ManiacSternInterview
# 653 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Maniac_1
# 654 "data/maps/SlateportCity/scripts.pory"

# 655 "data/maps/SlateportCity/scripts.pory"

# 656 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 657 "data/maps/SlateportCity/scripts.pory"
# 386 "data/maps/SlateportCity/scripts.pory"
# 658 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 659 "data/maps/SlateportCity/scripts.pory"
# 387 "data/maps/SlateportCity/scripts.pory"
# 660 "data/maps/SlateportCity/scripts.pory"
	release
# 661 "data/maps/SlateportCity/scripts.pory"
	end
# 662 "data/maps/SlateportCity/scripts.pory"

# 663 "data/maps/SlateportCity/scripts.pory"

# 664 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 665 "data/maps/SlateportCity/scripts.pory"
# 392 "data/maps/SlateportCity/scripts.pory"
# 666 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 667 "data/maps/SlateportCity/scripts.pory"
	end
# 668 "data/maps/SlateportCity/scripts.pory"

# 669 "data/maps/SlateportCity/scripts.pory"

# 670 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 671 "data/maps/SlateportCity/scripts.pory"
# 397 "data/maps/SlateportCity/scripts.pory"
# 672 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 673 "data/maps/SlateportCity/scripts.pory"
	end
# 674 "data/maps/SlateportCity/scripts.pory"

# 675 "data/maps/SlateportCity/scripts.pory"

# 676 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 677 "data/maps/SlateportCity/scripts.pory"
# 402 "data/maps/SlateportCity/scripts.pory"
# 678 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 679 "data/maps/SlateportCity/scripts.pory"
	end
# 680 "data/maps/SlateportCity/scripts.pory"

# 681 "data/maps/SlateportCity/scripts.pory"

# 682 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 683 "data/maps/SlateportCity/scripts.pory"
# 407 "data/maps/SlateportCity/scripts.pory"
# 684 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 685 "data/maps/SlateportCity/scripts.pory"
	end
# 686 "data/maps/SlateportCity/scripts.pory"

# 687 "data/maps/SlateportCity/scripts.pory"

# 688 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 689 "data/maps/SlateportCity/scripts.pory"
# 412 "data/maps/SlateportCity/scripts.pory"
# 690 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 691 "data/maps/SlateportCity/scripts.pory"
	end
# 692 "data/maps/SlateportCity/scripts.pory"

# 693 "data/maps/SlateportCity/scripts.pory"

# 694 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 695 "data/maps/SlateportCity/scripts.pory"
# 417 "data/maps/SlateportCity/scripts.pory"
# 696 "data/maps/SlateportCity/scripts.pory"
	lock
# 697 "data/maps/SlateportCity/scripts.pory"
# 418 "data/maps/SlateportCity/scripts.pory"
# 698 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 699 "data/maps/SlateportCity/scripts.pory"
# 419 "data/maps/SlateportCity/scripts.pory"
# 700 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 701 "data/maps/SlateportCity/scripts.pory"
# 420 "data/maps/SlateportCity/scripts.pory"
# 702 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 703 "data/maps/SlateportCity/scripts.pory"
# 421 "data/maps/SlateportCity/scripts.pory"
# 704 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 705 "data/maps/SlateportCity/scripts.pory"
# 422 "data/maps/SlateportCity/scripts.pory"
# 706 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 707 "data/maps/SlateportCity/scripts.pory"
# 423 "data/maps/SlateportCity/scripts.pory"
# 708 "data/maps/SlateportCity/scripts.pory"
	release
# 709 "data/maps/SlateportCity/scripts.pory"
	end
# 710 "data/maps/SlateportCity/scripts.pory"

# 711 "data/maps/SlateportCity/scripts.pory"

# 712 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 713 "data/maps/SlateportCity/scripts.pory"
# 428 "data/maps/SlateportCity/scripts.pory"
# 714 "data/maps/SlateportCity/scripts.pory"
	lock
# 715 "data/maps/SlateportCity/scripts.pory"
# 429 "data/maps/SlateportCity/scripts.pory"
# 716 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 717 "data/maps/SlateportCity/scripts.pory"
# 430 "data/maps/SlateportCity/scripts.pory"
# 718 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 719 "data/maps/SlateportCity/scripts.pory"
# 431 "data/maps/SlateportCity/scripts.pory"
# 720 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 721 "data/maps/SlateportCity/scripts.pory"
# 432 "data/maps/SlateportCity/scripts.pory"
# 722 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 723 "data/maps/SlateportCity/scripts.pory"
# 433 "data/maps/SlateportCity/scripts.pory"
# 724 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/SlateportCity/scripts.pory"
# 434 "data/maps/SlateportCity/scripts.pory"
# 726 "data/maps/SlateportCity/scripts.pory"
	release
# 727 "data/maps/SlateportCity/scripts.pory"
	end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"

# 730 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 731 "data/maps/SlateportCity/scripts.pory"
# 439 "data/maps/SlateportCity/scripts.pory"
# 732 "data/maps/SlateportCity/scripts.pory"
	lock
# 733 "data/maps/SlateportCity/scripts.pory"
# 440 "data/maps/SlateportCity/scripts.pory"
# 734 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 735 "data/maps/SlateportCity/scripts.pory"
# 441 "data/maps/SlateportCity/scripts.pory"
# 736 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 737 "data/maps/SlateportCity/scripts.pory"
# 442 "data/maps/SlateportCity/scripts.pory"
# 738 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 739 "data/maps/SlateportCity/scripts.pory"
# 443 "data/maps/SlateportCity/scripts.pory"
# 740 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 741 "data/maps/SlateportCity/scripts.pory"
# 444 "data/maps/SlateportCity/scripts.pory"
# 742 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/SlateportCity/scripts.pory"
# 445 "data/maps/SlateportCity/scripts.pory"
# 744 "data/maps/SlateportCity/scripts.pory"
	release
# 745 "data/maps/SlateportCity/scripts.pory"
	end
# 746 "data/maps/SlateportCity/scripts.pory"

# 747 "data/maps/SlateportCity/scripts.pory"

# 748 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 749 "data/maps/SlateportCity/scripts.pory"
# 450 "data/maps/SlateportCity/scripts.pory"
# 750 "data/maps/SlateportCity/scripts.pory"
	lock
# 751 "data/maps/SlateportCity/scripts.pory"
# 451 "data/maps/SlateportCity/scripts.pory"
# 752 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 753 "data/maps/SlateportCity/scripts.pory"
# 452 "data/maps/SlateportCity/scripts.pory"
# 754 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 755 "data/maps/SlateportCity/scripts.pory"
# 453 "data/maps/SlateportCity/scripts.pory"
# 756 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 757 "data/maps/SlateportCity/scripts.pory"
# 454 "data/maps/SlateportCity/scripts.pory"
# 758 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 759 "data/maps/SlateportCity/scripts.pory"
# 455 "data/maps/SlateportCity/scripts.pory"
# 760 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/SlateportCity/scripts.pory"
# 456 "data/maps/SlateportCity/scripts.pory"
# 762 "data/maps/SlateportCity/scripts.pory"
	release
# 763 "data/maps/SlateportCity/scripts.pory"
	end
# 764 "data/maps/SlateportCity/scripts.pory"

# 765 "data/maps/SlateportCity/scripts.pory"

# 766 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 767 "data/maps/SlateportCity/scripts.pory"
# 461 "data/maps/SlateportCity/scripts.pory"
# 768 "data/maps/SlateportCity/scripts.pory"
	lock
# 769 "data/maps/SlateportCity/scripts.pory"
# 462 "data/maps/SlateportCity/scripts.pory"
# 770 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 771 "data/maps/SlateportCity/scripts.pory"
# 463 "data/maps/SlateportCity/scripts.pory"
# 772 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 773 "data/maps/SlateportCity/scripts.pory"
# 464 "data/maps/SlateportCity/scripts.pory"
# 774 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 775 "data/maps/SlateportCity/scripts.pory"
# 465 "data/maps/SlateportCity/scripts.pory"
# 776 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 777 "data/maps/SlateportCity/scripts.pory"
# 466 "data/maps/SlateportCity/scripts.pory"
# 778 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/SlateportCity/scripts.pory"
# 467 "data/maps/SlateportCity/scripts.pory"
# 780 "data/maps/SlateportCity/scripts.pory"
	release
# 781 "data/maps/SlateportCity/scripts.pory"
	end
# 782 "data/maps/SlateportCity/scripts.pory"

# 783 "data/maps/SlateportCity/scripts.pory"

# 784 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 785 "data/maps/SlateportCity/scripts.pory"
# 472 "data/maps/SlateportCity/scripts.pory"
# 786 "data/maps/SlateportCity/scripts.pory"
	lock
# 787 "data/maps/SlateportCity/scripts.pory"
# 473 "data/maps/SlateportCity/scripts.pory"
# 788 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 789 "data/maps/SlateportCity/scripts.pory"
# 474 "data/maps/SlateportCity/scripts.pory"
# 790 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 791 "data/maps/SlateportCity/scripts.pory"
# 475 "data/maps/SlateportCity/scripts.pory"
# 792 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 793 "data/maps/SlateportCity/scripts.pory"
# 476 "data/maps/SlateportCity/scripts.pory"
# 794 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 795 "data/maps/SlateportCity/scripts.pory"
# 477 "data/maps/SlateportCity/scripts.pory"
# 796 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/SlateportCity/scripts.pory"
# 478 "data/maps/SlateportCity/scripts.pory"
# 798 "data/maps/SlateportCity/scripts.pory"
	release
# 799 "data/maps/SlateportCity/scripts.pory"
	end
# 800 "data/maps/SlateportCity/scripts.pory"

# 801 "data/maps/SlateportCity/scripts.pory"

# 802 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 803 "data/maps/SlateportCity/scripts.pory"
# 483 "data/maps/SlateportCity/scripts.pory"
# 804 "data/maps/SlateportCity/scripts.pory"
	lock
# 805 "data/maps/SlateportCity/scripts.pory"
# 484 "data/maps/SlateportCity/scripts.pory"
# 806 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 807 "data/maps/SlateportCity/scripts.pory"
# 485 "data/maps/SlateportCity/scripts.pory"
# 808 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 809 "data/maps/SlateportCity/scripts.pory"
# 486 "data/maps/SlateportCity/scripts.pory"
# 810 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 811 "data/maps/SlateportCity/scripts.pory"
# 487 "data/maps/SlateportCity/scripts.pory"
# 812 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 813 "data/maps/SlateportCity/scripts.pory"
# 488 "data/maps/SlateportCity/scripts.pory"
# 814 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/SlateportCity/scripts.pory"
# 489 "data/maps/SlateportCity/scripts.pory"
# 816 "data/maps/SlateportCity/scripts.pory"
	release
# 817 "data/maps/SlateportCity/scripts.pory"
	end
# 818 "data/maps/SlateportCity/scripts.pory"

# 819 "data/maps/SlateportCity/scripts.pory"

# 820 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 821 "data/maps/SlateportCity/scripts.pory"
# 494 "data/maps/SlateportCity/scripts.pory"
# 822 "data/maps/SlateportCity/scripts.pory"
	lock
# 823 "data/maps/SlateportCity/scripts.pory"
# 495 "data/maps/SlateportCity/scripts.pory"
# 824 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 825 "data/maps/SlateportCity/scripts.pory"
# 496 "data/maps/SlateportCity/scripts.pory"
# 826 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 827 "data/maps/SlateportCity/scripts.pory"
# 497 "data/maps/SlateportCity/scripts.pory"
# 828 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 829 "data/maps/SlateportCity/scripts.pory"
# 498 "data/maps/SlateportCity/scripts.pory"
# 830 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 831 "data/maps/SlateportCity/scripts.pory"
# 499 "data/maps/SlateportCity/scripts.pory"
# 832 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 833 "data/maps/SlateportCity/scripts.pory"
# 500 "data/maps/SlateportCity/scripts.pory"
# 834 "data/maps/SlateportCity/scripts.pory"
	release
# 835 "data/maps/SlateportCity/scripts.pory"
	end
# 836 "data/maps/SlateportCity/scripts.pory"

# 837 "data/maps/SlateportCity/scripts.pory"

# 838 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 839 "data/maps/SlateportCity/scripts.pory"
# 505 "data/maps/SlateportCity/scripts.pory"
# 840 "data/maps/SlateportCity/scripts.pory"
	lock
# 841 "data/maps/SlateportCity/scripts.pory"
# 506 "data/maps/SlateportCity/scripts.pory"
# 842 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 843 "data/maps/SlateportCity/scripts.pory"
# 507 "data/maps/SlateportCity/scripts.pory"
# 844 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 845 "data/maps/SlateportCity/scripts.pory"
# 508 "data/maps/SlateportCity/scripts.pory"
# 846 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 847 "data/maps/SlateportCity/scripts.pory"
# 509 "data/maps/SlateportCity/scripts.pory"
# 848 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 849 "data/maps/SlateportCity/scripts.pory"
# 510 "data/maps/SlateportCity/scripts.pory"
# 850 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 851 "data/maps/SlateportCity/scripts.pory"
# 511 "data/maps/SlateportCity/scripts.pory"
# 852 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 853 "data/maps/SlateportCity/scripts.pory"
# 512 "data/maps/SlateportCity/scripts.pory"
# 854 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 855 "data/maps/SlateportCity/scripts.pory"
# 513 "data/maps/SlateportCity/scripts.pory"
# 856 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 857 "data/maps/SlateportCity/scripts.pory"
# 514 "data/maps/SlateportCity/scripts.pory"
# 858 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 859 "data/maps/SlateportCity/scripts.pory"
# 515 "data/maps/SlateportCity/scripts.pory"
# 860 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 861 "data/maps/SlateportCity/scripts.pory"
# 516 "data/maps/SlateportCity/scripts.pory"
# 862 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 863 "data/maps/SlateportCity/scripts.pory"
# 517 "data/maps/SlateportCity/scripts.pory"
# 864 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 865 "data/maps/SlateportCity/scripts.pory"
# 518 "data/maps/SlateportCity/scripts.pory"
# 866 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 867 "data/maps/SlateportCity/scripts.pory"
# 519 "data/maps/SlateportCity/scripts.pory"
# 868 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 869 "data/maps/SlateportCity/scripts.pory"
# 520 "data/maps/SlateportCity/scripts.pory"
# 870 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 871 "data/maps/SlateportCity/scripts.pory"
# 521 "data/maps/SlateportCity/scripts.pory"
# 872 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 873 "data/maps/SlateportCity/scripts.pory"
# 522 "data/maps/SlateportCity/scripts.pory"
# 874 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 875 "data/maps/SlateportCity/scripts.pory"
# 523 "data/maps/SlateportCity/scripts.pory"
# 876 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 877 "data/maps/SlateportCity/scripts.pory"
# 524 "data/maps/SlateportCity/scripts.pory"
# 878 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 879 "data/maps/SlateportCity/scripts.pory"
# 525 "data/maps/SlateportCity/scripts.pory"
# 880 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 881 "data/maps/SlateportCity/scripts.pory"
# 526 "data/maps/SlateportCity/scripts.pory"
# 882 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 883 "data/maps/SlateportCity/scripts.pory"
# 527 "data/maps/SlateportCity/scripts.pory"
# 884 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 885 "data/maps/SlateportCity/scripts.pory"
# 528 "data/maps/SlateportCity/scripts.pory"
# 886 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 887 "data/maps/SlateportCity/scripts.pory"
# 529 "data/maps/SlateportCity/scripts.pory"
# 888 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 889 "data/maps/SlateportCity/scripts.pory"
# 530 "data/maps/SlateportCity/scripts.pory"
# 890 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 891 "data/maps/SlateportCity/scripts.pory"
# 531 "data/maps/SlateportCity/scripts.pory"
# 892 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 893 "data/maps/SlateportCity/scripts.pory"
# 532 "data/maps/SlateportCity/scripts.pory"
# 894 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 895 "data/maps/SlateportCity/scripts.pory"
# 533 "data/maps/SlateportCity/scripts.pory"
# 896 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 897 "data/maps/SlateportCity/scripts.pory"
# 534 "data/maps/SlateportCity/scripts.pory"
# 898 "data/maps/SlateportCity/scripts.pory"
	release
# 899 "data/maps/SlateportCity/scripts.pory"
	end
# 900 "data/maps/SlateportCity/scripts.pory"

# 901 "data/maps/SlateportCity/scripts.pory"

# 902 "data/maps/SlateportCity/scripts.pory"
# 538 "data/maps/SlateportCity/scripts.pory"
# 903 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 904 "data/maps/SlateportCity/scripts.pory"
# 539 "data/maps/SlateportCity/scripts.pory"
# 905 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 906 "data/maps/SlateportCity/scripts.pory"
# 540 "data/maps/SlateportCity/scripts.pory"
# 907 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 908 "data/maps/SlateportCity/scripts.pory"
# 541 "data/maps/SlateportCity/scripts.pory"
# 909 "data/maps/SlateportCity/scripts.pory"
	step_end
# 910 "data/maps/SlateportCity/scripts.pory"

# 911 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 912 "data/maps/SlateportCity/scripts.pory"
# 545 "data/maps/SlateportCity/scripts.pory"
# 913 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 914 "data/maps/SlateportCity/scripts.pory"
	end
# 915 "data/maps/SlateportCity/scripts.pory"

# 916 "data/maps/SlateportCity/scripts.pory"

# 917 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 918 "data/maps/SlateportCity/scripts.pory"
# 550 "data/maps/SlateportCity/scripts.pory"
# 919 "data/maps/SlateportCity/scripts.pory"
	lock
# 920 "data/maps/SlateportCity/scripts.pory"
# 551 "data/maps/SlateportCity/scripts.pory"
# 921 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 922 "data/maps/SlateportCity/scripts.pory"
# 552 "data/maps/SlateportCity/scripts.pory"
# 923 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 924 "data/maps/SlateportCity/scripts.pory"
# 553 "data/maps/SlateportCity/scripts.pory"
# 925 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 926 "data/maps/SlateportCity/scripts.pory"
# 554 "data/maps/SlateportCity/scripts.pory"
# 927 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 928 "data/maps/SlateportCity/scripts.pory"
# 555 "data/maps/SlateportCity/scripts.pory"
# 929 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 930 "data/maps/SlateportCity/scripts.pory"
# 556 "data/maps/SlateportCity/scripts.pory"
# 931 "data/maps/SlateportCity/scripts.pory"
	release
# 932 "data/maps/SlateportCity/scripts.pory"
	end
# 933 "data/maps/SlateportCity/scripts.pory"

# 934 "data/maps/SlateportCity/scripts.pory"

# 935 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 936 "data/maps/SlateportCity/scripts.pory"
# 561 "data/maps/SlateportCity/scripts.pory"
# 937 "data/maps/SlateportCity/scripts.pory"
	lock
# 938 "data/maps/SlateportCity/scripts.pory"
# 562 "data/maps/SlateportCity/scripts.pory"
# 939 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 940 "data/maps/SlateportCity/scripts.pory"
# 563 "data/maps/SlateportCity/scripts.pory"
# 941 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 942 "data/maps/SlateportCity/scripts.pory"
# 564 "data/maps/SlateportCity/scripts.pory"
# 943 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 944 "data/maps/SlateportCity/scripts.pory"
# 565 "data/maps/SlateportCity/scripts.pory"
# 945 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 946 "data/maps/SlateportCity/scripts.pory"
# 566 "data/maps/SlateportCity/scripts.pory"
# 947 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 948 "data/maps/SlateportCity/scripts.pory"
# 567 "data/maps/SlateportCity/scripts.pory"
# 949 "data/maps/SlateportCity/scripts.pory"
	release
# 950 "data/maps/SlateportCity/scripts.pory"
	end
# 951 "data/maps/SlateportCity/scripts.pory"

# 952 "data/maps/SlateportCity/scripts.pory"

# 953 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls::
# 954 "data/maps/SlateportCity/scripts.pory"
# 572 "data/maps/SlateportCity/scripts.pory"
# 955 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 956 "data/maps/SlateportCity/scripts.pory"
	return
# 957 "data/maps/SlateportCity/scripts.pory"

# 958 "data/maps/SlateportCity/scripts.pory"

# 959 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 960 "data/maps/SlateportCity/scripts.pory"
# 576 "data/maps/SlateportCity/scripts.pory"
# 961 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 962 "data/maps/SlateportCity/scripts.pory"
# 577 "data/maps/SlateportCity/scripts.pory"
# 963 "data/maps/SlateportCity/scripts.pory"
	release
# 964 "data/maps/SlateportCity/scripts.pory"
	end
# 965 "data/maps/SlateportCity/scripts.pory"

# 966 "data/maps/SlateportCity/scripts.pory"

# 967 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 968 "data/maps/SlateportCity/scripts.pory"
# 582 "data/maps/SlateportCity/scripts.pory"
# 969 "data/maps/SlateportCity/scripts.pory"
	lock
# 970 "data/maps/SlateportCity/scripts.pory"
# 583 "data/maps/SlateportCity/scripts.pory"
# 971 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 972 "data/maps/SlateportCity/scripts.pory"
# 584 "data/maps/SlateportCity/scripts.pory"
# 973 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_DecorClerk_2
# 974 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk_1:
# 975 "data/maps/SlateportCity/scripts.pory"
# 587 "data/maps/SlateportCity/scripts.pory"
# 976 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 977 "data/maps/SlateportCity/scripts.pory"
# 588 "data/maps/SlateportCity/scripts.pory"
# 978 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 979 "data/maps/SlateportCity/scripts.pory"
# 589 "data/maps/SlateportCity/scripts.pory"
# 980 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 981 "data/maps/SlateportCity/scripts.pory"
# 590 "data/maps/SlateportCity/scripts.pory"
# 982 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 983 "data/maps/SlateportCity/scripts.pory"
# 591 "data/maps/SlateportCity/scripts.pory"
# 984 "data/maps/SlateportCity/scripts.pory"
	release
# 985 "data/maps/SlateportCity/scripts.pory"
	end
# 986 "data/maps/SlateportCity/scripts.pory"

# 987 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk_2:
# 988 "data/maps/SlateportCity/scripts.pory"
# 585 "data/maps/SlateportCity/scripts.pory"
# 989 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ComeBackWithSecretPower
# 990 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_DecorClerk_1
# 991 "data/maps/SlateportCity/scripts.pory"

# 992 "data/maps/SlateportCity/scripts.pory"

# 993 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor::
# 994 "data/maps/SlateportCity/scripts.pory"
# 596 "data/maps/SlateportCity/scripts.pory"
# 995 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 996 "data/maps/SlateportCity/scripts.pory"
	return
# 997 "data/maps/SlateportCity/scripts.pory"

# 998 "data/maps/SlateportCity/scripts.pory"

# 999 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 1000 "data/maps/SlateportCity/scripts.pory"
# 600 "data/maps/SlateportCity/scripts.pory"
# 1001 "data/maps/SlateportCity/scripts.pory"
	lock
# 1002 "data/maps/SlateportCity/scripts.pory"
# 601 "data/maps/SlateportCity/scripts.pory"
# 1003 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1004 "data/maps/SlateportCity/scripts.pory"
# 602 "data/maps/SlateportCity/scripts.pory"
# 1005 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1006 "data/maps/SlateportCity/scripts.pory"
# 603 "data/maps/SlateportCity/scripts.pory"
# 1007 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1008 "data/maps/SlateportCity/scripts.pory"
# 604 "data/maps/SlateportCity/scripts.pory"
# 1009 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 1010 "data/maps/SlateportCity/scripts.pory"
# 605 "data/maps/SlateportCity/scripts.pory"
# 1011 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1012 "data/maps/SlateportCity/scripts.pory"
# 606 "data/maps/SlateportCity/scripts.pory"
# 1013 "data/maps/SlateportCity/scripts.pory"
	release
# 1014 "data/maps/SlateportCity/scripts.pory"
	end
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"

# 1017 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs::
# 1018 "data/maps/SlateportCity/scripts.pory"
# 611 "data/maps/SlateportCity/scripts.pory"
# 1019 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 1020 "data/maps/SlateportCity/scripts.pory"
	return
# 1021 "data/maps/SlateportCity/scripts.pory"

# 1022 "data/maps/SlateportCity/scripts.pory"

# 1023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 1024 "data/maps/SlateportCity/scripts.pory"
# 615 "data/maps/SlateportCity/scripts.pory"
# 1025 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1026 "data/maps/SlateportCity/scripts.pory"
# 616 "data/maps/SlateportCity/scripts.pory"
# 1027 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 1028 "data/maps/SlateportCity/scripts.pory"
# 617 "data/maps/SlateportCity/scripts.pory"
# 1029 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 1030 "data/maps/SlateportCity/scripts.pory"
# 618 "data/maps/SlateportCity/scripts.pory"
# 1031 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1032 "data/maps/SlateportCity/scripts.pory"
# 619 "data/maps/SlateportCity/scripts.pory"
# 1033 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 1034 "data/maps/SlateportCity/scripts.pory"
# 620 "data/maps/SlateportCity/scripts.pory"
# 1035 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1036 "data/maps/SlateportCity/scripts.pory"
# 621 "data/maps/SlateportCity/scripts.pory"
# 1037 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 1038 "data/maps/SlateportCity/scripts.pory"
# 622 "data/maps/SlateportCity/scripts.pory"
# 1039 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 1040 "data/maps/SlateportCity/scripts.pory"
# 623 "data/maps/SlateportCity/scripts.pory"
# 1041 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1042 "data/maps/SlateportCity/scripts.pory"
# 624 "data/maps/SlateportCity/scripts.pory"
# 1043 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 1044 "data/maps/SlateportCity/scripts.pory"
# 625 "data/maps/SlateportCity/scripts.pory"
# 1045 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 1046 "data/maps/SlateportCity/scripts.pory"
# 626 "data/maps/SlateportCity/scripts.pory"
# 1047 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 1048 "data/maps/SlateportCity/scripts.pory"
# 627 "data/maps/SlateportCity/scripts.pory"
# 1049 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 1050 "data/maps/SlateportCity/scripts.pory"
# 628 "data/maps/SlateportCity/scripts.pory"
# 1051 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 1052 "data/maps/SlateportCity/scripts.pory"
# 629 "data/maps/SlateportCity/scripts.pory"
# 1053 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1054 "data/maps/SlateportCity/scripts.pory"
# 630 "data/maps/SlateportCity/scripts.pory"
# 1055 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 1056 "data/maps/SlateportCity/scripts.pory"
# 631 "data/maps/SlateportCity/scripts.pory"
# 1057 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 1058 "data/maps/SlateportCity/scripts.pory"
# 632 "data/maps/SlateportCity/scripts.pory"
# 1059 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 1060 "data/maps/SlateportCity/scripts.pory"
# 633 "data/maps/SlateportCity/scripts.pory"
# 1061 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 1062 "data/maps/SlateportCity/scripts.pory"
# 634 "data/maps/SlateportCity/scripts.pory"
# 1063 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1064 "data/maps/SlateportCity/scripts.pory"
# 635 "data/maps/SlateportCity/scripts.pory"
# 1065 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 1066 "data/maps/SlateportCity/scripts.pory"
# 636 "data/maps/SlateportCity/scripts.pory"
# 1067 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1068 "data/maps/SlateportCity/scripts.pory"
# 637 "data/maps/SlateportCity/scripts.pory"
# 1069 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 1070 "data/maps/SlateportCity/scripts.pory"
# 638 "data/maps/SlateportCity/scripts.pory"
# 1071 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 1072 "data/maps/SlateportCity/scripts.pory"
# 639 "data/maps/SlateportCity/scripts.pory"
# 1073 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 1074 "data/maps/SlateportCity/scripts.pory"
# 640 "data/maps/SlateportCity/scripts.pory"
# 1075 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 1076 "data/maps/SlateportCity/scripts.pory"
# 641 "data/maps/SlateportCity/scripts.pory"
# 1077 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 1078 "data/maps/SlateportCity/scripts.pory"
# 642 "data/maps/SlateportCity/scripts.pory"
# 1079 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 1080 "data/maps/SlateportCity/scripts.pory"
# 643 "data/maps/SlateportCity/scripts.pory"
# 1081 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1082 "data/maps/SlateportCity/scripts.pory"
# 644 "data/maps/SlateportCity/scripts.pory"
# 1083 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 1084 "data/maps/SlateportCity/scripts.pory"
# 645 "data/maps/SlateportCity/scripts.pory"
# 1085 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1086 "data/maps/SlateportCity/scripts.pory"
# 646 "data/maps/SlateportCity/scripts.pory"
# 1087 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 1088 "data/maps/SlateportCity/scripts.pory"
# 647 "data/maps/SlateportCity/scripts.pory"
# 1089 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 1090 "data/maps/SlateportCity/scripts.pory"
# 648 "data/maps/SlateportCity/scripts.pory"
# 1091 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 1092 "data/maps/SlateportCity/scripts.pory"
# 649 "data/maps/SlateportCity/scripts.pory"
# 1093 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1094 "data/maps/SlateportCity/scripts.pory"
# 650 "data/maps/SlateportCity/scripts.pory"
# 1095 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 1096 "data/maps/SlateportCity/scripts.pory"
# 651 "data/maps/SlateportCity/scripts.pory"
# 1097 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1098 "data/maps/SlateportCity/scripts.pory"
# 652 "data/maps/SlateportCity/scripts.pory"
# 1099 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 1100 "data/maps/SlateportCity/scripts.pory"
# 653 "data/maps/SlateportCity/scripts.pory"
# 1101 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1102 "data/maps/SlateportCity/scripts.pory"
# 654 "data/maps/SlateportCity/scripts.pory"
# 1103 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 1104 "data/maps/SlateportCity/scripts.pory"
# 655 "data/maps/SlateportCity/scripts.pory"
# 1105 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 1106 "data/maps/SlateportCity/scripts.pory"
# 656 "data/maps/SlateportCity/scripts.pory"
# 1107 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1108 "data/maps/SlateportCity/scripts.pory"
# 657 "data/maps/SlateportCity/scripts.pory"
# 1109 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 1110 "data/maps/SlateportCity/scripts.pory"
# 658 "data/maps/SlateportCity/scripts.pory"
# 1111 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 1112 "data/maps/SlateportCity/scripts.pory"
# 659 "data/maps/SlateportCity/scripts.pory"
# 1113 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1114 "data/maps/SlateportCity/scripts.pory"
# 660 "data/maps/SlateportCity/scripts.pory"
# 1115 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 1116 "data/maps/SlateportCity/scripts.pory"
# 661 "data/maps/SlateportCity/scripts.pory"
# 1117 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 1118 "data/maps/SlateportCity/scripts.pory"
# 662 "data/maps/SlateportCity/scripts.pory"
# 1119 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 1120 "data/maps/SlateportCity/scripts.pory"
# 663 "data/maps/SlateportCity/scripts.pory"
# 1121 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 1122 "data/maps/SlateportCity/scripts.pory"
# 664 "data/maps/SlateportCity/scripts.pory"
# 1123 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 1124 "data/maps/SlateportCity/scripts.pory"
# 665 "data/maps/SlateportCity/scripts.pory"
# 1125 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 1126 "data/maps/SlateportCity/scripts.pory"
# 666 "data/maps/SlateportCity/scripts.pory"
# 1127 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 1128 "data/maps/SlateportCity/scripts.pory"
# 667 "data/maps/SlateportCity/scripts.pory"
# 1129 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1130 "data/maps/SlateportCity/scripts.pory"
# 668 "data/maps/SlateportCity/scripts.pory"
# 1131 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1132 "data/maps/SlateportCity/scripts.pory"
	end
# 1133 "data/maps/SlateportCity/scripts.pory"

# 1134 "data/maps/SlateportCity/scripts.pory"

# 1135 "data/maps/SlateportCity/scripts.pory"
# 672 "data/maps/SlateportCity/scripts.pory"
# 1136 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 1137 "data/maps/SlateportCity/scripts.pory"
# 673 "data/maps/SlateportCity/scripts.pory"
# 1138 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1139 "data/maps/SlateportCity/scripts.pory"
# 674 "data/maps/SlateportCity/scripts.pory"
# 1140 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1141 "data/maps/SlateportCity/scripts.pory"
# 675 "data/maps/SlateportCity/scripts.pory"
# 1142 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 1143 "data/maps/SlateportCity/scripts.pory"
# 676 "data/maps/SlateportCity/scripts.pory"
# 1144 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1145 "data/maps/SlateportCity/scripts.pory"
# 677 "data/maps/SlateportCity/scripts.pory"
# 1146 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1147 "data/maps/SlateportCity/scripts.pory"
# 678 "data/maps/SlateportCity/scripts.pory"
# 1148 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1149 "data/maps/SlateportCity/scripts.pory"
# 679 "data/maps/SlateportCity/scripts.pory"
# 1150 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 1151 "data/maps/SlateportCity/scripts.pory"
# 680 "data/maps/SlateportCity/scripts.pory"
# 1152 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1153 "data/maps/SlateportCity/scripts.pory"

# 1154 "data/maps/SlateportCity/scripts.pory"
# 683 "data/maps/SlateportCity/scripts.pory"
# 1155 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 1156 "data/maps/SlateportCity/scripts.pory"
# 684 "data/maps/SlateportCity/scripts.pory"
# 1157 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 1158 "data/maps/SlateportCity/scripts.pory"
# 685 "data/maps/SlateportCity/scripts.pory"
# 1159 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 1160 "data/maps/SlateportCity/scripts.pory"
# 686 "data/maps/SlateportCity/scripts.pory"
# 1161 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1162 "data/maps/SlateportCity/scripts.pory"
# 687 "data/maps/SlateportCity/scripts.pory"
# 1163 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 1164 "data/maps/SlateportCity/scripts.pory"
# 688 "data/maps/SlateportCity/scripts.pory"
# 1165 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1166 "data/maps/SlateportCity/scripts.pory"
# 689 "data/maps/SlateportCity/scripts.pory"
# 1167 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1168 "data/maps/SlateportCity/scripts.pory"
# 690 "data/maps/SlateportCity/scripts.pory"
# 1169 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 1170 "data/maps/SlateportCity/scripts.pory"
# 691 "data/maps/SlateportCity/scripts.pory"
# 1171 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1172 "data/maps/SlateportCity/scripts.pory"

# 1173 "data/maps/SlateportCity/scripts.pory"
# 694 "data/maps/SlateportCity/scripts.pory"
# 1174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 1175 "data/maps/SlateportCity/scripts.pory"
# 695 "data/maps/SlateportCity/scripts.pory"
# 1176 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1177 "data/maps/SlateportCity/scripts.pory"
# 696 "data/maps/SlateportCity/scripts.pory"
# 1178 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1179 "data/maps/SlateportCity/scripts.pory"
# 697 "data/maps/SlateportCity/scripts.pory"
# 1180 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1181 "data/maps/SlateportCity/scripts.pory"
# 698 "data/maps/SlateportCity/scripts.pory"
# 1182 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1183 "data/maps/SlateportCity/scripts.pory"
# 699 "data/maps/SlateportCity/scripts.pory"
# 1184 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1185 "data/maps/SlateportCity/scripts.pory"
# 700 "data/maps/SlateportCity/scripts.pory"
# 1186 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1187 "data/maps/SlateportCity/scripts.pory"
# 701 "data/maps/SlateportCity/scripts.pory"
# 1188 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1189 "data/maps/SlateportCity/scripts.pory"
# 702 "data/maps/SlateportCity/scripts.pory"
# 1190 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1191 "data/maps/SlateportCity/scripts.pory"
# 703 "data/maps/SlateportCity/scripts.pory"
# 1192 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1193 "data/maps/SlateportCity/scripts.pory"
# 704 "data/maps/SlateportCity/scripts.pory"
# 1194 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1195 "data/maps/SlateportCity/scripts.pory"
# 705 "data/maps/SlateportCity/scripts.pory"
# 1196 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1197 "data/maps/SlateportCity/scripts.pory"
# 706 "data/maps/SlateportCity/scripts.pory"
# 1198 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1199 "data/maps/SlateportCity/scripts.pory"
# 707 "data/maps/SlateportCity/scripts.pory"
# 1200 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1201 "data/maps/SlateportCity/scripts.pory"

# 1202 "data/maps/SlateportCity/scripts.pory"
# 710 "data/maps/SlateportCity/scripts.pory"
# 1203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 1204 "data/maps/SlateportCity/scripts.pory"
# 711 "data/maps/SlateportCity/scripts.pory"
# 1205 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1206 "data/maps/SlateportCity/scripts.pory"
# 712 "data/maps/SlateportCity/scripts.pory"
# 1207 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1208 "data/maps/SlateportCity/scripts.pory"
# 713 "data/maps/SlateportCity/scripts.pory"
# 1209 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1210 "data/maps/SlateportCity/scripts.pory"
# 714 "data/maps/SlateportCity/scripts.pory"
# 1211 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1212 "data/maps/SlateportCity/scripts.pory"
# 715 "data/maps/SlateportCity/scripts.pory"
# 1213 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1214 "data/maps/SlateportCity/scripts.pory"
# 716 "data/maps/SlateportCity/scripts.pory"
# 1215 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1216 "data/maps/SlateportCity/scripts.pory"
# 717 "data/maps/SlateportCity/scripts.pory"
# 1217 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1218 "data/maps/SlateportCity/scripts.pory"
# 718 "data/maps/SlateportCity/scripts.pory"
# 1219 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1220 "data/maps/SlateportCity/scripts.pory"
# 719 "data/maps/SlateportCity/scripts.pory"
# 1221 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1222 "data/maps/SlateportCity/scripts.pory"
# 720 "data/maps/SlateportCity/scripts.pory"
# 1223 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1224 "data/maps/SlateportCity/scripts.pory"
# 721 "data/maps/SlateportCity/scripts.pory"
# 1225 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1226 "data/maps/SlateportCity/scripts.pory"
# 722 "data/maps/SlateportCity/scripts.pory"
# 1227 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1228 "data/maps/SlateportCity/scripts.pory"
# 723 "data/maps/SlateportCity/scripts.pory"
# 1229 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1230 "data/maps/SlateportCity/scripts.pory"
# 724 "data/maps/SlateportCity/scripts.pory"
# 1231 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1232 "data/maps/SlateportCity/scripts.pory"

# 1233 "data/maps/SlateportCity/scripts.pory"
# 727 "data/maps/SlateportCity/scripts.pory"
# 1234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 1235 "data/maps/SlateportCity/scripts.pory"
# 728 "data/maps/SlateportCity/scripts.pory"
# 1236 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1237 "data/maps/SlateportCity/scripts.pory"
# 729 "data/maps/SlateportCity/scripts.pory"
# 1238 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 1239 "data/maps/SlateportCity/scripts.pory"
# 730 "data/maps/SlateportCity/scripts.pory"
# 1240 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1241 "data/maps/SlateportCity/scripts.pory"

# 1242 "data/maps/SlateportCity/scripts.pory"
# 733 "data/maps/SlateportCity/scripts.pory"
# 1243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 1244 "data/maps/SlateportCity/scripts.pory"
# 734 "data/maps/SlateportCity/scripts.pory"
# 1245 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1246 "data/maps/SlateportCity/scripts.pory"
# 735 "data/maps/SlateportCity/scripts.pory"
# 1247 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 1248 "data/maps/SlateportCity/scripts.pory"
# 736 "data/maps/SlateportCity/scripts.pory"
# 1249 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 1250 "data/maps/SlateportCity/scripts.pory"
# 737 "data/maps/SlateportCity/scripts.pory"
# 1251 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 1252 "data/maps/SlateportCity/scripts.pory"
# 738 "data/maps/SlateportCity/scripts.pory"
# 1253 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1254 "data/maps/SlateportCity/scripts.pory"

# 1255 "data/maps/SlateportCity/scripts.pory"
# 741 "data/maps/SlateportCity/scripts.pory"
# 1256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 1257 "data/maps/SlateportCity/scripts.pory"
# 742 "data/maps/SlateportCity/scripts.pory"
# 1258 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1259 "data/maps/SlateportCity/scripts.pory"
# 743 "data/maps/SlateportCity/scripts.pory"
# 1260 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1261 "data/maps/SlateportCity/scripts.pory"
# 744 "data/maps/SlateportCity/scripts.pory"
# 1262 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1263 "data/maps/SlateportCity/scripts.pory"
# 745 "data/maps/SlateportCity/scripts.pory"
# 1264 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1265 "data/maps/SlateportCity/scripts.pory"
# 746 "data/maps/SlateportCity/scripts.pory"
# 1266 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1267 "data/maps/SlateportCity/scripts.pory"
# 747 "data/maps/SlateportCity/scripts.pory"
# 1268 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1269 "data/maps/SlateportCity/scripts.pory"
# 748 "data/maps/SlateportCity/scripts.pory"
# 1270 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1271 "data/maps/SlateportCity/scripts.pory"
# 749 "data/maps/SlateportCity/scripts.pory"
# 1272 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1273 "data/maps/SlateportCity/scripts.pory"

# 1274 "data/maps/SlateportCity/scripts.pory"
# 752 "data/maps/SlateportCity/scripts.pory"
# 1275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 1276 "data/maps/SlateportCity/scripts.pory"
# 753 "data/maps/SlateportCity/scripts.pory"
# 1277 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1278 "data/maps/SlateportCity/scripts.pory"
# 754 "data/maps/SlateportCity/scripts.pory"
# 1279 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1280 "data/maps/SlateportCity/scripts.pory"
# 755 "data/maps/SlateportCity/scripts.pory"
# 1281 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1282 "data/maps/SlateportCity/scripts.pory"
# 756 "data/maps/SlateportCity/scripts.pory"
# 1283 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1284 "data/maps/SlateportCity/scripts.pory"
# 757 "data/maps/SlateportCity/scripts.pory"
# 1285 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 1286 "data/maps/SlateportCity/scripts.pory"
# 758 "data/maps/SlateportCity/scripts.pory"
# 1287 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1288 "data/maps/SlateportCity/scripts.pory"

# 1289 "data/maps/SlateportCity/scripts.pory"
# 761 "data/maps/SlateportCity/scripts.pory"
# 1290 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 1291 "data/maps/SlateportCity/scripts.pory"
# 762 "data/maps/SlateportCity/scripts.pory"
# 1292 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1293 "data/maps/SlateportCity/scripts.pory"
# 763 "data/maps/SlateportCity/scripts.pory"
# 1294 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1295 "data/maps/SlateportCity/scripts.pory"
# 764 "data/maps/SlateportCity/scripts.pory"
# 1296 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1297 "data/maps/SlateportCity/scripts.pory"
# 765 "data/maps/SlateportCity/scripts.pory"
# 1298 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1299 "data/maps/SlateportCity/scripts.pory"
# 766 "data/maps/SlateportCity/scripts.pory"
# 1300 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1301 "data/maps/SlateportCity/scripts.pory"
# 767 "data/maps/SlateportCity/scripts.pory"
# 1302 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1303 "data/maps/SlateportCity/scripts.pory"
# 768 "data/maps/SlateportCity/scripts.pory"
# 1304 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1305 "data/maps/SlateportCity/scripts.pory"
# 769 "data/maps/SlateportCity/scripts.pory"
# 1306 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 1307 "data/maps/SlateportCity/scripts.pory"
# 770 "data/maps/SlateportCity/scripts.pory"
# 1308 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1309 "data/maps/SlateportCity/scripts.pory"

# 1310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 1311 "data/maps/SlateportCity/scripts.pory"
# 774 "data/maps/SlateportCity/scripts.pory"
# 1312 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 1313 "data/maps/SlateportCity/scripts.pory"
	end
# 1314 "data/maps/SlateportCity/scripts.pory"

# 1315 "data/maps/SlateportCity/scripts.pory"

# 1316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 1317 "data/maps/SlateportCity/scripts.pory"
# 779 "data/maps/SlateportCity/scripts.pory"
# 1318 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 1319 "data/maps/SlateportCity/scripts.pory"
	end
# 1320 "data/maps/SlateportCity/scripts.pory"

# 1321 "data/maps/SlateportCity/scripts.pory"

# 1322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 1323 "data/maps/SlateportCity/scripts.pory"
# 784 "data/maps/SlateportCity/scripts.pory"
# 1324 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 1325 "data/maps/SlateportCity/scripts.pory"
	end
# 1326 "data/maps/SlateportCity/scripts.pory"

# 1327 "data/maps/SlateportCity/scripts.pory"

# 1328 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 1329 "data/maps/SlateportCity/scripts.pory"
# 789 "data/maps/SlateportCity/scripts.pory"
# 1330 "data/maps/SlateportCity/scripts.pory"
	lock
# 1331 "data/maps/SlateportCity/scripts.pory"
# 790 "data/maps/SlateportCity/scripts.pory"
# 1332 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1333 "data/maps/SlateportCity/scripts.pory"
# 791 "data/maps/SlateportCity/scripts.pory"
# 1334 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_BerryPowderClerk_2
# 1335 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk_1:
# 1336 "data/maps/SlateportCity/scripts.pory"
# 794 "data/maps/SlateportCity/scripts.pory"
# 1337 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 1338 "data/maps/SlateportCity/scripts.pory"
# 795 "data/maps/SlateportCity/scripts.pory"
# 1339 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 1340 "data/maps/SlateportCity/scripts.pory"
# 796 "data/maps/SlateportCity/scripts.pory"
# 1341 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 1342 "data/maps/SlateportCity/scripts.pory"
# 797 "data/maps/SlateportCity/scripts.pory"
# 1343 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 1344 "data/maps/SlateportCity/scripts.pory"
# 798 "data/maps/SlateportCity/scripts.pory"
# 1345 "data/maps/SlateportCity/scripts.pory"
	release
# 1346 "data/maps/SlateportCity/scripts.pory"
	end
# 1347 "data/maps/SlateportCity/scripts.pory"

# 1348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk_2:
# 1349 "data/maps/SlateportCity/scripts.pory"
# 792 "data/maps/SlateportCity/scripts.pory"
# 1350 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ReceivedPowderJar
# 1351 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_BerryPowderClerk_1
# 1352 "data/maps/SlateportCity/scripts.pory"

# 1353 "data/maps/SlateportCity/scripts.pory"

# 1354 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 1355 "data/maps/SlateportCity/scripts.pory"
# 803 "data/maps/SlateportCity/scripts.pory"
# 1356 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 1357 "data/maps/SlateportCity/scripts.pory"
# 804 "data/maps/SlateportCity/scripts.pory"
# 1358 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1359 "data/maps/SlateportCity/scripts.pory"
# 805 "data/maps/SlateportCity/scripts.pory"
# 1360 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 1361 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_ReceivedPowderJar_2
# 1362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar_1:
# 1363 "data/maps/SlateportCity/scripts.pory"
# 808 "data/maps/SlateportCity/scripts.pory"
# 1364 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 1365 "data/maps/SlateportCity/scripts.pory"
# 809 "data/maps/SlateportCity/scripts.pory"
# 1366 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 1367 "data/maps/SlateportCity/scripts.pory"
# 810 "data/maps/SlateportCity/scripts.pory"
# 1368 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1369 "data/maps/SlateportCity/scripts.pory"
	end
# 1370 "data/maps/SlateportCity/scripts.pory"

# 1371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar_2:
# 1372 "data/maps/SlateportCity/scripts.pory"
# 806 "data/maps/SlateportCity/scripts.pory"
# 1373 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ExplainBerryPowder
# 1374 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ReceivedPowderJar_1
# 1375 "data/maps/SlateportCity/scripts.pory"

# 1376 "data/maps/SlateportCity/scripts.pory"

# 1377 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 1378 "data/maps/SlateportCity/scripts.pory"
# 815 "data/maps/SlateportCity/scripts.pory"
# 1379 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 1380 "data/maps/SlateportCity/scripts.pory"
# 816 "data/maps/SlateportCity/scripts.pory"
# 1381 "data/maps/SlateportCity/scripts.pory"
	release
# 1382 "data/maps/SlateportCity/scripts.pory"
	end
# 1383 "data/maps/SlateportCity/scripts.pory"

# 1384 "data/maps/SlateportCity/scripts.pory"

# 1385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 1386 "data/maps/SlateportCity/scripts.pory"
# 821 "data/maps/SlateportCity/scripts.pory"
# 1387 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 1388 "data/maps/SlateportCity/scripts.pory"
# 822 "data/maps/SlateportCity/scripts.pory"
# 1389 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1390 "data/maps/SlateportCity/scripts.pory"
# 823 "data/maps/SlateportCity/scripts.pory"
# 1391 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 1392 "data/maps/SlateportCity/scripts.pory"
# 824 "data/maps/SlateportCity/scripts.pory"
# 1393 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 1394 "data/maps/SlateportCity/scripts.pory"
# 825 "data/maps/SlateportCity/scripts.pory"
# 1395 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1396 "data/maps/SlateportCity/scripts.pory"
# 826 "data/maps/SlateportCity/scripts.pory"
# 1397 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 1398 "data/maps/SlateportCity/scripts.pory"
# 827 "data/maps/SlateportCity/scripts.pory"
# 1399 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_ChooseBerryPowderItem_3
# 1400 "data/maps/SlateportCity/scripts.pory"
# 829 "data/maps/SlateportCity/scripts.pory"
# 1401 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_ChooseBerryPowderItem_4
# 1402 "data/maps/SlateportCity/scripts.pory"
# 831 "data/maps/SlateportCity/scripts.pory"
# 1403 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_ChooseBerryPowderItem_5
# 1404 "data/maps/SlateportCity/scripts.pory"
# 833 "data/maps/SlateportCity/scripts.pory"
# 1405 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_ChooseBerryPowderItem_6
# 1406 "data/maps/SlateportCity/scripts.pory"
# 835 "data/maps/SlateportCity/scripts.pory"
# 1407 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_ChooseBerryPowderItem_7
# 1408 "data/maps/SlateportCity/scripts.pory"
# 837 "data/maps/SlateportCity/scripts.pory"
# 1409 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_ChooseBerryPowderItem_8
# 1410 "data/maps/SlateportCity/scripts.pory"
# 839 "data/maps/SlateportCity/scripts.pory"
# 1411 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_ChooseBerryPowderItem_9
# 1412 "data/maps/SlateportCity/scripts.pory"
# 841 "data/maps/SlateportCity/scripts.pory"
# 1413 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_ChooseBerryPowderItem_10
# 1414 "data/maps/SlateportCity/scripts.pory"
# 843 "data/maps/SlateportCity/scripts.pory"
# 1415 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_ChooseBerryPowderItem_11
# 1416 "data/maps/SlateportCity/scripts.pory"
# 845 "data/maps/SlateportCity/scripts.pory"
# 1417 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_ChooseBerryPowderItem_12
# 1418 "data/maps/SlateportCity/scripts.pory"
# 847 "data/maps/SlateportCity/scripts.pory"
# 1419 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_ChooseBerryPowderItem_13
# 1420 "data/maps/SlateportCity/scripts.pory"
# 849 "data/maps/SlateportCity/scripts.pory"
# 1421 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_ChooseBerryPowderItem_14
# 1422 "data/maps/SlateportCity/scripts.pory"
# 851 "data/maps/SlateportCity/scripts.pory"
# 1423 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_ChooseBerryPowderItem_15
# 1424 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_1:
# 1425 "data/maps/SlateportCity/scripts.pory"
	end
# 1426 "data/maps/SlateportCity/scripts.pory"

# 1427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_3:
# 1428 "data/maps/SlateportCity/scripts.pory"
# 828 "data/maps/SlateportCity/scripts.pory"
# 1429 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_EnergyPowder
# 1430 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1431 "data/maps/SlateportCity/scripts.pory"

# 1432 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_4:
# 1433 "data/maps/SlateportCity/scripts.pory"
# 830 "data/maps/SlateportCity/scripts.pory"
# 1434 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_EnergyRoot
# 1435 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1436 "data/maps/SlateportCity/scripts.pory"

# 1437 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_5:
# 1438 "data/maps/SlateportCity/scripts.pory"
# 832 "data/maps/SlateportCity/scripts.pory"
# 1439 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_HealPowder
# 1440 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1441 "data/maps/SlateportCity/scripts.pory"

# 1442 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_6:
# 1443 "data/maps/SlateportCity/scripts.pory"
# 834 "data/maps/SlateportCity/scripts.pory"
# 1444 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_RevivalHerb
# 1445 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1446 "data/maps/SlateportCity/scripts.pory"

# 1447 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_7:
# 1448 "data/maps/SlateportCity/scripts.pory"
# 836 "data/maps/SlateportCity/scripts.pory"
# 1449 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Protein
# 1450 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1451 "data/maps/SlateportCity/scripts.pory"

# 1452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_8:
# 1453 "data/maps/SlateportCity/scripts.pory"
# 838 "data/maps/SlateportCity/scripts.pory"
# 1454 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Iron
# 1455 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1456 "data/maps/SlateportCity/scripts.pory"

# 1457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_9:
# 1458 "data/maps/SlateportCity/scripts.pory"
# 840 "data/maps/SlateportCity/scripts.pory"
# 1459 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Carbos
# 1460 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1461 "data/maps/SlateportCity/scripts.pory"

# 1462 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_10:
# 1463 "data/maps/SlateportCity/scripts.pory"
# 842 "data/maps/SlateportCity/scripts.pory"
# 1464 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Calcium
# 1465 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1466 "data/maps/SlateportCity/scripts.pory"

# 1467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_11:
# 1468 "data/maps/SlateportCity/scripts.pory"
# 844 "data/maps/SlateportCity/scripts.pory"
# 1469 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_Zinc
# 1470 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1471 "data/maps/SlateportCity/scripts.pory"

# 1472 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_12:
# 1473 "data/maps/SlateportCity/scripts.pory"
# 846 "data/maps/SlateportCity/scripts.pory"
# 1474 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_HPUp
# 1475 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1476 "data/maps/SlateportCity/scripts.pory"

# 1477 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_13:
# 1478 "data/maps/SlateportCity/scripts.pory"
# 848 "data/maps/SlateportCity/scripts.pory"
# 1479 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_PPUp
# 1480 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1481 "data/maps/SlateportCity/scripts.pory"

# 1482 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_14:
# 1483 "data/maps/SlateportCity/scripts.pory"
# 850 "data/maps/SlateportCity/scripts.pory"
# 1484 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_CancelPowderItemSelect
# 1485 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1486 "data/maps/SlateportCity/scripts.pory"

# 1487 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem_15:
# 1488 "data/maps/SlateportCity/scripts.pory"
# 852 "data/maps/SlateportCity/scripts.pory"
# 1489 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_CancelPowderItemSelect
# 1490 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1
# 1491 "data/maps/SlateportCity/scripts.pory"

# 1492 "data/maps/SlateportCity/scripts.pory"

# 1493 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 1494 "data/maps/SlateportCity/scripts.pory"
# 858 "data/maps/SlateportCity/scripts.pory"
# 1495 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 1496 "data/maps/SlateportCity/scripts.pory"
# 859 "data/maps/SlateportCity/scripts.pory"
# 1497 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 1498 "data/maps/SlateportCity/scripts.pory"
# 860 "data/maps/SlateportCity/scripts.pory"
# 1499 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1500 "data/maps/SlateportCity/scripts.pory"
# 861 "data/maps/SlateportCity/scripts.pory"
# 1501 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1502 "data/maps/SlateportCity/scripts.pory"
	end
# 1503 "data/maps/SlateportCity/scripts.pory"

# 1504 "data/maps/SlateportCity/scripts.pory"

# 1505 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 1506 "data/maps/SlateportCity/scripts.pory"
# 866 "data/maps/SlateportCity/scripts.pory"
# 1507 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 1508 "data/maps/SlateportCity/scripts.pory"
# 867 "data/maps/SlateportCity/scripts.pory"
# 1509 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 1510 "data/maps/SlateportCity/scripts.pory"
# 868 "data/maps/SlateportCity/scripts.pory"
# 1511 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 1512 "data/maps/SlateportCity/scripts.pory"
# 869 "data/maps/SlateportCity/scripts.pory"
# 1513 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1514 "data/maps/SlateportCity/scripts.pory"
	end
# 1515 "data/maps/SlateportCity/scripts.pory"

# 1516 "data/maps/SlateportCity/scripts.pory"

# 1517 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 1518 "data/maps/SlateportCity/scripts.pory"
# 874 "data/maps/SlateportCity/scripts.pory"
# 1519 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 1520 "data/maps/SlateportCity/scripts.pory"
# 875 "data/maps/SlateportCity/scripts.pory"
# 1521 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 1522 "data/maps/SlateportCity/scripts.pory"
# 876 "data/maps/SlateportCity/scripts.pory"
# 1523 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1524 "data/maps/SlateportCity/scripts.pory"
# 877 "data/maps/SlateportCity/scripts.pory"
# 1525 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1526 "data/maps/SlateportCity/scripts.pory"
	end
# 1527 "data/maps/SlateportCity/scripts.pory"

# 1528 "data/maps/SlateportCity/scripts.pory"

# 1529 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 1530 "data/maps/SlateportCity/scripts.pory"
# 882 "data/maps/SlateportCity/scripts.pory"
# 1531 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 1532 "data/maps/SlateportCity/scripts.pory"
# 883 "data/maps/SlateportCity/scripts.pory"
# 1533 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 1534 "data/maps/SlateportCity/scripts.pory"
# 884 "data/maps/SlateportCity/scripts.pory"
# 1535 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 1536 "data/maps/SlateportCity/scripts.pory"
# 885 "data/maps/SlateportCity/scripts.pory"
# 1537 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1538 "data/maps/SlateportCity/scripts.pory"
	end
# 1539 "data/maps/SlateportCity/scripts.pory"

# 1540 "data/maps/SlateportCity/scripts.pory"

# 1541 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 1542 "data/maps/SlateportCity/scripts.pory"
# 890 "data/maps/SlateportCity/scripts.pory"
# 1543 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 1544 "data/maps/SlateportCity/scripts.pory"
# 891 "data/maps/SlateportCity/scripts.pory"
# 1545 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 1546 "data/maps/SlateportCity/scripts.pory"
# 892 "data/maps/SlateportCity/scripts.pory"
# 1547 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1548 "data/maps/SlateportCity/scripts.pory"
# 893 "data/maps/SlateportCity/scripts.pory"
# 1549 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1550 "data/maps/SlateportCity/scripts.pory"
	end
# 1551 "data/maps/SlateportCity/scripts.pory"

# 1552 "data/maps/SlateportCity/scripts.pory"

# 1553 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 1554 "data/maps/SlateportCity/scripts.pory"
# 898 "data/maps/SlateportCity/scripts.pory"
# 1555 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 1556 "data/maps/SlateportCity/scripts.pory"
# 899 "data/maps/SlateportCity/scripts.pory"
# 1557 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 1558 "data/maps/SlateportCity/scripts.pory"
# 900 "data/maps/SlateportCity/scripts.pory"
# 1559 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1560 "data/maps/SlateportCity/scripts.pory"
# 901 "data/maps/SlateportCity/scripts.pory"
# 1561 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1562 "data/maps/SlateportCity/scripts.pory"
	end
# 1563 "data/maps/SlateportCity/scripts.pory"

# 1564 "data/maps/SlateportCity/scripts.pory"

# 1565 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 1566 "data/maps/SlateportCity/scripts.pory"
# 906 "data/maps/SlateportCity/scripts.pory"
# 1567 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 1568 "data/maps/SlateportCity/scripts.pory"
# 907 "data/maps/SlateportCity/scripts.pory"
# 1569 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 1570 "data/maps/SlateportCity/scripts.pory"
# 908 "data/maps/SlateportCity/scripts.pory"
# 1571 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1572 "data/maps/SlateportCity/scripts.pory"
# 909 "data/maps/SlateportCity/scripts.pory"
# 1573 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1574 "data/maps/SlateportCity/scripts.pory"
	end
# 1575 "data/maps/SlateportCity/scripts.pory"

# 1576 "data/maps/SlateportCity/scripts.pory"

# 1577 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 1578 "data/maps/SlateportCity/scripts.pory"
# 914 "data/maps/SlateportCity/scripts.pory"
# 1579 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 1580 "data/maps/SlateportCity/scripts.pory"
# 915 "data/maps/SlateportCity/scripts.pory"
# 1581 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 1582 "data/maps/SlateportCity/scripts.pory"
# 916 "data/maps/SlateportCity/scripts.pory"
# 1583 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1584 "data/maps/SlateportCity/scripts.pory"
# 917 "data/maps/SlateportCity/scripts.pory"
# 1585 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1586 "data/maps/SlateportCity/scripts.pory"
	end
# 1587 "data/maps/SlateportCity/scripts.pory"

# 1588 "data/maps/SlateportCity/scripts.pory"

# 1589 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 1590 "data/maps/SlateportCity/scripts.pory"
# 922 "data/maps/SlateportCity/scripts.pory"
# 1591 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 1592 "data/maps/SlateportCity/scripts.pory"
# 923 "data/maps/SlateportCity/scripts.pory"
# 1593 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 1594 "data/maps/SlateportCity/scripts.pory"
# 924 "data/maps/SlateportCity/scripts.pory"
# 1595 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1596 "data/maps/SlateportCity/scripts.pory"
# 925 "data/maps/SlateportCity/scripts.pory"
# 1597 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1598 "data/maps/SlateportCity/scripts.pory"
	end
# 1599 "data/maps/SlateportCity/scripts.pory"

# 1600 "data/maps/SlateportCity/scripts.pory"

# 1601 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 1602 "data/maps/SlateportCity/scripts.pory"
# 930 "data/maps/SlateportCity/scripts.pory"
# 1603 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 1604 "data/maps/SlateportCity/scripts.pory"
# 931 "data/maps/SlateportCity/scripts.pory"
# 1605 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 1606 "data/maps/SlateportCity/scripts.pory"
# 932 "data/maps/SlateportCity/scripts.pory"
# 1607 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1608 "data/maps/SlateportCity/scripts.pory"
# 933 "data/maps/SlateportCity/scripts.pory"
# 1609 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1610 "data/maps/SlateportCity/scripts.pory"
	end
# 1611 "data/maps/SlateportCity/scripts.pory"

# 1612 "data/maps/SlateportCity/scripts.pory"

# 1613 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1614 "data/maps/SlateportCity/scripts.pory"
# 938 "data/maps/SlateportCity/scripts.pory"
# 1615 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1616 "data/maps/SlateportCity/scripts.pory"
# 939 "data/maps/SlateportCity/scripts.pory"
# 1617 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1618 "data/maps/SlateportCity/scripts.pory"
# 940 "data/maps/SlateportCity/scripts.pory"
# 1619 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1620 "data/maps/SlateportCity/scripts.pory"
# 941 "data/maps/SlateportCity/scripts.pory"
# 1621 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1622 "data/maps/SlateportCity/scripts.pory"
	end
# 1623 "data/maps/SlateportCity/scripts.pory"

# 1624 "data/maps/SlateportCity/scripts.pory"

# 1625 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1626 "data/maps/SlateportCity/scripts.pory"
# 946 "data/maps/SlateportCity/scripts.pory"
# 1627 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1628 "data/maps/SlateportCity/scripts.pory"
# 947 "data/maps/SlateportCity/scripts.pory"
# 1629 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1630 "data/maps/SlateportCity/scripts.pory"
# 948 "data/maps/SlateportCity/scripts.pory"
# 1631 "data/maps/SlateportCity/scripts.pory"
	release
# 1632 "data/maps/SlateportCity/scripts.pory"
	end
# 1633 "data/maps/SlateportCity/scripts.pory"

# 1634 "data/maps/SlateportCity/scripts.pory"

# 1635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1636 "data/maps/SlateportCity/scripts.pory"
# 953 "data/maps/SlateportCity/scripts.pory"
# 1637 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1638 "data/maps/SlateportCity/scripts.pory"
# 954 "data/maps/SlateportCity/scripts.pory"
# 1639 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, NO
# 1640 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_2
# 1641 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem_1:
# 1642 "data/maps/SlateportCity/scripts.pory"
# 957 "data/maps/SlateportCity/scripts.pory"
# 1643 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1644 "data/maps/SlateportCity/scripts.pory"
# 958 "data/maps/SlateportCity/scripts.pory"
# 1645 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1646 "data/maps/SlateportCity/scripts.pory"
# 959 "data/maps/SlateportCity/scripts.pory"
# 1647 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 1648 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_5
# 1649 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem_4:
# 1650 "data/maps/SlateportCity/scripts.pory"
# 962 "data/maps/SlateportCity/scripts.pory"
# 1651 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1652 "data/maps/SlateportCity/scripts.pory"
# 963 "data/maps/SlateportCity/scripts.pory"
# 1653 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 1654 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_8
# 1655 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem_7:
# 1656 "data/maps/SlateportCity/scripts.pory"
# 966 "data/maps/SlateportCity/scripts.pory"
# 1657 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1658 "data/maps/SlateportCity/scripts.pory"
# 967 "data/maps/SlateportCity/scripts.pory"
# 1659 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1660 "data/maps/SlateportCity/scripts.pory"
# 968 "data/maps/SlateportCity/scripts.pory"
# 1661 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1662 "data/maps/SlateportCity/scripts.pory"
# 969 "data/maps/SlateportCity/scripts.pory"
# 1663 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1664 "data/maps/SlateportCity/scripts.pory"
# 970 "data/maps/SlateportCity/scripts.pory"
# 1665 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, YES
# 1666 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_11
# 1667 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem_10:
# 1668 "data/maps/SlateportCity/scripts.pory"
# 973 "data/maps/SlateportCity/scripts.pory"
# 1669 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1670 "data/maps/SlateportCity/scripts.pory"
# 974 "data/maps/SlateportCity/scripts.pory"
# 1671 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1672 "data/maps/SlateportCity/scripts.pory"
# 975 "data/maps/SlateportCity/scripts.pory"
# 1673 "data/maps/SlateportCity/scripts.pory"
	release
# 1674 "data/maps/SlateportCity/scripts.pory"
	end
# 1675 "data/maps/SlateportCity/scripts.pory"

# 1676 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem_2:
# 1677 "data/maps/SlateportCity/scripts.pory"
# 955 "data/maps/SlateportCity/scripts.pory"
# 1678 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1679 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_1
# 1680 "data/maps/SlateportCity/scripts.pory"

# 1681 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem_5:
# 1682 "data/maps/SlateportCity/scripts.pory"
# 960 "data/maps/SlateportCity/scripts.pory"
# 1683 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_NotEnoughBerryPowder
# 1684 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_4
# 1685 "data/maps/SlateportCity/scripts.pory"

# 1686 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem_8:
# 1687 "data/maps/SlateportCity/scripts.pory"
# 964 "data/maps/SlateportCity/scripts.pory"
# 1688 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1689 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_7
# 1690 "data/maps/SlateportCity/scripts.pory"

# 1691 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem_11:
# 1692 "data/maps/SlateportCity/scripts.pory"
# 971 "data/maps/SlateportCity/scripts.pory"
# 1693 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1694 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_10
# 1695 "data/maps/SlateportCity/scripts.pory"

# 1696 "data/maps/SlateportCity/scripts.pory"

# 1697 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1698 "data/maps/SlateportCity/scripts.pory"
# 980 "data/maps/SlateportCity/scripts.pory"
# 1699 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1700 "data/maps/SlateportCity/scripts.pory"
# 981 "data/maps/SlateportCity/scripts.pory"
# 1701 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1702 "data/maps/SlateportCity/scripts.pory"
# 982 "data/maps/SlateportCity/scripts.pory"
# 1703 "data/maps/SlateportCity/scripts.pory"
	release
# 1704 "data/maps/SlateportCity/scripts.pory"
	end
# 1705 "data/maps/SlateportCity/scripts.pory"

# 1706 "data/maps/SlateportCity/scripts.pory"

# 1707 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1708 "data/maps/SlateportCity/scripts.pory"
# 987 "data/maps/SlateportCity/scripts.pory"
# 1709 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1710 "data/maps/SlateportCity/scripts.pory"
# 988 "data/maps/SlateportCity/scripts.pory"
# 1711 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1712 "data/maps/SlateportCity/scripts.pory"
	end
# 1713 "data/maps/SlateportCity/scripts.pory"

# 1714 "data/maps/SlateportCity/scripts.pory"

# 1715 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1716 "data/maps/SlateportCity/scripts.pory"
# 993 "data/maps/SlateportCity/scripts.pory"
# 1717 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1718 "data/maps/SlateportCity/scripts.pory"
# 994 "data/maps/SlateportCity/scripts.pory"
# 1719 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 1720 "data/maps/SlateportCity/scripts.pory"
# 995 "data/maps/SlateportCity/scripts.pory"
# 1721 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1722 "data/maps/SlateportCity/scripts.pory"
# 996 "data/maps/SlateportCity/scripts.pory"
# 1723 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1724 "data/maps/SlateportCity/scripts.pory"
# 997 "data/maps/SlateportCity/scripts.pory"
# 1725 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1726 "data/maps/SlateportCity/scripts.pory"
# 998 "data/maps/SlateportCity/scripts.pory"
# 1727 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 1728 "data/maps/SlateportCity/scripts.pory"
# 999 "data/maps/SlateportCity/scripts.pory"
# 1729 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1730 "data/maps/SlateportCity/scripts.pory"
# 1000 "data/maps/SlateportCity/scripts.pory"
# 1731 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1732 "data/maps/SlateportCity/scripts.pory"
# 1001 "data/maps/SlateportCity/scripts.pory"
# 1733 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1734 "data/maps/SlateportCity/scripts.pory"
# 1002 "data/maps/SlateportCity/scripts.pory"
# 1735 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1736 "data/maps/SlateportCity/scripts.pory"
# 1003 "data/maps/SlateportCity/scripts.pory"
# 1737 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1738 "data/maps/SlateportCity/scripts.pory"
# 1004 "data/maps/SlateportCity/scripts.pory"
# 1739 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1740 "data/maps/SlateportCity/scripts.pory"
# 1005 "data/maps/SlateportCity/scripts.pory"
# 1741 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1742 "data/maps/SlateportCity/scripts.pory"
# 1006 "data/maps/SlateportCity/scripts.pory"
# 1743 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1744 "data/maps/SlateportCity/scripts.pory"
# 1007 "data/maps/SlateportCity/scripts.pory"
# 1745 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1746 "data/maps/SlateportCity/scripts.pory"
# 1008 "data/maps/SlateportCity/scripts.pory"
# 1747 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1748 "data/maps/SlateportCity/scripts.pory"
# 1009 "data/maps/SlateportCity/scripts.pory"
# 1749 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 1750 "data/maps/SlateportCity/scripts.pory"
# 1010 "data/maps/SlateportCity/scripts.pory"
# 1751 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1752 "data/maps/SlateportCity/scripts.pory"
# 1011 "data/maps/SlateportCity/scripts.pory"
# 1753 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1754 "data/maps/SlateportCity/scripts.pory"
# 1012 "data/maps/SlateportCity/scripts.pory"
# 1755 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1756 "data/maps/SlateportCity/scripts.pory"
	end
# 1757 "data/maps/SlateportCity/scripts.pory"

# 1758 "data/maps/SlateportCity/scripts.pory"

# 1759 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown::
# 1760 "data/maps/SlateportCity/scripts.pory"
# 1017 "data/maps/SlateportCity/scripts.pory"
# 1761 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1762 "data/maps/SlateportCity/scripts.pory"
# 1018 "data/maps/SlateportCity/scripts.pory"
# 1763 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1764 "data/maps/SlateportCity/scripts.pory"
# 1019 "data/maps/SlateportCity/scripts.pory"
# 1765 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1766 "data/maps/SlateportCity/scripts.pory"
# 1020 "data/maps/SlateportCity/scripts.pory"
# 1767 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1768 "data/maps/SlateportCity/scripts.pory"
	return
# 1769 "data/maps/SlateportCity/scripts.pory"

# 1770 "data/maps/SlateportCity/scripts.pory"

# 1771 "data/maps/SlateportCity/scripts.pory"
# 1023 "data/maps/SlateportCity/scripts.pory"
# 1772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1773 "data/maps/SlateportCity/scripts.pory"
# 1024 "data/maps/SlateportCity/scripts.pory"
# 1774 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1775 "data/maps/SlateportCity/scripts.pory"
# 1025 "data/maps/SlateportCity/scripts.pory"
# 1776 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1777 "data/maps/SlateportCity/scripts.pory"
# 1026 "data/maps/SlateportCity/scripts.pory"
# 1778 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1779 "data/maps/SlateportCity/scripts.pory"

# 1780 "data/maps/SlateportCity/scripts.pory"
# 1029 "data/maps/SlateportCity/scripts.pory"
# 1781 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1782 "data/maps/SlateportCity/scripts.pory"
# 1030 "data/maps/SlateportCity/scripts.pory"
# 1783 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1784 "data/maps/SlateportCity/scripts.pory"
# 1031 "data/maps/SlateportCity/scripts.pory"
# 1785 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1786 "data/maps/SlateportCity/scripts.pory"
# 1032 "data/maps/SlateportCity/scripts.pory"
# 1787 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1788 "data/maps/SlateportCity/scripts.pory"

# 1789 "data/maps/SlateportCity/scripts.pory"
# 1035 "data/maps/SlateportCity/scripts.pory"
# 1790 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1791 "data/maps/SlateportCity/scripts.pory"
# 1036 "data/maps/SlateportCity/scripts.pory"
# 1792 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1793 "data/maps/SlateportCity/scripts.pory"
# 1037 "data/maps/SlateportCity/scripts.pory"
# 1794 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1795 "data/maps/SlateportCity/scripts.pory"
# 1038 "data/maps/SlateportCity/scripts.pory"
# 1796 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1797 "data/maps/SlateportCity/scripts.pory"
# 1039 "data/maps/SlateportCity/scripts.pory"
# 1798 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1799 "data/maps/SlateportCity/scripts.pory"
# 1040 "data/maps/SlateportCity/scripts.pory"
# 1800 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1801 "data/maps/SlateportCity/scripts.pory"
# 1041 "data/maps/SlateportCity/scripts.pory"
# 1802 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1803 "data/maps/SlateportCity/scripts.pory"
# 1042 "data/maps/SlateportCity/scripts.pory"
# 1804 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1805 "data/maps/SlateportCity/scripts.pory"
# 1043 "data/maps/SlateportCity/scripts.pory"
# 1806 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1807 "data/maps/SlateportCity/scripts.pory"
# 1044 "data/maps/SlateportCity/scripts.pory"
# 1808 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1809 "data/maps/SlateportCity/scripts.pory"

# 1810 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1811 "data/maps/SlateportCity/scripts.pory"
# 1048 "data/maps/SlateportCity/scripts.pory"
# 1812 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1813 "data/maps/SlateportCity/scripts.pory"
# 1049 "data/maps/SlateportCity/scripts.pory"
# 1814 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1815 "data/maps/SlateportCity/scripts.pory"
# 1050 "data/maps/SlateportCity/scripts.pory"
# 1816 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1817 "data/maps/SlateportCity/scripts.pory"
# 1051 "data/maps/SlateportCity/scripts.pory"
# 1818 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1819 "data/maps/SlateportCity/scripts.pory"
	end
# 1820 "data/maps/SlateportCity/scripts.pory"

# 1821 "data/maps/SlateportCity/scripts.pory"

# 1822 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed::
# 1823 "data/maps/SlateportCity/scripts.pory"
# 1055 "data/maps/SlateportCity/scripts.pory"
# 1824 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1825 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1826 "data/maps/SlateportCity/scripts.pory"

# 1827 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon::
# 1828 "data/maps/SlateportCity/scripts.pory"
# 1060 "data/maps/SlateportCity/scripts.pory"
# 1829 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1830 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1831 "data/maps/SlateportCity/scripts.pory"

# 1832 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon::
# 1833 "data/maps/SlateportCity/scripts.pory"
# 1065 "data/maps/SlateportCity/scripts.pory"
# 1834 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1835 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1836 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1837 "data/maps/SlateportCity/scripts.pory"

# 1838 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon::
# 1839 "data/maps/SlateportCity/scripts.pory"
# 1071 "data/maps/SlateportCity/scripts.pory"
# 1840 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1841 "data/maps/SlateportCity/scripts.pory"

# 1842 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon::
# 1843 "data/maps/SlateportCity/scripts.pory"
# 1075 "data/maps/SlateportCity/scripts.pory"
# 1844 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1845 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1846 "data/maps/SlateportCity/scripts.pory"

# 1847 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder::
# 1848 "data/maps/SlateportCity/scripts.pory"
# 1080 "data/maps/SlateportCity/scripts.pory"
# 1849 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1850 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1851 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1852 "data/maps/SlateportCity/scripts.pory"

# 1853 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt::
# 1854 "data/maps/SlateportCity/scripts.pory"
# 1086 "data/maps/SlateportCity/scripts.pory"
# 1855 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1856 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1857 "data/maps/SlateportCity/scripts.pory"

# 1858 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon::
# 1859 "data/maps/SlateportCity/scripts.pory"
# 1091 "data/maps/SlateportCity/scripts.pory"
# 1860 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1861 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1862 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1863 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1864 "data/maps/SlateportCity/scripts.pory"

# 1865 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife::
# 1866 "data/maps/SlateportCity/scripts.pory"
# 1098 "data/maps/SlateportCity/scripts.pory"
# 1867 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1868 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1869 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1870 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1871 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1872 "data/maps/SlateportCity/scripts.pory"

# 1873 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows::
# 1874 "data/maps/SlateportCity/scripts.pory"
# 1106 "data/maps/SlateportCity/scripts.pory"
# 1875 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1876 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1877 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1878 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1879 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1880 "data/maps/SlateportCity/scripts.pory"

# 1881 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace::
# 1882 "data/maps/SlateportCity/scripts.pory"
# 1114 "data/maps/SlateportCity/scripts.pory"
# 1883 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1884 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1885 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1886 "data/maps/SlateportCity/scripts.pory"

# 1887 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty::
# 1888 "data/maps/SlateportCity/scripts.pory"
# 1120 "data/maps/SlateportCity/scripts.pory"
# 1889 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1890 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1891 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1892 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1893 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1894 "data/maps/SlateportCity/scripts.pory"

# 1895 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent::
# 1896 "data/maps/SlateportCity/scripts.pory"
# 1128 "data/maps/SlateportCity/scripts.pory"
# 1897 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1898 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1899 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1900 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1901 "data/maps/SlateportCity/scripts.pory"

# 1902 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville::
# 1903 "data/maps/SlateportCity/scripts.pory"
# 1135 "data/maps/SlateportCity/scripts.pory"
# 1904 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1905 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1906 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1907 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1908 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1909 "data/maps/SlateportCity/scripts.pory"

# 1910 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern::
# 1911 "data/maps/SlateportCity/scripts.pory"
# 1143 "data/maps/SlateportCity/scripts.pory"
# 1912 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1913 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1914 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1915 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1916 "data/maps/SlateportCity/scripts.pory"

# 1917 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere::
# 1918 "data/maps/SlateportCity/scripts.pory"
# 1150 "data/maps/SlateportCity/scripts.pory"
# 1919 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1920 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1921 "data/maps/SlateportCity/scripts.pory"

# 1922 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften::
# 1923 "data/maps/SlateportCity/scripts.pory"
# 1155 "data/maps/SlateportCity/scripts.pory"
# 1924 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1925 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1926 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1927 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1928 "data/maps/SlateportCity/scripts.pory"

# 1929 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing::
# 1930 "data/maps/SlateportCity/scripts.pory"
# 1162 "data/maps/SlateportCity/scripts.pory"
# 1931 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1932 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1933 "data/maps/SlateportCity/scripts.pory"

# 1934 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy::
# 1935 "data/maps/SlateportCity/scripts.pory"
# 1167 "data/maps/SlateportCity/scripts.pory"
# 1936 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1937 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1938 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1939 "data/maps/SlateportCity/scripts.pory"

# 1940 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant::
# 1941 "data/maps/SlateportCity/scripts.pory"
# 1173 "data/maps/SlateportCity/scripts.pory"
# 1942 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1943 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1944 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1945 "data/maps/SlateportCity/scripts.pory"

# 1946 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder::
# 1947 "data/maps/SlateportCity/scripts.pory"
# 1179 "data/maps/SlateportCity/scripts.pory"
# 1948 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1949 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1950 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1951 "data/maps/SlateportCity/scripts.pory"

# 1952 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll::
# 1953 "data/maps/SlateportCity/scripts.pory"
# 1185 "data/maps/SlateportCity/scripts.pory"
# 1954 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1955 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1956 "data/maps/SlateportCity/scripts.pory"

# 1957 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn::
# 1958 "data/maps/SlateportCity/scripts.pory"
# 1190 "data/maps/SlateportCity/scripts.pory"
# 1959 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1960 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1961 "data/maps/SlateportCity/scripts.pory"

# 1962 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames::
# 1963 "data/maps/SlateportCity/scripts.pory"
# 1195 "data/maps/SlateportCity/scripts.pory"
# 1964 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1965 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1966 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1967 "data/maps/SlateportCity/scripts.pory"

# 1968 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp::
# 1969 "data/maps/SlateportCity/scripts.pory"
# 1201 "data/maps/SlateportCity/scripts.pory"
# 1970 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1971 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1972 "data/maps/SlateportCity/scripts.pory"

# 1973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant::
# 1974 "data/maps/SlateportCity/scripts.pory"
# 1206 "data/maps/SlateportCity/scripts.pory"
# 1975 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1976 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1977 "data/maps/SlateportCity/scripts.pory"

# 1978 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou::
# 1979 "data/maps/SlateportCity/scripts.pory"
# 1211 "data/maps/SlateportCity/scripts.pory"
# 1980 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1981 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1982 "data/maps/SlateportCity/scripts.pory"

# 1983 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless::
# 1984 "data/maps/SlateportCity/scripts.pory"
# 1216 "data/maps/SlateportCity/scripts.pory"
# 1985 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1986 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1987 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1988 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1989 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1990 "data/maps/SlateportCity/scripts.pory"

# 1991 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy::
# 1992 "data/maps/SlateportCity/scripts.pory"
# 1224 "data/maps/SlateportCity/scripts.pory"
# 1993 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1994 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1995 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1996 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1997 "data/maps/SlateportCity/scripts.pory"

# 1998 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation::
# 1999 "data/maps/SlateportCity/scripts.pory"
# 1231 "data/maps/SlateportCity/scripts.pory"
# 2000 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 2001 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 2002 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 2003 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 2004 "data/maps/SlateportCity/scripts.pory"

# 2005 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet::
# 2006 "data/maps/SlateportCity/scripts.pory"
# 1238 "data/maps/SlateportCity/scripts.pory"
# 2007 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 2008 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 2009 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 2010 "data/maps/SlateportCity/scripts.pory"

# 2011 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats::
# 2012 "data/maps/SlateportCity/scripts.pory"
# 1244 "data/maps/SlateportCity/scripts.pory"
# 2013 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 2014 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 2015 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 2016 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 2017 "data/maps/SlateportCity/scripts.pory"

# 2018 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch::
# 2019 "data/maps/SlateportCity/scripts.pory"
# 1251 "data/maps/SlateportCity/scripts.pory"
# 2020 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 2021 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 2022 "data/maps/SlateportCity/scripts.pory"

# 2023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou::
# 2024 "data/maps/SlateportCity/scripts.pory"
# 1256 "data/maps/SlateportCity/scripts.pory"
# 2025 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 2026 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 2027 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 2028 "data/maps/SlateportCity/scripts.pory"

# 2029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName::
# 2030 "data/maps/SlateportCity/scripts.pory"
# 1262 "data/maps/SlateportCity/scripts.pory"
# 2031 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 2032 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 2033 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 2034 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 2035 "data/maps/SlateportCity/scripts.pory"

# 2036 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently::
# 2037 "data/maps/SlateportCity/scripts.pory"
# 1269 "data/maps/SlateportCity/scripts.pory"
# 2038 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 2039 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 2040 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 2041 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 2042 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 2043 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 2044 "data/maps/SlateportCity/scripts.pory"

# 2045 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed::
# 2046 "data/maps/SlateportCity/scripts.pory"
# 1278 "data/maps/SlateportCity/scripts.pory"
# 2047 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 2048 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 2049 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 2050 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 2051 "data/maps/SlateportCity/scripts.pory"

# 2052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool::
# 2053 "data/maps/SlateportCity/scripts.pory"
# 1285 "data/maps/SlateportCity/scripts.pory"
# 2054 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 2055 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 2056 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 2057 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 2058 "data/maps/SlateportCity/scripts.pory"

# 2059 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething::
# 2060 "data/maps/SlateportCity/scripts.pory"
# 1292 "data/maps/SlateportCity/scripts.pory"
# 2061 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 2062 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 2063 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 2064 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 2065 "data/maps/SlateportCity/scripts.pory"

# 2066 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish::
# 2067 "data/maps/SlateportCity/scripts.pory"
# 1299 "data/maps/SlateportCity/scripts.pory"
# 2068 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 2069 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 2070 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 2071 "data/maps/SlateportCity/scripts.pory"

# 2072 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV::
# 2073 "data/maps/SlateportCity/scripts.pory"
# 1305 "data/maps/SlateportCity/scripts.pory"
# 2074 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 2075 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 2076 "data/maps/SlateportCity/scripts.pory"

# 2077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity::
# 2078 "data/maps/SlateportCity/scripts.pory"
# 1310 "data/maps/SlateportCity/scripts.pory"
# 2079 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 2080 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 2081 "data/maps/SlateportCity/scripts.pory"

# 2082 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera::
# 2083 "data/maps/SlateportCity/scripts.pory"
# 1315 "data/maps/SlateportCity/scripts.pory"
# 2084 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 2085 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 2086 "data/maps/SlateportCity/scripts.pory"

# 2087 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience::
# 2088 "data/maps/SlateportCity/scripts.pory"
# 1320 "data/maps/SlateportCity/scripts.pory"
# 2089 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 2090 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 2091 "data/maps/SlateportCity/scripts.pory"

# 2092 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration::
# 2093 "data/maps/SlateportCity/scripts.pory"
# 1325 "data/maps/SlateportCity/scripts.pory"
# 2094 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 2095 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 2096 "data/maps/SlateportCity/scripts.pory"

# 2097 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview::
# 2098 "data/maps/SlateportCity/scripts.pory"
# 1330 "data/maps/SlateportCity/scripts.pory"
# 2099 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 2100 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 2101 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 2102 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 2103 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 2104 "data/maps/SlateportCity/scripts.pory"

# 2105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview::
# 2106 "data/maps/SlateportCity/scripts.pory"
# 1338 "data/maps/SlateportCity/scripts.pory"
# 2107 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 2108 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 2109 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 2110 "data/maps/SlateportCity/scripts.pory"

# 2111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery::
# 2112 "data/maps/SlateportCity/scripts.pory"
# 1344 "data/maps/SlateportCity/scripts.pory"
# 2113 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 2114 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 2115 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 2116 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 2117 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 2118 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 2119 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 2120 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 2121 "data/maps/SlateportCity/scripts.pory"

# 2122 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine::
# 2123 "data/maps/SlateportCity/scripts.pory"
# 1355 "data/maps/SlateportCity/scripts.pory"
# 2124 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 2125 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 2126 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 2127 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 2128 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 2129 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 2130 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 2131 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 2132 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 2133 "data/maps/SlateportCity/scripts.pory"

# 2134 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat::
# 2135 "data/maps/SlateportCity/scripts.pory"
# 1367 "data/maps/SlateportCity/scripts.pory"
# 2136 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 2137 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 2138 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 2139 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 2140 "data/maps/SlateportCity/scripts.pory"

# 2141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub::
# 2142 "data/maps/SlateportCity/scripts.pory"
# 1374 "data/maps/SlateportCity/scripts.pory"
# 2143 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 2144 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 2145 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 2146 "data/maps/SlateportCity/scripts.pory"

# 2147 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe::
# 2148 "data/maps/SlateportCity/scripts.pory"
# 1380 "data/maps/SlateportCity/scripts.pory"
# 2149 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 2150 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 2151 "data/maps/SlateportCity/scripts.pory"

# 2152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign::
# 2153 "data/maps/SlateportCity/scripts.pory"
# 1385 "data/maps/SlateportCity/scripts.pory"
# 2154 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 2155 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 2156 "data/maps/SlateportCity/scripts.pory"

# 2157 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign::
# 2158 "data/maps/SlateportCity/scripts.pory"
# 1390 "data/maps/SlateportCity/scripts.pory"
# 2159 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 2160 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 2161 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 2162 "data/maps/SlateportCity/scripts.pory"

# 2163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion::
# 2164 "data/maps/SlateportCity/scripts.pory"
# 1396 "data/maps/SlateportCity/scripts.pory"
# 2165 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 2166 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 2167 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 2168 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 2169 "data/maps/SlateportCity/scripts.pory"

# 2170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete::
# 2171 "data/maps/SlateportCity/scripts.pory"
# 1403 "data/maps/SlateportCity/scripts.pory"
# 2172 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 2173 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 2174 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 2175 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 2176 "data/maps/SlateportCity/scripts.pory"

# 2177 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign::
# 2178 "data/maps/SlateportCity/scripts.pory"
# 1410 "data/maps/SlateportCity/scripts.pory"
# 2179 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 2180 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 2181 "data/maps/SlateportCity/scripts.pory"

# 2182 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign::
# 2183 "data/maps/SlateportCity/scripts.pory"
# 1415 "data/maps/SlateportCity/scripts.pory"
# 2184 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 2185 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 2186 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 2187 "data/maps/SlateportCity/scripts.pory"

# 2188 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign::
# 2189 "data/maps/SlateportCity/scripts.pory"
# 1421 "data/maps/SlateportCity/scripts.pory"
# 2190 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 2191 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 2192 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 2193 "data/maps/SlateportCity/scripts.pory"

# 2194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign::
# 2195 "data/maps/SlateportCity/scripts.pory"
# 1427 "data/maps/SlateportCity/scripts.pory"
# 2196 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 2197 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 2198 "data/maps/SlateportCity/scripts.pory"

# 2199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction::
# 2200 "data/maps/SlateportCity/scripts.pory"
# 1432 "data/maps/SlateportCity/scripts.pory"
# 2201 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 2202 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 2203 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 2204 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 2205 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 2206 "data/maps/SlateportCity/scripts.pory"

# 2207 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign::
# 2208 "data/maps/SlateportCity/scripts.pory"
# 1440 "data/maps/SlateportCity/scripts.pory"
# 2209 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 2210 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 2211 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 2212 "data/maps/SlateportCity/scripts.pory"

# 2213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign::
# 2214 "data/maps/SlateportCity/scripts.pory"
# 1446 "data/maps/SlateportCity/scripts.pory"
# 2215 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 2216 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 2217 "data/maps/SlateportCity/scripts.pory"

# 2218 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries::
# 2219 "data/maps/SlateportCity/scripts.pory"
# 1451 "data/maps/SlateportCity/scripts.pory"
# 2220 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 2221 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 2222 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 2223 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 2224 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 2225 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 2226 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 2227 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 2228 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 2229 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 2230 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 2231 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 2232 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 2233 "data/maps/SlateportCity/scripts.pory"

# 2234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder::
# 2235 "data/maps/SlateportCity/scripts.pory"
# 1467 "data/maps/SlateportCity/scripts.pory"
# 2236 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 2237 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 2238 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 2239 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 2240 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 2241 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 2242 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 2243 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 2244 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 2245 "data/maps/SlateportCity/scripts.pory"

# 2246 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder::
# 2247 "data/maps/SlateportCity/scripts.pory"
# 1479 "data/maps/SlateportCity/scripts.pory"
# 2248 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 2249 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 2250 "data/maps/SlateportCity/scripts.pory"

# 2251 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt::
# 2252 "data/maps/SlateportCity/scripts.pory"
# 1484 "data/maps/SlateportCity/scripts.pory"
# 2253 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 2254 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 2255 "data/maps/SlateportCity/scripts.pory"

# 2256 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem::
# 2257 "data/maps/SlateportCity/scripts.pory"
# 1489 "data/maps/SlateportCity/scripts.pory"
# 2258 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 2259 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 2260 "data/maps/SlateportCity/scripts.pory"

# 2261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder::
# 2262 "data/maps/SlateportCity/scripts.pory"
# 1494 "data/maps/SlateportCity/scripts.pory"
# 2263 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 2264 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 2265 "data/maps/SlateportCity/scripts.pory"

# 2266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse::
# 2267 "data/maps/SlateportCity/scripts.pory"
# 1499 "data/maps/SlateportCity/scripts.pory"
# 2268 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 2269 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 2270 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 2271 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 2272 "data/maps/SlateportCity/scripts.pory"

# 2273 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe::
# 2274 "data/maps/SlateportCity/scripts.pory"
# 1506 "data/maps/SlateportCity/scripts.pory"
# 2275 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 2276 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 2277 "data/maps/SlateportCity/scripts.pory"

# 2278 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder::
# 2279 "data/maps/SlateportCity/scripts.pory"
# 1511 "data/maps/SlateportCity/scripts.pory"
# 2280 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 2281 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 2282 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 2283 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 2284 "data/maps/SlateportCity/scripts.pory"

# 2285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway::
# 2286 "data/maps/SlateportCity/scripts.pory"
# 1518 "data/maps/SlateportCity/scripts.pory"
# 2287 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 2288 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 2289 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 2290 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 2291 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 2292 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 2293 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 2294 "data/maps/SlateportCity/scripts.pory"

# 2295 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer::
# 2296 "data/maps/SlateportCity/scripts.pory"
# 1528 "data/maps/SlateportCity/scripts.pory"
# 2297 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 2298 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 2299 "data/maps/SlateportCity/scripts.pory"

# 2300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther::
# 2301 "data/maps/SlateportCity/scripts.pory"
# 1533 "data/maps/SlateportCity/scripts.pory"
# 2302 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 2303 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 2304 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 2305 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 2306 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 2307 "data/maps/SlateportCity/scripts.pory"

# 2308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott::
# 2309 "data/maps/SlateportCity/scripts.pory"
# 1541 "data/maps/SlateportCity/scripts.pory"
# 2310 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 2311 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 2312 "data/maps/SlateportCity/scripts.pory"

# 2313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou::
# 2314 "data/maps/SlateportCity/scripts.pory"
# 1546 "data/maps/SlateportCity/scripts.pory"
# 2315 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 2316 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 2317 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 2318 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 2319 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 2320 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 2321 "data/maps/SlateportCity/scripts.pory"

# 2322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge::
# 2323 "data/maps/SlateportCity/scripts.pory"
# 1555 "data/maps/SlateportCity/scripts.pory"
# 2324 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 2325 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 2326 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 2327 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 2328 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 2329 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 2330 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 2331 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 2332 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
