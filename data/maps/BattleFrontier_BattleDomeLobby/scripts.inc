# 1 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_OnResume
# 5 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 7 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.byte 0
# 10 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus
# 14 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving
# 16 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 7 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge
# 18 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleDomeLobby_EventScript_WonChallenge
# 20 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 9 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleDomeLobby_EventScript_LostChallenge
# 22 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 25 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnResume::
# 26 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 27 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_initresultstree
# 28 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 30 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 31 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 21 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 22 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnWarp:
# 35 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 36 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	# 20 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 24 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth
# 39 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	# 21 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 42 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 43 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth::
# 45 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 49 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 51 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 52 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus::
# 53 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_getstatus
# 55 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 56 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 57 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 58 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving::
# 59 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 61 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 48 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 63 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 50 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 65 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK, 0
# 67 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 69 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 71 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 73 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 75 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 77 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 78 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 79 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 80 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge::
# 81 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 83 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 84 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 85 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 72 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 86 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_isbrain
# 87 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 74 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 89 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_2
# 91 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 92 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 93 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_1::
# 95 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 96 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints
# 99 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 100 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 101 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_2::
# 103 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce
# 105 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_1
# 107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce::
# 111 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 94 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker, MSGBOX_DEFAULT
# 113 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 114 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 115 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 116 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints::
# 117 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints, MSGBOX_DEFAULT
# 119 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_givepoints
# 121 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 104 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 123 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 125 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 127 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 129 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 112 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 131 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 133 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_HAS_WON_CHALLENGE, TRUE
# 137 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, TRUE
# 139 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 141 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 143 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 145 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle
# 147 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LostChallenge::
# 151 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 153 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 155 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 138 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 157 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 159 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 161 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 163 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 165 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 167 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 169 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 173 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 174 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 175 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 177 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle::
# 179 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save 0
# 181 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 164 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 183 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 185 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 187 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 189 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_2
# 191 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 192 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 193 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_1::
# 195 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
# 197 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 198 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 201 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 202 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_2::
# 205 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 193 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 207 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_1
# 209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 210 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_5::
# 213 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 215 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 216 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 218 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_6::
# 219 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 205 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_RecordBattle
# 221 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 224 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle_7::
# 225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 227 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 228 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 229 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 230 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RecordBattle::
# 231 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 234 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndChallenge::
# 237 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 227 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 243 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 229 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 245 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 246 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 248 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge::
# 249 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 250 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 237 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou, MSGBOX_DEFAULT
# 253 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2
# 255 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 257 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 243 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save CHALLENGE_STATUS_SAVING
# 259 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 245 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 249 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 266 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 253 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge
# 269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 270 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 271 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 272 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant::
# 273 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 259 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 274 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 275 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 276 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 277 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 279 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 281 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 283 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 284 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 286 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant::
# 287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 273 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 275 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 291 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 277 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 292 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 293 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 279 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 294 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 281 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 297 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 298 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 300 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome::
# 301 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 303 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 305 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 306 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_2
# 307 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 310 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_1::
# 311 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 312 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 313 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_4
# 315 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 316 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 318 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_2::
# 319 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 302 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles
# 321 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 322 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_1
# 323 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 324 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 325 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 326 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_4::
# 327 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles
# 329 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 330 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 331 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge::
# 333 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 335 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 315 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 336 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_2
# 337 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 338 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 339 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 340 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_1::
# 341 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 343 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 321 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_5
# 345 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 346 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 347 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 348 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_4::
# 349 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 351 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 352 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 353 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 354 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 356 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_2::
# 357 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 343 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 358 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge
# 359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 360 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_1
# 361 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 362 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_5::
# 365 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 349 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 366 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge
# 367 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 368 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_4
# 369 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 370 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 371 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 372 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_8::
# 373 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 355 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 374 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge
# 375 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 376 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 377 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 378 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_9::
# 379 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 361 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 380 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge
# 381 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 382 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 383 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_10::
# 385 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 367 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 387 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 388 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 389 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 390 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_11::
# 391 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 373 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 392 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 393 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 394 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 395 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 396 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge::
# 397 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 379 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 398 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
# 399 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 381 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 400 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 401 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 402 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 403 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 404 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 406 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_1::
# 407 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 393 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 408 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkineligible
# 409 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 410 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 411 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 396 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 412 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_6
# 413 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 414 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 415 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 416 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_5::
# 417 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 418 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 403 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 421 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 405 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 422 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 423 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 424 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 425 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 409 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 426 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 427 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 411 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 428 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 429 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 430 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 431 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 433 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 435 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 436 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
# 437 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 438 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_9
# 439 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 440 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 441 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 442 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_8::
# 443 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 445 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 446 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_3::
# 449 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 438 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 451 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 439 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 452 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_1
# 453 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 454 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 456 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_4::
# 457 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 459 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 445 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 460 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_1
# 461 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 462 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 463 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 464 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_6::
# 465 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 466 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons
# 467 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 451 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_5
# 469 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 470 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 472 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_9::
# 473 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 474 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 475 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 457 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 476 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_8
# 477 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 478 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 479 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 480 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_12::
# 481 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 483 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 484 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_13::
# 487 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 488 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge
# 489 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 490 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_14::
# 493 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 474 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 495 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 496 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge::
# 499 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 500 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 501 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 502 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 503 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_init
# 505 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 486 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 506 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 507 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 488 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 508 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 509 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 490 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 510 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 511 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 492 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 513 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	delay 2
# 515 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 496 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 516 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 517 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 498 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 518 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 519 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 500 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
# 521 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 522 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_2
# 523 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 524 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 525 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 526 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_1::
# 527 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 506 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_inittrainers
# 529 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 530 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 531 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 532 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_2::
# 533 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 534 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed
# 535 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 513 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_1
# 537 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 538 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 540 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge::
# 541 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 518 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 543 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 544 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 545 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 522 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 546 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_settrainers
# 547 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 524 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome, MSGBOX_DEFAULT
# 549 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 550 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 551 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 528 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 552 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor
# 553 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 530 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 555 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 556 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 23, 6
# 557 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 534 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 558 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 559 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 536 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 561 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 562 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 563 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 564 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge::
# 565 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 567 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 543 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_2
# 569 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 570 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 571 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 572 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_1::
# 573 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 574 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 575 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 549 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_5
# 577 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 578 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 579 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 580 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_4::
# 581 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 582 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge
# 583 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 584 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 585 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 586 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_2::
# 587 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 560 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge
# 589 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 561 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 590 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_1
# 591 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 592 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 593 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 594 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_5::
# 595 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge
# 597 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 567 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_4
# 599 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 600 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 601 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 602 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons::
# 603 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 604 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 605 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 606 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_2::
# 607 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 581 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50
# 609 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 610 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 611 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 612 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons_3::
# 613 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 587 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 614 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen
# 615 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 616 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 617 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 618 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50::
# 619 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 593 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 620 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 621 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 595 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 623 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 597 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 624 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 625 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 599 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 626 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 627 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 628 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 629 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 630 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 631 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 605 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 632 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 633 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 607 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 634 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 635 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 609 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 636 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 637 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 611 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 638 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 639 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 640 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 641 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 642 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed::
# 643 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 617 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 644 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 645 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 619 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 647 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 648 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 649 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 650 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge::
# 651 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 625 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 653 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 627 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 654 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 655 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 656 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 657 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 658 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge::
# 659 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 633 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 660 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 661 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 662 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 663 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 664 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge::
# 665 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 639 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 666 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	release
# 667 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 668 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 669 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 670 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor::
# 671 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 645 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 673 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 674 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_2
# 675 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 676 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 677 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_1::
# 679 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 651 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 680 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 681 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 682 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_5
# 683 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 684 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 685 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 686 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_4::
# 687 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 657 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 688 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 689 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 659 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 690 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 691 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 661 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 693 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 662 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 694 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_8
# 695 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 696 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 697 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 698 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_7::
# 699 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 667 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 700 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 701 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 668 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 702 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_11
# 703 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 704 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 705 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 706 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_10::
# 707 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 673 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 708 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 709 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 675 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 710 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 711 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 676 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 712 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_14
# 713 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 714 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 715 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 716 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_13::
# 717 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 718 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 719 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 682 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 720 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_17
# 721 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 722 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 723 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 724 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_16::
# 725 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 687 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 726 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor
# 727 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 689 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 728 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 729 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 730 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 731 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 732 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_20
# 733 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 734 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 735 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 736 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_19::
# 737 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 697 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 738 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 739 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 698 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 740 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_23
# 741 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 742 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 743 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 744 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_22::
# 745 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 703 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 746 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 747 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 748 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 749 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 750 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_2::
# 751 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 709 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor
# 753 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 710 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 754 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_1
# 755 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 756 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 757 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 758 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_5::
# 759 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 715 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 760 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor
# 761 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_4
# 763 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 764 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 765 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 766 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_8::
# 767 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 721 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 768 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor
# 769 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 722 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 770 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_7
# 771 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 772 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 773 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 774 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_11::
# 775 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 727 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 776 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor
# 777 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 728 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 778 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_10
# 779 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 780 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 781 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 782 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_14::
# 783 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 733 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 784 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor
# 785 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 734 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 786 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_13
# 787 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 788 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 789 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 790 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_17::
# 791 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 739 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 792 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor
# 793 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 740 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_16
# 795 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 796 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 797 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 798 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_20::
# 799 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 745 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 800 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor
# 801 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 746 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 802 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_19
# 803 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 804 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 805 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 806 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_23::
# 807 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 751 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 808 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor
# 809 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 752 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 810 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_22
# 811 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 812 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 813 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 814 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor::
# 815 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 757 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 816 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 817 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 818 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 819 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 820 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor::
# 821 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 763 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 822 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 823 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 824 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 825 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 826 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor::
# 827 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 769 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 828 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 829 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 830 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 831 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 832 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor::
# 833 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 775 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 834 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 835 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 836 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 837 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 838 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles::
# 839 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 781 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 840 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle, MSGBOX_DEFAULT
# 841 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 842 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 843 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 844 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles::
# 845 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 787 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 847 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 848 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 849 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 850 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge::
# 851 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 793 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 852 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
# 853 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 854 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 855 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 856 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge::
# 857 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 799 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 858 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
# 859 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 860 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 861 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 862 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge::
# 863 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 805 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 864 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 865 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 866 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 867 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 868 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge::
# 869 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 811 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 870 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 871 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 872 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 873 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 874 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor::
# 875 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 817 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 876 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 5, 4
# 877 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 878 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 879 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 880 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor::
# 881 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 823 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 882 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 17, 4
# 883 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 884 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 885 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 886 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor::
# 887 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 829 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 888 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 5, 4
# 889 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 890 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 891 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 892 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor::
# 893 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 835 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 894 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 17, 4
# 895 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 896 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 897 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 898 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_WalkToDoor::
# 899 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 842 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 900 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 901 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 844 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 902 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 903 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 904 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 905 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 848 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 906 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 907 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 850 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 908 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 909 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 852 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 910 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 911 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 912 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 913 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 914 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor::
# 915 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 858 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 916 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 917 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 918 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 919 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 862 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 920 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 921 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 922 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 923 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 924 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor::
# 925 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 926 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 927 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 870 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 928 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 929 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 872 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 930 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 931 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 874 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 932 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 933 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 934 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 935 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 936 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults::
# 937 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 879 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 938 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 939 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 881 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 940 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_SINGLES
# 941 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 883 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 942 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 943 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 885 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 944 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 945 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 887 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 946 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 947 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 948 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 949 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 950 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults::
# 951 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 893 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 952 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 953 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 895 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 954 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_DOUBLES
# 955 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 897 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 956 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 957 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 899 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 958 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 959 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 901 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 960 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 961 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 962 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 963 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 964 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree::
# 965 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 907 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 966 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_get DOME_DATA_PREV_TOURNEY_TYPE
# 967 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 909 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 968 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
# 969 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 910 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 970 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_2
# 971 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 972 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 973 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 974 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1::
# 975 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 915 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 976 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 1
# 977 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 916 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 978 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_5
# 979 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 980 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 981 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 982 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_4::
# 983 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 921 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 984 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 2
# 985 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 922 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 986 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_8
# 987 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 988 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 989 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 990 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_7::
# 991 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 927 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 992 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 3
# 993 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 928 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 994 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_11
# 995 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 996 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 997 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 998 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_10::
# 999 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 933 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1001 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 935 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1002 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_showprevtourneytree
# 1003 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 937 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1004 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 1005 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1006 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1007 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1008 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_2::
# 1009 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 943 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1010 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50
# 1011 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 944 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1012 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1
# 1013 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1014 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1015 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1016 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_5::
# 1017 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 949 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1018 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50
# 1019 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 950 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1020 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_4
# 1021 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1022 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1023 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1024 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_8::
# 1025 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 955 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1026 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen
# 1027 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 956 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1028 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_7
# 1029 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1030 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1031 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1032 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_11::
# 1033 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 961 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1034 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen
# 1035 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 962 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1036 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_10
# 1037 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1038 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1039 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1040 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50::
# 1041 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 967 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1042 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50, MSGBOX_SIGN
# 1043 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1044 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1045 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1046 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50::
# 1047 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 973 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1048 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50, MSGBOX_SIGN
# 1049 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1050 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1051 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1052 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen::
# 1053 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 979 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1054 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen, MSGBOX_SIGN
# 1055 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1056 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1057 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1058 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen::
# 1059 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 985 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1060 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen, MSGBOX_SIGN
# 1061 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1062 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1063 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1064 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Maniac::
# 1065 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 991 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1066 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_getwinnersname
# 1067 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 993 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1068 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough, MSGBOX_NPC
# 1069 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1070 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1071 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1072 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Lass::
# 1073 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 999 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1074 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation, MSGBOX_NPC
# 1075 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1076 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1077 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1078 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_FatMan::
# 1079 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1080 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound, MSGBOX_NPC
# 1081 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1082 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1083 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1084 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Man::
# 1085 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1011 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1086 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully, MSGBOX_NPC
# 1087 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1088 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1089 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1090 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man3::
# 1091 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1017 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1092 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier, MSGBOX_NPC
# 1093 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1094 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1095 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1096 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign2::
# 1097 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1023 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1098 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign2, MSGBOX_NPC
# 1099 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1100 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1101 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnderConstructionSign::
# 1103 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1029 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1104 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction, MSGBOX_NPC
# 1105 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesBoard::
# 1109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1035 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 1111 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1112 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 1113 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1039 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1114 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 1115 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1116 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1117 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1118 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard::
# 1119 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1120 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading
# 1121 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1047 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1122 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 1123 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1049 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 4, MULTI_BATTLE_DOME_RULES, FALSE
# 1125 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1127 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1128 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1::
# 1129 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1130 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1131 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1132 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_3::
# 1133 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1069 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup
# 1135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1070 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1136 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1
# 1137 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1138 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1139 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_4::
# 1141 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1075 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1142 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree
# 1143 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1076 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1
# 1145 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1147 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_5::
# 1149 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1081 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO
# 1151 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1082 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1152 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1
# 1153 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1154 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1155 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1156 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_6::
# 1157 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1087 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1158 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 1159 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1088 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1160 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1
# 1161 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1163 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1164 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_7::
# 1165 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1093 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 1167 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1094 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1
# 1169 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 1170 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1172 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup::
# 1173 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1099 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1174 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules, MSGBOX_DEFAULT
# 1175 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1101 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 1177 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1179 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree::
# 1181 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree, MSGBOX_DEFAULT
# 1183 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1184 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 1185 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1186 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1187 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO::
# 1189 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1115 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1190 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules, MSGBOX_DEFAULT
# 1191 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1117 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1192 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 1193 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1195 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1196 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExitRules::
# 1197 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1123 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1198 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 1199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 1200 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1201 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1202 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle::
# 1203 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1127 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
# 1205 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are put to the test!\p"
# 1206 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Welcome to the BATTLE DOME!\p"
# 1207 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I am your guide to the SINGLE BATTLE\n"
# 1208 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament.$"
# 1209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1210 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge::
# 1211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1212 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
# 1213 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the SINGLE BATTLE Tournament?$"
# 1214 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1215 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain::
# 1216 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We hope to see you again.$"
# 1218 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1219 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge::
# 1220 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1221 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The SINGLE BATTLE Tournament\n"
# 1222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "is exactly as the name suggests--\l"
# 1223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a tournament of SINGLE BATTLES.\p"
# 1224 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "All participating TRAINERS must\n"
# 1225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "enter three POKéMON each.\p"
# 1226 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In each battle, one of the three\n"
# 1227 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON must be held in reserve.\p"
# 1228 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The other two POKéMON can battle\n"
# 1229 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "one at a time.\p"
# 1230 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Choose the two battling POKéMON after\n"
# 1231 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "examining the opponent's trio.\p"
# 1232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You win the tournament by defeating\n"
# 1233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "four TRAINERS.\p"
# 1234 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Battle Points are awarded to\n"
# 1235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the tournament winner.\p"
# 1236 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1237 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament, please save the game.\p"
# 1238 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1240 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge::
# 1242 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1243 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
# 1244 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I must save the data. Is that okay?$"
# 1245 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1246 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WhichLevelMode::
# 1247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1248 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament offers two levels\n"
# 1249 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 1250 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Which is your choice?$"
# 1251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_SelectThreeMons::
# 1253 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1177 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1254 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Now select the three POKéMON that\n"
# 1255 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you wish to enter, please.$"
# 1256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1257 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen::
# 1258 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1259 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 1260 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You don't have three eligible POKéMON.\p"
# 1261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Also, the POKéMON must be holding\n"
# 1262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "different kinds of items.\p"
# 1263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 1264 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd::
# 1266 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1190 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 1268 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50::
# 1270 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1271 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 1272 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You don't have three eligible POKéMON.\p"
# 1273 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You must have three different POKéMON\n"
# 1274 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 1275 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They also must be holding different\n"
# 1276 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "kinds of items.\p"
# 1277 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 1278 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1279 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome::
# 1280 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1281 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I will now show you to\n"
# 1282 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the BATTLE DOME.$"
# 1283 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1284 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting::
# 1285 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1286 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 1287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You didn't save before you quit your\n"
# 1288 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "challenge last time.\p"
# 1289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Because of that, your challenge so far\n"
# 1290 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "has been disqualified. Sorry!$"
# 1291 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1292 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney::
# 1293 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1294 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations for winning\n"
# 1295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "your Battle Tournament!$"
# 1296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1297 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize::
# 1298 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Here is your prize for your Battle\n"
# 1300 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament victory.$"
# 1301 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1302 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReceivedPrize::
# 1303 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1227 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1304 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 1305 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 1306 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1307 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom::
# 1308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1309 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
# 1310 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please make room in your BAG, then come\n"
# 1311 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "see me.$"
# 1312 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1313 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying::
# 1314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1238 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1315 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Thank you for playing!$"
# 1316 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1317 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved::
# 1318 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1242 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1319 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Your record will be saved.\n"
# 1320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please wait.$"
# 1321 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1322 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou::
# 1323 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1324 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We've been waiting for you!$"
# 1325 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1326 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2::
# 1327 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1328 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
# 1329 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I must save the data. Is that okay?$"
# 1330 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1331 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle::
# 1332 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1333 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
# 1334 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are put to the test!\p"
# 1335 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Welcome to the BATTLE DOME!\p"
# 1336 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I am your guide to the DOUBLE BATTLE\n"
# 1337 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament.$"
# 1338 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1339 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge::
# 1340 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1264 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1341 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
# 1342 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the DOUBLE BATTLE Tournament?$"
# 1343 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1344 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge::
# 1345 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1346 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The DOUBLE BATTLE Tournament\n"
# 1347 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "is exactly as the name suggests--\l"
# 1348 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a tournament of DOUBLE BATTLES.\p"
# 1349 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "All participating TRAINERS must\n"
# 1350 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "enter three POKéMON each.\p"
# 1351 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In each battle, one of the three\n"
# 1352 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON must be held in reserve.\p"
# 1353 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The remaining two POKéMON must take\n"
# 1354 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "part in a DOUBLE BATTLE.\p"
# 1355 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Choose the two battling POKéMON after\n"
# 1356 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "examining the opponent's trio.\p"
# 1357 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You win the tournament by defeating\n"
# 1358 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "four TRAINERS.\p"
# 1359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Battle Points are awarded to\n"
# 1360 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the tournament winner.\p"
# 1361 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1362 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament, please save the game.\p"
# 1363 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1364 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1365 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50::
# 1367 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1291 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1368 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 1369 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Level 50 SINGLE BATTLE Tournament.$"
# 1370 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1371 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50::
# 1372 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1373 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 1374 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Level 50 DOUBLE BATTLE Tournament.$"
# 1375 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1376 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen::
# 1377 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1301 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1378 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 1379 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Open Level SINGLE BATTLE Tournament.$"
# 1380 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1381 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen::
# 1382 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1306 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1383 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 1384 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Open Level DOUBLE BATTLE Tournament.$"
# 1385 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1386 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough::
# 1387 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1311 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1388 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Did you see it?\n"
# 1389 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The last Battle Tournament?\p"
# 1390 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The winner, {STR_VAR_1}, was seriously\n"
# 1391 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tough.\p"
# 1392 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You should check out the results\n"
# 1393 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "on the monitor beside the PC.$"
# 1394 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1395 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier::
# 1396 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1397 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE FRONTIER…\n"
# 1398 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I've long dreamed about a place like it.$"
# 1399 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1400 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign2::
# 1401 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1325 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1402 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE DOME\n"
# 1403 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Become the Unbeatable Superstar!$"
# 1404 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1405 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction::
# 1406 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1330 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1407 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The ??????\n"
# 1408 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Under Construction!$"
# 1409 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1410 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation::
# 1411 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1335 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1412 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "When a TRAINER chains tournament\n"
# 1413 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "wins at the BATTLE DOME, he or she\l"
# 1414 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "gains a reputation as a star.\p"
# 1415 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tough TRAINERS are drawn by that\n"
# 1416 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "reputation to the BATTLE DOME.\p"
# 1417 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "A true superstar is a TRAINER who\n"
# 1418 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "can keep winning tournaments.$"
# 1419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1420 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound::
# 1421 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1345 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1422 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I ran into one of the tournament\n"
# 1423 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "favorites in the very first round.\p"
# 1424 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Of course I got trashed…$"
# 1425 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1426 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully::
# 1427 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1351 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1428 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I would've won if I'd kept this POKéMON\n"
# 1429 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "held in reserve.\p"
# 1430 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You need to check your opponent's\n"
# 1431 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON carefully before choosing\l"
# 1432 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "your battling POKéMON.$"
# 1433 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1434 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker::
# 1435 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1436 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations!\p"
# 1437 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You defeated the DOME ACE and won\n"
# 1438 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the Battle Tournament!$"
# 1439 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1440 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints::
# 1441 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1365 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In recognition of your strategy--\n"
# 1443 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a thing of beauty it was, too--\l"
# 1444 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "we award you these Battle Point(s)!$"
# 1445 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1446 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordLastMatch::
# 1447 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1371 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1448 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to record your\n"
# 1449 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "last BATTLE DOME match on your\l"
# 1450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "FRONTIER PASS?$"
# 1451 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1452 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RulesAreListed::
# 1453 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1377 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1454 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The Battle Tournament rules\n"
# 1455 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are listed.$"
# 1456 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1457 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading::
# 1458 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1382 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1459 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 1460 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1461 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules::
# 1462 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1386 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1463 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament matchups are drawn up\n"
# 1464 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "based on the toughness of POKéMON\l"
# 1465 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "held by TRAINERS.\p"
# 1466 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The matchups avoid having tough\n"
# 1467 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "TRAINERS face each other right away.$"
# 1468 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1469 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree::
# 1470 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1394 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1471 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament chart, or as we call it,\n"
# 1472 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the “Tree,” is available for viewing\l"
# 1473 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "in the Waiting Room from any guide.\p"
# 1474 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The Tournament Tree will provide\n"
# 1475 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "several kinds of data.\p"
# 1476 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The data on view includes the previous\n"
# 1477 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament's results, the POKéMON held\l"
# 1478 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "by TRAINERS, and the battle styles of\l"
# 1479 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "TRAINERS.$"
# 1480 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 1481 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules::
# 1482 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1406 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
# 1483 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If battling POKéMON faint at the same\n"
# 1484 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "time--a double KO--in a tournament\l"
# 1485 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "match, the REFEREES will review\l"
# 1486 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the match and declare the winner.$"
