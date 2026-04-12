# 1 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 2 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Frlg_MapScripts::
# 3 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 2 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 4 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_Exterior_OnTransition
# 5 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 3 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 6 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 9 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 4 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 11 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_Credits
# 12 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 14 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 15 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_OnTransition::
# 16 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 9 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 17 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 18 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 10 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 19 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1
# 20 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	goto_if_eq IndigoPlateau_Exterior_OnTransition_2
# 21 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_OnTransition_1:
# 22 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	end
# 23 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 24 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_OnTransition_2:
# 25 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 11 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 26 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	call IndigoPlateau_Exterior_EventScript_PlayCreditsMusic
# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	goto IndigoPlateau_Exterior_OnTransition_1
# 28 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 29 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 30 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_PlayCreditsMusic::
# 31 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 17 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 32 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	playbgm MUS_CREDITS, 0
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	return
# 34 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 35 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 36 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits::
# 37 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 22 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 38 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	lockall
# 39 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 23 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 40 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 105
# 41 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 24 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 42 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	opendoor 11, 6
# 43 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 25 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 44 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 45 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 26 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special SpawnCameraObject
# 47 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 48 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	addobject LOCALID_CREDITS_RIVAL
# 49 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 28 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 50 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalExitBuilding
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 29 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 52 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay
# 53 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 30 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 54 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 55 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 31 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 56 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	closedoor 11, 6
# 57 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 32 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 58 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 59 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave
# 61 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 34 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 62 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalLeave
# 63 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 35 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 64 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 36 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 66 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 100
# 67 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 37 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 68 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	opendoor 11, 6
# 69 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 38 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 70 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 71 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 39 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 72 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	addobject LOCALID_CREDITS_PROF_OAK
# 73 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 40 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 74 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakExitBuilding
# 75 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 41 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 77 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 42 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 78 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	closedoor 11, 6
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 43 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 80 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 81 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 44 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 82 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 160
# 83 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 45 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 84 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave
# 85 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 86 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakLeave
# 87 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 47 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 88 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 89 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 48 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 90 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 100
# 91 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 49 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 92 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerBeginLeave
# 93 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 50 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 94 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 95 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 96 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 155
# 97 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 52 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 98 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerFaceLeague
# 99 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 53 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 100 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 101 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 54 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 102 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 90
# 103 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 55 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 104 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerTurnAround
# 105 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 56 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 106 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 107 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 57 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 108 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerLeave
# 109 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 58 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 110 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 111 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 59 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 112 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special RemoveCameraObject
# 113 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 114 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 0
# 115 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 61 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 116 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_CREDITS_RIVAL
# 117 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 62 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 118 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_CREDITS_PROF_OAK
# 119 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 63 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 120 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special CB2_StartCreditsSequence
# 121 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 64 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 122 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitstate
# 123 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 65 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 124 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	releaseall
# 125 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	end
# 126 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 127 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 128 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerLeave::
# 129 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 70 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 130 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 131 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 71 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 132 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 133 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 72 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 134 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 135 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 73 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 136 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 137 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 74 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 138 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 139 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 75 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 140 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 141 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 142 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 143 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	return
# 144 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 145 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 146 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 147 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerExitBuilding:
# 148 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 80 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 149 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 150 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 81 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 151 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 152 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 82 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 153 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 154 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 155 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 85 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 156 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave:
# 157 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 86 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 158 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 159 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 87 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 160 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_4
# 161 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 88 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 162 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_down
# 163 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 89 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 164 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 165 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 166 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 92 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 167 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave:
# 168 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 93 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 169 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_8
# 170 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 94 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 171 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 95 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 173 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 174 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 96 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 175 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 176 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 97 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 177 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 178 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 98 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 179 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 180 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 99 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 181 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 182 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 100 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 183 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 184 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 101 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 185 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 186 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 102 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 187 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 188 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 103 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 189 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 190 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 104 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 191 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 192 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 105 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 193 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 194 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 106 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 195 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_down
# 196 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 107 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 197 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 198 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 199 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 110 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 200 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerBeginLeave:
# 201 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 111 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 202 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_right
# 203 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 112 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 204 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 205 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 113 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 206 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 207 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 114 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 208 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 209 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 115 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 210 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 211 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 116 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 212 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 213 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 117 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 214 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 215 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 216 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 120 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 217 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerTurnAround:
# 218 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 121 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 219 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_down
# 220 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 122 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 221 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 222 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 223 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay::
# 224 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 126 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 225 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	face_right
# 226 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 127 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 227 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	lock_facing_direction
# 228 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 128 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 229 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 129 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 231 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	unlock_facing_direction
# 232 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 130 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 233 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 234 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	return
# 235 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 236 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 237 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 133 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 238 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerFaceLeague:
# 239 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 134 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 240 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_up
# 241 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 135 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 242 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 243 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 244 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 138 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 245 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalLeave:
# 246 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 139 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 247 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 248 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 140 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 249 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 250 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 141 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 251 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 252 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 142 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 253 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 254 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 143 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 255 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 256 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 144 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 257 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 258 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 145 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 259 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 260 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 146 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 261 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 262 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 263 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 149 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 264 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalExitBuilding:
# 265 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 150 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 266 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_fast_down
# 267 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 151 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 268 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 269 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 270 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 154 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 271 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_OakLeave:
# 272 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 155 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 273 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_left
# 274 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 156 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 275 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 276 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 157 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 277 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 278 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 158 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 279 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 280 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 159 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 281 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 282 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 160 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 283 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 284 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 161 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 285 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 286 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 162 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 287 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 288 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 163 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 289 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 290 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 164 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 291 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 292 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 165 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 293 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 294 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 166 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 295 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_in_place_faster_down
# 296 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 167 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 297 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 298 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 168 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 299 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 300 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 169 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 301 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 302 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 170 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 303 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 304 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 171 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 305 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 306 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 172 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 307 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 308 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 173 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 309 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 310 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 174 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 311 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 312 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 175 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 313 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
# 314 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"

# 315 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 178 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 316 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_OakExitBuilding:
# 317 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 179 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 318 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 319 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 180 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
# 320 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_end
