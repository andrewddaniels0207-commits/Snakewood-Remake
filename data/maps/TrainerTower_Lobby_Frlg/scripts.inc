# 1 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 2 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Frlg_MapScripts::
# 3 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 2 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 4 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_Lobby_OnResume
# 5 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 3 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 6 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerTower_Lobby_OnReturnToField
# 7 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 4 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 8 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_Lobby_OnTransition
# 9 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 5 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 10 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerTower_Lobby_OnLoad
# 11 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 6 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 12 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.byte 0
# 14 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 15 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 7 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 17 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerTower_Lobby_EventScript_Enter
# 18 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 8 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 19 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerTower_Lobby_EventScript_ExitElevator
# 20 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte 0
# 21 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 22 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 23 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnResume::
# 24 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 13 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 25 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 26 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 14 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 27 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_resumetimer
# 28 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 15 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 29 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_shouldexit
# 30 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 16 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 31 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 32 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto_if_eq TrainerTower_Lobby_OnResume_2
# 33 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnResume_1:
# 34 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 19 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 35 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_0, 0
# 36 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 20 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 37 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 7
# 38 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 21 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 39 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 40 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 41 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 42 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnResume_2:
# 43 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 17 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 44 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_OnResumeEnd
# 45 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_OnResume_1
# 46 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 47 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 48 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnResumeEnd::
# 49 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 50 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 51 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 52 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnReturnToField::
# 53 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 29 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 54 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_NURSE
# 55 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 30 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 56 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_MART_CLERK
# 57 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 31 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 58 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_RECEPTIONIST
# 59 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 32 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 60 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_COOLTRAINER_F
# 61 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 33 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 62 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_BALDING_MAN
# 63 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 64 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 65 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 66 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnLoad::
# 67 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 38 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 68 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_TEMP_D, 17
# 69 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto_if_eq TrainerTower_Lobby_OnLoad_2
# 70 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnLoad_1:
# 71 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 72 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 73 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnLoad_2:
# 74 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 39 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 75 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	call TrainerTower_Lobby_OpenCounterBarrier
# 76 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_OnLoad_1
# 77 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 78 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 79 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OpenCounterBarrier::
# 80 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 45 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 81 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_Floor_ShadeBottomLeft, 0
# 82 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 83 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 84 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 85 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_OnTransition::
# 86 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 50 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 87 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
# 88 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 51 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 89 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 90 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 91 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 92 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 93 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ExitElevator::
# 94 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 56 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 95 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 96 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 57 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 97 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_ExitElevator
# 98 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 58 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 99 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 100 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 59 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 101 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_CounterBarrier, 1
# 102 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 60 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 103 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special DrawWholeMapView
# 104 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 61 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 105 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	playse SE_CLICK
# 106 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 62 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 107 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitse
# 108 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 63 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 109 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_D, 0
# 110 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 64 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 111 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
# 112 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 113 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 114 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 115 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 68 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 116 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Movement_ExitElevator:
# 117 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 69 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 118 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	walk_down
# 119 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 70 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 120 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	walk_down
# 121 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 71 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 122 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	step_end
# 123 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 124 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Enter::
# 125 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 75 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 126 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_0, 1
# 127 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 76 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 128 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getchallengestatus
# 129 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 77 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 130 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 78 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 132 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case TT_CHALLENGE_STATUS_LOST, TrainerTower_Lobby_EventScript_Enter_2
# 133 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 80 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 134 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case TT_CHALLENGE_STATUS_UNK, TrainerTower_Lobby_EventScript_Enter_3
# 135 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 82 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 136 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case TT_CHALLENGE_STATUS_NORMAL, TrainerTower_Lobby_EventScript_Enter_4
# 137 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 138 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 139 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Enter_2:
# 140 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 79 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 141 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_LostChallenge
# 142 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 143 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 144 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Enter_3:
# 145 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 81 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 146 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist
# 147 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 148 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 149 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Enter_4:
# 150 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 83 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 151 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_EnterEnd
# 152 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 153 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 154 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 155 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_LostChallenge::
# 156 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 88 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 157 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 158 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 89 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 159 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 160 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 90 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 161 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 162 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 91 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 163 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 164 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 92 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 165 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TooBadComeBackTryAgain
# 166 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 93 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 167 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ExitChallenge
# 168 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 169 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 170 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 171 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist::
# 172 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 97 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 173 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 174 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 98 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 175 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 176 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 99 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 177 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 178 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 100 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 179 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 180 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 101 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 181 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch
# 182 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 183 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 184 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 185 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ExitChallenge::
# 186 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 105 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 187 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	closemessage
# 188 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 106 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 189 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
# 190 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 107 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 191 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 192 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 108 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 193 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
# 194 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 109 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 195 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 196 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 197 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 198 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 199 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_EnterEnd::
# 200 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 201 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 202 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 203 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Nurse::
# 204 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 117 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 205 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 206 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 118 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 207 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 208 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 119 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 209 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 210 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 120 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 211 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 212 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 213 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 214 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 215 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Receptionist::
# 216 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 125 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 217 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 218 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 126 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 219 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 220 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 127 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 221 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getbeatchallenge
# 222 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 128 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 223 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
# 224 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto_if_eq TrainerTower_Lobby_EventScript_Receptionist_2
# 225 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Receptionist_1:
# 226 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 131 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 227 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_GiveItYourBest
# 228 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 132 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 229 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ReceptionistEnd
# 230 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 231 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 232 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_Receptionist_2:
# 233 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 129 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 234 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ThanksForCompeting
# 235 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_Receptionist_1
# 236 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 237 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 238 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ThanksForCompeting::
# 239 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 136 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 240 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ThanksForCompeting
# 241 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 242 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 243 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 244 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ReceptionistEnd::
# 245 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 140 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 246 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 247 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 248 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 249 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 250 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_MartClerk::
# 251 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 145 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 252 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock
# 253 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 146 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 254 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	faceplayer
# 255 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 147 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 256 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 257 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 148 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 258 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmessage
# 259 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 149 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 260 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	pokemart TrainerTower_Lobby_Mart_Items
# 261 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 150 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 262 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 263 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 151 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 264 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 265 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 266 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 267 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 268 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Mart_Items::
# 269 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 156 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 270 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	release
# 271 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 272 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 273 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 274 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_EntryTrigger::
# 275 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 161 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 276 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 277 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 162 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 278 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
# 279 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 163 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 280 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 281 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 164 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 282 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WelcomeToTrainerTower
# 283 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 165 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 284 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getnumfloors
# 285 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 166 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 286 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 287 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto_if_eq TrainerTower_Lobby_EventScript_EntryTrigger_2
# 288 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_EntryTrigger_1:
# 289 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 169 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 290 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpToFloorNum
# 291 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 170 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 292 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
# 293 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 294 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 295 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_EntryTrigger_2:
# 296 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 167 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 297 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AllFloorsUsed
# 298 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_EntryTrigger_1
# 299 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 300 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 301 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AllFloorsUsed::
# 302 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 174 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 303 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpEighthFloor
# 304 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	return
# 305 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 306 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 307 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge::
# 308 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 178 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 309 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	message TrainerTower_Lobby_Text_LikeToChallengeTrainers
# 310 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 179 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 311 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmessage
# 312 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 180 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 313 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	multichoice 18, 6, MULTI_YESNOINFO, FALSE
# 314 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 181 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 315 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	switch VAR_RESULT
# 316 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 182 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 317 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 0, TrainerTower_Lobby_EventScript_AskEnterChallenge_3
# 318 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 184 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 319 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 1, TrainerTower_Lobby_EventScript_AskEnterChallenge_4
# 320 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 186 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 321 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 2, TrainerTower_Lobby_EventScript_AskEnterChallenge_5
# 322 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 188 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 323 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case MULTI_B_PRESSED, TrainerTower_Lobby_EventScript_AskEnterChallenge_6
# 324 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge_1:
# 325 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 326 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 327 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge_3:
# 328 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 183 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 329 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChooseChallenge
# 330 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge_1
# 331 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 332 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge_4:
# 333 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 185 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 334 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_DeclineChallenge
# 335 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge_1
# 336 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 337 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge_5:
# 338 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 187 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 339 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChallengeInfo
# 340 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge_1
# 341 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 342 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_AskEnterChallenge_6:
# 343 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 189 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 344 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_DeclineChallenge
# 345 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge_1
# 346 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 347 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 348 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChallengeInfo::
# 349 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 195 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 350 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ExplainTrainerTower
# 351 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 196 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 352 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
# 353 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 354 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 355 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 356 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge::
# 357 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 201 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 358 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	multichoice 13, 3, MULTI_TRAINER_TOWER_MODE, FALSE
# 359 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 202 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 360 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	switch VAR_RESULT
# 361 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 203 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 362 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 0, TrainerTower_Lobby_EventScript_ChooseChallenge_3
# 363 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 205 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 364 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 1, TrainerTower_Lobby_EventScript_ChooseChallenge_4
# 365 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 207 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 366 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 2, TrainerTower_Lobby_EventScript_ChooseChallenge_5
# 367 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 209 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 368 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 3, TrainerTower_Lobby_EventScript_ChooseChallenge_6
# 369 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 211 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 370 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 4, TrainerTower_Lobby_EventScript_ChooseChallenge_7
# 371 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 213 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 372 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case MULTI_B_PRESSED, TrainerTower_Lobby_EventScript_ChooseChallenge_8
# 373 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge_1:
# 374 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 375 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 376 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge_3:
# 377 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 204 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 378 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_BeginChallenge
# 379 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChooseChallenge_1
# 380 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 381 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge_4:
# 382 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 206 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 383 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_BeginChallenge
# 384 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChooseChallenge_1
# 385 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 386 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge_5:
# 387 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 208 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 388 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_BeginChallenge
# 389 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChooseChallenge_1
# 390 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 391 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge_6:
# 392 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 210 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 393 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_BeginChallenge
# 394 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChooseChallenge_1
# 395 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 396 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge_7:
# 397 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 212 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 398 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_DeclineChallenge
# 399 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChooseChallenge_1
# 400 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 401 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ChooseChallenge_8:
# 402 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 214 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 403 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_DeclineChallenge
# 404 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChooseChallenge_1
# 405 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 406 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 407 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_BeginChallenge::
# 408 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 220 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 409 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 410 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 221 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 411 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 1
# 412 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 222 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 413 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special HealPlayerParty
# 414 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 223 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 415 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StartClockGetSetGo
# 416 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 224 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 417 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_startchallenge
# 418 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 225 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 419 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
# 420 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 421 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 422 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 423 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_DeclineChallenge::
# 424 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 230 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 425 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_PleaseVisitUsAgain
# 426 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 231 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 427 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	closemessage
# 428 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 232 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 429 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
# 430 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 233 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 431 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 432 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 234 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 433 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
# 434 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 435 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 436 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 437 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 238 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 438 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Movement_FaceReceptionist:
# 439 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 239 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 440 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	face_right
# 441 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 240 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 442 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	step_end
# 443 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 444 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 243 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 445 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Movement_WalkDown:
# 446 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 244 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 447 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	walk_down
# 448 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 245 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 449 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	step_end
# 450 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 451 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ShowRecords::
# 452 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 249 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 453 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 454 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 250 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 455 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 456 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 251 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 457 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 458 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 252 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 459 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special ShowTrainerHillRecords
# 460 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 253 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 461 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitstate
# 462 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 254 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 463 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
# 464 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 465 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 466 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 467 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_CooltrainerF::
# 468 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 259 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 469 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers, MSGBOX_NPC
# 470 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 471 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 472 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 473 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_BaldingMan::
# 474 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 264 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 475 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StairsTougherThanAnyBattle, MSGBOX_NPC
# 476 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	end
# 477 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 478 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 479 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_WelcomeToTrainerTower::
# 480 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 268 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 481 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Hello!\p"
# 482 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Welcome to TRAINER TOWER where\n"
# 483 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "TRAINERS gather from all over!$"
# 484 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 485 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_TrainersUpToFloorNum::
# 486 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 274 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 487 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "TRAINERS from all over the world\n"
# 488 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "gather here to battle.\p"
# 489 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Let me see…\p"
# 490 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Right now, there are TRAINERS only\n"
# 491 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "up to Floor {STR_VAR_1}.$"
# 492 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 493 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_TrainersUpEighthFloor::
# 494 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 282 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 495 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "TRAINERS are awaiting your\n"
# 496 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "challenge up to the eighth floor.$"
# 497 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 498 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_LikeToChallengeTrainers::
# 499 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 287 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 500 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Would you like to challenge the\n"
# 501 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "waiting TRAINERS?$"
# 502 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 503 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_StartClockGetSetGo::
# 504 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 292 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 505 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Okay, I'll get the clock started,\n"
# 506 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "so give it everything you have.\p"
# 507 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "On your marks…\p"
# 508 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Get set…\p"
# 509 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Go!$"
# 510 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 511 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_PleaseVisitUsAgain::
# 512 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 300 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 513 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Please do visit us again!$"
# 514 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 515 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_TooBadComeBackTryAgain::
# 516 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 304 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 517 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "That was too bad.\p"
# 518 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I think you put in a tremendous\n"
# 519 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "effort in your battling.\p"
# 520 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Please come back and try again!$"
# 521 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 522 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_GiveItYourBest::
# 523 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 311 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 524 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I hope you give it your best.$"
# 525 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 526 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch::
# 527 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 315 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 528 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 529 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "the movement can be hectic.\p"
# 530 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 531 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "the reception counter here.\p"
# 532 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 533 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 534 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_ImOwnerBattledPerfectly::
# 535 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 323 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 536 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Hello…\p"
# 537 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I am the owner of this TOWER…\p"
# 538 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "How the sky soars above this\n"
# 539 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "rooftop…\p"
# 540 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "The caress of the winds up here…\p"
# 541 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "It's all so perfect…\p"
# 542 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "The way you battled…\n"
# 543 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "It, too, was perfection…$"
# 544 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 545 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_ThisIsForYou::
# 546 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 334 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 547 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "This is for you…$"
# 548 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 549 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_DoneItInRecordTime::
# 550 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 338 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 551 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Oh!\n"
# 552 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Stupendous!\p"
# 553 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "It's marvelous how you've come up\n"
# 554 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "here so quickly.\p"
# 555 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "The fact is, you've done it in\n"
# 556 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "record time…\p"
# 557 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'll have your record posted at\n"
# 558 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "the reception counter.$"
# 559 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 560 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_TookSweetTimeGettingHere::
# 561 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 349 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 562 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You seem to have taken your sweet\n"
# 563 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "time getting here…$"
# 564 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 565 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Roof_Text_IdLikeToSeeBetterTime::
# 566 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 354 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 567 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "What I would like to see is a\n"
# 568 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "better time out of you…\p"
# 569 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'm counting on you.\p"
# 570 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Until then, farewell…$"
# 571 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 572 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Text_XMinYZSec::
# 573 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 361 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 574 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 575 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 576 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_HereAreTheResults::
# 577 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 365 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 578 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "せいせきひょうです$"
# 579 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 580 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_NeedTwoMonsForDouble::
# 581 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 369 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 582 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "This is a two-on-two battle.\p"
# 583 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You may not battle unless you have\n"
# 584 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "at least two POKéMON.$"
# 585 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 586 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_ExplainTrainerTower::
# 587 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 375 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 588 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Here at TRAINER TOWER, there is an\n"
# 589 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "event called TIME ATTACK.\p"
# 590 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You will be timed on how quickly\n"
# 591 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "you can get from the reception\l"
# 592 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "counter to the OWNER on the roof.\p"
# 593 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "The best times will be recorded on\n"
# 594 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "the Time Board.\p"
# 595 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Try competing with friends to see\n"
# 596 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "who can beat it the fastest.\p"
# 597 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You will not earn any EXP. Points\n"
# 598 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "or money by beating TRAINERS here.$"
# 599 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 600 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_ThanksForCompeting::
# 601 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 389 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 602 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Thank you for competing!$"
# 603 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 604 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers::
# 605 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 393 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 606 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'm here to see how good I am.\p"
# 607 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I wonder what kinds of TRAINERS\n"
# 608 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "are waiting for me?\p"
# 609 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "It's nerve-racking!$"
# 610 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"

# 611 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Text_StairsTougherThanAnyBattle::
# 612 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 400 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
# 613 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Gasp, gasp…\n"
# 614 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Gasp…\p"
# 615 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Never mind battling! These stairs…\n"
# 616 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "They're tougher than any battle…$"
