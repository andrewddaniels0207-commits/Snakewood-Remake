# 1 "data/maps/PalletTown_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Frlg_MapScripts::
# 3 "data/maps/PalletTown_Frlg/scripts.pory"
# 2 "data/maps/PalletTown_Frlg/scripts.pory"
# 4 "data/maps/PalletTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 5 "data/maps/PalletTown_Frlg/scripts.pory"
# 3 "data/maps/PalletTown_Frlg/scripts.pory"
# 6 "data/maps/PalletTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/PalletTown_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/PalletTown_Frlg/scripts.pory"

# 9 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/PalletTown_Frlg/scripts.pory"
# 4 "data/maps/PalletTown_Frlg/scripts.pory"
# 11 "data/maps/PalletTown_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
# 12 "data/maps/PalletTown_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/PalletTown_Frlg/scripts.pory"

# 14 "data/maps/PalletTown_Frlg/scripts.pory"

# 15 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnTransition::
# 16 "data/maps/PalletTown_Frlg/scripts.pory"
# 9 "data/maps/PalletTown_Frlg/scripts.pory"
# 17 "data/maps/PalletTown_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 18 "data/maps/PalletTown_Frlg/scripts.pory"
# 10 "data/maps/PalletTown_Frlg/scripts.pory"
# 19 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_OnTransition_2
# 20 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnTransition_1:
# 21 "data/maps/PalletTown_Frlg/scripts.pory"
# 13 "data/maps/PalletTown_Frlg/scripts.pory"
# 22 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0
# 23 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_OnTransition_5
# 24 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnTransition_4:
# 25 "data/maps/PalletTown_Frlg/scripts.pory"
# 16 "data/maps/PalletTown_Frlg/scripts.pory"
# 26 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 27 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_OnTransition_8
# 28 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnTransition_7:
# 29 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 30 "data/maps/PalletTown_Frlg/scripts.pory"

# 31 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnTransition_2:
# 32 "data/maps/PalletTown_Frlg/scripts.pory"
# 11 "data/maps/PalletTown_Frlg/scripts.pory"
# 33 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_TryReadySignLady
# 34 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_OnTransition_1
# 35 "data/maps/PalletTown_Frlg/scripts.pory"

# 36 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnTransition_5:
# 37 "data/maps/PalletTown_Frlg/scripts.pory"
# 14 "data/maps/PalletTown_Frlg/scripts.pory"
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_SetSignLadyPos
# 39 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_OnTransition_4
# 40 "data/maps/PalletTown_Frlg/scripts.pory"

# 41 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnTransition_8:
# 42 "data/maps/PalletTown_Frlg/scripts.pory"
# 17 "data/maps/PalletTown_Frlg/scripts.pory"
# 43 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_SetSignLadyDone
# 44 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_OnTransition_7
# 45 "data/maps/PalletTown_Frlg/scripts.pory"

# 46 "data/maps/PalletTown_Frlg/scripts.pory"

# 47 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_TryReadySignLady::
# 48 "data/maps/PalletTown_Frlg/scripts.pory"
# 23 "data/maps/PalletTown_Frlg/scripts.pory"
# 49 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, PalletTown_EventScript_TryReadySignLady_2
# 50 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_TryReadySignLady_1:
# 51 "data/maps/PalletTown_Frlg/scripts.pory"
# 26 "data/maps/PalletTown_Frlg/scripts.pory"
# 52 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 53 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_ge PalletTown_EventScript_TryReadySignLady_5
# 54 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_TryReadySignLady_4:
# 55 "data/maps/PalletTown_Frlg/scripts.pory"
# 29 "data/maps/PalletTown_Frlg/scripts.pory"
# 56 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 57 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 58 "data/maps/PalletTown_Frlg/scripts.pory"

# 59 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_TryReadySignLady_2:
# 60 "data/maps/PalletTown_Frlg/scripts.pory"
# 24 "data/maps/PalletTown_Frlg/scripts.pory"
# 61 "data/maps/PalletTown_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 62 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_TryReadySignLady_1
# 63 "data/maps/PalletTown_Frlg/scripts.pory"

# 64 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_TryReadySignLady_5:
# 65 "data/maps/PalletTown_Frlg/scripts.pory"
# 27 "data/maps/PalletTown_Frlg/scripts.pory"
# 66 "data/maps/PalletTown_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 67 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_TryReadySignLady_4
# 68 "data/maps/PalletTown_Frlg/scripts.pory"

# 69 "data/maps/PalletTown_Frlg/scripts.pory"

# 70 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SetSignLadyDone::
# 71 "data/maps/PalletTown_Frlg/scripts.pory"
# 34 "data/maps/PalletTown_Frlg/scripts.pory"
# 72 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 73 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 74 "data/maps/PalletTown_Frlg/scripts.pory"

# 75 "data/maps/PalletTown_Frlg/scripts.pory"

# 76 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SetSignLadyPos::
# 77 "data/maps/PalletTown_Frlg/scripts.pory"
# 39 "data/maps/PalletTown_Frlg/scripts.pory"
# 78 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_SetSignLadyPos_2
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SetSignLadyPos_1:
# 80 "data/maps/PalletTown_Frlg/scripts.pory"
# 42 "data/maps/PalletTown_Frlg/scripts.pory"
# 81 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 5, 15
# 82 "data/maps/PalletTown_Frlg/scripts.pory"
# 43 "data/maps/PalletTown_Frlg/scripts.pory"
# 83 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 85 "data/maps/PalletTown_Frlg/scripts.pory"

# 86 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SetSignLadyPos_2:
# 87 "data/maps/PalletTown_Frlg/scripts.pory"
# 40 "data/maps/PalletTown_Frlg/scripts.pory"
# 88 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 89 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SetSignLadyPos_1
# 90 "data/maps/PalletTown_Frlg/scripts.pory"

# 91 "data/maps/PalletTown_Frlg/scripts.pory"

# 92 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 93 "data/maps/PalletTown_Frlg/scripts.pory"
# 48 "data/maps/PalletTown_Frlg/scripts.pory"
# 94 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 12, 2
# 95 "data/maps/PalletTown_Frlg/scripts.pory"
# 49 "data/maps/PalletTown_Frlg/scripts.pory"
# 96 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 97 "data/maps/PalletTown_Frlg/scripts.pory"
# 50 "data/maps/PalletTown_Frlg/scripts.pory"
# 98 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar SIGN_LADY_READY, TRUE
# 99 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 100 "data/maps/PalletTown_Frlg/scripts.pory"

# 101 "data/maps/PalletTown_Frlg/scripts.pory"

# 102 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene::
# 103 "data/maps/PalletTown_Frlg/scripts.pory"
# 55 "data/maps/PalletTown_Frlg/scripts.pory"
# 104 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 105 "data/maps/PalletTown_Frlg/scripts.pory"
# 56 "data/maps/PalletTown_Frlg/scripts.pory"
# 106 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 107 "data/maps/PalletTown_Frlg/scripts.pory"
# 57 "data/maps/PalletTown_Frlg/scripts.pory"
# 108 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 109 "data/maps/PalletTown_Frlg/scripts.pory"
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
# 110 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 111 "data/maps/PalletTown_Frlg/scripts.pory"
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
# 112 "data/maps/PalletTown_Frlg/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 113 "data/maps/PalletTown_Frlg/scripts.pory"
# 60 "data/maps/PalletTown_Frlg/scripts.pory"
# 114 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 115 "data/maps/PalletTown_Frlg/scripts.pory"
# 61 "data/maps/PalletTown_Frlg/scripts.pory"
# 116 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 117 "data/maps/PalletTown_Frlg/scripts.pory"
# 62 "data/maps/PalletTown_Frlg/scripts.pory"
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_OakRatingScene_2
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_1:
# 120 "data/maps/PalletTown_Frlg/scripts.pory"
# 65 "data/maps/PalletTown_Frlg/scripts.pory"
# 121 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 122 "data/maps/PalletTown_Frlg/scripts.pory"
# 66 "data/maps/PalletTown_Frlg/scripts.pory"
# 123 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 124 "data/maps/PalletTown_Frlg/scripts.pory"
# 67 "data/maps/PalletTown_Frlg/scripts.pory"
# 125 "data/maps/PalletTown_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 126 "data/maps/PalletTown_Frlg/scripts.pory"
# 68 "data/maps/PalletTown_Frlg/scripts.pory"
# 127 "data/maps/PalletTown_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
# 69 "data/maps/PalletTown_Frlg/scripts.pory"
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 130 "data/maps/PalletTown_Frlg/scripts.pory"
# 70 "data/maps/PalletTown_Frlg/scripts.pory"
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
# 71 "data/maps/PalletTown_Frlg/scripts.pory"
# 133 "data/maps/PalletTown_Frlg/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 134 "data/maps/PalletTown_Frlg/scripts.pory"
# 72 "data/maps/PalletTown_Frlg/scripts.pory"
# 135 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_0x8009, 60
# 136 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_lt PalletTown_EventScript_OakRatingScene_5
# 137 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_4:
# 138 "data/maps/PalletTown_Frlg/scripts.pory"
# 75 "data/maps/PalletTown_Frlg/scripts.pory"
# 139 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 140 "data/maps/PalletTown_Frlg/scripts.pory"
# 76 "data/maps/PalletTown_Frlg/scripts.pory"
# 141 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 142 "data/maps/PalletTown_Frlg/scripts.pory"
# 77 "data/maps/PalletTown_Frlg/scripts.pory"
# 143 "data/maps/PalletTown_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 144 "data/maps/PalletTown_Frlg/scripts.pory"
# 78 "data/maps/PalletTown_Frlg/scripts.pory"
# 145 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 146 "data/maps/PalletTown_Frlg/scripts.pory"
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
# 147 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 148 "data/maps/PalletTown_Frlg/scripts.pory"
# 80 "data/maps/PalletTown_Frlg/scripts.pory"
# 149 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 150 "data/maps/PalletTown_Frlg/scripts.pory"
# 81 "data/maps/PalletTown_Frlg/scripts.pory"
# 151 "data/maps/PalletTown_Frlg/scripts.pory"
	opendoor 16, 13
