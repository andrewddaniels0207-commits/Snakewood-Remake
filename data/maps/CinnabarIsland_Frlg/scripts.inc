# 1 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 2 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Frlg_MapScripts::
# 3 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 2 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 4 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
# 5 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 3 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 6 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 9 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 4 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 11 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ExitPokeCenterForOneIsland
# 12 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 5 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 13 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_BillScene
# 14 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 6 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 15 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReturnFromSeviiIslands
# 16 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.2byte 0
# 17 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 18 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 19 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnTransition::
# 20 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 11 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 21 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 22 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 12 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 23 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_CheckUnlockGym
# 24 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 13 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 25 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 26 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_OnTransition_2
# 27 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnTransition_1:
# 28 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 16 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 29 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 30 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_OnTransition_5
# 31 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnTransition_4:
# 32 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 19 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 33 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
# 34 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_OnTransition_8
# 35 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnTransition_7:
# 36 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 37 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnTransition_2:
# 39 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 14 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 40 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland
# 41 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_OnTransition_1
# 42 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 43 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnTransition_5:
# 44 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 17 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 45 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands
# 46 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_OnTransition_4
# 47 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 48 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_OnTransition_8:
# 49 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 20 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 50 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter
# 51 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_OnTransition_7
# 52 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 53 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 54 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter::
# 55 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 26 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 56 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 57 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 27 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 58 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 59 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 28 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 60 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 15, 12
# 61 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 29 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 62 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_LEFT
# 63 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 30 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 64 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
# 65 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 66 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 67 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 68 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland::
# 69 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 35 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 70 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 71 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 36 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 72 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_0x8004, 18
# 73 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_ge CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland_2
# 74 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland_1:
# 75 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 39 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 77 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 40 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 78 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 18, 12
# 79 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 41 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 80 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 81 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 42 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 82 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
# 83 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 84 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 85 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland_2:
# 86 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 37 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 87 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_MoveSeagallopDown
# 88 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland_1
# 89 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 90 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 91 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_MoveSeagallopDown::
# 92 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 47 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 93 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 8
# 94 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 95 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 96 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 97 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands::
# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 52 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 99 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 21, 8
# 100 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 53 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 101 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 102 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 104 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 105 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_CheckUnlockGym::
# 106 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 58 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 107 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY, CinnabarIsland_EventScript_CheckUnlockGym_2
# 108 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_CheckUnlockGym_1:
# 109 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 110 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 111 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_CheckUnlockGym_2:
# 112 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 59 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 113 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_UnlockGym
# 114 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_CheckUnlockGym_1
# 115 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 116 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_UnlockGym::
# 118 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 65 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 119 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 120 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 121 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 122 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ExitPokeCenterForOneIsland::
# 124 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 70 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 125 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 126 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 71 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 127 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 128 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 72 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 129 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 130 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 73 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 131 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 74 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 2
# 134 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 75 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 20
# 136 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 137 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 138 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 77 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 139 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 140 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 141 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 142 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 143 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ReturnFromSeviiIslands::
# 144 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 82 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 145 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 146 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 83 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 147 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 148 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 84 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 149 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain
# 150 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 85 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 151 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 152 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 86 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 153 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExit
# 154 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 87 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 155 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 156 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 88 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 157 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 158 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 89 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 159 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 4
# 160 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 90 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 161 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 162 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 91 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 163 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LOSTELLE_IN_HER_HOME
# 164 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 92 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 165 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 166 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 167 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 168 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 169 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 96 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 170 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillExit:
# 171 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 97 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 172 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 173 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 174 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 175 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 99 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 176 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 177 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 100 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 178 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 179 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 101 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 180 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 181 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 102 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 182 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 183 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 184 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 185 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 186 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene::
# 187 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 107 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 188 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 189 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 108 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 190 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 191 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 109 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 192 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_2
# 193 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_1:
# 194 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 112 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 195 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_5
# 196 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_4:
# 197 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 115 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 198 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	playse SE_PIN
# 199 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 116 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 200 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_ExclamationMark
# 201 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 202 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 203 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 118 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 204 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_Delay48
# 205 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 119 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 206 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 207 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 120 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 208 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_8
# 209 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_7:
# 210 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 211 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_11
# 212 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_10:
# 213 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 126 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 214 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_HeyIfItIsntPlayer
# 215 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 127 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 216 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_ComeWithMeToOneIsland, MSGBOX_YESNO
# 217 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 128 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 218 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 219 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_EventScript_BillScene_14
# 220 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_13:
# 221 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 131 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 222 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 223 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_eq CinnabarIsland_EventScript_BillScene_17
# 224 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_16:
# 225 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 226 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 227 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_2:
# 228 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 110 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 229 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillFacePlayer1
# 230 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_BillScene_1
# 231 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 232 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_5:
# 233 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 113 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 234 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillFacePlayer2
# 235 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_BillScene_4
# 236 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 237 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_8:
# 238 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 121 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 239 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillApproachPlayer1
# 240 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_BillScene_7
# 241 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 242 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_11:
# 243 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 124 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 244 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillApproachPlayer2
# 245 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_BillScene_10
# 246 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 247 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_14:
# 248 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 129 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 249 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_AgreeSailToOneIsland
# 250 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_BillScene_13
# 251 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 252 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_17:
# 253 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 254 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_DeclineSailToOneIsland
# 255 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_BillScene_16
# 256 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 257 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 258 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer1::
# 259 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 138 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 260 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterUp
# 261 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 139 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 262 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 263 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 264 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 265 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 266 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer2::
# 267 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 144 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 268 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkInPlaceFasterLeft
# 269 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 145 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 270 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 271 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 272 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 273 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 274 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer1::
# 275 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 150 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 276 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer1
# 277 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 151 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 278 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 279 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 280 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 281 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 282 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer2::
# 283 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 156 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 284 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachPlayer2
# 285 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 157 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 286 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 287 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 158 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 288 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 289 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 159 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 290 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 291 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 292 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 293 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 294 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_AgreeSailToOneIsland::
# 295 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 164 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 296 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 297 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 165 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 298 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 299 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 166 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 300 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 301 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 167 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 302 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 303 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 304 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 305 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 306 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland::
# 307 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 172 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 308 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 309 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 173 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 310 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 311 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 174 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 312 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_DeclineSailToOneIsland_2
# 313 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland_1:
# 314 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 177 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 315 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_DeclineSailToOneIsland_5
# 316 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland_4:
# 317 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 180 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 318 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 319 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 181 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 320 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 321 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 182 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 322 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 323 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 183 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 324 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 325 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 326 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 327 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland_2:
# 328 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 175 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 329 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillExitToPokeCenter
# 330 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_DeclineSailToOneIsland_1
# 331 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 332 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland_5:
# 333 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 178 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 334 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BillReturnToPokeCenter
# 335 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_DeclineSailToOneIsland_4
# 336 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 337 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 338 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillExitToPokeCenter::
# 339 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 188 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 340 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillExitToPokeCenter
# 341 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 189 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 342 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 343 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 344 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 345 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 346 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 193 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 347 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillExitToPokeCenter:
# 348 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 194 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 349 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 350 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 195 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 351 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 352 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 196 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 353 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 354 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 197 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 355 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 356 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 198 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 357 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 358 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 199 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 359 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 360 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 200 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 361 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 362 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 201 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 363 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 364 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 365 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillReturnToPokeCenter::
# 366 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 205 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 367 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerWatchBillExit
# 368 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 206 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 369 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillApproachDoor
# 370 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 207 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 371 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 372 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 208 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 373 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	opendoor 14, 11
# 374 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 209 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 375 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitdooranim
# 376 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 210 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 377 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillReEnterPokeCenter
# 378 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 211 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 379 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 380 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 212 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 381 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closedoor 14, 11
# 382 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 213 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 383 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitdooranim
# 384 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 385 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 386 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 387 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 217 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 388 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerWatchBillExit:
# 389 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 218 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 390 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 391 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 219 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 392 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 393 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 220 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 394 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 395 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 396 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 223 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 397 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachDoor:
# 398 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 224 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 399 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 400 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 225 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 401 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 402 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 226 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 403 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_up
# 404 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 227 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 405 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 406 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 407 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 230 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 408 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillReEnterPokeCenter:
# 409 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 231 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 410 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_up
# 411 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 232 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 412 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 413 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 233 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 414 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 415 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 234 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 416 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 417 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 418 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland::
# 419 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 238 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 420 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_2
# 421 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_1:
# 422 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 241 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 423 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	addobject LOCALID_CINNABAR_SEAGALLOP
# 424 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 242 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 425 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_5
# 426 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_4:
# 427 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 245 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 428 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_8
# 429 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_7:
# 430 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 248 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 431 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 432 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 249 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 433 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 434 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 250 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 435 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_11
# 436 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_10:
# 437 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 253 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 438 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_14
# 439 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_13:
# 440 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 256 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 441 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 442 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 257 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 443 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 444 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 258 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 445 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 40
# 446 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 259 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 447 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 448 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 260 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 449 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 450 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 261 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 451 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 452 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 262 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 453 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 454 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 263 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 455 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto EventScript_SetSail
# 456 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 457 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 458 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_2:
# 459 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 239 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 460 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_ApproachShore
# 461 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_SailToOneIsland_1
# 462 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 463 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_5:
# 464 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 243 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 465 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BoatArrive
# 466 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_SailToOneIsland_4
# 467 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 468 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_8:
# 469 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 246 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 470 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BoatArriveExitedPokeCenter
# 471 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_SailToOneIsland_7
# 472 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 473 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_11:
# 474 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 251 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 475 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BoardBoat
# 476 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_SailToOneIsland_10
# 477 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 478 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_14:
# 479 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 254 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 480 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_BoardBoatExitedPokeCenter
# 481 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto CinnabarIsland_EventScript_SailToOneIsland_13
# 482 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 483 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 484 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_ApproachShore::
# 485 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 268 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 486 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_ApproachShore
# 487 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 269 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 488 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ApproachShore
# 489 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 270 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 490 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 491 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 492 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 493 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 494 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BoatArrive::
# 495 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 275 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 496 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillFaceBoat
# 497 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 276 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 498 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 499 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 277 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 500 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 501 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 502 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 503 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 504 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BoatArriveExitedPokeCenter::
# 505 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 282 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 506 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 507 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 283 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 508 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 509 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 510 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 511 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 512 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BoardBoat::
# 513 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 288 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 514 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoat
# 515 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 289 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 516 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
# 517 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 290 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 518 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 519 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 520 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 521 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 522 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BoardBoatExitedPokeCenter::
# 523 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 295 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 524 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Movement_BillBoardBoatFromShore
# 525 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 296 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 526 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoatFromShore
# 527 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 297 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 528 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 529 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	return
# 530 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 531 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 532 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 301 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 533 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BoatArrive:
# 534 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 302 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 535 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 536 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 303 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 537 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 538 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 304 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 539 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_fast_left
# 540 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 305 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 541 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_fast_left
# 542 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 306 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 543 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 544 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 307 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 545 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_slow_left
# 546 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 308 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 547 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_slow_left
# 548 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 309 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 549 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 550 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 551 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 312 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 552 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillBoardBoat:
# 553 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 313 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 554 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 555 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 314 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 556 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 557 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 315 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 558 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 559 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 316 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 560 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 561 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 317 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 562 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 563 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 318 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 564 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 565 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 319 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 566 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 567 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 568 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 322 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 569 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer1:
# 570 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 323 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 571 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_up
# 572 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 324 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 573 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 574 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 575 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 327 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 576 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer2:
# 577 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 328 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 578 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 579 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 329 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 580 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 581 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 330 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 582 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 583 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 331 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 584 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 585 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 586 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 334 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 587 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillFaceBoat:
# 588 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 335 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 589 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 590 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 336 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 591 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 592 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 337 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 593 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_8
# 594 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 338 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 595 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 596 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 339 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 597 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 598 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 599 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 342 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 600 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_ApproachShore:
# 601 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 343 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 602 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 603 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 344 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 604 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 605 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 345 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 606 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 607 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 346 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 608 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 609 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 347 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 610 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 611 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 348 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 612 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 613 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 349 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 614 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 615 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 616 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 352 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 617 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_BillBoardBoatFromShore:
# 618 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 353 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 619 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 620 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 354 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 621 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 622 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 355 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 623 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 624 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 356 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 625 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 626 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 627 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 359 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 628 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat:
# 629 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 360 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 630 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 631 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 361 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 632 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 633 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 362 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 634 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 635 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 363 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 636 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 637 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 364 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 638 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_in_place_faster_right
# 639 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 365 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 640 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 641 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 366 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 642 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 643 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 367 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 644 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 645 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 368 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 646 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 647 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 369 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 648 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 649 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 650 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 372 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 651 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoatFromShore:
# 652 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 373 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 653 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 654 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 374 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 655 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 656 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 375 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 657 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 658 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 376 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 659 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 660 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 377 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 661 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
# 662 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 378 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 663 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 664 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 665 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_GymDoorLocked::
# 666 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 382 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 667 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 668 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 383 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 669 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 670 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 384 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 671 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 672 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 385 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 673 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 20
# 674 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 386 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 675 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 676 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 387 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 677 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 678 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 388 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 679 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_ForcePlayerFromDoor
# 680 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 389 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 681 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 682 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 390 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 683 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 684 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 685 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 686 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 687 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 394 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 688 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_ForcePlayerFromDoor:
# 689 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 395 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 690 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 691 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 396 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 692 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_end
# 693 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 694 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_Woman::
# 695 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 400 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 696 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lock
# 697 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 401 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 698 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	faceplayer
# 699 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 402 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 700 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 701 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 403 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 702 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
# 703 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 404 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 704 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	release
# 705 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 706 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 707 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 708 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_OldMan::
# 709 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 409 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 710 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
# 711 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 712 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 713 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 714 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_IslandSign::
# 715 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 414 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 716 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
# 717 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 718 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 719 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 720 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_PokemonLabSign::
# 721 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 419 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 722 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
# 723 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 724 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 725 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 726 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_GymSign::
# 727 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 424 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 728 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 729 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 425 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 730 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 731 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 426 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 732 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 733 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 427 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 734 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
# 735 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	end
# 736 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 737 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 738 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_DoorIsLocked::
# 739 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 431 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 740 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The door is locked…$"
# 741 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 742 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab::
# 743 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 435 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 744 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR GYM's BLAINE is quite the\n"
# 745 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "odd fellow.\p"
# 746 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "He's lived on the island since way\n"
# 747 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "before the LAB was built.$"
# 748 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 749 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_ScientistsExperimentInMansion::
# 750 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 442 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 751 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Scientists conduct experiments \n"
# 752 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "in the burned-out building.\p"
# 753 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "You know, the one they call the\n"
# 754 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "POKéMON MANSION.$"
# 755 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 756 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_IslandSign::
# 757 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 449 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 758 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR ISLAND\n"
# 759 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The Fiery Town of Burning Desire$"
# 760 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 761 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_PokemonLab::
# 762 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 454 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 763 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "POKéMON LAB$"
# 764 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 765 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_GymSign::
# 766 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 458 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 767 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR ISLAND POKéMON GYM\n"
# 768 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "LEADER: BLAINE\l"
# 769 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The Hotheaded Quiz Master!$"
# 770 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 771 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_HeyIfItIsntPlayer::
# 772 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 464 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 773 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Huh?\n"
# 774 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Hey, if it isn't {PLAYER}!$"
# 775 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 776 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_ComeWithMeToOneIsland::
# 777 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 469 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 778 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Look, it's me, BILL.\n"
# 779 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Long time no see!\p"
# 780 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "I hope you're still using my\n"
# 781 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "PC system.\p"
# 782 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Well, listen, since we met up here,\n"
# 783 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "how about spending time with me?\p"
# 784 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "There's this little island in the far\n"
# 785 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "south called ONE ISLAND.\p"
# 786 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "A friend invited me, so I'm on my\n"
# 787 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "way out there.\p"
# 788 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "How about it?\n"
# 789 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Do you feel like coming with me?$"
# 790 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 791 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_AllRightLetsGo::
# 792 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 484 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 793 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "All right, then.\n"
# 794 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Let's go!$"
# 795 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 796 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_IllBeWaitingInPokeCenter::
# 797 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 489 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 798 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "What, are you too busy?\p"
# 799 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Well, all right.\n"
# 800 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The boat hasn't arrived yet anyway.\p"
# 801 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "I'll be waiting at the POKéMON\n"
# 802 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CENTER over there.\p"
# 803 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Come see me when you're done with\n"
# 804 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "your business here.$"
# 805 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 806 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_MyPalsBoatArrived::
# 807 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 499 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 808 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Looks like my pal's boat arrived,\n"
# 809 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "too.\p"
# 810 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "He sent it specially here to\n"
# 811 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR to pick me up.$"
# 812 "data/maps/CinnabarIsland_Frlg/scripts.pory"

# 813 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain::
# 814 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 506 "data/maps/CinnabarIsland_Frlg/scripts.pory"
# 815 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Hey, wasn't that a long cruise?\p"
# 816 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "My buddy CELIO seemed to enjoy\n"
# 817 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "your company.\p"
# 818 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "I'm sure he'd welcome you if you\n"
# 819 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "were to visit him again.\p"
# 820 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "If you have a TRI-PASS, you can\n"
# 821 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "always take a ferry there from\l"
# 822 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "VERMILION PORT.\p"
# 823 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "All right, thanks for your company!$"
