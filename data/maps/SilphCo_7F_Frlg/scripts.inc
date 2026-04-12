# 1 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_OnLoad
# 5 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 3 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_7F_OnTransition
# 7 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 9 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 10 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnLoad::
# 11 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 12 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_7F_DOOR_1, SilphCo_7F_OnLoad_2
# 13 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnLoad_1:
# 14 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 15 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_7F_DOOR_2, SilphCo_7F_OnLoad_5
# 16 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnLoad_4:
# 17 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 18 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_7F_DOOR_3, SilphCo_7F_OnLoad_8
# 19 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnLoad_7:
# 20 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 21 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 22 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnLoad_2:
# 23 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 8 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call EventScript_Close7FDoor1
# 25 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_OnLoad_1
# 26 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 27 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnLoad_5:
# 28 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 11 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 29 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call EventScript_Close7FDoor2
# 30 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_OnLoad_4
# 31 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 32 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnLoad_8:
# 33 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 14 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 34 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call EventScript_Close7FDoor3
# 35 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_OnLoad_7
# 36 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 37 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 38 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnTransition::
# 39 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 20 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 40 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 41 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_ge SilphCo_7F_OnTransition_2
# 42 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnTransition_1:
# 43 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 44 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 45 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_OnTransition_2:
# 46 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 21 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 47 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call SilphCo_7F_EventScript_SetObjRocketsGone
# 48 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_OnTransition_1
# 49 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 50 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 51 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_SetObjRocketsGone::
# 52 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SILPH_CO_7F_WORKER_M2, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 55 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 56 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 57 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalTriggerTop::
# 58 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lockall
# 60 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 33 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 34 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 63 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
# 64 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 65 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 66 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 67 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalTriggerBottom::
# 68 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 39 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 69 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lockall
# 70 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 40 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 71 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 72 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 41 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
# 74 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 75 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 76 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 77 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene::
# 78 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 46 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 79 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 80 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 47 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 82 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 48 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_ExclamationMark
# 84 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 49 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 85 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 86 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 50 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 87 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 89 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_Delay48
# 90 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 52 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 93 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalWhatKeptYou
# 94 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 54 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 95 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 96 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_RivalScene_2
# 97 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_1:
# 98 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 57 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 100 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_RivalScene_5
# 101 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_4:
# 102 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 60 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 103 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalIntro
# 104 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 105 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_RIVAL
# 106 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 107 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 2
# 108 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_RivalScene_8
# 109 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_7:
# 110 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 65 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 111 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 1
# 112 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_RivalScene_11
# 113 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_10:
# 114 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 68 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 115 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_STARTER_MON, 0
# 116 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_RivalScene_14
# 117 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_13:
# 118 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 71 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 119 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalPostBattle
# 120 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 72 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 121 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	closemessage
# 122 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 123 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 124 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 74 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 125 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 126 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_RivalScene_17
# 127 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_16:
# 128 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 77 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 129 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 130 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_RivalScene_20
# 131 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_19:
# 132 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 80 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 133 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playse SE_WARP_IN
# 134 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 135 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	fadedefaultbgm
# 136 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 82 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 137 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_RIVAL
# 138 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 139 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitse
# 140 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 84 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 141 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_7F, 1
# 142 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 85 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 143 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	releaseall
# 144 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 145 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 146 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_2:
# 147 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 55 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 148 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call SilphCo_7F_EventScript_RivalApproachTop
# 149 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene_1
# 150 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 151 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_5:
# 152 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 58 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 153 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call SilphCo_7F_EventScript_RivalApproachBottom
# 154 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene_4
# 155 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 156 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_8:
# 157 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 63 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 158 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call SilphCo_7F_EventScript_RivalSquirtle
# 159 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene_7
# 160 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 161 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_11:
# 162 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 66 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 163 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call SilphCo_7F_EventScript_RivalBulbasaur
# 164 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene_10
# 165 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 166 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_14:
# 167 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 69 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 168 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call SilphCo_7F_EventScript_RivalCharmander
# 169 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene_13
# 170 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 171 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_17:
# 172 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 75 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 173 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call SilphCo_7F_EventScript_RivalExitTop
# 174 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene_16
# 175 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 176 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_20:
# 177 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 78 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 178 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call SilphCo_7F_EventScript_RivalExitBottom
# 179 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene_19
# 180 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 181 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 182 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalApproachTop::
# 183 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 90 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 184 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	closemessage
# 185 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 186 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalApproachTop
# 187 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 92 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 188 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 189 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 190 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 191 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 192 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalApproachBottom::
# 193 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 194 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 195 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 196 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalSquirtle::
# 197 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 101 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 198 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_SQUIRTLE, SilphCo_7F_Text_RivalDefeat
# 199 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 200 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 201 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 202 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalBulbasaur::
# 203 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 106 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 204 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_BULBASAUR, SilphCo_7F_Text_RivalDefeat
# 205 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 206 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 207 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 208 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalCharmander::
# 209 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 111 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 210 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_CHARMANDER, SilphCo_7F_Text_RivalDefeat
# 211 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 212 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 213 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 214 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalExitTop::
# 215 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 116 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 216 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalExitTop
# 217 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 117 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 218 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 219 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 220 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 221 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 222 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalExitBottom::
# 223 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 122 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 224 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_Movement_RivalExitBottom
# 225 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 123 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 226 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 227 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	return
# 228 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 229 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 230 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 127 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 231 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Movement_RivalApproachTop:
# 232 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 128 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 233 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 234 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 129 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 235 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	step_end
# 236 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 237 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 132 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 238 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Movement_RivalExitTop:
# 239 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 133 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 240 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 241 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 134 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 242 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 243 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 135 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 244 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 245 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 136 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 246 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 247 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 137 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 248 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	delay_16
# 249 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 138 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 250 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	step_end
# 251 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 252 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 141 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 253 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Movement_RivalExitBottom:
# 254 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 142 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 255 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_left
# 256 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 143 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 257 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 258 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 144 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 259 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 260 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 145 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 261 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 262 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 146 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 263 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 264 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 147 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 265 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 266 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 148 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 267 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 268 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 149 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 269 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	delay_16
# 270 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 150 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 271 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	step_end
# 272 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 273 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy::
# 274 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 154 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 275 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock
# 276 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 155 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 277 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	faceplayer
# 278 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 156 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 279 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_LAPRAS_FROM_SILPH, SilphCo_7F_EventScript_LaprasGuy_2
# 280 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy_1:
# 281 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 159 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 282 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_HaveMonForSavingUs
# 283 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 160 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 284 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LAPRAS
# 285 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 161 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 286 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	givemon SPECIES_LAPRAS, 25
# 287 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 162 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 288 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 289 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_LaprasGuy_5
# 290 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy_4:
# 291 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 165 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 292 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 293 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_LaprasGuy_8
# 294 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy_7:
# 295 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 168 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 296 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 297 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_LaprasGuy_11
# 298 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy_10:
# 299 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 171 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 300 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 301 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 302 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 303 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy_2:
# 304 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 157 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 305 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_AlreadyGotLapras
# 306 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasGuy_1
# 307 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 308 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy_5:
# 309 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 163 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 310 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_ReceiveLaprasParty
# 311 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasGuy_4
# 312 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 313 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy_8:
# 314 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 166 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 315 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_ReceiveLaprasPC
# 316 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasGuy_7
# 317 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 318 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy_11:
# 319 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 169 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 320 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 321 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasGuy_10
# 322 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 323 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 324 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasParty::
# 325 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 176 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 326 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 327 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 177 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 328 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 329 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 178 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 330 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 331 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 179 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 332 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmessage
# 333 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 180 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 334 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitfanfare
# 335 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 181 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 336 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 337 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 182 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 338 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 339 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 183 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 340 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 341 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_ReceiveLaprasParty_2
# 342 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasParty_1:
# 343 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 186 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 344 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 345 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 187 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 346 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 347 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 188 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 348 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
# 349 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 350 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 351 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasParty_2:
# 352 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 184 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 353 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
# 354 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_ReceiveLaprasParty_1
# 355 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 356 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 357 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasPC::
# 358 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 193 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 359 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 360 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 194 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 361 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 362 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 195 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 363 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 364 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 196 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 365 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmessage
# 366 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 197 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 367 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitfanfare
# 368 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 198 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 369 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 370 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 199 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 371 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 372 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 200 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 373 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 374 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_eq SilphCo_7F_EventScript_ReceiveLaprasPC_2
# 375 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasPC_1:
# 376 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 203 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 377 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 378 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 204 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 379 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasTransferredToPC
# 380 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 381 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 382 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasPC_2:
# 383 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 201 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 384 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasTransferredToPC
# 385 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_ReceiveLaprasPC_1
# 386 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 387 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 388 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_LaprasTransferredToPC::
# 389 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 209 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 390 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 391 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 210 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 392 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
# 393 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 394 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 395 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 396 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_EndReceiveLapras::
# 397 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 215 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 398 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 399 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 216 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 400 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ExplainLapras
# 401 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 217 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 402 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setflag FLAG_GOT_LAPRAS_FROM_SILPH
# 403 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 218 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 404 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 405 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 406 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 407 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 408 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_AlreadyGotLapras::
# 409 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 223 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 410 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RocketBossWentToBoardroom
# 411 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 224 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 412 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 413 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 414 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 415 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 416 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM1::
# 417 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 229 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 418 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock
# 419 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 230 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 420 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	faceplayer
# 421 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 231 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 422 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 423 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_ge SilphCo_7F_EventScript_WorkerM1_2
# 424 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM1_1:
# 425 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 234 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 426 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RocketsAfterMasterBall
# 427 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 235 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 428 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 429 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 430 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 431 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM1_2:
# 432 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 232 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 433 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_WorkerM1RocketsGone
# 434 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_WorkerM1_1
# 435 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 436 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 437 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM1RocketsGone::
# 438 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 240 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 439 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_CanceledMasterBallProject
# 440 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 241 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 441 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 442 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 443 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 444 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 445 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM2::
# 446 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 246 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 447 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock
# 448 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 247 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 449 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	faceplayer
# 450 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 248 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 451 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 452 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_ge SilphCo_7F_EventScript_WorkerM2_2
# 453 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM2_1:
# 454 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 251 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 455 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_BadIfTeamRocketTookOver
# 456 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 252 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 457 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 458 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 459 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 460 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM2_2:
# 461 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 249 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 462 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_WorkerM2RocketsGone
# 463 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_WorkerM2_1
# 464 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 465 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 466 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerM2RocketsGone::
# 467 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 257 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 468 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_WowYouChasedOffTeamRocket
# 469 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 258 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 470 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 471 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 472 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 473 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 474 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerF::
# 475 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 263 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 476 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock
# 477 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 264 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 478 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	faceplayer
# 479 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 265 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 480 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
# 481 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_ge SilphCo_7F_EventScript_WorkerF_2
# 482 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerF_1:
# 483 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 268 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 484 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ReallyDangerousHere
# 485 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 269 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 486 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 487 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 488 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 489 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerF_2:
# 490 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 266 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 491 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_WorkerFRocketsGone
# 492 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_WorkerF_1
# 493 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 494 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 495 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_WorkerFRocketsGone::
# 496 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 274 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 497 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ThankYouSoMuch
# 498 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 275 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 499 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	release
# 500 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 501 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 502 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 503 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_FloorSign::
# 504 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 280 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 505 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_FloorSign, MSGBOX_SIGN
# 506 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 507 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 508 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 509 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_Joshua::
# 510 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 285 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 511 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSHUA, SilphCo_7F_Text_JoshuaIntro, SilphCo_7F_Text_JoshuaDefeat
# 512 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 286 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 513 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 515 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 516 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 517 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_Grunt1::
# 518 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 291 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 519 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_33, SilphCo_7F_Text_Grunt1Intro, SilphCo_7F_Text_Grunt1Defeat
# 520 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 292 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 521 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 522 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 523 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 524 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 525 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_Grunt2::
# 526 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 297 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 527 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_34, SilphCo_7F_Text_Grunt2Intro, SilphCo_7F_Text_Grunt2Defeat
# 528 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 298 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 529 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 530 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 531 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 532 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 533 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_Grunt3::
# 534 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 303 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 535 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_35, SilphCo_7F_Text_Grunt3Intro, SilphCo_7F_Text_Grunt3Defeat
# 536 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 304 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 537 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	end
# 539 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 540 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 541 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_HaveMonForSavingUs::
# 542 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 308 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 543 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Oh! Hi! You're not a ROCKET!\n"
# 544 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You came to save us?\l"
# 545 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Why, thank you!\p"
# 546 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I want you to have this POKéMON\n"
# 547 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "for saving us.$"
# 548 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 549 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_ObtainedLaprasFromEmployee::
# 550 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 316 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 551 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{PLAYER} obtained a LAPRAS from\n"
# 552 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "the SILPH employee!$"
# 553 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 554 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_ExplainLapras::
# 555 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 321 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 556 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's a LAPRAS.\n"
# 557 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's a very intelligent POKéMON.\p"
# 558 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "We kept it in our lab, but it will\n"
# 559 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "be much better off with you.\p"
# 560 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I think you will be a good TRAINER\n"
# 561 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "for LAPRAS!\p"
# 562 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's a good swimmer.\n"
# 563 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It'll give you a lift across water!$"
# 564 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 565 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RocketBossWentToBoardroom::
# 566 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 332 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 567 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "TEAM ROCKET's BOSS went to the\n"
# 568 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "boardroom!\p"
# 569 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Is our PRESIDENT okay?\n"
# 570 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm worried.$"
# 571 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 572 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RocketsAfterMasterBall::
# 573 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 339 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 574 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "TEAM ROCKET was after the MASTER\n"
# 575 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "BALL, which catches any POKéMON.$"
# 576 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 577 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_CanceledMasterBallProject::
# 578 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 344 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 579 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "We canceled the MASTER BALL\n"
# 580 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "project because of TEAM ROCKET.$"
# 581 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 582 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_BadIfTeamRocketTookOver::
# 583 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 349 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 584 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It would be bad if TEAM ROCKET\n"
# 585 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "took over SILPH or our POKéMON.$"
# 586 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 587 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_WowYouChasedOffTeamRocket::
# 588 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 354 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 589 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Wow!\p"
# 590 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You chased off TEAM ROCKET all by\n"
# 591 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "yourself?$"
# 592 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 593 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_ReallyDangerousHere::
# 594 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 360 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 595 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You!\n"
# 596 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's really dangerous here!\p"
# 597 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You came to save me?\n"
# 598 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You can't!$"
# 599 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 600 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_ThankYouSoMuch::
# 601 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 367 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 602 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Thank you so much!$"
# 603 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 604 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt3Intro::
# 605 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 371 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 606 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Uh-oh!\n"
# 607 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I smell a little mouse!$"
# 608 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 609 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt3Defeat::
# 610 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 376 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 611 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Lights out!$"
# 612 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 613 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt3PostBattle::
# 614 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 380 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 615 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You won't find my BOSS by just\n"
# 616 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "scurrying around!$"
# 617 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 618 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_JoshuaIntro::
# 619 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 385 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 620 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Heheh!\p"
# 621 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You mistook me for a SILPH worker?$"
# 622 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 623 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_JoshuaDefeat::
# 624 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 390 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 625 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm done!$"
# 626 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 627 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_JoshuaPostBattle::
# 628 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 394 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 629 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Despite your age, you are a\n"
# 630 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "skilled TRAINER!$"
# 631 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 632 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt1Intro::
# 633 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 399 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 634 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
# 635 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "BROTHERS!$"
# 636 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 637 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt1Defeat::
# 638 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 404 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 639 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Aack!\n"
# 640 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Brothers, I lost!$"
# 641 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 642 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt1PostBattle::
# 643 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 409 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 644 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Doesn't matter.\n"
# 645 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "My brothers will repay the favor!$"
# 646 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 647 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt2Intro::
# 648 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 414 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 649 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "A child intruder?\n"
# 650 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "That must be you!$"
# 651 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 652 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt2Defeat::
# 653 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 419 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 654 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Fine!\n"
# 655 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I lost!$"
# 656 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 657 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_Grunt2PostBattle::
# 658 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 424 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 659 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Go on home before my BOSS gets\n"
# 660 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "ticked off!$"
# 661 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 662 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RivalWhatKeptYou::
# 663 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 429 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 664 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{RIVAL}: What kept you, {PLAYER}?$"
# 665 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 666 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RivalIntro::
# 667 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 433 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 668 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{RIVAL}: Hahaha! I thought you'd\n"
# 669 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "turn up if I waited here!\p"
# 670 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I guess TEAM ROCKET slowed you\n"
# 671 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "down! Not that I care!\p"
# 672 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I saw you in SAFFRON, so I decided\n"
# 673 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "to see if you got better!$"
# 674 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 675 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RivalDefeat::
# 676 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 442 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 677 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Oh, man!\n"
# 678 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "So, you are ready for BOSS\l"
# 679 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "ROCKET!$"
# 680 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 681 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_RivalPostBattle::
# 682 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 448 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 683 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Well, {PLAYER}!\n"
# 684 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm moving on up and ahead!\p"
# 685 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "By checking my POKéDEX, I'm\n"
# 686 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "starting to see what's strong and\l"
# 687 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "how they evolve!\p"
# 688 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Am I a genius or what?\p"
# 689 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm going to the POKéMON LEAGUE to\n"
# 690 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "boot out the ELITE FOUR.\p"
# 691 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'll become the world's most\n"
# 692 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "powerful TRAINER!\p"
# 693 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{PLAYER}, well, good luck to you!\n"
# 694 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Don't sweat it!\l"
# 695 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Smell ya!$"
# 696 "data/maps/SilphCo_7F_Frlg/scripts.pory"

# 697 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_Text_FloorSign::
# 698 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 464 "data/maps/SilphCo_7F_Frlg/scripts.pory"
# 699 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 700 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "7F$"
