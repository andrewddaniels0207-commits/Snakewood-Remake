CinnabarIsland_Frlg_MapScripts::
# 2 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
# 3 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ExitPokeCenterForOneIsland
# 5 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_BillScene
# 6 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReturnFromSeviiIslands
	.2byte 0


CinnabarIsland_OnTransition::
# 11 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 12 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_CheckUnlockGym
# 13 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND, 1
	goto_if_eq CinnabarIsland_OnTransition_2
CinnabarIsland_OnTransition_1:
# 16 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND, 3
	goto_if_eq CinnabarIsland_OnTransition_5
CinnabarIsland_OnTransition_4:
# 19 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
	goto_if_eq CinnabarIsland_OnTransition_8
CinnabarIsland_OnTransition_7:
	end

CinnabarIsland_OnTransition_2:
# 14 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland
	goto CinnabarIsland_OnTransition_1

CinnabarIsland_OnTransition_5:
# 17 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands
	goto CinnabarIsland_OnTransition_4

CinnabarIsland_OnTransition_8:
# 20 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter
	goto CinnabarIsland_OnTransition_7


CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter::
# 26 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 27 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 15, 12
# 29 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_LEFT
# 30 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
	return


CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland::
# 35 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 36 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_0x8004, 18
	goto_if_ge CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland_2
CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland_1:
# 39 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 40 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 18, 12
# 41 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
	return

CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland_2:
# 37 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_MoveSeagallopDown
	goto CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland_1


CinnabarIsland_EventScript_MoveSeagallopDown::
# 47 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 8
	return


CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands::
# 52 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 21, 8
# 53 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
	return


CinnabarIsland_EventScript_CheckUnlockGym::
# 58 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY, CinnabarIsland_EventScript_CheckUnlockGym_2
CinnabarIsland_EventScript_CheckUnlockGym_1:
	return

CinnabarIsland_EventScript_CheckUnlockGym_2:
# 59 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_UnlockGym
	goto CinnabarIsland_EventScript_CheckUnlockGym_1


CinnabarIsland_EventScript_UnlockGym::
# 65 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


CinnabarIsland_EventScript_ExitPokeCenterForOneIsland::
# 70 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 71 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 72 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 73 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 74 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 2
# 75 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 20
# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 77 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_EventScript_ReturnFromSeviiIslands::
# 82 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 83 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 84 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain
# 85 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 86 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExit
# 87 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 88 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 89 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 4
# 90 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 91 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LOSTELLE_IN_HER_HOME
# 92 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end


# 96 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillExit:
# 97 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 99 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 100 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 101 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 102 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

CinnabarIsland_EventScript_BillScene::
# 107 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 108 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 109 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_2
CinnabarIsland_EventScript_BillScene_1:
# 112 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_5
CinnabarIsland_EventScript_BillScene_4:
# 115 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	playse SE_PIN
# 116 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_ExclamationMark
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 118 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_Delay48
# 119 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 120 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_8
CinnabarIsland_EventScript_BillScene_7:
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_11
CinnabarIsland_EventScript_BillScene_10:
# 126 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_HeyIfItIsntPlayer
# 127 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_ComeWithMeToOneIsland, MSGBOX_YESNO
# 128 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_EventScript_BillScene_14
CinnabarIsland_EventScript_BillScene_13:
# 131 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_EventScript_BillScene_17
CinnabarIsland_EventScript_BillScene_16:
	end

CinnabarIsland_EventScript_BillScene_2:
# 110 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillFacePlayer1
	goto CinnabarIsland_EventScript_BillScene_1

CinnabarIsland_EventScript_BillScene_5:
# 113 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillFacePlayer2
	goto CinnabarIsland_EventScript_BillScene_4

CinnabarIsland_EventScript_BillScene_8:
# 121 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillApproachPlayer1
	goto CinnabarIsland_EventScript_BillScene_7

CinnabarIsland_EventScript_BillScene_11:
# 124 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillApproachPlayer2
	goto CinnabarIsland_EventScript_BillScene_10

CinnabarIsland_EventScript_BillScene_14:
# 129 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_AgreeSailToOneIsland
	goto CinnabarIsland_EventScript_BillScene_13

CinnabarIsland_EventScript_BillScene_17:
# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_DeclineSailToOneIsland
	goto CinnabarIsland_EventScript_BillScene_16


