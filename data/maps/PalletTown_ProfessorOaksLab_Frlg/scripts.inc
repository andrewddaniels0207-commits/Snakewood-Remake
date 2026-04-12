# 1 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Frlg_MapScripts::
# 3 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 4 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 5 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 6 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 7 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 4 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 8 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.byte 0
# 10 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 11 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 5 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 13 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 14 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 6 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 15 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 16 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.2byte 0
# 17 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 18 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 19 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 20 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 11 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 21 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 22 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 12 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 23 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 24 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_OnTransition_2
# 25 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition_1:
# 26 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 15 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 27 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 28 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_OnTransition_5
# 29 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition_4:
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 18 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_OnTransition_8
# 33 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition_7:
# 34 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 21 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 35 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_OnTransition_11
# 36 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition_10:
# 37 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 38 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 39 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition_2:
# 40 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 13 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 42 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_OnTransition_1
# 43 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 44 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition_5:
# 45 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 16 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 46 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_OnTransition_4
# 48 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 49 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition_8:
# 50 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 19 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 51 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 52 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_OnTransition_7
# 53 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 54 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition_11:
# 55 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 22 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 56 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 57 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_OnTransition_10
# 58 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 59 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 60 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 61 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 28 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 62 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 63 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 64 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 67 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 33 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 69 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 70 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 71 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 72 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 73 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 38 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 75 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 39 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 76 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 77 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 40 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 78 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_RG_OAK
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 82 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 83 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 45 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 84 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 46 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 86 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 87 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 88 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 89 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 50 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 91 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 51 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp:
# 94 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 52 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 95 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 53 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.2byte 0
# 98 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 99 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 58 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene::
# 106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 63 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 64 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 67 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 69 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 70 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 71 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 72 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 73 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_2
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_1:
# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 84 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_5
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_4:
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 87 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_8
# 149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_7:
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_11
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_10:
# 154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 94 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 95 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_14
# 163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_13:
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 99 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_17
# 167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_16:
# 168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_20
# 179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_19:
# 180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_23
# 183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_22:
# 184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_26
# 187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_25:
# 188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_29
# 191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_28:
# 192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_32
# 211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_31:
# 212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_35
# 215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_34:
# 216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_38
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_37:
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_41
# 223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_40:
# 224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special EnableNationalPokedex
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_44
# 249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_43:
# 250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_47
# 253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_46:
# 254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_50
# 257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_49:
# 258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_53
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_52:
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_2:
# 273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 82 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_1
# 276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_5:
# 278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_4
# 281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_8:
# 283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 88 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_7
# 286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_11:
# 288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 91 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_10
# 291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_14:
# 293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_13
# 296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_17:
# 298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_16
# 301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_20:
# 303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_19
# 306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_23:
# 308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_22
# 311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_26:
# 313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_25
# 316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_29:
# 318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_28
# 321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_32:
# 323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_31
# 326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_35:
# 328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_34
# 331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_38:
# 333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_37
# 336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_41:
# 338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_40
# 341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_44:
# 343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_43
# 346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_47:
# 348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_46
# 351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_50:
# 353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_49
# 356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_53:
# 358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_52
# 361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk:
# 469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth:
# 484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 60
# 534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter:
# 557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter:
# 574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact:
# 595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp:
# 626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1
# 636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2
# 646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 3
# 656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 676 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalBattle_2
# 685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle_1:
# 686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 687 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 688 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalBattle_5
# 689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle_4:
# 690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 692 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalBattle_8
# 693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle_7:
# 694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle_2:
# 697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 698 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle_1
# 700 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 701 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle_5:
# 702 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle_4
# 705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle_8:
# 707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 708 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 709 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle_7
# 710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 711 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 712 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 713 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 714 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 1
# 715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_2
# 716 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_1:
# 717 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 718 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
# 719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_5
# 720 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_4:
# 721 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 722 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 3
# 723 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_8
# 724 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_7:
# 725 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 726 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 727 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_2:
# 728 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 729 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 730 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_1
# 731 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 732 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_5:
# 733 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 734 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 735 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_4
# 736 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 737 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_8:
# 738 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 739 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 740 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_7
# 741 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 742 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 743 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 744 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 745 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 746 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 747 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 748 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 749 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 750 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 751 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 752 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 753 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 754 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 755 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 756 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 757 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 758 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 759 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 760 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 761 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 762 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 763 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 764 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 765 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 766 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 767 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 768 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 769 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 770 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 771 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 772 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 773 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 774 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 775 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 776 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 777 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 778 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 779 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 780 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 781 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 782 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft:
# 783 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 784 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 785 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 786 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 787 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 788 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 789 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 790 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 791 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 792 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 793 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 794 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 795 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 796 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 798 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 799 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid:
# 800 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 801 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 803 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 804 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 805 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 806 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 807 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 808 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 809 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 810 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 811 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 812 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 813 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 814 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight:
# 815 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 816 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 817 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 818 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 819 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 820 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 821 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 822 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 823 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 824 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 825 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 826 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 827 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 828 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 1
# 829 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_2
# 830 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_1:
# 831 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 832 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
# 833 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_5
# 834 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_4:
# 835 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 836 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 3
# 837 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_8
# 838 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_7:
# 839 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 840 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 841 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_2:
# 842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 843 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 844 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_1
# 845 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 846 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_5:
# 847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 848 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 849 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_4
# 850 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 851 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_8:
# 852 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 853 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 854 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_7
# 855 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 856 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 857 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 858 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 859 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 860 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 861 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 862 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 863 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 864 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 865 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 866 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 867 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 868 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 869 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 870 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 871 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 872 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 873 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 874 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 875 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 876 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 877 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 878 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 879 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 880 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 881 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 882 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 883 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 884 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 885 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 886 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 887 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 888 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 889 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 890 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 891 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 892 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 893 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 894 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 895 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 896 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft:
# 897 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 898 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 899 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 900 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 901 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 902 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 903 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 904 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 905 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 906 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 907 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 908 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 909 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 910 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 911 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 912 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 913 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 914 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 915 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid:
# 916 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 917 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 918 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 919 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 920 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 921 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 922 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 923 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 924 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 926 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 927 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 928 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 929 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 930 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 931 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 932 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight:
# 933 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 934 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 935 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 936 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 937 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 938 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 939 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 940 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 941 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 942 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 943 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 944 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 945 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 946 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 947 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 948 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 1
# 949 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_2
# 950 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_1:
# 951 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 952 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
# 953 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_5
# 954 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_4:
# 955 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 956 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 3
# 957 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_8
# 958 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_7:
# 959 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 960 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 961 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_2:
# 962 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 963 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 964 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_1
# 965 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 966 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_5:
# 967 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 968 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 969 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_4
# 970 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 971 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_8:
# 972 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 973 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 974 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_7
# 975 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 976 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 977 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 978 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 979 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 980 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 981 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 982 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 983 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 984 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 985 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 986 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 987 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 988 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 989 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 990 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 991 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 992 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 993 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 994 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 995 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 996 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 997 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 998 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 999 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 1000 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1001 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1002 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1003 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 1004 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1005 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1006 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1007 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 1008 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1009 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 1010 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1011 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 1012 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1013 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1014 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1015 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1016 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft:
# 1017 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1018 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1019 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1020 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1021 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1022 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1023 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1024 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1025 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1026 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1027 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1028 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1029 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1030 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1031 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid:
# 1032 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1033 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1034 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1035 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1036 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1037 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1038 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1039 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1040 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1041 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1042 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1043 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1044 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight:
# 1045 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1046 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1047 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1048 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1049 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1050 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1051 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1052 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1053 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1054 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 1055 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1056 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special HealPlayerParty
# 1057 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1058 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 1059 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1060 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1061 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1062 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 1063 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1064 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 1
# 1065 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_2
# 1066 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_1:
# 1067 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1068 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
# 1069 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_5
# 1070 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_4:
# 1071 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1072 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_TEMP_2, 3
# 1073 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_8
# 1074 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_7:
# 1075 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1076 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 1077 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1078 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_EXIT
# 1079 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1080 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 1081 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1082 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 1083 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1084 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 1085 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1086 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 1087 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1088 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1089 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_2:
# 1090 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1091 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 1092 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_1
# 1093 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1094 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_5:
# 1095 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1096 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 1097 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_4
# 1098 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1099 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_8:
# 1100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 1102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_7
# 1103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 1106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 1108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 1110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 1112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 1116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 1118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 1120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 1122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 1126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 1128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 1130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 1132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft:
# 1137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight:
# 1156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid:
# 1175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle:
# 1196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 1202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight:
# 1211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 1217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 1225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 676 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_Rival_2
# 1232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival_1:
# 1233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 1235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_Rival_5
# 1236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival_4:
# 1237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 1239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival_2:
# 1244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 1246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_Rival_1
# 1247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival_5:
# 1249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 1251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_Rival_4
# 1252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 1255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 1257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 1263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 1265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 1271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 701 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 1273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 702 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 1275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_ProfOak_2
# 1277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_1:
# 1278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 1280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_5
# 1281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_4:
# 1282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 709 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 1284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_8
# 1285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_7:
# 1286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 712 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_ProfOak_11
# 1288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_10:
# 1289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 1291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_14
# 1292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_13:
# 1293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 718 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 1295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_17
# 1296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_16:
# 1297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 721 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
# 1299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_ProfOak_20
# 1300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_19:
# 1301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 724 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 1303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_23
# 1304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_22:
# 1305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 727 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_26
# 1308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_25:
# 1309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 730 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 1311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 731 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_2:
# 1316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 1318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1
# 1319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_5:
# 1321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 1323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_4
# 1324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_8:
# 1326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 1328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_7
# 1329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_11:
# 1331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 713 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 1333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_10
# 1334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_14:
# 1336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 716 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 1338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_13
# 1339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_17:
# 1341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 1343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_16
# 1344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_20:
# 1346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 722 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 1348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_19
# 1349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_23:
# 1351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 725 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 1353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_22
# 1354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak_26:
# 1356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 728 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 1358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_25
# 1359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 1362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 736 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 1364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 737 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 1370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 742 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 1372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 743 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 1378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 748 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 1380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 749 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 1386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 754 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 1388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 755 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 756 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 1392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 757 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 1394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 758 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 759 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 1398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 760 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 761 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 1402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 762 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 1404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 763 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 1406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 764 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 1408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 765 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 766 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 1412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_2
# 1413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_1:
# 1414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 769 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 1416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_5
# 1417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_4:
# 1418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 772 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 1420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_8
# 1421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_7:
# 1422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 775 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 1424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_11
# 1425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_10:
# 1426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 778 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 1428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 779 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 1430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 780 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 781 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 1434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 782 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_PIN
# 1436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 783 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 1438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 784 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 785 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 1442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 786 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 787 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 1446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_14
# 1447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_13:
# 1448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 790 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 1450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_17
# 1451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_16:
# 1452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 793 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 1454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_20
# 1455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_19:
# 1456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 796 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 1458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_23
# 1459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_22:
# 1460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 799 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 1462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 800 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 801 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 1466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_26
# 1467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_25:
# 1468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 804 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 1470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_29
# 1471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_28:
# 1472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 807 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 1474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_32
# 1475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_31:
# 1476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 810 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 1478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_35
# 1479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_34:
# 1480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 813 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 1482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 814 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 815 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 1486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 816 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 1488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 817 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 818 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 1492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 819 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 820 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 1496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 821 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 1498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 822 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 1500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 823 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 25
# 1502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 824 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 1504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_38
# 1505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_37:
# 1506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 827 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 1508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_41
# 1509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_40:
# 1510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 830 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 1512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_44
# 1513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_43:
# 1514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 833 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 1516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_47
# 1517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_46:
# 1518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 836 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 1520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 837 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 838 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 839 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 1526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 840 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 841 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 1530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 843 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 1534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 844 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special SetUnlockedPokedexFlags
# 1536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 845 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 1538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 846 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 1540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 1542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 848 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 1544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 849 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 1546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 850 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 1548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 851 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 1550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 852 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 1552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_50
# 1553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_49:
# 1554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 855 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 1556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_53
# 1557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_52:
# 1558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 858 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 1560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_56
# 1561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_55:
# 1562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 861 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 1564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_59
# 1565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_58:
# 1566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 864 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 1568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 865 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 866 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 1572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 867 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 1574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_62
# 1575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_61:
# 1576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 870 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 1578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_65
# 1579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_64:
# 1580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 873 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 1582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_68
# 1583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_67:
# 1584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 876 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 1586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_71
# 1587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_70:
# 1588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 879 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 1590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 880 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 1592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 881 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 1594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 882 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 1596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 883 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 1598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 884 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 1600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 885 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 1602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 886 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_2:
# 1607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 767 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 1609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_1
# 1610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_5:
# 1612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 770 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 1614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_4
# 1615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_8:
# 1617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 773 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 1619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_7
# 1620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_11:
# 1622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 776 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 1624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_10
# 1625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_14:
# 1627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 788 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 1629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_13
# 1630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_17:
# 1632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 791 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 1634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_16
# 1635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_20:
# 1637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 794 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 1639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_19
# 1640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_23:
# 1642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 1644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_22
# 1645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_26:
# 1647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 1649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_25
# 1650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_29:
# 1652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 805 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 1654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_28
# 1655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_32:
# 1657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 808 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 1659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_31
# 1660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_35:
# 1662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 811 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 1664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_34
# 1665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_38:
# 1667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 825 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 1669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_37
# 1670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_41:
# 1672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 828 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 1674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_40
# 1675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1676 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_44:
# 1677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 831 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 1679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_43
# 1680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_47:
# 1682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 834 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 1684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_46
# 1685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_50:
# 1687 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 853 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1688 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 1689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_49
# 1690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_53:
# 1692 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 856 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 1694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_52
# 1695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_56:
# 1697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 859 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1698 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 1699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_55
# 1700 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1701 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_59:
# 1702 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 862 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 1704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_58
# 1705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_62:
# 1707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 868 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1708 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 1709 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_61
# 1710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1711 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_65:
# 1712 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 871 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1713 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 1714 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_64
# 1715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1716 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_68:
# 1717 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 874 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1718 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 1719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_67
# 1720 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1721 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_71:
# 1722 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 877 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1723 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 1724 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_70
# 1725 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1726 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1727 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 1728 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 891 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1729 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 1730 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 892 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1731 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1732 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1733 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1734 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1735 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 1736 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 897 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1737 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 1738 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 898 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1739 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1740 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1741 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1742 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1743 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 1744 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 903 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1745 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 1746 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 904 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1747 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 1748 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 905 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1749 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1750 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1751 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1752 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1753 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 1754 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 910 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1755 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 1756 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 911 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1757 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1758 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1759 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1760 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1761 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 915 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1762 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast:
# 1763 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 916 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1764 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1765 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 917 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1766 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1767 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 918 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1768 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 1769 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 919 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1770 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1771 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1772 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 922 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1773 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver:
# 1774 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 923 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1775 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1776 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 924 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1777 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1778 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1779 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1780 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1781 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 928 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1782 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth:
# 1783 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 929 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1784 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 1785 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 930 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1786 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 1787 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 931 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1788 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1789 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1790 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 1791 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 935 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1792 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 1793 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 936 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1794 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1795 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1796 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1798 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 1799 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 941 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1800 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 1801 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 942 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 1803 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 943 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1804 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 1805 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 944 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1806 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 1807 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1808 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1809 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1810 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 1811 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 949 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1812 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 1813 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 950 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1814 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 1815 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 951 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1816 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 1817 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1818 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1819 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1820 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 1821 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 956 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1822 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 1823 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 957 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1824 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1825 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1826 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1827 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1828 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 961 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1829 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast:
# 1830 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 962 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1831 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1832 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 963 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1833 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1834 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 964 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1835 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 1836 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 965 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1837 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1838 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1839 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 968 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1840 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk:
# 1841 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 969 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1843 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 970 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1844 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 1845 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 971 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1846 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 1847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 972 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1848 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1849 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1850 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 975 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1851 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk:
# 1852 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 976 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1853 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1854 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 977 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1855 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1856 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 978 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1857 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1858 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 979 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1859 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 1860 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 980 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1861 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1862 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1863 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 983 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1864 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth:
# 1865 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 984 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1866 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1867 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 985 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1868 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 1869 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 986 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1870 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 1871 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 987 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1872 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 1873 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 988 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1874 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 1875 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 989 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1876 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 1877 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1878 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 1879 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 993 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1880 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 1881 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 994 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1882 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 1883 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 995 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1884 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 1885 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 996 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1886 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 1887 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 997 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1888 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 1889 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 998 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1890 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 1891 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 999 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1892 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_0x8009, 1
# 1893 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls_2
# 1894 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls_1:
# 1895 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1002 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1896 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 1897 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1898 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1899 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls_2:
# 1900 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1000 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1901 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls
# 1902 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls_1
# 1903 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1904 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1905 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 1906 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1007 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1907 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 1908 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1008 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1909 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_2
# 1910 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex_1:
# 1911 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1011 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1912 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1913 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1914 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1915 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex_2:
# 1916 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1009 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1917 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 1918 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex_1
# 1919 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1920 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1921 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 1922 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1016 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1923 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1924 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1017 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 1926 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1018 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1927 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 1928 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1019 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1929 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 1930 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1020 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1931 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 1932 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_DexCompleted_2
# 1933 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted_1:
# 1934 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1023 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1935 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 1936 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_DexCompleted_5
# 1937 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted_4:
# 1938 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1026 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1939 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 1940 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_DexCompleted_8
# 1941 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted_7:
# 1942 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1029 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1943 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 1944 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_DexCompleted_11
# 1945 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted_10:
# 1946 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1032 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1947 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1948 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1033 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1949 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1950 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1034 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1951 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 1952 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1035 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1953 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 70
# 1954 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1036 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1955 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 1956 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1037 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1957 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 1958 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1038 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1959 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 1960 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 1961 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1962 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted_2:
# 1963 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1021 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1964 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 1965 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DexCompleted_1
# 1966 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1967 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted_5:
# 1968 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1024 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1969 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 1970 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DexCompleted_4
# 1971 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1972 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted_8:
# 1973 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1027 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1974 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 1975 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DexCompleted_7
# 1976 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1977 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted_11:
# 1978 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1030 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1979 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 1980 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DexCompleted_10
# 1981 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1982 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1983 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 1984 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1043 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1985 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 1986 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1044 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1987 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1988 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1989 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1990 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1991 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 1992 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1049 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1993 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 1994 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1050 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1995 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 1996 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 1997 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1998 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 1999 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 2000 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1055 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2001 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 2002 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1056 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2003 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2004 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2005 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2006 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2007 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 2008 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1061 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2009 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 2010 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1062 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2011 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2012 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2013 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2014 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2015 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 2016 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1067 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2017 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 2018 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1068 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2019 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_down
# 2020 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1069 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2021 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 2022 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1070 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2023 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 2024 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1071 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2025 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_down
# 2026 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1072 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2027 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 2028 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1073 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2029 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2030 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2031 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2032 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2033 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 2034 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1077 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2035 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 2036 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1078 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2037 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_up
# 2038 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1079 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2039 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 2040 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1080 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2041 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 2042 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1081 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2043 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_up
# 2044 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1082 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2045 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_up
# 2046 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1083 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2047 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2048 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2049 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2050 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2051 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 2052 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1087 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2053 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 2054 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1088 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2055 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_left
# 2056 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1089 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2057 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 2058 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1090 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2059 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 2060 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1091 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2061 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_left
# 2062 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1092 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2063 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_left
# 2064 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1093 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2065 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2066 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2067 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2068 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2069 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 2070 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1097 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2071 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 2072 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1098 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2073 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_right
# 2074 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1099 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2075 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 2076 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2077 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 2078 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2079 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_fast_right
# 2080 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2081 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_right
# 2082 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2083 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2084 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2085 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2086 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2087 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2088 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 2089 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2090 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 2091 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2092 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 2093 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2094 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2095 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2096 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 2097 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2098 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2099 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 2101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 2105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 2109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 2117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 2121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 2125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_right
# 2129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 2133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 2137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 2142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_down
# 2150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 2154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 2156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 2158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 2162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 2164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 2166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_0x8009, 60
# 2168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_lt PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_2
# 2169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_1:
# 2170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_5
# 2172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_4:
# 2173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 2175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 2177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 2179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_2:
# 2182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 2184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_1
# 2185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_5:
# 2187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 2189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_4
# 2190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 2193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 2199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_2
# 2201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_1:
# 2202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_5
# 2204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_4:
# 2205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	checkitem ITEM_POKE_BALL
# 2207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 2209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_8
# 2210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_7:
# 2211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 2213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_2:
# 2216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 2218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_1
# 2219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_5:
# 2221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 2223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_4
# 2224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_8:
# 2226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 2228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_7
# 2229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 2232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE22, 2
# 2234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls_2
# 2235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls_1:
# 2236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 2238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls_2:
# 2241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 2243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls_1
# 2244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 2247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 2249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 2251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 2253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 2259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 2261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 2267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 2269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 2275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 2277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 2279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 2281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 2283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 2289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 2291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 2293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 2295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 2297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 2299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 2305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 2307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 2309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 2311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 2313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 2319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 2321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 2325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 2327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 2333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 2335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 2339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 2341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 2343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 2349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 2351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
# 2355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 2357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 2359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 2365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 2367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 2369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 2375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 2377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 2379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 2385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 2387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 2389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 2395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 2397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 2399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 2405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 2407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 2413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 2415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest:
# 2422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 2424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 2426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth:
# 2431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_down
# 2433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 2435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 2437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 2439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 2441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 2443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 2445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_left
# 2447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter:
# 2452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit:
# 2469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2475 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2476 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2477 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 2485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 2487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 2489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 2491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 2493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 2495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 2497 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 2499 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_2
# 2500 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1:
# 2501 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 2503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_5
# 2504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_4:
# 2505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 2507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_2:
# 2512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 2514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1
# 2515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_5:
# 2517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 2519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_4
# 2520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 2523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 2525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2527 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2528 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 2529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 2531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare PLAYER_STARTER_NUM, 0
# 2533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_2
# 2534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1:
# 2535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare PLAYER_STARTER_NUM, 1
# 2537 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_5
# 2538 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_4:
# 2539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare PLAYER_STARTER_NUM, 2
# 2541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_8
# 2542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_7:
# 2543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_2:
# 2546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2547 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 2548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1
# 2549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2550 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_5:
# 2551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 2553 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_4
# 2554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_8:
# 2556 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 2558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_7
# 2559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 2562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 2564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2565 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 2566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur_2
# 2567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur_1:
# 2568 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 2570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur_5
# 2571 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur_4:
# 2572 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2573 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur_2:
# 2575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 2577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur_1
# 2578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur_5:
# 2580 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 2582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur_4
# 2583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 2586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 2588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 2590 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle_2
# 2591 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle_1:
# 2592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 2594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle_5
# 2595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle_4:
# 2596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle_2:
# 2599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 2601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle_1
# 2602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2603 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle_5:
# 2604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 2606 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle_4
# 2607 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 2610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 2612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 2614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander_2
# 2615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander_1:
# 2616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 2618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander_5
# 2619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander_4:
# 2620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander_2:
# 2623 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 2625 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander_1
# 2626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2627 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander_5:
# 2628 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 2630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander_4
# 2631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 2634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 2636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 2642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 2644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 2646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 2648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 2650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 2652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 2654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 2656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 2658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 2660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 2662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 2664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 2666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2667 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 2668 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2669 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 2670 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 2672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_2
# 2673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_1:
# 2674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2675 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 2676 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_5
# 2677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_4:
# 2678 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2679 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2680 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_2:
# 2681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto EventScript_GiveNicknameToStarter
# 2683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_1
# 2684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_5:
# 2686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2687 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 2688 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_4
# 2689 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2690 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
EventScript_GiveNicknameToStarter::
# 2692 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 2694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 2696 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 2698 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2699 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2700 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2701 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 2702 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 2704 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare PLAYER_STARTER_NUM, 0
# 2706 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_2
# 2707 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_1:
# 2708 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2709 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare PLAYER_STARTER_NUM, 1
# 2710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_5
# 2711 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_4:
# 2712 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2713 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare PLAYER_STARTER_NUM, 2
# 2714 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_8
# 2715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_7:
# 2716 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2717 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2718 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_2:
# 2719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2720 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 2721 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_1
# 2722 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2723 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_5:
# 2724 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2725 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 2726 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_4
# 2727 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2728 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_8:
# 2729 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2730 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 2731 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter_7
# 2732 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2733 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2734 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 2735 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2736 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 2737 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2738 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2739 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2740 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 2741 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2742 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2743 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2744 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 2745 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2746 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 2747 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2748 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2749 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2750 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 2751 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2752 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2753 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2754 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 2755 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2756 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 2757 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2758 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 2759 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2760 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 2761 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2762 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2763 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2764 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 2765 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2766 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 2767 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2768 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 2769 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2770 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 2771 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2772 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 2773 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1489 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2774 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 2775 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2776 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 2777 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2778 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 2779 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2780 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 2781 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2782 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 2783 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2784 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 2785 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2786 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter_2
# 2787 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter_1:
# 2788 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1498 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2789 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2790 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2791 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2792 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter_2:
# 2793 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2794 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 2795 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter_1
# 2796 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2798 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 2799 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1503 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2800 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 2801 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	return
# 2802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2803 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2804 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2805 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander:
# 2806 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2807 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2808 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2809 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2810 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2811 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2812 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2813 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2814 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2815 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2816 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2817 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2818 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2819 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2820 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2821 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 2822 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2823 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2824 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2825 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2826 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle:
# 2827 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2828 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2829 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2830 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2831 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2832 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2833 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2834 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2835 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2836 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2837 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2838 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 2839 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2840 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2841 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1529 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2843 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur:
# 2844 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2845 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 2846 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1531 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2848 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2849 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2850 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2851 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 2852 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2853 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_in_place_faster_up
# 2854 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2855 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_end
# 2856 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2857 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 2858 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1539 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2859 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 2860 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2861 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 2862 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2863 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 2864 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2865 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 2866 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2867 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 2868 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2869 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 2870 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2871 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 2872 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_2
# 2873 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1:
# 2874 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1548 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2875 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 2876 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_5
# 2877 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_4:
# 2878 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2879 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 2880 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2881 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2882 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2883 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2884 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_2:
# 2885 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1546 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2886 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 2887 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1
# 2888 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2889 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_5:
# 2890 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1549 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2891 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 2892 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_4
# 2893 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2894 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2895 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 2896 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1557 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2897 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 2898 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2899 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 2900 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2901 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 2902 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2903 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 2904 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2905 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 2906 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1562 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2907 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 2908 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1563 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2909 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 2910 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_2
# 2911 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1:
# 2912 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1566 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2913 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 2914 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_5
# 2915 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_4:
# 2916 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2917 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 2918 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1570 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2919 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2920 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2921 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2922 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_2:
# 2923 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2924 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 2925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1
# 2926 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2927 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_5:
# 2928 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1567 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2929 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 2930 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_4
# 2931 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2932 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2933 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 2934 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2935 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 2936 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2937 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2938 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2939 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2940 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2941 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 2942 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1581 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2943 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 2944 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1582 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2945 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 2946 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1583 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2947 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1_2
# 2948 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1_1:
# 2949 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2950 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 2951 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2952 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2953 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2954 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2955 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1_2:
# 2956 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2957 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 2958 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_Aide1_1
# 2959 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2960 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2961 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 2962 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1592 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2963 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 2964 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1593 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2965 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 2966 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2967 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2968 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2969 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2970 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2971 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 2972 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2973 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 2974 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1600 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2975 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 2976 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1601 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2977 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2_2
# 2978 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2_1:
# 2979 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2980 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 2981 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2982 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2983 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2984 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2985 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2_2:
# 2986 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1602 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2987 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 2988 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_Aide2_1
# 2989 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2990 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2991 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 2992 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2993 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 2994 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2995 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 2996 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2997 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 2998 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 2999 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3000 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3001 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 3002 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1617 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3003 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock
# 3004 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3005 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 3006 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3007 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 3008 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1620 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3009 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 3010 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1621 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3011 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	release
# 3012 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 3013 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3014 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3015 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 3016 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1626 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3017 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 3018 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 3019 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3020 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3021 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 3022 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3023 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 3024 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 3025 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3026 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3027 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 3028 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3029 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 3030 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 3031 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3032 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3033 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 3034 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3035 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 3036 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3037 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 3038 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_RightSign_2
# 3039 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign_1:
# 3040 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3041 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 3042 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1646 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3043 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 3044 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 3045 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3046 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign_2:
# 3047 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3048 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 3049 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RightSign_1
# 3050 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3051 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3052 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 3053 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3054 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 3055 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1652 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3056 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
# 3057 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	end
# 3058 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3059 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3060 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround::
# 3061 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3062 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: What, it's only {PLAYER}?\n"
# 3063 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Gramps isn't around.$"
# 3064 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3065 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting::
# 3066 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3067 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
# 3068 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'm fed up with waiting!$"
# 3069 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3070 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe::
# 3071 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1666 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3072 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
# 3073 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What about me?$"
# 3074 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3075 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer::
# 3076 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3077 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Heh, I don't need to be\n"
# 3078 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "greedy like you. I'm mature!\p"
# 3079 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go ahead and choose, {PLAYER}!$"
# 3080 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3081 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen::
# 3082 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3083 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I'll take this one, then!$"
# 3084 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3085 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak::
# 3086 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1681 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3087 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} received the {STR_VAR_1}\n"
# 3088 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK!$"
# 3089 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3090 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher::
# 3091 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1686 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3092 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: My POKéMON looks a lot\n"
# 3093 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "tougher than yours.$"
# 3094 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3095 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons::
# 3096 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1691 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3097 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Wait, {PLAYER}!\n"
# 3098 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Let's check out our POKéMON!\p"
# 3099 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Come on, I'll take you on!$"
# 3100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalDefeat::
# 3102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1697 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "WHAT?\n"
# 3104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Unbelievable!\l"
# 3105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I picked the wrong POKéMON!$"
# 3106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
Text_RivalVictory::
# 3108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1703 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Yeah!\n"
# 3110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Am I great or what?$"
# 3111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon::
# 3113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1708 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Okay! I'll make my\n"
# 3115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON battle to toughen it up!\p"
# 3116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}! Gramps!\n"
# 3117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Smell you later!$"
# 3118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalGramps::
# 3120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!$"
# 3122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor::
# 3124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I almost forgot!\n"
# 3126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What did you call me for?$"
# 3127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps::
# 3129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1724 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: All right, Gramps!\n"
# 3131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Leave it all to me!$"
# 3132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap::
# 3134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1729 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I hate to say it, but you\n"
# 3136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "won't be necessary for this.\p"
# 3137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I know! I'll borrow a TOWN MAP\n"
# 3138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from my sis!\p"
# 3139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll tell her not to lend you one,\n"
# 3140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}! Hahaha!\p"
# 3141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't bother coming around to\n"
# 3142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "my place after this!$"
# 3143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne::
# 3145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1740 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {RIVAL}?\n"
# 3147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Let me think…\p"
# 3148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Oh, that's right, I told you to\n"
# 3149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "come! Just wait!\p"
# 3150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Here, {PLAYER}.\p"
# 3151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "There are three POKéMON here.\p"
# 3152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Haha!\p"
# 3153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The POKéMON are held inside\n"
# 3154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "these POKé BALLS.\p"
# 3155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "When I was young, I was a serious\n"
# 3156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON TRAINER.\p"
# 3157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "But now, in my old age, I have\n"
# 3158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "only these three left.\p"
# 3159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You can have one.\n"
# 3160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go on, choose!$"
# 3161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3162 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakBePatientRival::
# 3163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1758 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
# 3165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You can have one, too!$"
# 3166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose::
# 3168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1763 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Now, {PLAYER}.\p"
# 3170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Inside those three POKé BALLS are\n"
# 3171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 3172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Which one will you choose for\n"
# 3173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "yourself?$"
# 3174 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3175 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet::
# 3176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1771 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Hey!\n"
# 3178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't go away yet!$"
# 3179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander::
# 3181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1776 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah! CHARMANDER is your choice.\n"
# 3183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You should raise it patiently.\p"
# 3184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, you're claiming the\n"
# 3185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "FIRE POKéMON CHARMANDER?$"
# 3186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle::
# 3188 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1783 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hm! SQUIRTLE is your choice.\n"
# 3190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's one worth raising.\p"
# 3191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, you've decided on the\n"
# 3192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "WATER POKéMON SQUIRTLE?$"
# 3193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3194 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur::
# 3195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1790 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I see! BULBASAUR is your choice.\n"
# 3197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's very easy to raise.\p"
# 3198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, you want to go with\n"
# 3199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the GRASS POKéMON BULBASAUR?$"
# 3200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic::
# 3202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This POKéMON is really quite\n"
# 3204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "energetic!$"
# 3205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak::
# 3207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 3209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK!$"
# 3210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon::
# 3212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1807 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: If a wild POKéMON appears,\n"
# 3214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "your POKéMON can battle it.\p"
# 3215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "With it at your side, you should be\n"
# 3216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "able to reach the next town.$"
# 3217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow::
# 3219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1814 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER}, raise your young\n"
# 3221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON by making it battle.\p"
# 3222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It has to battle for it to grow.$"
# 3223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe::
# 3225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1820 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, {PLAYER}!\n"
# 3227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "How is my old POKéMON?\p"
# 3228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Well, it seems to be growing more\n"
# 3229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "attached to you.\p"
# 3230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You must be talented as a POKéMON\n"
# 3231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "TRAINER.\p"
# 3232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "What's that?\n"
# 3233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You have something for me?$"
# 3234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel::
# 3236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1831 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} delivered OAK'S PARCEL.$"
# 3238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered::
# 3240 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1835 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3241 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah! \n"
# 3242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's the custom POKé BALL!\p"
# 3243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I had it on order.\n"
# 3244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Thank you!$"
# 3245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo::
# 3247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, right!\n"
# 3249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I have a request for you two.$"
# 3250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3251 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk::
# 3252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "On the desk there is my invention,\n"
# 3254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the POKéDEX!\p"
# 3255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It automatically records data on\n"
# 3256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON you've seen or caught.\p"
# 3257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's a high-tech encyclopedia!$"
# 3258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou::
# 3260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1855 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER} and {RIVAL}.\n"
# 3262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Take these with you.$"
# 3263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak::
# 3265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1860 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the POKéDEX\n"
# 3267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "from PROF. OAK.$"
# 3268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3269 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese::
# 3270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1865 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: You can't get detailed data\n"
# 3272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "on POKéMON by just seeing them.\p"
# 3273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You must catch them to obtain\n"
# 3274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "complete data.\p"
# 3275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, here are some tools for\n"
# 3276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "catching wild POKéMON.$"
# 3277 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3278 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls::
# 3279 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1874 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3280 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received five POKé BALLS.$"
# 3281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakExplainCatching::
# 3283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1878 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "When a wild POKéMON appears,\n"
# 3285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "it's fair game.\p"
# 3286 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Just throw a POKé BALL at it and\n"
# 3287 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "try to catch it!\p"
# 3288 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This won't always work, however.\p"
# 3289 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A healthy POKéMON can escape.\n"
# 3290 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You have to be lucky!$"
# 3291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream::
# 3293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1888 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3294 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "To make a complete guide on all\n"
# 3295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "the POKéMON in the world…\p"
# 3296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That was my dream!\p"
# 3297 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "But, I'm too old.\n"
# 3298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I can't get the job done.\p"
# 3299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, I want you two to fulfill my\n"
# 3300 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "dream for me.\p"
# 3301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Get moving, you two.\p"
# 3302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This is a great undertaking in\n"
# 3303 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON history!$"
# 3304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait::
# 3306 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1901 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON around the world wait for\n"
# 3308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "you, {PLAYER}!$"
# 3309 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex::
# 3311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1906 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3312 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
# 3313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "How is your POKéDEX shaping up?\p"
# 3314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} has already caught some\n"
# 3315 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON and added to the data.\p"
# 3316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "So, {PLAYER}, let's have a look at\n"
# 3317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "your POKéDEX.\p"
# 3318 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…What's the matter?\n"
# 3319 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You've added no new data at all.\p"
# 3320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll give you these, so do try a\n"
# 3321 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "little harder.$"
# 3322 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3323 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime::
# 3324 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1919 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3325 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Come see me sometime.\p"
# 3326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "After all, I want to know how your\n"
# 3327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéDEX is coming along.$"
# 3328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia::
# 3330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's like an encyclopedia, but the\n"
# 3332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "pages are blank.$"
# 3333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls::
# 3335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1930 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Those are POKé BALLS.\n"
# 3337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "They contain POKéMON!$"
# 3338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OaksLastMon::
# 3340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1935 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3341 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"
# 3342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
# 3344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1939 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"
# 3346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
# 3348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1943 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The SAVE option is on the MENU.\n"
# 3350 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Use it regularly.$"
# 3351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints::
# 3353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1948 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "All POKéMON types have strong and\n"
# 3355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "weak points against others.$"
# 3356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_EmailMessage::
# 3358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1953 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "There's an e-mail message here.\p"
# 3360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…\p"
# 3361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Finally!\n"
# 3362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The ultimate TRAINERS of the\l"
# 3363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON LEAGUE are ready to\l"
# 3364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "take on all comers!\p"
# 3365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Bring your best POKéMON and see\n"
# 3366 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "how you rate as a TRAINER!\p"
# 3367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON LEAGUE HQ\n"
# 3368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "INDIGO PLATEAU\p"
# 3369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK, please visit us!\n"
# 3370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…$"
# 3371 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide::
# 3373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1968 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3374 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I study POKéMON as PROF. OAK's\n"
# 3375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "AIDE.$"
# 3376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons::
# 3378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1973 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hi, {PLAYER}. I bet you've become\n"
# 3380 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "good friends with your POKéMON.\p"
# 3381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "By the way, did you know about\n"
# 3382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "DAISY?\p"
# 3383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "If you show DAISY your POKéMON,\n"
# 3384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "she can tell how much it likes you.\p"
# 3385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Occasionally, she will even groom\n"
# 3386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "a POKéMON for you.\p"
# 3387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This is a secret, so please don't\n"
# 3388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "tell anyone.$"
# 3389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow::
# 3391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1986 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK is going to have his own\n"
# 3393 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "radio show soon.\p"
# 3394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The program will be called PROF.\n"
# 3395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK's POKéMON SEMINAR.$"
# 3396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
# 3398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 1993 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK may not look like much,\n"
# 3400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "but he's the authority on POKéMON.\p"
# 3401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Many POKéMON TRAINERS hold him in\n"
# 3402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "high regard.$"
# 3403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer::
# 3405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2000 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, now this is excellent!\p"
# 3407 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I have another important\n"
# 3408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "favor to ask of you.\p"
# 3409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I need you to listen closely.$"
# 3410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3411 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons::
# 3412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2007 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Recently, there have been sightings\n"
# 3414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "of many rare POKéMON species.\p"
# 3415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'm talking about POKéMON that\n"
# 3416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "have never been seen in KANTO.\p"
# 3417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I would love to go see things for\n"
# 3418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "myself, but I'm much too old.\p"
# 3419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Since I can't do it, {PLAYER}, I'd\n"
# 3420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "like you to go in my place.$"
# 3421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything::
# 3423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2018 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, I heard that!\p"
# 3425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Gramps, what's with favoring\n"
# 3426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} over me all the time?\p"
# 3427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I went and collected more POKéMON,\n"
# 3428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and faster, too.\p"
# 3429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "You should just let me handle\n"
# 3430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "everything.$"
# 3431 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes::
# 3433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2028 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: I know, I know.\n"
# 3435 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Of course I need your help, too.\p"
# 3436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, I need to see both your\n"
# 3437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéDEXES.$"
# 3438 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits::
# 3440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2035 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK took both POKéDEX\n"
# 3442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "units.$"
# 3443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData::
# 3445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2040 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 3447 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
# 3448 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "…And that's done!\p"
# 3449 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now these units can record data on\n"
# 3450 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "a lot more POKéMON.$"
# 3451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded::
# 3453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2048 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded!$"
# 3455 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex::
# 3457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2052 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, {PLAYER} and {RIVAL}!\p"
# 3459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This time, you really must work\n"
# 3460 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "towards filling your POKéDEXES.\p"
# 3461 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I urge you to make them the best\n"
# 3462 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "and the most complete of all time!\p"
# 3463 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Truly, this is a monumentally great\n"
# 3464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "undertaking in POKéMON history!$"
# 3465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 3466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex::
# 3467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 2062 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
# 3468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps, calm down.\n"
# 3469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Don't get so excited.\p"
# 3470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I'll get the POKéDEX completed,\n"
# 3471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "don't you worry about a thing.\p"
# 3472 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I think I'll try looking around\n"
# 3473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "ONE ISLAND first…\p"
# 3474 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Anyways, I'm outta here!$"