# 152 "data/maps/PalletTown_Frlg/scripts.pory"
# 82 "data/maps/PalletTown_Frlg/scripts.pory"
# 153 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 154 "data/maps/PalletTown_Frlg/scripts.pory"
# 83 "data/maps/PalletTown_Frlg/scripts.pory"
# 155 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 156 "data/maps/PalletTown_Frlg/scripts.pory"
# 84 "data/maps/PalletTown_Frlg/scripts.pory"
# 157 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 158 "data/maps/PalletTown_Frlg/scripts.pory"
# 85 "data/maps/PalletTown_Frlg/scripts.pory"
# 159 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 160 "data/maps/PalletTown_Frlg/scripts.pory"
# 86 "data/maps/PalletTown_Frlg/scripts.pory"
# 161 "data/maps/PalletTown_Frlg/scripts.pory"
	closedoor 16, 13
# 162 "data/maps/PalletTown_Frlg/scripts.pory"
# 87 "data/maps/PalletTown_Frlg/scripts.pory"
# 163 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 164 "data/maps/PalletTown_Frlg/scripts.pory"
# 88 "data/maps/PalletTown_Frlg/scripts.pory"
# 165 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 166 "data/maps/PalletTown_Frlg/scripts.pory"
# 89 "data/maps/PalletTown_Frlg/scripts.pory"
# 167 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 168 "data/maps/PalletTown_Frlg/scripts.pory"
# 90 "data/maps/PalletTown_Frlg/scripts.pory"
# 169 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 170 "data/maps/PalletTown_Frlg/scripts.pory"
# 91 "data/maps/PalletTown_Frlg/scripts.pory"
# 171 "data/maps/PalletTown_Frlg/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 172 "data/maps/PalletTown_Frlg/scripts.pory"
# 92 "data/maps/PalletTown_Frlg/scripts.pory"
# 173 "data/maps/PalletTown_Frlg/scripts.pory"
	waitstate
# 174 "data/maps/PalletTown_Frlg/scripts.pory"
# 93 "data/maps/PalletTown_Frlg/scripts.pory"
# 175 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 176 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 177 "data/maps/PalletTown_Frlg/scripts.pory"

# 178 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_2:
# 179 "data/maps/PalletTown_Frlg/scripts.pory"
# 63 "data/maps/PalletTown_Frlg/scripts.pory"
# 180 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_NotBeenToOneIslandYet
# 181 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakRatingScene_1
# 182 "data/maps/PalletTown_Frlg/scripts.pory"

# 183 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_5:
# 184 "data/maps/PalletTown_Frlg/scripts.pory"
# 73 "data/maps/PalletTown_Frlg/scripts.pory"
# 185 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_NotEnoughMonsForNationalDex
# 186 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakRatingScene_4
# 187 "data/maps/PalletTown_Frlg/scripts.pory"

# 188 "data/maps/PalletTown_Frlg/scripts.pory"

# 189 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_EndOakRatingScene::
# 190 "data/maps/PalletTown_Frlg/scripts.pory"
# 98 "data/maps/PalletTown_Frlg/scripts.pory"
# 191 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 192 "data/maps/PalletTown_Frlg/scripts.pory"
# 99 "data/maps/PalletTown_Frlg/scripts.pory"
# 193 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakExit
# 194 "data/maps/PalletTown_Frlg/scripts.pory"
# 100 "data/maps/PalletTown_Frlg/scripts.pory"
# 195 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 196 "data/maps/PalletTown_Frlg/scripts.pory"
# 101 "data/maps/PalletTown_Frlg/scripts.pory"
# 197 "data/maps/PalletTown_Frlg/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 198 "data/maps/PalletTown_Frlg/scripts.pory"
# 102 "data/maps/PalletTown_Frlg/scripts.pory"
# 199 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 200 "data/maps/PalletTown_Frlg/scripts.pory"
# 103 "data/maps/PalletTown_Frlg/scripts.pory"
# 201 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 202 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 203 "data/maps/PalletTown_Frlg/scripts.pory"

# 204 "data/maps/PalletTown_Frlg/scripts.pory"

# 205 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 206 "data/maps/PalletTown_Frlg/scripts.pory"
# 108 "data/maps/PalletTown_Frlg/scripts.pory"
# 207 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 208 "data/maps/PalletTown_Frlg/scripts.pory"
# 109 "data/maps/PalletTown_Frlg/scripts.pory"
# 209 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 210 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 211 "data/maps/PalletTown_Frlg/scripts.pory"

# 212 "data/maps/PalletTown_Frlg/scripts.pory"

# 213 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_NotBeenToOneIslandYet::
# 214 "data/maps/PalletTown_Frlg/scripts.pory"
# 114 "data/maps/PalletTown_Frlg/scripts.pory"
# 215 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 216 "data/maps/PalletTown_Frlg/scripts.pory"
# 115 "data/maps/PalletTown_Frlg/scripts.pory"
# 217 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 218 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 219 "data/maps/PalletTown_Frlg/scripts.pory"

# 220 "data/maps/PalletTown_Frlg/scripts.pory"

# 221 "data/maps/PalletTown_Frlg/scripts.pory"
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
# 222 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor:
# 223 "data/maps/PalletTown_Frlg/scripts.pory"
# 120 "data/maps/PalletTown_Frlg/scripts.pory"
# 224 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 225 "data/maps/PalletTown_Frlg/scripts.pory"
# 121 "data/maps/PalletTown_Frlg/scripts.pory"
# 226 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 227 "data/maps/PalletTown_Frlg/scripts.pory"
# 122 "data/maps/PalletTown_Frlg/scripts.pory"
# 228 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 229 "data/maps/PalletTown_Frlg/scripts.pory"
# 123 "data/maps/PalletTown_Frlg/scripts.pory"
# 230 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PalletTown_Frlg/scripts.pory"
# 124 "data/maps/PalletTown_Frlg/scripts.pory"
# 232 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 233 "data/maps/PalletTown_Frlg/scripts.pory"
# 125 "data/maps/PalletTown_Frlg/scripts.pory"
# 234 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 235 "data/maps/PalletTown_Frlg/scripts.pory"
# 126 "data/maps/PalletTown_Frlg/scripts.pory"
# 236 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 237 "data/maps/PalletTown_Frlg/scripts.pory"
# 127 "data/maps/PalletTown_Frlg/scripts.pory"
# 238 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 239 "data/maps/PalletTown_Frlg/scripts.pory"
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
# 240 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 241 "data/maps/PalletTown_Frlg/scripts.pory"
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
# 242 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 243 "data/maps/PalletTown_Frlg/scripts.pory"
# 130 "data/maps/PalletTown_Frlg/scripts.pory"
# 244 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 245 "data/maps/PalletTown_Frlg/scripts.pory"
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
# 246 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 247 "data/maps/PalletTown_Frlg/scripts.pory"
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
# 248 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 249 "data/maps/PalletTown_Frlg/scripts.pory"
# 133 "data/maps/PalletTown_Frlg/scripts.pory"
# 250 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_up
# 251 "data/maps/PalletTown_Frlg/scripts.pory"
# 134 "data/maps/PalletTown_Frlg/scripts.pory"
# 252 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 253 "data/maps/PalletTown_Frlg/scripts.pory"

