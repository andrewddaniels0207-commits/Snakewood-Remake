# 1 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume
# 5 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition
# 7 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 11 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
# 14 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic
# 16 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName
# 18 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.2byte 0
# 19 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 20 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 21 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	lockall
# 24 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
# 26 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8005, 4
# 28 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 29 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
# 30 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 16 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8007, SE_SAVE
# 32 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 34 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 35 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 36 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 37 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
# 38 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special CallBattlePyramidFunction
# 40 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 41 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	delay 2
# 42 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 23 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, 2
# 44 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop_2
# 45 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop_1:
# 46 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 47 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 48 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 50 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 51 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 52 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop_2:
# 53 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 54 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
# 55 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop_1
# 56 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 57 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 58 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName::
# 59 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special ShowMapNamePopup
# 61 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 0
# 63 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 64 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 65 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 66 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic::
# 67 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	playbgm MUS_B_PYRAMID, FALSE
# 69 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 71 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 73 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 74 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume::
# 75 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setfloorpal
# 77 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 45 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_getstatus
# 79 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 46 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 81 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 47 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case 0, BattleFrontier_BattlePyramidFloor_OnResume_3
# 83 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidFloor_OnResume_4
# 85 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_OnResume_5
# 87 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_1:
# 88 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 54 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 89 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 90 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 55 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 92 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidFloor_OnResume_7
# 93 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_6:
# 94 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 96 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidFloor_OnResume_10
# 97 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_9:
# 98 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, 0
# 100 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidFloor_OnResume_13
# 101 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_12:
# 102 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
# 104 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidFloor_OnResume_16
# 105 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_15:
# 106 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
# 108 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidFloor_OnResume_19
# 109 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_18:
# 110 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_FORFEITED
# 112 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidFloor_OnResume_22
# 113 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_21:
# 114 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 73 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_isbattletype BATTLE_TYPE_TRAINER
# 116 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 118 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 119 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 120 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_3:
# 121 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 122 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 123 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_1
# 124 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 125 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_4:
# 126 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 128 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_1
# 129 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 130 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_5:
# 131 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 132 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 133 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_1
# 134 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 135 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_7:
# 136 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 138 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_6
# 139 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 140 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_10:
# 141 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 59 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 142 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 143 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_9
# 144 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 145 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_13:
# 146 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 148 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_12
# 149 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 150 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_16:
# 151 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 152 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 153 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_15
# 154 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 155 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_19:
# 156 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 158 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_18
# 159 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 160 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume_22:
# 161 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 162 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 163 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_OnResume_21
# 164 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 165 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 166 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty::
# 167 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 168 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_resetparty
# 169 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 170 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 171 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 172 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
# 173 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 83 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 175 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
# 177 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 178 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 179 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 180 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
# 181 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 88 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 182 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
# 183 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 89 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 184 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_clearhelditems
# 185 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 90 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special HealPlayerParty
# 187 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 188 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 189 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 190 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 191 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 193 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 194 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge::
# 195 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 196 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 197 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 98 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 198 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special SavePlayerParty
# 199 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 201 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 100 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_settrainers
# 203 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 205 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 102 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 207 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 208 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 210 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnTransition::
# 211 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 212 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius
# 213 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 108 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 214 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 215 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 216 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 217 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 218 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius::
# 219 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 220 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
# 221 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 222 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 223 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 224 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToNextFloor::
# 225 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 118 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 226 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 227 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 229 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 120 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 230 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	addvar VAR_RESULT, 1
# 231 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 232 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 233 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 122 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 234 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, 7
# 235 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq BattlePyramid_WarpToNextFloor_2
# 236 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToNextFloor_1:
# 237 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 238 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_seedfloor
# 239 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 126 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 240 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 241 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 242 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 243 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 128 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 244 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 245 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 246 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 247 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 248 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 249 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToNextFloor_2:
# 250 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 251 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattlePyramid_WarpToTop
# 252 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattlePyramid_WarpToNextFloor_1
# 253 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 254 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 255 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToTop::
# 256 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 257 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
# 258 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 259 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 260 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 261 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 262 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 263 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_TrainerBattle::
# 264 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 140 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	facilitytrainerbattle FACILITY_BATTLE_PYRAMID
# 266 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 267 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_showhint
# 268 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 142 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 269 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitmessage
# 270 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitbuttonpress
# 272 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 144 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	closemessage
# 274 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 275 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 276 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 277 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 278 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 279 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBall::
# 280 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 150 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setitem
# 282 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 283 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	callstd STD_FIND_ITEM
# 284 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 152 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 285 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_0x8007, 0
# 286 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq BattlePyramid_FindItemBall_2
# 287 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBall_1:
# 288 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 289 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_hideitem
# 290 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 291 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 292 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBall_2:
# 293 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 294 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattlePyramid_FindItemBallEnd
# 295 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattlePyramid_FindItemBall_1
# 296 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 297 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 298 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBallEnd::
# 299 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 300 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 302 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Retire::
# 303 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 163 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 304 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 305 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 306 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 307 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFacility_TrainerBattle_PlaceholderText::
# 309 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 166 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 310 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is a sample message.$"
# 311 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 312 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRest::
# 313 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 170 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 314 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Your BATTLE PYRAMID quest will be\n"
# 315 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "saved so that you may quit for now.\l"
# 316 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Is that okay?$"
# 317 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 318 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRetire::
# 319 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 320 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you sure you want to quit your\n"
# 321 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "PYRAMID quest?$"
# 322 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 323 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp1::
# 324 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 181 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 325 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
# 326 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that direction: {UP_ARROW}$"
# 327 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 328 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft1::
# 329 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 330 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
# 331 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that direction: {LEFT_ARROW}$"
# 332 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight1::
# 334 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 335 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
# 336 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that direction: {RIGHT_ARROW}$"
# 337 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 338 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown1::
# 339 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 196 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 340 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
# 341 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that direction: {DOWN_ARROW}$"
# 342 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 343 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp2::
# 344 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 345 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
# 346 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {UP_ARROW} direction.$"
# 347 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft2::
# 349 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 350 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
# 351 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {LEFT_ARROW} direction.$"
# 352 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight2::
# 354 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 211 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 355 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
# 356 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {RIGHT_ARROW} direction.$"
# 357 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 358 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown2::
# 359 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 360 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
# 361 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {DOWN_ARROW} direction.$"
# 362 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 363 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp3::
# 364 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 365 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
# 366 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that {UP_ARROW} way.$"
# 367 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 368 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft3::
# 369 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 226 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 370 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
# 371 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that {LEFT_ARROW} way.$"
# 372 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 373 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight3::
# 374 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 375 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
# 376 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that {RIGHT_ARROW} way.$"
# 377 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 378 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown3::
# 379 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 236 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 380 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
# 381 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that {DOWN_ARROW} way.$"
# 382 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 383 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp4::
# 384 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 241 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 385 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
# 386 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in the {UP_ARROW} direction.$"
# 387 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 388 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft4::
# 389 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 246 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 390 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
# 391 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in the {LEFT_ARROW} direction.$"
# 392 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 393 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight4::
# 394 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 251 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 395 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
# 396 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in the {RIGHT_ARROW} direction.$"
# 397 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 398 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown4::
# 399 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 256 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 400 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
# 401 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in the {DOWN_ARROW} direction.$"
# 402 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 403 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp5::
# 404 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 261 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 405 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
# 406 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "It's that {UP_ARROW} way.$"
# 407 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 408 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft5::
# 409 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 410 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
# 411 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "It's that {LEFT_ARROW} way.$"
# 412 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 413 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight5::
# 414 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 415 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
# 416 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "It's that {RIGHT_ARROW} way.$"
# 417 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 418 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown5::
# 419 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 276 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 420 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
# 421 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "It's that {DOWN_ARROW} way.$"
# 422 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 423 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp6::
# 424 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 425 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
# 426 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {UP_ARROW} direction.$"
# 427 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 428 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft6::
# 429 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 286 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 430 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
# 431 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {LEFT_ARROW} direction.$"
# 432 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 433 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight6::
# 434 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 291 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 435 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
# 436 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {RIGHT_ARROW} direction.$"
# 437 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 438 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown6::
# 439 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 296 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 440 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
# 441 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {DOWN_ARROW} direction.$"
# 442 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 443 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining1::
# 444 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 301 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 445 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 446 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are eight items left to\n"
# 447 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 448 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 449 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining1::
# 450 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 307 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 451 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 452 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are seven items left to\n"
# 453 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 454 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 455 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining1::
# 456 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 457 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 458 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are six items left to\n"
# 459 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 460 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 461 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining1::
# 462 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 319 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 463 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 464 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are five items left to\n"
# 465 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 466 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 467 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining1::
# 468 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 325 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 469 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 470 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are four items left to\n"
# 471 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 472 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 473 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining1::
# 474 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 331 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 475 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 476 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are three items left to\n"
# 477 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 478 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 479 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining1::
# 480 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 481 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 482 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are two items left to\n"
# 483 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 484 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining1::
# 486 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 487 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 488 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There is one item left to\n"
# 489 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 490 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 491 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining1::
# 492 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 349 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 493 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 494 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There isn't anything left to\n"
# 495 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found!$"
# 496 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 497 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining2::
# 498 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 355 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 499 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 500 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 501 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are eight items\n"
# 502 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 503 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 504 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining2::
# 505 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 362 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 506 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 507 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 508 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are seven items left\n"
# 509 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 510 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 511 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining2::
# 512 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 369 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 513 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 514 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 515 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are six items left\n"
# 516 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 517 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 518 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining2::
# 519 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 376 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 520 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 521 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 522 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are five items left\n"
# 523 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 524 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 525 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining2::
# 526 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 383 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 527 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 528 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 529 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are four items left\n"
# 530 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 531 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 532 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining2::
# 533 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 390 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 534 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 535 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 536 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are three items left\n"
# 537 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 538 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 539 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining2::
# 540 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 397 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 541 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 542 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 543 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are two items left\n"
# 544 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 545 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 546 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining2::
# 547 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 404 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 548 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 549 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 550 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There is just one item\n"
# 551 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 552 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 553 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining2::
# 554 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 411 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 555 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 556 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 557 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There isn't anything left\n"
# 558 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 559 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 560 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining3::
# 561 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 418 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 562 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 563 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are eight items left\n"
# 564 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 565 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 566 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining3::
# 567 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 424 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 568 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 569 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are seven items left\n"
# 570 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 571 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 572 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining3::
# 573 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 430 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 574 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 575 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are six items left\n"
# 576 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 577 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 578 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining3::
# 579 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 436 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 580 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 581 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are five items left\n"
# 582 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 583 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 584 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining3::
# 585 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 442 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 586 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 587 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are four items left\n"
# 588 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 589 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 590 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining3::
# 591 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 448 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 592 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 593 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are three items left\n"
# 594 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 595 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 596 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining3::
# 597 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 454 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 598 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 599 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are two items left\n"
# 600 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 601 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 602 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining3::
# 603 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 460 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 604 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 605 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there's but one item left\n"
# 606 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 607 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 608 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining3::
# 609 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 466 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 610 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 611 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are no more items\n"
# 612 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.\l"
# 613 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You take care now!$"
# 614 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 615 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining4::
# 616 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 473 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 617 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 618 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 619 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be eight more\n"
# 620 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 621 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 622 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining4::
# 623 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 480 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 624 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 625 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 626 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be seven more\n"
# 627 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 628 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 629 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining4::
# 630 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 487 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 631 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 632 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 633 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be six more\n"
# 634 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 635 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 636 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining4::
# 637 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 494 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 638 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 639 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 640 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be five more\n"
# 641 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 642 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 643 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining4::
# 644 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 501 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 645 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 646 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 647 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be four more\n"
# 648 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 649 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 650 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining4::
# 651 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 508 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 652 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 653 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 654 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be three more\n"
# 655 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 656 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 657 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining4::
# 658 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 515 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 659 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 660 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 661 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be two more\n"
# 662 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 663 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 664 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining4::
# 665 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 522 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 666 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 667 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 668 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appears to be only one more\n"
# 669 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "item on the ground.$"
# 670 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 671 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining4::
# 672 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 529 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 673 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 674 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 675 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be no more\n"
# 676 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 677 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 678 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining5::
# 679 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 536 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 680 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 681 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are eight items…$"
# 682 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 683 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining5::
# 684 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 541 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 685 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 686 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are seven items…$"
# 687 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 688 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining5::
# 689 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 546 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 690 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 691 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are six items…$"
# 692 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 693 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining5::
# 694 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 551 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 695 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 696 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are five items…$"
# 697 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 698 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining5::
# 699 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 556 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 700 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 701 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are four items…$"
# 702 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 703 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining5::
# 704 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 561 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 705 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 706 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are three items…$"
# 707 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 708 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining5::
# 709 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 566 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 710 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 711 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are two items…$"
# 712 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 713 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining5::
# 714 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 571 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 715 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 716 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there is one item…$"
# 717 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 718 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining5::
# 719 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 576 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 720 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 721 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are no items…$"
# 722 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 723 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining6::
# 724 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 581 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 725 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 726 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are eight more\n"
# 727 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 728 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 729 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining6::
# 730 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 587 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 731 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 732 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are seven more\n"
# 733 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 734 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 735 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining6::
# 736 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 593 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 737 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 738 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are six more\n"
# 739 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 740 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 741 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining6::
# 742 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 599 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 743 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 744 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are five more\n"
# 745 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 746 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 747 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining6::
# 748 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 605 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 749 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 750 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are four more\n"
# 751 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 752 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 753 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining6::
# 754 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 611 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 755 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 756 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are three more\n"
# 757 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 758 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 759 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining6::
# 760 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 617 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 761 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 762 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are two more\n"
# 763 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 764 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 765 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining6::
# 766 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 623 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 767 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 768 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there is one more\n"
# 769 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "item on this floor.$"
# 770 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 771 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining6::
# 772 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 629 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 773 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 774 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are no more\n"
# 775 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 776 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 777 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining1::
# 778 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 635 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 779 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 780 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still seven tough\n"
# 781 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 782 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 783 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining1::
# 784 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 641 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 785 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 786 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still six tough\n"
# 787 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 788 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 789 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining1::
# 790 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 647 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 791 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 792 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still five tough\n"
# 793 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 794 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 795 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining1::
# 796 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 653 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 797 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 798 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still four tough\n"
# 799 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 800 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 801 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining1::
# 802 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 659 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 803 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 804 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still three tough\n"
# 805 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 806 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 807 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining1::
# 808 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 665 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 809 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 810 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still two tough\n"
# 811 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 812 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 813 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining1::
# 814 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 671 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 815 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 816 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there's still one tough\n"
# 817 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINER other than me!$"
# 818 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 819 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining1::
# 820 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 677 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 821 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 822 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There's no one left that\n"
# 823 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "can beat you!$"
# 824 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 825 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining2::
# 826 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 683 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 827 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 828 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are seven TRAINERS left!\n"
# 829 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 830 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 831 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining2::
# 832 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 689 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 833 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 834 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are six TRAINERS left!\n"
# 835 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 836 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 837 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining2::
# 838 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 695 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 839 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 840 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are five TRAINERS left!\n"
# 841 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 842 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 843 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining2::
# 844 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 701 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 845 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 846 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are four TRAINERS left!\n"
# 847 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 848 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 849 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining2::
# 850 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 707 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 851 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 852 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are three TRAINERS left!\n"
# 853 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 854 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 855 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining2::
# 856 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 713 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 857 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 858 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are two TRAINERS left!\n"
# 859 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 860 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 861 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining2::
# 862 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 719 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 863 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 864 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there's one TRAINER left!\n"
# 865 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I'm sure you will be humbled!$"
# 866 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 867 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining2::
# 868 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 725 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 869 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 870 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are no more TRAINERS\n"
# 871 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "who can engage you!$"
# 872 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 873 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining3::
# 874 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 731 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 875 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 876 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are seven more TRAINERS\n"
# 877 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 878 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 879 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining3::
# 880 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 737 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 881 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 882 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are six more TRAINERS\n"
# 883 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 884 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 885 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining3::
# 886 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 743 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 887 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 888 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are five more TRAINERS\n"
# 889 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 890 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 891 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining3::
# 892 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 749 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 893 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 894 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are four more TRAINERS\n"
# 895 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 896 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 897 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining3::
# 898 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 755 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 899 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 900 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are three more TRAINERS\n"
# 901 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 902 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 903 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining3::
# 904 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 761 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 905 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 906 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are two more TRAINERS\n"
# 907 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them both?$"
# 908 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 909 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining3::
# 910 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 767 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 911 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 912 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there's still one more TRAINER\n"
# 913 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you prevail?$"
# 914 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 915 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining3::
# 916 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 773 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 917 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 918 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You've gone through all the TRAINERS\n"
# 919 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor.$"
# 920 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 921 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining4::
# 922 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 779 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 923 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 924 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the seven TRAINERS left on this floor.$"
# 925 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 926 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining4::
# 927 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 784 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 928 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 929 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the six TRAINERS left on this floor.$"
# 930 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 931 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining4::
# 932 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 789 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 933 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 934 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the five TRAINERS left on this floor.$"
# 935 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 936 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining4::
# 937 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 794 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 938 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 939 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the four TRAINERS left on this floor.$"
# 940 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 941 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining4::
# 942 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 799 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 943 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 944 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the three TRAINERS left on this floor.$"
# 945 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 946 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining4::
# 947 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 804 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 948 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 949 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the two TRAINERS left on this floor.$"
# 950 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 951 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining4::
# 952 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 809 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 953 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could complete your sweep\n"
# 954 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "with the one TRAINER left on this floor.$"
# 955 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 956 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining4::
# 957 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 814 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 958 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There isn't a single person left who\n"
# 959 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "can defeat you now…$"
# 960 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 961 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining5::
# 962 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 819 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 963 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 964 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the seven expert TRAINERS who remain.$"
# 965 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 966 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining5::
# 967 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 824 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 968 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 969 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the six expert TRAINERS who remain.$"
# 970 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 971 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining5::
# 972 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 829 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 973 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 974 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the five expert TRAINERS who remain.$"
# 975 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 976 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining5::
# 977 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 834 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 978 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 979 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the four expert TRAINERS who remain.$"
# 980 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 981 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining5::
# 982 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 839 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 983 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 984 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the three expert TRAINERS who remain.$"
# 985 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 986 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining5::
# 987 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 844 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 988 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 989 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the two expert TRAINERS who remain.$"
# 990 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 991 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining5::
# 992 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 849 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 993 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 994 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the one expert TRAINER who remains.$"
# 995 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 996 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining5::
# 997 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 854 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 998 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Your skills are beyond reproach.\p"
# 999 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are no more TRAINERS here\n"
# 1000 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "who have any chance of beating you.$"
# 1001 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 1002 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining6::
# 1003 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 860 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 1004 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 1005 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the seven remaining TRAINERS?$"
# 1006 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 1007 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining6::
# 1008 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 865 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 1009 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 1010 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the six remaining TRAINERS?$"
# 1011 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 1012 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining6::
# 1013 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 870 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 1014 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 1015 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the five remaining TRAINERS?$"
# 1016 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 1017 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining6::
# 1018 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 875 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 1019 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 1020 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the four remaining TRAINERS?$"
# 1021 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 1022 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining6::
# 1023 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 880 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 1024 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 1025 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the three remaining TRAINERS?$"
# 1026 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 1027 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining6::
# 1028 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 885 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 1029 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 1030 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the two remaining TRAINERS?$"
# 1031 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 1032 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining6::
# 1033 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 890 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 1034 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 1035 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the last remaining TRAINER?$"
# 1036 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 1037 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining6::
# 1038 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 895 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There aren't any TRAINERS left that\n"
# 1040 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "can take you on now…$"
