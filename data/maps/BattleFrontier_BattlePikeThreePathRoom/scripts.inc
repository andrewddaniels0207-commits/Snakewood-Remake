# 1 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoom_OnResume
# 5 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 10 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeThreePathRoom_OnWarp
# 7 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 11 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_GetChallengeStatus
# 14 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpToLobby
# 16 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge
# 18 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 7 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom
# 20 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_GivePikeQueenHint
# 22 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 24 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 27 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 28 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_OnWarp:
# 29 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_TurnPlayerNorth
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 16 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.2byte 0
# 33 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 34 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_TurnPlayerNorth::
# 35 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 37 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 22 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 39 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 41 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 42 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GetChallengeStatus::
# 43 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 27 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_getstatus
# 45 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 46 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 47 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 48 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpToLobby::
# 49 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 51 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitstate
# 53 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 55 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 56 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge::
# 57 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lockall
# 59 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume
# 61 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 63 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 41 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_save CHALLENGE_STATUS_SAVING
# 65 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 66 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	playse SE_SAVE
# 67 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitse
# 69 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 71 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 45 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 73 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 46 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	special SavePlayerParty
# 75 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 47 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 77 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	closemessage
# 81 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	releaseall
# 83 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_settrainers
# 85 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 99
# 87 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 88 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 89 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 90 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant::
# 91 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 93 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 59 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 96 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_3
# 97 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 98 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 3, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_4
# 99 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 100 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 5, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_5
# 101 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 7, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_6
# 103 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 9, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_7
# 105 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 69 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 106 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 11, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_8
# 107 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 108 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 13, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_9
# 109 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1:
# 110 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 112 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_3:
# 113 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 114 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom1
# 115 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1
# 116 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 117 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_4:
# 118 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom3
# 120 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1
# 121 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 122 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_5:
# 123 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 124 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom5
# 125 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1
# 126 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 127 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_6:
# 128 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 66 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom7
# 130 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1
# 131 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 132 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_7:
# 133 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom9
# 135 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1
# 136 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 137 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_8:
# 138 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom11
# 140 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1
# 141 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 142 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_9:
# 143 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 144 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom13
# 145 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1
# 146 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 147 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 148 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom1::
# 149 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 151 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 79 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 153 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1, MSGBOX_DEFAULT
# 155 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 81 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 156 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 157 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 158 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 159 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 160 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom3::
# 161 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 163 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 87 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 165 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 88 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3, MSGBOX_DEFAULT
# 167 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 89 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 168 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 169 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 170 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 171 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 172 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom5::
# 173 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 94 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 175 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 177 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 96 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 181 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 182 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 183 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 184 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom7::
# 185 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 102 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 187 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 188 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 189 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 104 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 190 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 192 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 193 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 194 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 195 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 196 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom9::
# 197 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 110 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 198 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 199 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 201 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 112 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9, MSGBOX_DEFAULT
# 203 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 205 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 206 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 207 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 208 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom11::
# 209 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 118 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 210 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 211 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 213 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 120 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 214 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 217 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 218 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 219 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 220 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom13::
# 221 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 126 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 223 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 225 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 128 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13, MSGBOX_DEFAULT
# 227 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
# 229 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 230 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 231 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 232 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge::
# 233 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 234 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge, MSGBOX_YESNO
# 235 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 236 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 237 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 136 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 238 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_3
# 239 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 138 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_4
# 241 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_1:
# 242 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 244 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 245 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 246 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_3:
# 247 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 248 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge
# 249 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_1
# 250 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 251 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_4:
# 252 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 253 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge
# 254 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_1
# 255 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 256 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 257 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_PauseChallenge::
# 258 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 146 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 259 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_saveparty
# 260 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData
# 262 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 148 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 264 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	special LoadPlayerParty
# 266 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 150 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 267 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_save CHALLENGE_STATUS_PAUSED
# 268 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 269 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	playse SE_SAVE
# 270 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 152 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitse
# 272 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 274 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 154 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 275 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_reset
# 276 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 277 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 278 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 279 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge::
# 280 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 159 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit, MSGBOX_YESNO
# 282 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 160 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 283 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 284 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 161 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 285 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case YES, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_3
# 286 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 163 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 287 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_4
# 288 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 289 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_5
# 290 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_1:
# 291 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 168 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 293 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 294 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 295 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_3:
# 296 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 162 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 297 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_PauseChallenge
# 298 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_1
# 299 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 300 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_4:
# 301 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 164 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 302 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge
# 303 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_1
# 304 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 305 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_5:
# 306 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 166 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge
# 308 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_1
# 309 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 310 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 311 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge::
# 312 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge
# 314 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 316 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 317 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 318 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 319 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 320 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge_3
# 322 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge_1:
# 323 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 180 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 325 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 326 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 327 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge_3:
# 328 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 329 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePike_EventScript_Retire
# 330 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge_1
# 331 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 332 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom::
# 334 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 335 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_sethintroom
# 336 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 338 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom_2
# 339 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom_1:
# 340 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 341 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 255
# 342 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 344 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom_2:
# 345 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 346 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_SetPikeQueenHint
# 347 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom_1
# 348 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 350 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_SetPikeQueenHint::
# 351 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 194 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 352 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 1
# 353 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 354 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 355 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 356 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GivePikeQueenHint::
# 357 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 358 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	applymovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverApproachPlayer
# 359 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 360 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmovement 0
# 361 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 362 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lockall
# 363 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 364 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent, MSGBOX_DEFAULT
# 365 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 203 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 366 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	releaseall
# 367 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 368 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	applymovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverReturnToPos
# 369 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 370 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmovement 0
# 371 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 372 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 255
# 373 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 374 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 375 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 376 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver::
# 377 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 211 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 378 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethint
# 379 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 212 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 380 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	compare VAR_RESULT, PIKE_HINT_BRAIN
# 381 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_2
# 382 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_1:
# 383 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 215 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 384 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 385 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 386 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 387 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 217 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 388 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose, MSGBOX_YESNO
# 389 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 218 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 390 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 391 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 219 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 392 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case YES, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_6
# 393 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 394 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_7
# 395 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 396 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_8
# 397 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4:
# 398 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 226 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 399 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 400 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 401 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 402 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_2:
# 403 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 404 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveBrainHint
# 405 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_1
# 406 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 407 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_6:
# 408 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 220 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint
# 410 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4
# 411 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 412 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_7:
# 413 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 222 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 414 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint
# 415 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4
# 416 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 417 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_8:
# 418 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 224 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint
# 420 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4
# 421 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 422 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 423 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint::
# 424 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 425 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence, MSGBOX_DEFAULT
# 426 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 232 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 427 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 428 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 429 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 430 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 431 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint::
# 432 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 237 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 433 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethintroomid
# 434 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 238 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 435 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 436 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 239 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 437 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_LEFT, BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_3
# 438 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 241 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 439 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_CENTER, BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_4
# 440 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 243 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 441 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_RIGHT, BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_5
# 442 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_1:
# 443 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 444 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 445 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_3:
# 446 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 240 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 447 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveLeftRoomHint
# 448 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_1
# 449 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 450 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_4:
# 451 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 242 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 452 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveCenterRoomHint
# 453 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_1
# 454 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 455 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_5:
# 456 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 244 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 457 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveRightRoomHint
# 458 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_1
# 459 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 460 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 461 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveLeftRoomHint::
# 462 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 250 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 463 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath, MSGBOX_DEFAULT
# 464 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 251 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 465 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint
# 466 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	return
# 467 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 468 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 469 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveCenterRoomHint::
# 470 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 255 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 471 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath, MSGBOX_DEFAULT
# 472 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 256 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 473 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint
# 474 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	return
# 475 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 476 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 477 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveRightRoomHint::
# 478 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 260 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 479 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath, MSGBOX_DEFAULT
# 480 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 261 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 481 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint
# 482 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	return
# 483 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint::
# 486 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 487 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethint
# 488 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 489 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 490 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 267 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 491 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_NOSTALGIA, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_3
# 492 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 269 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 493 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_WHISPERING, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_4
# 494 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 495 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_POKEMON, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_5
# 496 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 497 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_PEOPLE, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_6
# 498 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_1:
# 499 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 500 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 501 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_3:
# 502 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 268 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 503 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintNostalgia
# 504 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_1
# 505 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 506 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_4:
# 507 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 270 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 508 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintWhispering
# 509 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_1
# 510 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 511 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_5:
# 512 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 513 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPokemon
# 514 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_1
# 515 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 516 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_6:
# 517 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 274 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 518 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPeople
# 519 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_1
# 520 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 521 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 522 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintNostalgia::
# 523 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 280 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 524 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga, MSGBOX_DEFAULT
# 525 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 526 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 527 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 528 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 529 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 530 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintWhispering::
# 531 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 286 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 532 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering, MSGBOX_DEFAULT
# 533 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 287 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 534 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 535 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 536 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 537 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 538 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPokemon::
# 539 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 292 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 540 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon, MSGBOX_DEFAULT
# 541 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 293 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 542 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 543 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 544 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 545 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 546 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPeople::
# 547 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 298 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 548 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople, MSGBOX_DEFAULT
# 549 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 299 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 550 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 551 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 552 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 553 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 554 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveBrainHint::
# 555 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 304 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 556 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock
# 557 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 305 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 558 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	faceplayer
# 559 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 306 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 560 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence, MSGBOX_DEFAULT
# 561 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 307 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 562 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	release
# 563 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	end
# 564 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 565 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 566 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 311 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 567 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverApproachPlayer:
# 568 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 312 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 569 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_left
# 570 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 571 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_left
# 572 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 314 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 573 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 574 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 315 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 575 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 576 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 316 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 577 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 578 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 317 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 579 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 580 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 318 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 581 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	step_end
# 582 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 583 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 321 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 584 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverReturnToPos:
# 585 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 322 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 586 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 587 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 323 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 588 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 589 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 324 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 590 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 591 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 325 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 592 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 593 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 326 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 594 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_right
# 595 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 327 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 596 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_right
# 597 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 328 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 598 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	face_down
# 599 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 329 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 600 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	step_end
# 601 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 602 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1::
# 603 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 332 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 604 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 605 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 1st room…$"
# 606 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 607 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3::
# 608 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 609 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 610 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 3rd room…$"
# 611 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 612 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5::
# 613 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 342 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 614 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 615 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 5th room…$"
# 616 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 617 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7::
# 618 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 347 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 619 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 620 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 7th room…$"
# 621 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 622 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9::
# 623 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 352 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 624 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 625 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 9th room…$"
# 626 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 627 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11::
# 628 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 357 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 629 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 630 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 11th room…$"
# 631 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 632 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13::
# 633 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 362 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 634 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
# 635 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "the 13th room…$"
# 636 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 637 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge::
# 638 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 367 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 639 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Will you continue with\n"
# 640 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "your challenge?$"
# 641 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 642 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit::
# 643 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 372 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 644 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Would you like to save your challenge\n"
# 645 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "and quit the game for now?$"
# 646 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 647 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge::
# 648 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 377 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 649 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Do you wish to retire from your\n"
# 650 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Battle Choice challenge?$"
# 651 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 652 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume::
# 653 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 382 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 654 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "We've been awaiting your return…\p"
# 655 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Before resuming your Battle Choice\n"
# 656 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "challenge, let me save the game…$"
# 657 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 658 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge::
# 659 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 388 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 660 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Please do enjoy your Battle Choice\n"
# 661 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "challenge…$"
# 662 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 663 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData::
# 664 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 393 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 665 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I am saving your data…\n"
# 666 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "A little time, please…$"
# 667 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 668 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack::
# 669 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 398 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 670 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "The path is blocked!\n"
# 671 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "And there is no turning back…$"
# 672 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 673 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose::
# 674 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 403 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 675 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I beg your pardon, but…\p"
# 676 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Are you perhaps finding it difficult\n"
# 677 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "to choose your path?$"
# 678 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 679 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence::
# 680 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 409 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 681 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I see…\n"
# 682 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I apologize for my impertinence…$"
# 683 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 684 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath::
# 685 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 414 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 686 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
# 687 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "about the path on the right…$"
# 688 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 689 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath::
# 690 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 419 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 691 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
# 692 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "about the path in the center…$"
# 693 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 694 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath::
# 695 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 424 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 696 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
# 697 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "about the path on the left…$"
# 698 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 699 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon::
# 700 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 429 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 701 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "It seems to have the distinct aroma\n"
# 702 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "of POKéMON wafting around it…$"
# 703 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 704 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople::
# 705 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 434 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 706 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Is it… A TRAINER?\n"
# 707 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I sense the presence of people…$"
# 708 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 709 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering::
# 710 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 439 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 711 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I seem to have heard something…\n"
# 712 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "It may have been whispering…$"
# 713 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 714 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga::
# 715 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 444 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 716 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "For some odd reason, I felt a wave\n"
# 717 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "of nostalgia coming from it…$"
# 718 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 719 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent::
# 720 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 449 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 721 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I am sorry to say…\p"
# 722 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "A terrifying event, yes, a horrible one,\n"
# 723 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "is about to befall you…\p"
# 724 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I urge you to pay the utmost care\n"
# 725 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "and prepare for the worst…$"
# 726 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"

# 727 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence::
# 728 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 457 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
# 729 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "From every path I sense a dreadful\n"
# 730 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "presence…$"