# 254 "data/maps/PalletTown_Frlg/scripts.pory"
# 137 "data/maps/PalletTown_Frlg/scripts.pory"
# 255 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakExit:
# 256 "data/maps/PalletTown_Frlg/scripts.pory"
# 138 "data/maps/PalletTown_Frlg/scripts.pory"
# 257 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 258 "data/maps/PalletTown_Frlg/scripts.pory"
# 139 "data/maps/PalletTown_Frlg/scripts.pory"
# 259 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 260 "data/maps/PalletTown_Frlg/scripts.pory"
# 140 "data/maps/PalletTown_Frlg/scripts.pory"
# 261 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 262 "data/maps/PalletTown_Frlg/scripts.pory"
# 141 "data/maps/PalletTown_Frlg/scripts.pory"
# 263 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 264 "data/maps/PalletTown_Frlg/scripts.pory"
# 142 "data/maps/PalletTown_Frlg/scripts.pory"
# 265 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 266 "data/maps/PalletTown_Frlg/scripts.pory"
# 143 "data/maps/PalletTown_Frlg/scripts.pory"
# 267 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 268 "data/maps/PalletTown_Frlg/scripts.pory"
# 144 "data/maps/PalletTown_Frlg/scripts.pory"
# 269 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 270 "data/maps/PalletTown_Frlg/scripts.pory"
# 145 "data/maps/PalletTown_Frlg/scripts.pory"
# 271 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 272 "data/maps/PalletTown_Frlg/scripts.pory"
# 146 "data/maps/PalletTown_Frlg/scripts.pory"
# 273 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 274 "data/maps/PalletTown_Frlg/scripts.pory"
# 147 "data/maps/PalletTown_Frlg/scripts.pory"
# 275 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 276 "data/maps/PalletTown_Frlg/scripts.pory"
# 148 "data/maps/PalletTown_Frlg/scripts.pory"
# 277 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 278 "data/maps/PalletTown_Frlg/scripts.pory"
# 149 "data/maps/PalletTown_Frlg/scripts.pory"
# 279 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 280 "data/maps/PalletTown_Frlg/scripts.pory"
# 150 "data/maps/PalletTown_Frlg/scripts.pory"
# 281 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 282 "data/maps/PalletTown_Frlg/scripts.pory"
# 151 "data/maps/PalletTown_Frlg/scripts.pory"
# 283 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 284 "data/maps/PalletTown_Frlg/scripts.pory"

# 285 "data/maps/PalletTown_Frlg/scripts.pory"
# 154 "data/maps/PalletTown_Frlg/scripts.pory"
# 286 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse:
# 287 "data/maps/PalletTown_Frlg/scripts.pory"
# 155 "data/maps/PalletTown_Frlg/scripts.pory"
# 288 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 289 "data/maps/PalletTown_Frlg/scripts.pory"
# 156 "data/maps/PalletTown_Frlg/scripts.pory"
# 290 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 291 "data/maps/PalletTown_Frlg/scripts.pory"
# 157 "data/maps/PalletTown_Frlg/scripts.pory"
# 292 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 293 "data/maps/PalletTown_Frlg/scripts.pory"
# 158 "data/maps/PalletTown_Frlg/scripts.pory"
# 294 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 295 "data/maps/PalletTown_Frlg/scripts.pory"
# 159 "data/maps/PalletTown_Frlg/scripts.pory"
# 296 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 297 "data/maps/PalletTown_Frlg/scripts.pory"
# 160 "data/maps/PalletTown_Frlg/scripts.pory"
# 298 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 299 "data/maps/PalletTown_Frlg/scripts.pory"
# 161 "data/maps/PalletTown_Frlg/scripts.pory"
# 300 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 301 "data/maps/PalletTown_Frlg/scripts.pory"
# 162 "data/maps/PalletTown_Frlg/scripts.pory"
# 302 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 303 "data/maps/PalletTown_Frlg/scripts.pory"
# 163 "data/maps/PalletTown_Frlg/scripts.pory"
# 304 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 305 "data/maps/PalletTown_Frlg/scripts.pory"
# 164 "data/maps/PalletTown_Frlg/scripts.pory"
# 306 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 307 "data/maps/PalletTown_Frlg/scripts.pory"
# 165 "data/maps/PalletTown_Frlg/scripts.pory"
# 308 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 309 "data/maps/PalletTown_Frlg/scripts.pory"
# 166 "data/maps/PalletTown_Frlg/scripts.pory"
# 310 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 311 "data/maps/PalletTown_Frlg/scripts.pory"
# 167 "data/maps/PalletTown_Frlg/scripts.pory"
# 312 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 313 "data/maps/PalletTown_Frlg/scripts.pory"
# 168 "data/maps/PalletTown_Frlg/scripts.pory"
# 314 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 315 "data/maps/PalletTown_Frlg/scripts.pory"
# 169 "data/maps/PalletTown_Frlg/scripts.pory"
# 316 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 317 "data/maps/PalletTown_Frlg/scripts.pory"
# 170 "data/maps/PalletTown_Frlg/scripts.pory"
# 318 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_up
# 319 "data/maps/PalletTown_Frlg/scripts.pory"
# 171 "data/maps/PalletTown_Frlg/scripts.pory"
# 320 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 321 "data/maps/PalletTown_Frlg/scripts.pory"

# 322 "data/maps/PalletTown_Frlg/scripts.pory"
# 174 "data/maps/PalletTown_Frlg/scripts.pory"
# 323 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse:
# 324 "data/maps/PalletTown_Frlg/scripts.pory"
# 175 "data/maps/PalletTown_Frlg/scripts.pory"
# 325 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 326 "data/maps/PalletTown_Frlg/scripts.pory"
# 176 "data/maps/PalletTown_Frlg/scripts.pory"
# 327 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 328 "data/maps/PalletTown_Frlg/scripts.pory"
# 177 "data/maps/PalletTown_Frlg/scripts.pory"
# 329 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 330 "data/maps/PalletTown_Frlg/scripts.pory"
# 178 "data/maps/PalletTown_Frlg/scripts.pory"
# 331 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 332 "data/maps/PalletTown_Frlg/scripts.pory"
# 179 "data/maps/PalletTown_Frlg/scripts.pory"
# 333 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 334 "data/maps/PalletTown_Frlg/scripts.pory"
# 180 "data/maps/PalletTown_Frlg/scripts.pory"
# 335 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 336 "data/maps/PalletTown_Frlg/scripts.pory"
# 181 "data/maps/PalletTown_Frlg/scripts.pory"
# 337 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 338 "data/maps/PalletTown_Frlg/scripts.pory"
# 182 "data/maps/PalletTown_Frlg/scripts.pory"
# 339 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 340 "data/maps/PalletTown_Frlg/scripts.pory"
# 183 "data/maps/PalletTown_Frlg/scripts.pory"
# 341 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 342 "data/maps/PalletTown_Frlg/scripts.pory"
# 184 "data/maps/PalletTown_Frlg/scripts.pory"
# 343 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 344 "data/maps/PalletTown_Frlg/scripts.pory"
# 185 "data/maps/PalletTown_Frlg/scripts.pory"
# 345 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 346 "data/maps/PalletTown_Frlg/scripts.pory"
# 186 "data/maps/PalletTown_Frlg/scripts.pory"
# 347 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 348 "data/maps/PalletTown_Frlg/scripts.pory"
# 187 "data/maps/PalletTown_Frlg/scripts.pory"
# 349 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 350 "data/maps/PalletTown_Frlg/scripts.pory"
# 188 "data/maps/PalletTown_Frlg/scripts.pory"
# 351 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 352 "data/maps/PalletTown_Frlg/scripts.pory"
# 189 "data/maps/PalletTown_Frlg/scripts.pory"
# 353 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 354 "data/maps/PalletTown_Frlg/scripts.pory"
# 190 "data/maps/PalletTown_Frlg/scripts.pory"
# 355 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 356 "data/maps/PalletTown_Frlg/scripts.pory"

# 357 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTriggerLeft::
# 358 "data/maps/PalletTown_Frlg/scripts.pory"
# 194 "data/maps/PalletTown_Frlg/scripts.pory"
# 359 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 360 "data/maps/PalletTown_Frlg/scripts.pory"
# 195 "data/maps/PalletTown_Frlg/scripts.pory"
# 361 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 362 "data/maps/PalletTown_Frlg/scripts.pory"
# 196 "data/maps/PalletTown_Frlg/scripts.pory"
# 363 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 364 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 365 "data/maps/PalletTown_Frlg/scripts.pory"

# 366 "data/maps/PalletTown_Frlg/scripts.pory"

# 367 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTriggerRight::
# 368 "data/maps/PalletTown_Frlg/scripts.pory"
# 201 "data/maps/PalletTown_Frlg/scripts.pory"
# 369 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 370 "data/maps/PalletTown_Frlg/scripts.pory"
# 202 "data/maps/PalletTown_Frlg/scripts.pory"
# 371 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 372 "data/maps/PalletTown_Frlg/scripts.pory"
# 203 "data/maps/PalletTown_Frlg/scripts.pory"
# 373 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 374 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 375 "data/maps/PalletTown_Frlg/scripts.pory"

# 376 "data/maps/PalletTown_Frlg/scripts.pory"

# 377 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger::
# 378 "data/maps/PalletTown_Frlg/scripts.pory"
# 208 "data/maps/PalletTown_Frlg/scripts.pory"
# 379 "data/maps/PalletTown_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 380 "data/maps/PalletTown_Frlg/scripts.pory"
# 209 "data/maps/PalletTown_Frlg/scripts.pory"
# 381 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 382 "data/maps/PalletTown_Frlg/scripts.pory"
# 210 "data/maps/PalletTown_Frlg/scripts.pory"
# 383 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 384 "data/maps/PalletTown_Frlg/scripts.pory"
# 211 "data/maps/PalletTown_Frlg/scripts.pory"
# 385 "data/maps/PalletTown_Frlg/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 386 "data/maps/PalletTown_Frlg/scripts.pory"
# 212 "data/maps/PalletTown_Frlg/scripts.pory"
# 387 "data/maps/PalletTown_Frlg/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 388 "data/maps/PalletTown_Frlg/scripts.pory"
# 213 "data/maps/PalletTown_Frlg/scripts.pory"
# 389 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmessage
# 390 "data/maps/PalletTown_Frlg/scripts.pory"
# 214 "data/maps/PalletTown_Frlg/scripts.pory"
# 391 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 85
# 392 "data/maps/PalletTown_Frlg/scripts.pory"
# 215 "data/maps/PalletTown_Frlg/scripts.pory"
# 393 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 394 "data/maps/PalletTown_Frlg/scripts.pory"
# 216 "data/maps/PalletTown_Frlg/scripts.pory"
# 395 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 396 "data/maps/PalletTown_Frlg/scripts.pory"
# 217 "data/maps/PalletTown_Frlg/scripts.pory"
# 397 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 398 "data/maps/PalletTown_Frlg/scripts.pory"
# 218 "data/maps/PalletTown_Frlg/scripts.pory"
# 399 "data/maps/PalletTown_Frlg/scripts.pory"
	playse SE_PIN