CinnabarIsland_EventScript_BillFacePlayer1::
# 138 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterUp
# 139 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BillFacePlayer2::
# 144 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterLeft
# 145 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BillApproachPlayer1::
# 150 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer1
# 151 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BillApproachPlayer2::
# 156 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer2
# 157 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 158 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 159 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_AgreeSailToOneIsland::
# 164 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 165 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 166 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 167 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_EventScript_DeclineSailToOneIsland::
# 172 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 173 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 174 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_DeclineSailToOneIsland_2
CinnabarIsland_EventScript_DeclineSailToOneIsland_1:
# 177 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_DeclineSailToOneIsland_5
CinnabarIsland_EventScript_DeclineSailToOneIsland_4:
# 180 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 181 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 182 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 183 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_EventScript_DeclineSailToOneIsland_2:
# 175 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillExitToPokeCenter
	goto CinnabarIsland_EventScript_DeclineSailToOneIsland_1

CinnabarIsland_EventScript_DeclineSailToOneIsland_5:
# 178 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillReturnToPokeCenter
	goto CinnabarIsland_EventScript_DeclineSailToOneIsland_4


CinnabarIsland_EventScript_BillExitToPokeCenter::
# 188 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExitToPokeCenter
# 189 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


# 193 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillExitToPokeCenter:
# 194 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 195 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 196 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 197 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 198 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 199 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 200 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 201 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

CinnabarIsland_EventScript_BillReturnToPokeCenter::
# 205 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerWatchBillExit
# 206 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachDoor
# 207 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 208 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	opendoor 14, 11
# 209 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitdooranim
# 210 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillReEnterPokeCenter
# 211 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 212 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closedoor 14, 11
# 213 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitdooranim
	return


# 217 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerWatchBillExit:
# 218 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 220 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 223 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachDoor:
# 224 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 225 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 226 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 230 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillReEnterPokeCenter:
# 231 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_up
# 232 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 233 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 234 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

CinnabarIsland_EventScript_SailToOneIsland::
# 238 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_2
CinnabarIsland_EventScript_SailToOneIsland_1:
# 241 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	addobject LOCALID_CINNABAR_SEAGALLOP
# 242 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_5
CinnabarIsland_EventScript_SailToOneIsland_4:
# 245 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_8
CinnabarIsland_EventScript_SailToOneIsland_7:
# 248 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 249 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 250 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_11
CinnabarIsland_EventScript_SailToOneIsland_10:
# 253 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_14
CinnabarIsland_EventScript_SailToOneIsland_13:
# 256 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 257 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 258 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 40
# 259 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 260 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 261 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 262 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 263 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto EventScript_SetSail
	end

CinnabarIsland_EventScript_SailToOneIsland_2:
# 239 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_ApproachShore
	goto CinnabarIsland_EventScript_SailToOneIsland_1

CinnabarIsland_EventScript_SailToOneIsland_5:
# 243 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BoatArrive
	goto CinnabarIsland_EventScript_SailToOneIsland_4

CinnabarIsland_EventScript_SailToOneIsland_8:
# 246 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BoatArriveExitedPokeCenter
	goto CinnabarIsland_EventScript_SailToOneIsland_7

CinnabarIsland_EventScript_SailToOneIsland_11:
# 251 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BoardBoat
	goto CinnabarIsland_EventScript_SailToOneIsland_10

CinnabarIsland_EventScript_SailToOneIsland_14:
# 254 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BoardBoatExitedPokeCenter
	goto CinnabarIsland_EventScript_SailToOneIsland_13


CinnabarIsland_EventScript_ApproachShore::
# 268 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_ApproachShore
# 269 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ApproachShore
# 270 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BoatArrive::
# 275 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillFaceBoat
# 276 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 277 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BoatArriveExitedPokeCenter::
# 282 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 283 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BoardBoat::
# 288 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoat
# 289 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
# 290 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_EventScript_BoardBoatExitedPokeCenter::
# 295 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoatFromShore
# 296 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoatFromShore
# 297 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	return


