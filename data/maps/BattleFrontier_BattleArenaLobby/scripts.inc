# 1 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
# 16 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
# 18 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
# 20 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 21 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 22 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 23 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 24 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 25 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnWarp:
# 27 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
# 31 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 35 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 36 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth::
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 41 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 43 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus::
# 45 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_getstatus
# 47 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 50 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
# 51 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 53 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, 0
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 61 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 63 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 65 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 51 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 67 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 69 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 70 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
# 71 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 73 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_isbrain
# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 77 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_2
# 79 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 80 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 81 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 82 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_1::
# 83 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 67 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
# 85 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 69 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 88 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 89 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 90 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_2::
# 91 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
# 93 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_1
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 96 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 98 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon::
# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 104 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
# 105 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
# 107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_givepoints
# 109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 91 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 93 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
# 113 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 115 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 126 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 127 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 128 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
# 129 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 131 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 135 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 137 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 147 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 148 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 150 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
# 151 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkairshow
# 153 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special HealPlayerParty
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 159 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save 0
# 161 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 163 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 165 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 167 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 169 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_2
# 171 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 174 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_1::
# 175 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
# 177 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 179 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 181 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 182 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 183 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_2::
# 185 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 187 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_1
# 189 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 190 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 191 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 192 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_5::
# 193 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 195 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_6::
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
# 201 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 202 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_7::
# 205 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 207 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RecordMatch::
# 211 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge::
# 217 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 218 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 219 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
# 221 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 223 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
# 225 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 227 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save CHALLENGE_STATUS_SAVING
# 229 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 231 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 233 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 235 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 237 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
# 239 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 240 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 241 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 242 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Attendant::
# 243 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock
# 245 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	faceplayer
# 247 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 249 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 251 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 252 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 253 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
# 255 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 256 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 257 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 258 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
# 259 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
# 261 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 263 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 265 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 266 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 267 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 268 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_2::
# 269 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
# 271 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 274 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_3::
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 269 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_4::
# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 283 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 286 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_5::
# 287 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 290 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 291 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 292 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
# 293 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 287 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
# 295 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 297 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 291 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 299 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 302 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_1::
# 303 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkineligible
# 305 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 306 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 307 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_6
# 309 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 310 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 311 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 312 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_5::
# 313 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 309 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 315 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 311 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 316 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 317 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 313 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 319 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 321 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 317 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 323 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 325 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 327 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 323 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 329 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 325 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 331 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 327 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 332 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
# 333 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_9
# 335 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 337 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 338 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_8::
# 339 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 333 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 340 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 341 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 342 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 343 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 344 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_3::
# 345 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 346 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 347 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 347 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_1
# 349 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 350 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 351 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 352 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_4::
# 353 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 352 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 354 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 355 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 353 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_1
# 357 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 358 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_6::
# 361 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 358 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
# 363 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 359 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_5
# 365 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 366 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 367 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 368 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_9::
# 369 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 364 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 370 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 371 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 365 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 372 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_8
# 373 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 374 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 375 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_12::
# 377 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 370 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 378 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 379 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 380 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 381 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 382 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_13::
# 383 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 376 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
# 385 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 386 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 387 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_14::
# 389 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 382 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 390 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 391 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 392 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 393 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 394 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
# 395 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 388 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 397 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 390 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 399 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 392 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 400 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_init
# 401 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 394 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 402 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
# 403 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 404 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 405 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 406 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 407 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 400 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 408 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 409 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 402 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 410 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 404 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 412 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	delay 2
# 413 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 406 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 414 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 415 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 408 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 416 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 417 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 410 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 418 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
# 419 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_1
# 421 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 422 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 423 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 424 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_1::
# 425 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 426 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
# 427 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 428 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 429 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 430 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
# 431 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 433 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 435 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 436 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
# 437 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 438 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 439 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 441 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 433 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_50
# 443 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_2
# 445 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 446 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_1::
# 449 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 439 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
# 451 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 452 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_5
# 453 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 454 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 456 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_4::
# 457 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
# 459 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 447 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 460 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 461 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 463 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 464 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 465 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_2::
# 467 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
# 469 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_1
# 471 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 472 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 474 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_5::
# 475 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
# 477 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 478 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_4
# 479 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 480 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 481 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 482 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge::
# 483 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 467 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
# 485 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 469 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 486 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
# 487 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 488 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 489 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 490 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons::
# 491 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 492 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 494 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_2::
# 495 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 496 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
# 497 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 498 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 499 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 500 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_3::
# 501 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 490 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen
# 503 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 504 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 505 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 506 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50::
# 507 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 496 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 508 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 509 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 498 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 511 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 500 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 513 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 515 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 516 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen::
# 519 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 508 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 521 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 522 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 523 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 524 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 525 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 527 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 528 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 529 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 530 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed::
# 531 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 533 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 522 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 534 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 535 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 536 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 537 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
# 539 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 540 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 541 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 530 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 543 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 544 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 545 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 546 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
# 547 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 549 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 550 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 552 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge::
# 553 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	release
# 555 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 556 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 557 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 558 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50::
# 559 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
# 561 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
# 563 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 565 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 2, 2
# 567 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 556 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 569 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 571 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 573 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 575 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 2, 2
# 577 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 579 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 580 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 581 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 582 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor::
# 583 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 573 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 585 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 575 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 587 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 577 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 589 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 579 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 591 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 581 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 592 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 593 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 583 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 595 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 585 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 597 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 587 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 599 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 589 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 601 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 591 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 602 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 603 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 604 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 605 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 606 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor::
# 607 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 597 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 609 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 599 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 610 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 611 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 601 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 612 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 613 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 614 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 615 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 616 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor::
# 617 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 607 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 618 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 619 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 609 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 620 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 621 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 611 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 623 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 613 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 624 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 625 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 615 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 626 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 627 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 617 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 628 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 629 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 619 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 630 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 631 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 621 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 632 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 633 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 623 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 634 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 635 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 625 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 636 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 637 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 627 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 638 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 639 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 640 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 641 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 642 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor::
# 643 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 633 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 644 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 645 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 635 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 647 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 637 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 649 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 639 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 650 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 651 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 652 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 653 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 654 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen::
# 655 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 644 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 656 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
# 657 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
# 659 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 648 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 660 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 661 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 650 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 662 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 11, 2
# 663 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 664 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 665 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 654 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 666 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 667 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 656 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 668 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 669 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 670 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 671 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 660 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 11, 2
# 673 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 662 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 674 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 675 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 676 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 677 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor::
# 679 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 669 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 680 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 681 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 671 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 682 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 683 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 684 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 685 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 675 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 686 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 687 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 677 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 688 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 689 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 679 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 691 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 693 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 683 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 694 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 695 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 685 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 696 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 697 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 698 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 699 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 700 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor::
# 701 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 702 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 703 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 693 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 704 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 705 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 695 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 706 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 707 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 708 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 709 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 699 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 710 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 711 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 701 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 712 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 713 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 715 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 705 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 717 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 707 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 718 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 719 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 709 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 720 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 721 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 722 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 723 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 724 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
# 725 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 726 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 727 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 728 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_ARENA
# 729 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 718 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 730 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitbuttonpress
# 731 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 720 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 732 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special RemoveRecordsWindow
# 733 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 722 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 734 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 735 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 736 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 737 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 738 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Youngster::
# 739 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 728 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 740 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
# 741 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 742 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 743 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 744 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Man::
# 745 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 734 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 746 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
# 747 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 748 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 749 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 750 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Camper::
# 751 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 740 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
# 753 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 754 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 755 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 756 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Woman::
# 757 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 746 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 758 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
# 759 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 760 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 761 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 762 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
# 763 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 764 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 765 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 754 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 766 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 767 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 756 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 768 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 769 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 770 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 771 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 772 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
# 773 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 774 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 775 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 764 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 776 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 777 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 766 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 778 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
# 779 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 780 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 781 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 782 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1::
# 783 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 784 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 785 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 786 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_3::
# 787 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 788 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 788 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_BattleRules
# 789 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 789 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 790 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1
# 791 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 792 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 793 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 794 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_4::
# 795 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 796 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_MindRules
# 797 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 795 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 798 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1
# 799 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 800 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 801 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 802 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_5::
# 803 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 800 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 804 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_SkillRules
# 805 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 801 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 806 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1
# 807 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 808 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 809 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 810 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_6::
# 811 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 806 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 812 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_BodyRules
# 813 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 807 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 814 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1
# 815 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 816 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 817 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 818 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_7::
# 819 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 812 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 820 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 821 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 813 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 822 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1
# 823 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 824 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 825 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 826 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_8::
# 827 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 818 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 828 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 829 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 819 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 830 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1
# 831 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 832 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 833 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 834 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BattleRules::
# 835 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 824 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 836 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 837 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 826 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 838 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 839 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 840 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 841 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 842 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_MindRules::
# 843 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 832 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 844 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 845 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 834 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 847 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 848 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 849 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 850 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SkillRules::
# 851 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 840 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 852 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 853 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 842 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 854 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 855 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 856 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 857 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 858 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BodyRules::
# 859 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 848 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 861 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 850 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 863 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 864 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 865 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 866 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExitRules::
# 867 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 869 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 870 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 871 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 872 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena::
# 873 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 874 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Where the battling spirit of TRAINERS\n"
# 875 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "is put to the test!\p"
# 876 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I welcome you to the BATTLE ARENA!\p"
# 877 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I am your guide to the Set KO Tourney!$"
# 878 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 879 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge::
# 880 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 867 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 881 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Now, do you wish to take\n"
# 882 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the BATTLE ARENA challenge?$"
# 883 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 884 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge::
# 885 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 872 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 886 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
# 887 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "another occasion!$"
# 888 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 889 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainChallenge::
# 890 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 877 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 891 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the BATTLE ARENA, we undertake\n"
# 892 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Set KO Tourney.\p"
# 893 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "All participants enter with a team of\n"
# 894 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three POKéMON.\p"
# 895 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The three POKéMON must be lined up in\n"
# 896 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the order in which they are to appear.\p"
# 897 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "During battle, the POKéMON will appear\n"
# 898 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "one at a time in the preset order.\p"
# 899 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Once a POKéMON enters battle, it must\n"
# 900 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "remain out until the match is decided.\p"
# 901 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a match remains undecided in\n"
# 902 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns, it goes to judging.\p"
# 903 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you wish to interrupt your challenge,\n"
# 904 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "please save the game.\p"
# 905 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you don't save, you will not be able\n"
# 906 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "to continue with your challenge.\p"
# 907 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you pull off the feat of beating\n"
# 908 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "seven TRAINERS in succession,\l"
# 909 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "we will present you with Battle Points.$"
# 910 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 911 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OkayToSave::
# 912 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 899 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 913 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Before showing you to the BATTLE\n"
# 914 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "ARENA, you must save. Is that okay?$"
# 915 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 916 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WhichLevelMode::
# 917 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 918 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The BATTLE ARENA offers two levels\n"
# 919 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 920 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Which is your choice?$"
# 921 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 922 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_SelectThreeMons::
# 923 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 910 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 924 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Very well, now select your\n"
# 925 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three POKéMON, please.$"
# 926 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 927 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen::
# 928 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 915 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 929 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 930 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You do not have the three POKéMON\n"
# 931 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "required for entry.\p"
# 932 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "To qualify, you must bring three\n"
# 933 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "different kinds of POKéMON.\p"
# 934 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "They also must not hold the same\n"
# 935 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kinds of items.\p"
# 936 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 937 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 938 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd::
# 939 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 926 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When you have made your preparations,\n"
# 941 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "please do return.$"
# 942 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 943 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50::
# 944 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 931 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 945 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 946 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You do not have the three POKéMON\n"
# 947 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "required for entry.\p"
# 948 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "To qualify, you must bring three\n"
# 949 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "different kinds of POKéMON.\p"
# 950 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The three different POKéMON\n"
# 951 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "must all be Level 50 or lower.\p"
# 952 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "They also must not hold the same\n"
# 953 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kinds of items.\p"
# 954 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 955 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 956 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_GuideYouToArena::
# 957 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 944 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 958 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I shall now guide you to\n"
# 959 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the BATTLE ARENA.$"
# 960 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 961 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown::
# 962 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 949 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 963 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 964 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You did not save the game before\n"
# 965 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "shutting down, did you?\p"
# 966 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "It is unfortunate, but that has\n"
# 967 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "resulted in your disqualification\l"
# 968 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "from your challenge.\p"
# 969 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You may, of course, start with a fresh\n"
# 970 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "challenge.$"
# 971 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 972 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins::
# 973 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 960 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 974 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We congratulate you for your splendid\n"
# 975 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "string of wins over seven TRAINERS!$"
# 976 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 977 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordAchievement::
# 978 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 965 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 979 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your achievement will be recorded.\n"
# 980 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait while I save the game.$"
# 981 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 982 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize::
# 983 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 970 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 984 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In commemoration of your 7-win streak,\n"
# 985 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "we present you with this prize.$"
# 986 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 987 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize::
# 988 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 975 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 989 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 990 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 991 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 992 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize::
# 993 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 980 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 994 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Oh?\n"
# 995 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your BAG seems to be full.\p"
# 996 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I urge you to clear space and\n"
# 997 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "return for your prize.$"
# 998 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 999 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave::
# 1000 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 987 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1001 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Thank you so much for participating!\p"
# 1002 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait while I save the game.$"
# 1003 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1004 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2::
# 1005 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 992 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1006 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
# 1007 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "another occasion!$"
# 1008 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1009 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame::
# 1010 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 997 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1011 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We have been looking forward to\n"
# 1012 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "your arrival.\p"
# 1013 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Before I show you to the BATTLE\n"
# 1014 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "ARENA, I must save the game.\l"
# 1015 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait.$"
# 1016 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1017 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordLastMatch::
# 1018 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1019 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Shall I record your last BATTLE ARENA\n"
# 1020 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "match on your FRONTIER PASS?$"
# 1021 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1022 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack::
# 1023 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1010 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1024 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I lost on the REFEREE's decision…\p"
# 1025 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I don't think it was a good idea to only\n"
# 1026 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "use defensive moves and not attack…$"
# 1027 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1028 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked::
# 1029 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1030 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I won in judging!\p"
# 1031 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Landing hits consistently on\n"
# 1032 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the opponent's POKéMON worked!$"
# 1033 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1034 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw::
# 1035 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1022 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Our match was declared a draw.\p"
# 1037 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When we ran out of time, both my\n"
# 1038 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "POKéMON and the opponent's had about\l"
# 1039 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the same amount of HP left.$"
# 1040 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1041 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant::
# 1042 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1029 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the BATTLE ARENA, the order of\n"
# 1044 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "POKéMON is totally important.\p"
# 1045 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "For example, if your first POKéMON\n"
# 1046 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "has certain type disadvantages,\l"
# 1047 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "try making your second POKéMON one\l"
# 1048 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "with moves that are super effective\l"
# 1049 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "against the first one.\p"
# 1050 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I think that will be a good way of\n"
# 1051 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "making an effective team.$"
# 1052 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1053 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RulesAreListed::
# 1054 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1041 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney's rules are listed.$"
# 1056 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1057 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading::
# 1058 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1059 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 1060 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1061 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules::
# 1062 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1049 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney has special rules,\n"
# 1064 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "unlike standard battles.\p"
# 1065 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "First, one battle lasts only\n"
# 1066 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns.\p"
# 1067 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If the outcome is not decided after\n"
# 1068 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns, it goes to judging.\p"
# 1069 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The REFEREE will choose the winner\n"
# 1070 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "based on how the POKéMON battled.\p"
# 1071 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Also, a POKéMON cannot be switched out\n"
# 1072 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "until its battle's outcome is decided.$"
# 1073 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1074 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainMindRules::
# 1075 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1062 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1076 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The first judging factor is “Mind.”\n"
# 1077 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor evaluates how aggressive\l"
# 1078 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the battlers were.\p"
# 1079 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The judging is based on how often\n"
# 1080 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the TRAINERS ordered the use of\l"
# 1081 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "offensive moves.$"
# 1082 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1083 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules::
# 1084 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1071 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1085 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The second judging factor is “Skill.”\n"
# 1086 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor evaluates how effectively\l"
# 1087 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "POKéMON moves were used.\p"
# 1088 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a move worked successfully,\n"
# 1089 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Skill rating goes up.\p"
# 1090 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a move failed, the Skill rating\n"
# 1091 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "is lowered.\p"
# 1092 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If it was an offensive move, the Skill\n"
# 1093 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "rating goes up if the move was “super\l"
# 1094 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "effective” and goes down if it was\l"
# 1095 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "“not very effective.”\p"
# 1096 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Skill rating will not go up for\n"
# 1097 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "moves such as PROTECT and DETECT.\p"
# 1098 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If the opponent used PROTECT or\n"
# 1099 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "DETECT, and your POKéMON failed to\l"
# 1100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "hit with a move, its Skill rating will not\l"
# 1101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "go down.$"
# 1102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules::
# 1104 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1091 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1105 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The third judging factor is “Body.”\n"
# 1106 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor is based on how much HP\l"
# 1107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "remained at the end of a battle.\p"
# 1108 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The rating takes into account how much\n"
# 1109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "HP a POKéMON had at the start of\l"
# 1110 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "battle, and what remained at the end.$"
# 1111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1112 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon::
# 1113 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1114 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "A victory snatched from the ARENA\n"
# 1115 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "TYCOON, and a seven-TRAINER sweep!\p"
# 1116 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We congratulate you on your most\n"
# 1117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "splendid challenge!$"
# 1118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 1119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints::
# 1120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
# 1121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger, in recognition of\n"
# 1122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "your indefatigable spirit, please\l"
# 1123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "accept these Battle Point(s).$"