# 400 "data/maps/PalletTown_Frlg/scripts.pory"
# 219 "data/maps/PalletTown_Frlg/scripts.pory"
# 401 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 402 "data/maps/PalletTown_Frlg/scripts.pory"
# 220 "data/maps/PalletTown_Frlg/scripts.pory"
# 403 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 404 "data/maps/PalletTown_Frlg/scripts.pory"
# 221 "data/maps/PalletTown_Frlg/scripts.pory"
# 405 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 406 "data/maps/PalletTown_Frlg/scripts.pory"
# 222 "data/maps/PalletTown_Frlg/scripts.pory"
# 407 "data/maps/PalletTown_Frlg/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 408 "data/maps/PalletTown_Frlg/scripts.pory"
# 223 "data/maps/PalletTown_Frlg/scripts.pory"
# 409 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 410 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_EventScript_OakTrigger_2
# 411 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_1:
# 412 "data/maps/PalletTown_Frlg/scripts.pory"
# 226 "data/maps/PalletTown_Frlg/scripts.pory"
# 413 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 414 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_EventScript_OakTrigger_5
# 415 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_4:
# 416 "data/maps/PalletTown_Frlg/scripts.pory"
# 229 "data/maps/PalletTown_Frlg/scripts.pory"
# 417 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 418 "data/maps/PalletTown_Frlg/scripts.pory"
# 230 "data/maps/PalletTown_Frlg/scripts.pory"
# 419 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 420 "data/maps/PalletTown_Frlg/scripts.pory"
# 231 "data/maps/PalletTown_Frlg/scripts.pory"
# 421 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 422 "data/maps/PalletTown_Frlg/scripts.pory"
# 232 "data/maps/PalletTown_Frlg/scripts.pory"
# 423 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 424 "data/maps/PalletTown_Frlg/scripts.pory"
# 233 "data/maps/PalletTown_Frlg/scripts.pory"
# 425 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 426 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_EventScript_OakTrigger_8
# 427 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_7:
# 428 "data/maps/PalletTown_Frlg/scripts.pory"
# 236 "data/maps/PalletTown_Frlg/scripts.pory"
# 429 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 430 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_EventScript_OakTrigger_11
# 431 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_10:
# 432 "data/maps/PalletTown_Frlg/scripts.pory"
# 239 "data/maps/PalletTown_Frlg/scripts.pory"
# 433 "data/maps/PalletTown_Frlg/scripts.pory"
	opendoor 16, 13
# 434 "data/maps/PalletTown_Frlg/scripts.pory"
# 240 "data/maps/PalletTown_Frlg/scripts.pory"
# 435 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 436 "data/maps/PalletTown_Frlg/scripts.pory"
# 241 "data/maps/PalletTown_Frlg/scripts.pory"
# 437 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 438 "data/maps/PalletTown_Frlg/scripts.pory"
# 242 "data/maps/PalletTown_Frlg/scripts.pory"
# 439 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 440 "data/maps/PalletTown_Frlg/scripts.pory"
# 243 "data/maps/PalletTown_Frlg/scripts.pory"
# 441 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 442 "data/maps/PalletTown_Frlg/scripts.pory"
# 244 "data/maps/PalletTown_Frlg/scripts.pory"
# 443 "data/maps/PalletTown_Frlg/scripts.pory"
	closedoor 16, 13
# 444 "data/maps/PalletTown_Frlg/scripts.pory"
# 245 "data/maps/PalletTown_Frlg/scripts.pory"
# 445 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 446 "data/maps/PalletTown_Frlg/scripts.pory"
# 246 "data/maps/PalletTown_Frlg/scripts.pory"
# 447 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 448 "data/maps/PalletTown_Frlg/scripts.pory"
# 247 "data/maps/PalletTown_Frlg/scripts.pory"
# 449 "data/maps/PalletTown_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 450 "data/maps/PalletTown_Frlg/scripts.pory"
# 248 "data/maps/PalletTown_Frlg/scripts.pory"
# 451 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 452 "data/maps/PalletTown_Frlg/scripts.pory"
# 249 "data/maps/PalletTown_Frlg/scripts.pory"
# 453 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 454 "data/maps/PalletTown_Frlg/scripts.pory"
# 250 "data/maps/PalletTown_Frlg/scripts.pory"
# 455 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 456 "data/maps/PalletTown_Frlg/scripts.pory"
# 251 "data/maps/PalletTown_Frlg/scripts.pory"
# 457 "data/maps/PalletTown_Frlg/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 458 "data/maps/PalletTown_Frlg/scripts.pory"
# 252 "data/maps/PalletTown_Frlg/scripts.pory"
# 459 "data/maps/PalletTown_Frlg/scripts.pory"
	waitstate
# 460 "data/maps/PalletTown_Frlg/scripts.pory"
# 253 "data/maps/PalletTown_Frlg/scripts.pory"
# 461 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 462 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 463 "data/maps/PalletTown_Frlg/scripts.pory"

# 464 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_2:
# 465 "data/maps/PalletTown_Frlg/scripts.pory"
# 224 "data/maps/PalletTown_Frlg/scripts.pory"
# 466 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_OakEnterLeft
# 467 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger_1
# 468 "data/maps/PalletTown_Frlg/scripts.pory"

# 469 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_5:
# 470 "data/maps/PalletTown_Frlg/scripts.pory"
# 227 "data/maps/PalletTown_Frlg/scripts.pory"
# 471 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_OakEnterRight
# 472 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger_4
# 473 "data/maps/PalletTown_Frlg/scripts.pory"

# 474 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_8:
# 475 "data/maps/PalletTown_Frlg/scripts.pory"
# 234 "data/maps/PalletTown_Frlg/scripts.pory"
# 476 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_OakLeadPlayerToLabLeft
# 477 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger_7
# 478 "data/maps/PalletTown_Frlg/scripts.pory"

# 479 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_11:
# 480 "data/maps/PalletTown_Frlg/scripts.pory"
# 237 "data/maps/PalletTown_Frlg/scripts.pory"
# 481 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_OakLeadPlayerToLabRight
# 482 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger_10
# 483 "data/maps/PalletTown_Frlg/scripts.pory"

# 484 "data/maps/PalletTown_Frlg/scripts.pory"

# 485 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakEnterLeft::
# 486 "data/maps/PalletTown_Frlg/scripts.pory"
# 258 "data/maps/PalletTown_Frlg/scripts.pory"
# 487 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 488 "data/maps/PalletTown_Frlg/scripts.pory"
# 259 "data/maps/PalletTown_Frlg/scripts.pory"
# 489 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 490 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 491 "data/maps/PalletTown_Frlg/scripts.pory"

# 492 "data/maps/PalletTown_Frlg/scripts.pory"

# 493 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakEnterRight::
# 494 "data/maps/PalletTown_Frlg/scripts.pory"
# 264 "data/maps/PalletTown_Frlg/scripts.pory"
# 495 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterRight
# 496 "data/maps/PalletTown_Frlg/scripts.pory"
# 265 "data/maps/PalletTown_Frlg/scripts.pory"
# 497 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 498 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 499 "data/maps/PalletTown_Frlg/scripts.pory"

# 500 "data/maps/PalletTown_Frlg/scripts.pory"

# 501 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 502 "data/maps/PalletTown_Frlg/scripts.pory"
# 270 "data/maps/PalletTown_Frlg/scripts.pory"
# 503 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 504 "data/maps/PalletTown_Frlg/scripts.pory"
# 271 "data/maps/PalletTown_Frlg/scripts.pory"
# 505 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 506 "data/maps/PalletTown_Frlg/scripts.pory"
# 272 "data/maps/PalletTown_Frlg/scripts.pory"
# 507 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 508 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 509 "data/maps/PalletTown_Frlg/scripts.pory"

# 510 "data/maps/PalletTown_Frlg/scripts.pory"

# 511 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabRight::
# 512 "data/maps/PalletTown_Frlg/scripts.pory"
# 277 "data/maps/PalletTown_Frlg/scripts.pory"
# 513 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 514 "data/maps/PalletTown_Frlg/scripts.pory"
# 278 "data/maps/PalletTown_Frlg/scripts.pory"
# 515 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 516 "data/maps/PalletTown_Frlg/scripts.pory"
# 279 "data/maps/PalletTown_Frlg/scripts.pory"
# 517 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 518 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 519 "data/maps/PalletTown_Frlg/scripts.pory"

# 520 "data/maps/PalletTown_Frlg/scripts.pory"

