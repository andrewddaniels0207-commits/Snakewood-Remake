# 1 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidTop_OnResume
# 5 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 7 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidTop_OnTransition
# 7 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidTop_OnWarp
# 9 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 10 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.byte 0
# 12 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 13 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic
# 16 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidTop_EventScript_ShowMapName
# 18 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0
# 19 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 20 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 21 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnTransition::
# 22 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 24 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
# 26 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 28 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 29 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 31 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 18 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnWarp:
# 33 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects
# 35 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 20 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.2byte 0
# 37 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 38 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects::
# 39 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 43 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_C, 0
# 45 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_2
# 46 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_1:
# 47 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setobjectxyperm LOCALID_BRANDON, 0, 0
# 49 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 50 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 51 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_2:
# 52 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 28 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 53 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects
# 54 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_1
# 55 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 56 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 57 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects::
# 58 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 60 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 61 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnResume::
# 62 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getbrainstatus
# 64 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
# 66 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidTop_OnResume_2
# 67 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnResume_1:
# 68 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 69 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_EventScript_SetBrainObjectGfx
# 70 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 71 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 72 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_OnResume_2:
# 73 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus
# 75 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_OnResume_1
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 77 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 78 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus::
# 79 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 46 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 81 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 47 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getstatus
# 83 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 85 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case 0, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_3
# 87 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 88 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_4
# 89 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 53 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 90 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_5
# 91 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_1:
# 92 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 94 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
# 96 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_7
# 97 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_6:
# 98 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
# 100 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_10
# 101 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_9:
# 102 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_FORFEITED
# 104 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_13
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_12:
# 106 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 107 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 108 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_3:
# 109 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 110 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
# 111 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_1
# 112 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 113 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_4:
# 114 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 116 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_1
# 117 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 118 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_5:
# 119 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 54 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 120 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge
# 121 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_1
# 122 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 123 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_7:
# 124 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 126 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_6
# 127 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 128 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_10:
# 129 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 130 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 131 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_9
# 132 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 133 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_13:
# 134 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 136 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_12
# 137 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 138 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 139 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic::
# 140 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 142 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 144 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 145 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 146 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 147 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_ShowMapName::
# 148 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special ShowMapNamePopup
# 150 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 77 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 0
# 152 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 153 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 154 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 155 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge::
# 156 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 158 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 83 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 159 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SavePlayerParty
# 160 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 161 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 162 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 85 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 163 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_settrainers
# 164 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 166 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 87 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 167 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
# 168 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 169 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 170 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 171 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant::
# 172 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lock
# 174 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	faceplayer
# 176 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 94 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_D, 0
# 178 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_Attendant_2
# 179 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant_1:
# 180 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 181 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_C, FRONTIER_BRAIN_NOT_READY
# 182 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_Attendant_5
# 183 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant_4:
# 184 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 100 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo, MSGBOX_DEFAULT
# 186 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 188 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 102 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 190 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 192 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 104 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop
# 194 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 195 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 196 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 106 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 197 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath
# 198 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 200 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 108 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
# 202 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 203 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 204 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 110 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 206 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 207 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 208 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 112 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 209 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 210 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 211 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 212 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant_2:
# 213 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 214 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady
# 215 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_Attendant_1
# 216 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 217 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant_5:
# 218 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 98 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 219 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside
# 220 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_Attendant_4
# 221 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 222 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 223 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon::
# 224 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 116 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 225 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 226 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 227 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 228 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 118 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 229 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
# 230 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 231 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 232 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady::
# 234 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 235 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady, MSGBOX_DEFAULT
# 236 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 124 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 237 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 238 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 239 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 240 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 241 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside::
# 242 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 243 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere, MSGBOX_DEFAULT
# 244 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 130 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 245 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside
# 246 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 247 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_D, 1
# 248 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 132 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 249 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 250 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 251 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 252 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 253 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon::
# 254 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 255 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lockall
# 256 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 138 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 257 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_C
# 258 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 259 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_3
# 260 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 261 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_4
# 262 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_5
# 264 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1:
# 265 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 146 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 267 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 268 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FALSE
# 269 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_7
# 270 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_6:
# 271 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 150 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 273 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 274 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 275 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 152 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 276 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 277 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 278 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure, MSGBOX_DEFAULT
# 279 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 154 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 280 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 281 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 282 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 283 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 156 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 284 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 285 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 286 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 287 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 158 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 288 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon, MSGBOX_DEFAULT
# 289 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 159 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 290 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver
# 291 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 292 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 293 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_3:
# 294 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 140 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold
# 296 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1
# 297 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 298 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_4:
# 299 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 142 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 300 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
# 301 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1
# 302 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 303 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_5:
# 304 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 144 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 305 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
# 306 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1
# 307 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_7:
# 309 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 148 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 310 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
# 311 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_6
# 312 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 313 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 314 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech::
# 315 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 164 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 316 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 317 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 318 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 319 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 322 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver::
# 323 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 169 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 324 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle, MSGBOX_DEFAULT
# 325 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 170 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 326 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 327 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 171 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 328 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 329 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 172 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 330 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 1
# 331 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_2
# 332 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_1:
# 333 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 334 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 335 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 337 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_2:
# 338 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 339 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver
# 340 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_1
# 341 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 342 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 343 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver::
# 344 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 179 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 345 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 346 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 180 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 347 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 0
# 348 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_2
# 349 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_1:
# 350 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 183 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 351 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease, MSGBOX_DEFAULT
# 352 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 184 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 353 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 354 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 355 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol
# 356 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 357 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 358 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 359 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 360 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 188 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 361 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 362 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 363 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting, MSGBOX_DEFAULT
# 364 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 190 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 365 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 366 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 367 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 368 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_2:
# 369 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 181 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 370 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 371 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_1
# 372 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 373 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 374 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold::
# 375 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 194 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 376 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 377 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 195 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 378 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FALSE
# 379 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_2
# 380 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_1:
# 381 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 198 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 382 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 383 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 384 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp
# 385 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 386 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 387 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 388 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned, MSGBOX_DEFAULT
# 389 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 390 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 391 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 203 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 392 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 393 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 394 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 395 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 396 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 397 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 398 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter, MSGBOX_DEFAULT
# 399 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 207 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 400 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold
# 401 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	end
# 402 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 403 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_2:
# 404 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 196 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 405 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
# 406 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_1
# 407 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 408 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 409 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech::
# 410 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 212 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 411 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer
# 412 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 413 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 414 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 415 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 416 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 417 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold::
# 418 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 217 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 419 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_EverythingYouHave, MSGBOX_DEFAULT
# 420 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 218 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 421 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 422 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 219 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 423 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 424 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 220 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 425 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 1
# 426 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_2
# 427 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_1:
# 428 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 429 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 430 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 431 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 432 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_2:
# 433 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 434 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold
# 435 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_1
# 436 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 437 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 438 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold::
# 439 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 227 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 440 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 441 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 442 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 2
# 443 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_2
# 444 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_1:
# 445 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 446 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis, MSGBOX_DEFAULT
# 447 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 232 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 448 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 449 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 233 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 450 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine
# 451 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 234 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 452 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 453 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 235 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 454 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 455 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 236 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 456 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 457 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 237 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 458 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_FarewellForNow, MSGBOX_DEFAULT
# 459 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 238 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 460 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 461 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 462 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 463 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_2:
# 464 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 229 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 465 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
# 466 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_1
# 467 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 468 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 469 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle::
# 470 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 242 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 471 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 472 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 243 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 473 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PYRAMID
# 474 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 244 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 475 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
# 476 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	return
# 477 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 478 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 479 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 248 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 480 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside:
# 481 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 249 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 482 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_right
# 483 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 250 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 484 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_left
# 485 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 251 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 486 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 487 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 488 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 254 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 489 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath:
# 490 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 255 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 491 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_left
# 492 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 256 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 493 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_up
# 494 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 257 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 495 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 496 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 497 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 260 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 498 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop:
# 499 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 261 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 500 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 501 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 262 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 502 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 503 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 504 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 505 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 264 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 506 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 507 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 508 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 509 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 510 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_in_place_faster_down
# 511 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 267 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 512 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 513 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 514 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 270 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 515 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer:
# 516 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 517 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_fast_down
# 518 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 519 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 520 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 521 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 275 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 522 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Movement_CameraPanUp:
# 523 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 276 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 524 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 525 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 277 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 526 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_slow_up
# 527 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 278 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 528 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	delay_16
# 529 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 279 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 530 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_end
# 531 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 532 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo::
# 533 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 282 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 534 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a delight to see you here!\n"
# 535 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "You have reached the summit of\l"
# 536 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "the BATTLE PYRAMID!\p"
# 537 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Above here is the PYRAMID's\n"
# 538 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "lookout point.\p"
# 539 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a place open only to those\n"
# 540 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "who have conquered the PYRAMID.\p"
# 541 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, please!\n"
# 542 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Up you go!$"
# 543 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 544 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid::
# 545 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 294 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 546 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The PYRAMID's new conqueror!\n"
# 547 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Let the name {PLAYER} be known!$"
# 548 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 549 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere::
# 550 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 299 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 551 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a delight to see you here!\p"
# 552 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Unfortunately, you were second by\n"
# 553 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "a mere fraction of time!\p"
# 554 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Our chief has already conquered\n"
# 555 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "the PYRAMID ahead of you.\p"
# 556 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "However, my young explorer…\n"
# 557 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "You are a TRAINER!\p"
# 558 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Assert your power and take the glory\n"
# 559 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "of the pinnacle from our chief!\p"
# 560 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, please! When you are ready,\n"
# 561 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "take one more step of courage!$"
# 562 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 563 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure::
# 564 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 565 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young adventurer…\p"
# 566 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Wouldn't you agree that explorations\n"
# 567 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "are the grandest of adventures?\p"
# 568 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your own wits!\p"
# 569 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your own strength!\p"
# 570 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your own POKéMON!\p"
# 571 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "And, above all, only your own courage\n"
# 572 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "to lead you through unknown worlds…$"
# 573 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 574 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon::
# 575 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 324 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 576 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Aah, yes, indeed this life is grand!\n"
# 577 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Grand, it is! Eh?\p"
# 578 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I'm BRANDON!\p"
# 579 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I'm the PYRAMID KING, which means\n"
# 580 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I'm in charge here.\p"
# 581 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Most people call me the chief!\p"
# 582 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "You coming here means you have\n"
# 583 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "that much confidence in yourself,\l"
# 584 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "am I right?\p"
# 585 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Hahahah!\n"
# 586 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "This should be exciting!$"
# 587 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 588 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle::
# 589 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 338 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 590 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, then!\n"
# 591 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Bring your courage to our battle!$"
# 592 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 593 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease::
# 594 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 595 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: Hahahah! Grand it was!\n"
# 596 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Grand, yes, indeed!\p"
# 597 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Well done! You've earned recognition!\n"
# 598 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your FRONTIER PASS, please!$"
# 599 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 600 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol::
# 601 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 350 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 602 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The Brave Symbol was embossed on\n"
# 603 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "the FRONTIER PASS!$"
# 604 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 605 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting::
# 606 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 355 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 607 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young explorer!\n"
# 608 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I look forward to our next meeting!$"
# 609 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 610 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned::
# 611 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 360 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 612 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: …You've finally returned,\n"
# 613 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "young explorer…\p"
# 614 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Your love of adventure seems to come\n"
# 615 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "deep from within your heart…\p"
# 616 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Yes… You are exactly as I was in\n"
# 617 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "my own youth…\p"
# 618 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "… … …Ah…\p"
# 619 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The passionate!\p"
# 620 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The dangerous!\p"
# 621 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The desperate!\p"
# 622 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Those days of death-defying,\n"
# 623 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "life-affirming adventures are back…$"
# 624 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 625 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter::
# 626 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 375 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 627 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, then!\p"
# 628 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I sense my own courage is off\n"
# 629 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "the meter!$"
# 630 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 631 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_EverythingYouHave::
# 632 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 381 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 633 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Everything you have!\n"
# 634 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I'm braced for it all!$"
# 635 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 636 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis::
# 637 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 386 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 638 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: Hahahah!\n"
# 639 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Remarkable!\l"
# 640 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Yes, it's grand, indeed!\p"
# 641 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young explorer!\p"
# 642 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "You've bested me through and through!\n"
# 643 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Here! I want you to have this!$"
# 644 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 645 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine::
# 646 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 395 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 647 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The Brave Symbol took on\n"
# 648 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "a golden shine!$"
# 649 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 650 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_FarewellForNow::
# 651 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 400 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 652 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Ah, yes! It just goes to show that\n"
# 653 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "I have much to learn still!\p"
# 654 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "May our paths cross again!\n"
# 655 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Farewell for now, young explorer!$"
# 656 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"

# 657 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady::
# 658 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 407 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
# 659 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, when you are ready, take courage\n"
# 660 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "and step forward.$"