# 301 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BoatArrive:
# 302 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 303 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 304 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_fast_left
# 305 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_fast_left
# 306 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 307 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_slow_left
# 308 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_slow_left
# 309 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 312 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillBoardBoat:
# 313 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 314 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 315 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 316 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 317 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 318 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 319 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 322 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer1:
# 323 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_up
# 324 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 327 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer2:
# 328 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 329 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 330 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 331 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 334 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillFaceBoat:
# 335 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 336 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 337 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_8
# 338 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 339 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 342 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_ApproachShore:
# 343 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 344 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 345 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 346 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 347 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 348 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 349 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 352 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillBoardBoatFromShore:
# 353 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 354 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 355 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 356 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 359 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat:
# 360 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 361 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 362 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 363 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 364 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 365 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 366 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 367 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 368 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 369 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

# 372 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoatFromShore:
# 373 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 374 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 375 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 376 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 377 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 378 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

CinnabarIsland_EventScript_GymDoorLocked::
# 382 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 383 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 384 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 385 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 20
# 386 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 387 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 388 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ForcePlayerFromDoor
# 389 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 390 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end


# 394 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_ForcePlayerFromDoor:
# 395 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 396 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end

CinnabarIsland_EventScript_Woman::
# 400 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lock
# 401 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	faceplayer
# 402 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 403 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
# 404 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	release
	end


CinnabarIsland_EventScript_OldMan::
# 409 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
	end


CinnabarIsland_EventScript_IslandSign::
# 414 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
	end


CinnabarIsland_EventScript_PokemonLabSign::
# 419 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
	end


CinnabarIsland_EventScript_GymSign::
# 424 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 425 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 426 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 427 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Text_DoorIsLocked::
# 431 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The door is locked…$"

CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab::
# 435 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR GYM's BLAINE is quite the\n"
	.string "odd fellow.\p"
	.string "He's lived on the island since way\n"
	.string "before the LAB was built.$"

CinnabarIsland_Text_ScientistsExperimentInMansion::
# 442 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Scientists conduct experiments \n"
	.string "in the burned-out building.\p"
	.string "You know, the one they call the\n"
	.string "POKéMON MANSION.$"

CinnabarIsland_Text_IslandSign::
# 449 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR ISLAND\n"
	.string "The Fiery Town of Burning Desire$"

CinnabarIsland_Text_PokemonLab::
# 454 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "POKéMON LAB$"

CinnabarIsland_Text_GymSign::
# 458 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR ISLAND POKéMON GYM\n"
	.string "LEADER: BLAINE\l"
	.string "The Hotheaded Quiz Master!$"

CinnabarIsland_Text_HeyIfItIsntPlayer::
# 464 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "Hey, if it isn't {PLAYER}!$"

CinnabarIsland_Text_ComeWithMeToOneIsland::
# 469 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Look, it's me, BILL.\n"
	.string "Long time no see!\p"
	.string "I hope you're still using my\n"
	.string "PC system.\p"
	.string "Well, listen, since we met up here,\n"
	.string "how about spending time with me?\p"
	.string "There's this little island in the far\n"
	.string "south called ONE ISLAND.\p"
	.string "A friend invited me, so I'm on my\n"
	.string "way out there.\p"
	.string "How about it?\n"
	.string "Do you feel like coming with me?$"

CinnabarIsland_Text_AllRightLetsGo::
# 484 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "All right, then.\n"
	.string "Let's go!$"

CinnabarIsland_Text_IllBeWaitingInPokeCenter::
# 489 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "What, are you too busy?\p"
	.string "Well, all right.\n"
	.string "The boat hasn't arrived yet anyway.\p"
	.string "I'll be waiting at the POKéMON\n"
	.string "CENTER over there.\p"
	.string "Come see me when you're done with\n"
	.string "your business here.$"

CinnabarIsland_Text_MyPalsBoatArrived::
# 499 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Looks like my pal's boat arrived,\n"
	.string "too.\p"
	.string "He sent it specially here to\n"
	.string "CINNABAR to pick me up.$"

CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain::
# 506 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Hey, wasn't that a long cruise?\p"
	.string "My buddy CELIO seemed to enjoy\n"
	.string "your company.\p"
	.string "I'm sure he'd welcome you if you\n"
	.string "were to visit him again.\p"
	.string "If you have a TRI-PASS, you can\n"
	.string "always take a ferry there from\l"
	.string "VERMILION PORT.\p"
	.string "All right, thanks for your company!$"