# 521 "data/maps/PalletTown_Frlg/scripts.pory"
# 283 "data/maps/PalletTown_Frlg/scripts.pory"
# 522 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakEnterLeft:
# 523 "data/maps/PalletTown_Frlg/scripts.pory"
# 284 "data/maps/PalletTown_Frlg/scripts.pory"
# 524 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 525 "data/maps/PalletTown_Frlg/scripts.pory"
# 285 "data/maps/PalletTown_Frlg/scripts.pory"
# 526 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 527 "data/maps/PalletTown_Frlg/scripts.pory"
# 286 "data/maps/PalletTown_Frlg/scripts.pory"
# 528 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 529 "data/maps/PalletTown_Frlg/scripts.pory"
# 287 "data/maps/PalletTown_Frlg/scripts.pory"
# 530 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 531 "data/maps/PalletTown_Frlg/scripts.pory"
# 288 "data/maps/PalletTown_Frlg/scripts.pory"
# 532 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 533 "data/maps/PalletTown_Frlg/scripts.pory"
# 289 "data/maps/PalletTown_Frlg/scripts.pory"
# 534 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 535 "data/maps/PalletTown_Frlg/scripts.pory"
# 290 "data/maps/PalletTown_Frlg/scripts.pory"
# 536 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 537 "data/maps/PalletTown_Frlg/scripts.pory"
# 291 "data/maps/PalletTown_Frlg/scripts.pory"
# 538 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 539 "data/maps/PalletTown_Frlg/scripts.pory"
# 292 "data/maps/PalletTown_Frlg/scripts.pory"
# 540 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 541 "data/maps/PalletTown_Frlg/scripts.pory"

# 542 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 543 "data/maps/PalletTown_Frlg/scripts.pory"
# 296 "data/maps/PalletTown_Frlg/scripts.pory"
# 544 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 545 "data/maps/PalletTown_Frlg/scripts.pory"
# 297 "data/maps/PalletTown_Frlg/scripts.pory"
# 546 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 547 "data/maps/PalletTown_Frlg/scripts.pory"
# 298 "data/maps/PalletTown_Frlg/scripts.pory"
# 548 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 549 "data/maps/PalletTown_Frlg/scripts.pory"
# 299 "data/maps/PalletTown_Frlg/scripts.pory"
# 550 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 551 "data/maps/PalletTown_Frlg/scripts.pory"
# 300 "data/maps/PalletTown_Frlg/scripts.pory"
# 552 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 553 "data/maps/PalletTown_Frlg/scripts.pory"
# 301 "data/maps/PalletTown_Frlg/scripts.pory"
# 554 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 555 "data/maps/PalletTown_Frlg/scripts.pory"
# 302 "data/maps/PalletTown_Frlg/scripts.pory"
# 556 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 557 "data/maps/PalletTown_Frlg/scripts.pory"
# 303 "data/maps/PalletTown_Frlg/scripts.pory"
# 558 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 559 "data/maps/PalletTown_Frlg/scripts.pory"
# 304 "data/maps/PalletTown_Frlg/scripts.pory"
# 560 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 561 "data/maps/PalletTown_Frlg/scripts.pory"
# 305 "data/maps/PalletTown_Frlg/scripts.pory"
# 562 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 563 "data/maps/PalletTown_Frlg/scripts.pory"
# 306 "data/maps/PalletTown_Frlg/scripts.pory"
# 564 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 565 "data/maps/PalletTown_Frlg/scripts.pory"
# 307 "data/maps/PalletTown_Frlg/scripts.pory"
# 566 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 567 "data/maps/PalletTown_Frlg/scripts.pory"
# 308 "data/maps/PalletTown_Frlg/scripts.pory"
# 568 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 569 "data/maps/PalletTown_Frlg/scripts.pory"
# 309 "data/maps/PalletTown_Frlg/scripts.pory"
# 570 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 571 "data/maps/PalletTown_Frlg/scripts.pory"
# 310 "data/maps/PalletTown_Frlg/scripts.pory"
# 572 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 573 "data/maps/PalletTown_Frlg/scripts.pory"
# 311 "data/maps/PalletTown_Frlg/scripts.pory"
# 574 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 575 "data/maps/PalletTown_Frlg/scripts.pory"
# 312 "data/maps/PalletTown_Frlg/scripts.pory"
# 576 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 577 "data/maps/PalletTown_Frlg/scripts.pory"
# 313 "data/maps/PalletTown_Frlg/scripts.pory"
# 578 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 579 "data/maps/PalletTown_Frlg/scripts.pory"
# 314 "data/maps/PalletTown_Frlg/scripts.pory"
# 580 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 581 "data/maps/PalletTown_Frlg/scripts.pory"
# 315 "data/maps/PalletTown_Frlg/scripts.pory"
# 582 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 583 "data/maps/PalletTown_Frlg/scripts.pory"
# 316 "data/maps/PalletTown_Frlg/scripts.pory"
# 584 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 585 "data/maps/PalletTown_Frlg/scripts.pory"
# 317 "data/maps/PalletTown_Frlg/scripts.pory"
# 586 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 587 "data/maps/PalletTown_Frlg/scripts.pory"
# 318 "data/maps/PalletTown_Frlg/scripts.pory"
# 588 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 589 "data/maps/PalletTown_Frlg/scripts.pory"
# 319 "data/maps/PalletTown_Frlg/scripts.pory"
# 590 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 591 "data/maps/PalletTown_Frlg/scripts.pory"
# 320 "data/maps/PalletTown_Frlg/scripts.pory"
# 592 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 593 "data/maps/PalletTown_Frlg/scripts.pory"
# 321 "data/maps/PalletTown_Frlg/scripts.pory"
# 594 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 595 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 596 "data/maps/PalletTown_Frlg/scripts.pory"

# 597 "data/maps/PalletTown_Frlg/scripts.pory"

# 598 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 599 "data/maps/PalletTown_Frlg/scripts.pory"
# 325 "data/maps/PalletTown_Frlg/scripts.pory"
# 600 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 601 "data/maps/PalletTown_Frlg/scripts.pory"
# 326 "data/maps/PalletTown_Frlg/scripts.pory"
# 602 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_to_lab
# 603 "data/maps/PalletTown_Frlg/scripts.pory"
# 327 "data/maps/PalletTown_Frlg/scripts.pory"
# 604 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 605 "data/maps/PalletTown_Frlg/scripts.pory"
# 328 "data/maps/PalletTown_Frlg/scripts.pory"
# 606 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_up
# 607 "data/maps/PalletTown_Frlg/scripts.pory"
# 329 "data/maps/PalletTown_Frlg/scripts.pory"
# 608 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 609 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 610 "data/maps/PalletTown_Frlg/scripts.pory"

# 611 "data/maps/PalletTown_Frlg/scripts.pory"

# 612 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 613 "data/maps/PalletTown_Frlg/scripts.pory"
# 333 "data/maps/PalletTown_Frlg/scripts.pory"
# 614 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 615 "data/maps/PalletTown_Frlg/scripts.pory"
# 334 "data/maps/PalletTown_Frlg/scripts.pory"
# 616 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 617 "data/maps/PalletTown_Frlg/scripts.pory"
# 335 "data/maps/PalletTown_Frlg/scripts.pory"
# 618 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_to_lab
# 619 "data/maps/PalletTown_Frlg/scripts.pory"
# 336 "data/maps/PalletTown_Frlg/scripts.pory"
# 620 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 621 "data/maps/PalletTown_Frlg/scripts.pory"
# 337 "data/maps/PalletTown_Frlg/scripts.pory"
# 622 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_up
# 623 "data/maps/PalletTown_Frlg/scripts.pory"
# 338 "data/maps/PalletTown_Frlg/scripts.pory"
# 624 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 625 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 626 "data/maps/PalletTown_Frlg/scripts.pory"

# 627 "data/maps/PalletTown_Frlg/scripts.pory"

# 628 "data/maps/PalletTown_Frlg/scripts.pory"
# 341 "data/maps/PalletTown_Frlg/scripts.pory"
# 629 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakEnterLab:
# 630 "data/maps/PalletTown_Frlg/scripts.pory"
# 342 "data/maps/PalletTown_Frlg/scripts.pory"
# 631 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 632 "data/maps/PalletTown_Frlg/scripts.pory"
# 343 "data/maps/PalletTown_Frlg/scripts.pory"
# 633 "data/maps/PalletTown_Frlg/scripts.pory"
	set_invisible
# 634 "data/maps/PalletTown_Frlg/scripts.pory"
# 344 "data/maps/PalletTown_Frlg/scripts.pory"
# 635 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 636 "data/maps/PalletTown_Frlg/scripts.pory"

# 637 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 638 "data/maps/PalletTown_Frlg/scripts.pory"
# 348 "data/maps/PalletTown_Frlg/scripts.pory"
# 639 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 640 "data/maps/PalletTown_Frlg/scripts.pory"
# 349 "data/maps/PalletTown_Frlg/scripts.pory"
# 641 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 642 "data/maps/PalletTown_Frlg/scripts.pory"
# 350 "data/maps/PalletTown_Frlg/scripts.pory"
# 643 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_to_lab
# 644 "data/maps/PalletTown_Frlg/scripts.pory"
# 351 "data/maps/PalletTown_Frlg/scripts.pory"
# 645 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 646 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 647 "data/maps/PalletTown_Frlg/scripts.pory"

# 648 "data/maps/PalletTown_Frlg/scripts.pory"

# 649 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 650 "data/maps/PalletTown_Frlg/scripts.pory"
# 355 "data/maps/PalletTown_Frlg/scripts.pory"
# 651 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 652 "data/maps/PalletTown_Frlg/scripts.pory"
# 356 "data/maps/PalletTown_Frlg/scripts.pory"
# 653 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 654 "data/maps/PalletTown_Frlg/scripts.pory"
# 357 "data/maps/PalletTown_Frlg/scripts.pory"
# 655 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 656 "data/maps/PalletTown_Frlg/scripts.pory"
# 358 "data/maps/PalletTown_Frlg/scripts.pory"
# 657 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_to_lab
# 658 "data/maps/PalletTown_Frlg/scripts.pory"
# 359 "data/maps/PalletTown_Frlg/scripts.pory"
# 659 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 660 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 661 "data/maps/PalletTown_Frlg/scripts.pory"

# 662 "data/maps/PalletTown_Frlg/scripts.pory"

# 663 "data/maps/PalletTown_Frlg/scripts.pory"
# 362 "data/maps/PalletTown_Frlg/scripts.pory"
# 664 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_PlayerEnterLab:
# 665 "data/maps/PalletTown_Frlg/scripts.pory"
# 363 "data/maps/PalletTown_Frlg/scripts.pory"
# 666 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 667 "data/maps/PalletTown_Frlg/scripts.pory"
# 364 "data/maps/PalletTown_Frlg/scripts.pory"
# 668 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 669 "data/maps/PalletTown_Frlg/scripts.pory"
# 365 "data/maps/PalletTown_Frlg/scripts.pory"
# 670 "data/maps/PalletTown_Frlg/scripts.pory"
	set_invisible
# 671 "data/maps/PalletTown_Frlg/scripts.pory"
# 366 "data/maps/PalletTown_Frlg/scripts.pory"
# 672 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 673 "data/maps/PalletTown_Frlg/scripts.pory"

# 674 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady::
# 675 "data/maps/PalletTown_Frlg/scripts.pory"
# 370 "data/maps/PalletTown_Frlg/scripts.pory"
# 676 "data/maps/PalletTown_Frlg/scripts.pory"
	lock
# 677 "data/maps/PalletTown_Frlg/scripts.pory"
# 371 "data/maps/PalletTown_Frlg/scripts.pory"
# 678 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 679 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_EventScript_SignLady_2
# 680 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_1:
# 681 "data/maps/PalletTown_Frlg/scripts.pory"
# 374 "data/maps/PalletTown_Frlg/scripts.pory"
# 682 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 683 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_EventScript_SignLady_5
# 684 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_4:
# 685 "data/maps/PalletTown_Frlg/scripts.pory"
# 377 "data/maps/PalletTown_Frlg/scripts.pory"
# 686 "data/maps/PalletTown_Frlg/scripts.pory"
	compare SIGN_LADY_READY, TRUE
# 687 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_EventScript_SignLady_8
# 688 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_7:
# 689 "data/maps/PalletTown_Frlg/scripts.pory"
# 380 "data/maps/PalletTown_Frlg/scripts.pory"
# 690 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLady_11
# 691 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_10:
# 692 "data/maps/PalletTown_Frlg/scripts.pory"
# 383 "data/maps/PalletTown_Frlg/scripts.pory"
# 693 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 694 "data/maps/PalletTown_Frlg/scripts.pory"
# 384 "data/maps/PalletTown_Frlg/scripts.pory"
# 695 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 696 "data/maps/PalletTown_Frlg/scripts.pory"
# 385 "data/maps/PalletTown_Frlg/scripts.pory"
# 697 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 698 "data/maps/PalletTown_Frlg/scripts.pory"
# 386 "data/maps/PalletTown_Frlg/scripts.pory"
# 699 "data/maps/PalletTown_Frlg/scripts.pory"
	playse SE_PIN
# 700 "data/maps/PalletTown_Frlg/scripts.pory"
# 387 "data/maps/PalletTown_Frlg/scripts.pory"
# 701 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_ExclamationMark
# 702 "data/maps/PalletTown_Frlg/scripts.pory"
# 388 "data/maps/PalletTown_Frlg/scripts.pory"
# 703 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 704 "data/maps/PalletTown_Frlg/scripts.pory"
# 389 "data/maps/PalletTown_Frlg/scripts.pory"
# 705 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_Delay48
# 706 "data/maps/PalletTown_Frlg/scripts.pory"
# 390 "data/maps/PalletTown_Frlg/scripts.pory"
# 707 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 708 "data/maps/PalletTown_Frlg/scripts.pory"
# 391 "data/maps/PalletTown_Frlg/scripts.pory"
# 709 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 710 "data/maps/PalletTown_Frlg/scripts.pory"
# 392 "data/maps/PalletTown_Frlg/scripts.pory"
# 711 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 712 "data/maps/PalletTown_Frlg/scripts.pory"
# 393 "data/maps/PalletTown_Frlg/scripts.pory"
# 713 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 714 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_eq PalletTown_EventScript_SignLady_14
# 715 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_13:
# 716 "data/maps/PalletTown_Frlg/scripts.pory"
# 396 "data/maps/PalletTown_Frlg/scripts.pory"
# 717 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 718 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_ne PalletTown_EventScript_SignLady_17
# 719 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_16:
# 720 "data/maps/PalletTown_Frlg/scripts.pory"
# 399 "data/maps/PalletTown_Frlg/scripts.pory"
# 721 "data/maps/PalletTown_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_PALLET_SIGN_LADY
# 722 "data/maps/PalletTown_Frlg/scripts.pory"
# 400 "data/maps/PalletTown_Frlg/scripts.pory"
# 723 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 724 "data/maps/PalletTown_Frlg/scripts.pory"
# 401 "data/maps/PalletTown_Frlg/scripts.pory"
# 725 "data/maps/PalletTown_Frlg/scripts.pory"
	release
# 726 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 727 "data/maps/PalletTown_Frlg/scripts.pory"

# 728 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_2:
# 729 "data/maps/PalletTown_Frlg/scripts.pory"
# 372 "data/maps/PalletTown_Frlg/scripts.pory"
# 730 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLadyDone
# 731 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLady_1
# 732 "data/maps/PalletTown_Frlg/scripts.pory"

# 733 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_5:
# 734 "data/maps/PalletTown_Frlg/scripts.pory"
# 375 "data/maps/PalletTown_Frlg/scripts.pory"
# 735 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLadyJustShowedSign
# 736 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLady_4
# 737 "data/maps/PalletTown_Frlg/scripts.pory"

# 738 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_8:
# 739 "data/maps/PalletTown_Frlg/scripts.pory"
# 378 "data/maps/PalletTown_Frlg/scripts.pory"
# 740 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLadyStartShowSign
# 741 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLady_7
# 742 "data/maps/PalletTown_Frlg/scripts.pory"

# 743 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_11:
# 744 "data/maps/PalletTown_Frlg/scripts.pory"
# 381 "data/maps/PalletTown_Frlg/scripts.pory"
# 745 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLadyGoReadSign
# 746 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLady_10
# 747 "data/maps/PalletTown_Frlg/scripts.pory"

# 748 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_14:
# 749 "data/maps/PalletTown_Frlg/scripts.pory"
# 394 "data/maps/PalletTown_Frlg/scripts.pory"
# 750 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 751 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLady_13
# 752 "data/maps/PalletTown_Frlg/scripts.pory"

# 753 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_17:
# 754 "data/maps/PalletTown_Frlg/scripts.pory"
# 397 "data/maps/PalletTown_Frlg/scripts.pory"
# 755 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 756 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_SignLady_16
# 757 "data/maps/PalletTown_Frlg/scripts.pory"

# 758 "data/maps/PalletTown_Frlg/scripts.pory"

# 759 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 760 "data/maps/PalletTown_Frlg/scripts.pory"
# 406 "data/maps/PalletTown_Frlg/scripts.pory"
# 761 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 762 "data/maps/PalletTown_Frlg/scripts.pory"
# 407 "data/maps/PalletTown_Frlg/scripts.pory"
# 763 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 764 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 765 "data/maps/PalletTown_Frlg/scripts.pory"

# 766 "data/maps/PalletTown_Frlg/scripts.pory"

# 767 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 768 "data/maps/PalletTown_Frlg/scripts.pory"
# 412 "data/maps/PalletTown_Frlg/scripts.pory"
# 769 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 770 "data/maps/PalletTown_Frlg/scripts.pory"
# 413 "data/maps/PalletTown_Frlg/scripts.pory"
# 771 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 772 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 773 "data/maps/PalletTown_Frlg/scripts.pory"

# 774 "data/maps/PalletTown_Frlg/scripts.pory"

# 775 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLadyDone::
# 776 "data/maps/PalletTown_Frlg/scripts.pory"
# 418 "data/maps/PalletTown_Frlg/scripts.pory"
# 777 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 778 "data/maps/PalletTown_Frlg/scripts.pory"
# 419 "data/maps/PalletTown_Frlg/scripts.pory"
# 779 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 780 "data/maps/PalletTown_Frlg/scripts.pory"
# 420 "data/maps/PalletTown_Frlg/scripts.pory"
# 781 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 782 "data/maps/PalletTown_Frlg/scripts.pory"
# 421 "data/maps/PalletTown_Frlg/scripts.pory"
# 783 "data/maps/PalletTown_Frlg/scripts.pory"
	release
# 784 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 785 "data/maps/PalletTown_Frlg/scripts.pory"

# 786 "data/maps/PalletTown_Frlg/scripts.pory"

# 787 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLadyGoReadSign::
# 788 "data/maps/PalletTown_Frlg/scripts.pory"
# 426 "data/maps/PalletTown_Frlg/scripts.pory"
# 789 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 790 "data/maps/PalletTown_Frlg/scripts.pory"
# 427 "data/maps/PalletTown_Frlg/scripts.pory"
# 791 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 792 "data/maps/PalletTown_Frlg/scripts.pory"
# 428 "data/maps/PalletTown_Frlg/scripts.pory"
# 793 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 794 "data/maps/PalletTown_Frlg/scripts.pory"
# 429 "data/maps/PalletTown_Frlg/scripts.pory"
# 795 "data/maps/PalletTown_Frlg/scripts.pory"
	release
# 796 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 797 "data/maps/PalletTown_Frlg/scripts.pory"

# 798 "data/maps/PalletTown_Frlg/scripts.pory"

# 799 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLadyJustShowedSign::
# 800 "data/maps/PalletTown_Frlg/scripts.pory"
# 434 "data/maps/PalletTown_Frlg/scripts.pory"
# 801 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 802 "data/maps/PalletTown_Frlg/scripts.pory"
# 435 "data/maps/PalletTown_Frlg/scripts.pory"
# 803 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 804 "data/maps/PalletTown_Frlg/scripts.pory"
# 436 "data/maps/PalletTown_Frlg/scripts.pory"
# 805 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 806 "data/maps/PalletTown_Frlg/scripts.pory"
# 437 "data/maps/PalletTown_Frlg/scripts.pory"
# 807 "data/maps/PalletTown_Frlg/scripts.pory"
	release
# 808 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 809 "data/maps/PalletTown_Frlg/scripts.pory"

# 810 "data/maps/PalletTown_Frlg/scripts.pory"

# 811 "data/maps/PalletTown_Frlg/scripts.pory"
# 441 "data/maps/PalletTown_Frlg/scripts.pory"
# 812 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight:
# 813 "data/maps/PalletTown_Frlg/scripts.pory"
# 442 "data/maps/PalletTown_Frlg/scripts.pory"
# 814 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 815 "data/maps/PalletTown_Frlg/scripts.pory"
# 443 "data/maps/PalletTown_Frlg/scripts.pory"
# 816 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_left
# 817 "data/maps/PalletTown_Frlg/scripts.pory"
# 444 "data/maps/PalletTown_Frlg/scripts.pory"
# 818 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 819 "data/maps/PalletTown_Frlg/scripts.pory"

# 820 "data/maps/PalletTown_Frlg/scripts.pory"
# 447 "data/maps/PalletTown_Frlg/scripts.pory"
# 821 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft:
# 822 "data/maps/PalletTown_Frlg/scripts.pory"
# 448 "data/maps/PalletTown_Frlg/scripts.pory"
# 823 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 824 "data/maps/PalletTown_Frlg/scripts.pory"
# 449 "data/maps/PalletTown_Frlg/scripts.pory"
# 825 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_right
# 826 "data/maps/PalletTown_Frlg/scripts.pory"
# 450 "data/maps/PalletTown_Frlg/scripts.pory"
# 827 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 828 "data/maps/PalletTown_Frlg/scripts.pory"

# 829 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_FatMan::
# 830 "data/maps/PalletTown_Frlg/scripts.pory"
# 454 "data/maps/PalletTown_Frlg/scripts.pory"
# 831 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 832 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 833 "data/maps/PalletTown_Frlg/scripts.pory"

# 834 "data/maps/PalletTown_Frlg/scripts.pory"

# 835 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 836 "data/maps/PalletTown_Frlg/scripts.pory"
# 459 "data/maps/PalletTown_Frlg/scripts.pory"
# 837 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 838 "data/maps/PalletTown_Frlg/scripts.pory"
# 460 "data/maps/PalletTown_Frlg/scripts.pory"
# 839 "data/maps/PalletTown_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 840 "data/maps/PalletTown_Frlg/scripts.pory"
# 461 "data/maps/PalletTown_Frlg/scripts.pory"
# 841 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 842 "data/maps/PalletTown_Frlg/scripts.pory"
# 462 "data/maps/PalletTown_Frlg/scripts.pory"
# 843 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 844 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 845 "data/maps/PalletTown_Frlg/scripts.pory"

# 846 "data/maps/PalletTown_Frlg/scripts.pory"

# 847 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 848 "data/maps/PalletTown_Frlg/scripts.pory"
# 467 "data/maps/PalletTown_Frlg/scripts.pory"
# 849 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 850 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 851 "data/maps/PalletTown_Frlg/scripts.pory"

# 852 "data/maps/PalletTown_Frlg/scripts.pory"

# 853 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 854 "data/maps/PalletTown_Frlg/scripts.pory"
# 472 "data/maps/PalletTown_Frlg/scripts.pory"
# 855 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 856 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 857 "data/maps/PalletTown_Frlg/scripts.pory"

# 858 "data/maps/PalletTown_Frlg/scripts.pory"

# 859 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_TownSign::
# 860 "data/maps/PalletTown_Frlg/scripts.pory"
# 477 "data/maps/PalletTown_Frlg/scripts.pory"
# 861 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 862 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 863 "data/maps/PalletTown_Frlg/scripts.pory"

# 864 "data/maps/PalletTown_Frlg/scripts.pory"

# 865 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_TrainerTips::
# 866 "data/maps/PalletTown_Frlg/scripts.pory"
# 482 "data/maps/PalletTown_Frlg/scripts.pory"
# 867 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 868 "data/maps/PalletTown_Frlg/scripts.pory"
# 483 "data/maps/PalletTown_Frlg/scripts.pory"
# 869 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 870 "data/maps/PalletTown_Frlg/scripts.pory"
# 484 "data/maps/PalletTown_Frlg/scripts.pory"
# 871 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 872 "data/maps/PalletTown_Frlg/scripts.pory"
# 485 "data/maps/PalletTown_Frlg/scripts.pory"
# 873 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 874 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 875 "data/maps/PalletTown_Frlg/scripts.pory"

# 876 "data/maps/PalletTown_Frlg/scripts.pory"

# 877 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLadyTrigger::
# 878 "data/maps/PalletTown_Frlg/scripts.pory"
# 490 "data/maps/PalletTown_Frlg/scripts.pory"
# 879 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 880 "data/maps/PalletTown_Frlg/scripts.pory"
# 491 "data/maps/PalletTown_Frlg/scripts.pory"
# 881 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 882 "data/maps/PalletTown_Frlg/scripts.pory"
# 492 "data/maps/PalletTown_Frlg/scripts.pory"
# 883 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 884 "data/maps/PalletTown_Frlg/scripts.pory"
# 493 "data/maps/PalletTown_Frlg/scripts.pory"
# 885 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 886 "data/maps/PalletTown_Frlg/scripts.pory"
# 494 "data/maps/PalletTown_Frlg/scripts.pory"
# 887 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 888 "data/maps/PalletTown_Frlg/scripts.pory"
# 495 "data/maps/PalletTown_Frlg/scripts.pory"
# 889 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 890 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 891 "data/maps/PalletTown_Frlg/scripts.pory"

# 892 "data/maps/PalletTown_Frlg/scripts.pory"

# 893 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLadyShowSign::
# 894 "data/maps/PalletTown_Frlg/scripts.pory"
# 500 "data/maps/PalletTown_Frlg/scripts.pory"
# 895 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 896 "data/maps/PalletTown_Frlg/scripts.pory"
# 501 "data/maps/PalletTown_Frlg/scripts.pory"
# 897 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 898 "data/maps/PalletTown_Frlg/scripts.pory"
# 502 "data/maps/PalletTown_Frlg/scripts.pory"
# 899 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 900 "data/maps/PalletTown_Frlg/scripts.pory"
# 503 "data/maps/PalletTown_Frlg/scripts.pory"
# 901 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 20
# 902 "data/maps/PalletTown_Frlg/scripts.pory"
# 504 "data/maps/PalletTown_Frlg/scripts.pory"
# 903 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 904 "data/maps/PalletTown_Frlg/scripts.pory"
# 505 "data/maps/PalletTown_Frlg/scripts.pory"
# 905 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 906 "data/maps/PalletTown_Frlg/scripts.pory"
# 506 "data/maps/PalletTown_Frlg/scripts.pory"
# 907 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 908 "data/maps/PalletTown_Frlg/scripts.pory"
# 507 "data/maps/PalletTown_Frlg/scripts.pory"
# 909 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar SIGN_LADY_READY, FALSE
# 910 "data/maps/PalletTown_Frlg/scripts.pory"
# 508 "data/maps/PalletTown_Frlg/scripts.pory"
# 911 "data/maps/PalletTown_Frlg/scripts.pory"
	special SetWalkingIntoSignVars
# 912 "data/maps/PalletTown_Frlg/scripts.pory"
# 509 "data/maps/PalletTown_Frlg/scripts.pory"
# 913 "data/maps/PalletTown_Frlg/scripts.pory"
	special DisableMsgBoxWalkaway
# 914 "data/maps/PalletTown_Frlg/scripts.pory"
# 510 "data/maps/PalletTown_Frlg/scripts.pory"
# 915 "data/maps/PalletTown_Frlg/scripts.pory"
	signmsg
# 916 "data/maps/PalletTown_Frlg/scripts.pory"
# 511 "data/maps/PalletTown_Frlg/scripts.pory"
# 917 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 918 "data/maps/PalletTown_Frlg/scripts.pory"
# 512 "data/maps/PalletTown_Frlg/scripts.pory"
# 919 "data/maps/PalletTown_Frlg/scripts.pory"
	normalmsg
# 920 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 921 "data/maps/PalletTown_Frlg/scripts.pory"

# 922 "data/maps/PalletTown_Frlg/scripts.pory"

# 923 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLadyStartShowSign::
# 924 "data/maps/PalletTown_Frlg/scripts.pory"
# 517 "data/maps/PalletTown_Frlg/scripts.pory"
# 925 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 926 "data/maps/PalletTown_Frlg/scripts.pory"
# 518 "data/maps/PalletTown_Frlg/scripts.pory"
# 927 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 928 "data/maps/PalletTown_Frlg/scripts.pory"
# 519 "data/maps/PalletTown_Frlg/scripts.pory"
# 929 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 930 "data/maps/PalletTown_Frlg/scripts.pory"
# 520 "data/maps/PalletTown_Frlg/scripts.pory"
# 931 "data/maps/PalletTown_Frlg/scripts.pory"
	release
# 932 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 933 "data/maps/PalletTown_Frlg/scripts.pory"

# 934 "data/maps/PalletTown_Frlg/scripts.pory"

# 935 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakDontGoOut::
# 936 "data/maps/PalletTown_Frlg/scripts.pory"
# 524 "data/maps/PalletTown_Frlg/scripts.pory"
# 937 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK: Hey! Wait!\n"
# 938 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Don't go out!$"
# 939 "data/maps/PalletTown_Frlg/scripts.pory"

# 940 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakGrassUnsafeNeedMon::
# 941 "data/maps/PalletTown_Frlg/scripts.pory"
# 529 "data/maps/PalletTown_Frlg/scripts.pory"
# 942 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK: It's unsafe!\n"
# 943 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Wild POKéMON live in tall grass!\p"
# 944 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You need your own POKéMON for\n"
# 945 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "your protection.\p"
# 946 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "I know!\n"
# 947 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Here, come with me!$"
# 948 "data/maps/PalletTown_Frlg/scripts.pory"

# 949 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_RaisingMonsToo::
# 950 "data/maps/PalletTown_Frlg/scripts.pory"
# 538 "data/maps/PalletTown_Frlg/scripts.pory"
# 951 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "I'm raising POKéMON, too.\p"
# 952 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "When they get strong, they can\n"
# 953 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "protect me.$"
# 954 "data/maps/PalletTown_Frlg/scripts.pory"

# 955 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_CanStoreItemsAndMonsInPC::
# 956 "data/maps/PalletTown_Frlg/scripts.pory"
# 544 "data/maps/PalletTown_Frlg/scripts.pory"
# 957 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Technology is incredible!\p"
# 958 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You can now store and recall items\n"
# 959 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "and POKéMON as data via PC.$"
# 960 "data/maps/PalletTown_Frlg/scripts.pory"

# 961 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakPokemonResearchLab::
# 962 "data/maps/PalletTown_Frlg/scripts.pory"
# 550 "data/maps/PalletTown_Frlg/scripts.pory"
# 963 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK POKéMON RESEARCH LAB$"
# 964 "data/maps/PalletTown_Frlg/scripts.pory"

# 965 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_PlayersHouse::
# 966 "data/maps/PalletTown_Frlg/scripts.pory"
# 554 "data/maps/PalletTown_Frlg/scripts.pory"
# 967 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "{PLAYER}'s house$"
# 968 "data/maps/PalletTown_Frlg/scripts.pory"

# 969 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_RivalsHouse::
# 970 "data/maps/PalletTown_Frlg/scripts.pory"
# 558 "data/maps/PalletTown_Frlg/scripts.pory"
# 971 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "{RIVAL}'s house$"
# 972 "data/maps/PalletTown_Frlg/scripts.pory"

# 973 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_TownSign::
# 974 "data/maps/PalletTown_Frlg/scripts.pory"
# 562 "data/maps/PalletTown_Frlg/scripts.pory"
# 975 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "PALLET TOWN\n"
# 976 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Shades of your journey await!$"
# 977 "data/maps/PalletTown_Frlg/scripts.pory"

# 978 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakLetMeSeePokedex::
# 979 "data/maps/PalletTown_Frlg/scripts.pory"
# 567 "data/maps/PalletTown_Frlg/scripts.pory"
# 980 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
# 981 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You're back, are you?\p"
# 982 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "How much have you filled in your\n"
# 983 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "POKéDEX?\p"
# 984 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "May I see it?\p"
# 985 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Let's see…$"
# 986 "data/maps/PalletTown_Frlg/scripts.pory"

# 987 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_CaughtXPuttingInHonestEffort::
# 988 "data/maps/PalletTown_Frlg/scripts.pory"
# 576 "data/maps/PalletTown_Frlg/scripts.pory"
# 989 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You've caught {STR_VAR_2}…\p"
# 990 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hm, it looks as if you're putting\n"
# 991 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "in an honest effort.\p"
# 992 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "When you manage to fill it some\n"
# 993 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "more, come show me, please.$"
# 994 "data/maps/PalletTown_Frlg/scripts.pory"

# 995 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_CaughtXImpressiveFollowMe::
# 996 "data/maps/PalletTown_Frlg/scripts.pory"
# 584 "data/maps/PalletTown_Frlg/scripts.pory"
# 997 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You've caught… {STR_VAR_2}!?\n"
# 998 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Now, this is impressive!\p"
# 999 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "There's something I wanted to ask\n"
# 1000 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "of you, {PLAYER}.\p"
# 1001 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Come.\n"
# 1002 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Follow me.$"
# 1003 "data/maps/PalletTown_Frlg/scripts.pory"

# 1004 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakYouEnjoyingTraveling::
# 1005 "data/maps/PalletTown_Frlg/scripts.pory"
# 593 "data/maps/PalletTown_Frlg/scripts.pory"
# 1006 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
# 1007 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You seem to be enjoying traveling.\p"
# 1008 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Knowing you, {PLAYER}, I can easily\n"
# 1009 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "imagine you going out to even more\l"
# 1010 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "exotic locales.\p"
# 1011 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Good for you, good for you.\n"
# 1012 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hohoho.$"
# 1013 "data/maps/PalletTown_Frlg/scripts.pory"

# 1014 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_HmmIsThatRight::
# 1015 "data/maps/PalletTown_Frlg/scripts.pory"
# 603 "data/maps/PalletTown_Frlg/scripts.pory"
# 1016 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hmm…\n"
# 1017 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Is that right…$"
# 1018 "data/maps/PalletTown_Frlg/scripts.pory"

# 1019 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OhLookLook::
# 1020 "data/maps/PalletTown_Frlg/scripts.pory"
# 608 "data/maps/PalletTown_Frlg/scripts.pory"
# 1021 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Oh!\n"
# 1022 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Look, look!$"
# 1023 "data/maps/PalletTown_Frlg/scripts.pory"

# 1024 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_ReadItReadIt::
# 1025 "data/maps/PalletTown_Frlg/scripts.pory"
# 613 "data/maps/PalletTown_Frlg/scripts.pory"
# 1026 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Read it, read it!$"
# 1027 "data/maps/PalletTown_Frlg/scripts.pory"

# 1028 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_PressStartToOpenMenu::
# 1029 "data/maps/PalletTown_Frlg/scripts.pory"
# 617 "data/maps/PalletTown_Frlg/scripts.pory"
# 1030 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 1031 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"
# 1032 "data/maps/PalletTown_Frlg/scripts.pory"

# 1033 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_SignsAreUsefulArentThey::
# 1034 "data/maps/PalletTown_Frlg/scripts.pory"
# 622 "data/maps/PalletTown_Frlg/scripts.pory"
# 1035 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Signs are useful, aren't they?$"
# 1036 "data/maps/PalletTown_Frlg/scripts.pory"

# 1037 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_LookCopiedTrainerTipsSign::
# 1038 "data/maps/PalletTown_Frlg/scripts.pory"
# 626 "data/maps/PalletTown_Frlg/scripts.pory"
# 1039 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Look, look!\p"
# 1040 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "I copied what it said on one of\n"
# 1041 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "those TRAINER TIPS signs!$"
# 1042 "data/maps/PalletTown_Frlg/scripts.pory"

# 1043 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_PressStartToOpenMenuCopy::
# 1044 "data/maps/PalletTown_Frlg/scripts.pory"
# 632 "data/maps/PalletTown_Frlg/scripts.pory"
# 1045 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "TRAINER TIPS!\p"
# 1046 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"
