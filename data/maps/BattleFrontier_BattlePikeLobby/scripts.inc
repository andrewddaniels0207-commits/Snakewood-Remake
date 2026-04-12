# 1 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 8 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus
# 12 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving
# 14 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePikeLobby_EventScript_WonChallenge
# 16 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePikeLobby_EventScript_LostChallenge
# 18 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 19 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 20 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 21 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 22 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 23 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnWarp:
# 25 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth
# 27 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 28 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 29 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 30 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth::
# 31 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 20 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 35 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 37 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 38 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus::
# 39 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 25 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_getstatus
# 41 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 43 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 44 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving::
# 45 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 47 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 49 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 51 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 54 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 55 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, 0
# 57 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 59 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 61 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 63 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 65 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 66 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 67 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 68 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WonChallenge::
# 69 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 71 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 45 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_isbrain
# 73 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 75 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_WonChallenge_2
# 76 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WonChallenge_1:
# 77 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 81 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints
# 83 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 84 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 85 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WonChallenge_2:
# 86 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 47 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 87 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen
# 88 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_WonChallenge_1
# 89 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 90 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 91 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen::
# 92 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 55 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen, MSGBOX_DEFAULT
# 94 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 96 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 97 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 98 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 99 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints::
# 100 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 102 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_givepoints
# 104 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 106 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 108 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_get PIKE_DATA_TOTAL_STREAKS
# 110 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	addvar VAR_RESULT, 1
# 112 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_TOTAL_STREAKS, VAR_RESULT
# 114 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 116 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 118 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 69 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 120 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 122 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
# 124 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 126 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 73 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 128 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 130 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 75 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 132 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 134 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 77 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 136 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 138 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 79 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 140 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 141 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 142 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 143 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LostChallenge::
# 144 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 146 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 85 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
# 148 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 150 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 87 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 152 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 88 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, 0
# 154 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 89 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 156 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 90 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 158 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 159 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 160 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 161 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 162 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 163 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 164 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 94 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 166 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 167 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 168 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 96 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 169 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 170 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 171 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 172 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 98 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 174 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 176 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 100 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 178 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 180 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 181 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Attendant::
# 182 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 183 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lock
# 184 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 106 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	faceplayer
# 186 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PIKE
# 188 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 108 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 190 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 192 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 110 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike, MSGBOX_DEFAULT
# 194 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 195 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 196 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge::
# 198 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 114 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_TakeChallenge
# 200 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 202 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 116 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 203 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 204 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 118 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 207 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_2
# 208 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 120 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 209 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_3
# 210 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 122 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 211 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_4
# 212 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 124 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_5
# 214 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 215 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_2:
# 217 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 218 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge
# 219 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 220 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 221 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_3:
# 222 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge
# 224 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 225 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 226 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_4:
# 227 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 229 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 230 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 231 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_5:
# 232 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 233 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 234 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 235 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge::
# 238 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 130 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 239 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
# 240 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 241 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 242 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 132 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 243 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 244 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 245 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 246 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 247 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_3
# 248 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 136 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 249 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_4
# 250 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_1:
# 251 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 252 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkineligible
# 253 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 140 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 254 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 255 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_6
# 256 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_5:
# 257 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 258 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 259 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 144 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 260 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons, MSGBOX_DEFAULT
# 261 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 263 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 146 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 264 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 265 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 267 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 148 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 268 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 269 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 270 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 271 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 150 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 273 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 274 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 275 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 152 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 276 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, 0
# 277 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_9
# 278 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_8:
# 279 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 280 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 281 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 156 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 282 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 283 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 284 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case NO, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_12
# 285 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 159 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 286 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case YES, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_13
# 287 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 161 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 288 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_14
# 289 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 290 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 291 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_3:
# 292 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 293 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 294 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_1
# 295 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 296 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_4:
# 297 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 298 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 299 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_1
# 300 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_6:
# 302 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons
# 304 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_5
# 305 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 306 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_9:
# 307 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 308 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 309 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_8
# 310 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 311 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_12:
# 312 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 158 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 314 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 315 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_13:
# 317 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 160 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 318 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge
# 319 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_14:
# 322 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 162 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 323 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 324 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 325 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 326 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 327 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge::
# 328 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 167 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 329 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 330 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 168 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 331 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 0
# 332 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 169 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 333 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 334 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 335 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_init
# 336 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 171 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 338 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 172 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 339 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, TRUE
# 340 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 341 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 342 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 344 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 345 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 346 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 347 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 348 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 349 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	delay 2
# 350 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 351 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 352 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 179 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 353 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 354 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 180 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 355 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 356 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 181 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 357 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, 0
# 358 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_2
# 359 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_1:
# 360 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 361 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 362 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 363 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 364 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 365 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 366 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 367 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 368 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 369 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_settrainers
# 370 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 371 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor
# 372 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 190 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 373 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 374 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 375 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
# 376 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 192 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 377 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR, 6, 7
# 378 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 379 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 380 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 194 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 381 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 382 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 383 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 384 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_2:
# 385 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 182 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 386 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed
# 387 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_1
# 388 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 389 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 390 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge::
# 391 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 392 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike, MSGBOX_DEFAULT
# 393 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 394 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge
# 395 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 396 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 397 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 398 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons::
# 399 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 400 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 401 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 402 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons_2
# 403 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 207 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 404 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons_3
# 405 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 406 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 407 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons_2:
# 408 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 409 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50
# 410 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 411 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 412 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons_3:
# 413 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 208 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 414 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen
# 415 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 416 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 417 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 418 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50::
# 419 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 421 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 214 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 422 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 423 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 215 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 424 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 425 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 426 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 427 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 428 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 429 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 430 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 431 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 220 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 432 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 433 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 435 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 222 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 436 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 437 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 438 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 439 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 440 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 441 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 442 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed::
# 443 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 227 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 445 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 446 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 447 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 448 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 449 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 450 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge::
# 451 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 452 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 453 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 233 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 454 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 455 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 456 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 457 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 458 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge::
# 459 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 237 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 460 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 461 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 462 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 463 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 464 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge::
# 465 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 241 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 466 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	release
# 467 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 468 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 469 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 470 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ShowResults::
# 471 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 246 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 472 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 473 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 247 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 474 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PIKE
# 475 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 248 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 476 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitbuttonpress
# 477 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 249 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 478 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special RemoveRecordsWindow
# 479 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 250 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 480 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 481 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 482 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 483 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor::
# 485 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 255 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 486 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_PIKE_LOBBY_ATTENDANT, BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor
# 487 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 256 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 488 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor
# 489 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 257 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 490 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmovement 0
# 491 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 492 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 493 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 494 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor::
# 495 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 496 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 497 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 498 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 499 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 500 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 501 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor:
# 502 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 503 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 504 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 267 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 505 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 506 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 268 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 507 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	set_invisible
# 508 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 269 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 509 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	step_end
# 510 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 511 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Hiker::
# 512 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 513 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal, MSGBOX_NPC
# 514 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 515 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 516 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Twin::
# 518 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 278 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 519 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer, MSGBOX_NPC
# 520 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 521 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 522 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 523 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Beauty::
# 524 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 283 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 525 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere, MSGBOX_NPC
# 526 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 527 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 528 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 529 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesBoard::
# 530 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 288 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 531 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 532 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 289 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 533 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 534 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 290 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 535 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 536 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 537 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard::
# 540 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 541 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading
# 542 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 296 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 543 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 544 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 297 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 545 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_PIKE_RULES, FALSE
# 546 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 298 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 547 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 548 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 299 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 549 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_3
# 550 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 301 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 551 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_4
# 552 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 553 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_5
# 554 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 305 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 555 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 3, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_6
# 556 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 307 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 557 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_7
# 558 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1:
# 559 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 560 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 561 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_3:
# 562 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 300 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 563 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag
# 564 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1
# 565 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 566 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_4:
# 567 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 302 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 568 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems
# 569 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1
# 570 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 571 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_5:
# 572 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 573 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder
# 574 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1
# 575 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 576 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_6:
# 577 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 306 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 578 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 579 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1
# 580 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 581 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_7:
# 582 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 308 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 583 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 584 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1
# 585 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 586 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 587 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag::
# 588 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 314 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 589 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules, MSGBOX_DEFAULT
# 590 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 315 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 591 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 592 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 593 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 594 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 595 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems::
# 596 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 320 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 597 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules, MSGBOX_DEFAULT
# 598 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 321 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 599 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 600 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 601 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 602 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 603 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder::
# 604 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 326 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 605 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules, MSGBOX_DEFAULT
# 606 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 327 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 607 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 608 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 609 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 610 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 611 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExitRules::
# 612 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 332 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 613 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 614 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 615 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 616 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 617 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePike_EventScript_CloseCurtain::
# 618 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 619 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 620 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 338 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 621 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special CloseBattlePikeCurtain
# 622 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 339 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 623 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 624 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 340 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 625 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 626 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 627 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 628 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 629 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike::
# 630 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 344 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 631 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Where the luck of TRAINERS\n"
# 632 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "is put to the test…\p"
# 633 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Welcome to the BATTLE PIKE…\p"
# 634 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I am your guide to the BATTLE PIKE…$"
# 635 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 636 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TakeChallenge::
# 637 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 351 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 638 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
# 639 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Choice challenge?$"
# 640 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 641 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike::
# 642 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 356 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 643 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Here we conduct an event we call\n"
# 644 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "the Battle Choice.\p"
# 645 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The Battle Choice rules are very\n"
# 646 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "simple…\p"
# 647 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Choose one of three paths and make\n"
# 648 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "your way to the goal room at the end\l"
# 649 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of the BATTLE PIKE. It's that simple.\p"
# 650 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "However, what happens on the chosen\n"
# 651 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "path depends entirely on the luck\l"
# 652 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of the challenger…\p"
# 653 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "If you reach the goal, you will be\n"
# 654 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "rewarded with Battle Points.\p"
# 655 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 656 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "challenge, please have a word with\l"
# 657 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "our staff in the big rooms on the way.\p"
# 658 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 659 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you will be disqualified.$"
# 660 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 661 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou::
# 662 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 376 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 663 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "We look forward to seeing you\n"
# 664 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "on another occasion…$"
# 665 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 666 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode::
# 667 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 381 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 668 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You have the choice of two courses,\n"
# 669 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Level 50 and Open Level.\l"
# 670 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Which will you challenge?$"
# 671 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 672 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50::
# 673 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 387 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 674 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
# 675 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You do not have three eligible\n"
# 676 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "POKéMON for the Battle Choice event.\p"
# 677 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You must have three different POKéMON\n"
# 678 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 679 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "They also must be holding different\n"
# 680 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "kinds of items.\p"
# 681 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 682 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 683 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd::
# 684 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 398 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 685 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please come see me when\n"
# 686 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you are ready…$"
# 687 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 688 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen::
# 689 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 403 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 690 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
# 691 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You do not have three eligible\n"
# 692 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "POKéMON for the Battle Choice event.\p"
# 693 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You must have three different\n"
# 694 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "POKéMON to enter.\p"
# 695 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "They also must be holding different\n"
# 696 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "kinds of items.\p"
# 697 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 698 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 699 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons::
# 700 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 414 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 701 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please choose the three POKéMON\n"
# 702 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you wish to enter in the challenge…$"
# 703 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 704 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge::
# 705 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 419 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 706 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Before starting your Battle Choice\n"
# 707 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "challenge, I must save the game.\l"
# 708 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Is that acceptable?$"
# 709 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 710 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_StepThisWay::
# 711 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 425 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 712 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please step this way…$"
# 713 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 714 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults::
# 715 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 429 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 716 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Your challenge has ended…\p"
# 717 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I shall record your results.\n"
# 718 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please wait…$"
# 719 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 720 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance::
# 721 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 435 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 722 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You have completed the challenge…\p"
# 723 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I must say… You seem to possess luck\n"
# 724 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "in abundance…$"
# 725 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 726 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ShallRecordResults::
# 727 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 441 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 728 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I shall record your results.\n"
# 729 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please wait…$"
# 730 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 731 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2::
# 732 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 446 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 733 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "To commemorate your completion of\n"
# 734 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "the Battle Choice challenge, we award\l"
# 735 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you these Battle Point(s)…$"
# 736 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 737 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit::
# 738 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 452 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 739 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You appear to have reached the limit\n"
# 740 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for Battle Points…\p"
# 741 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please exchange some Battle Points\n"
# 742 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for prizes, then return…$"
# 743 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 744 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting::
# 745 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 459 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 746 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
# 747 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You failed to save before you quit\n"
# 748 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "your challenge the last time.\p"
# 749 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Because of that, your challenge so far\n"
# 750 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "has been disqualified. I am sorry…$"
# 751 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 752 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen::
# 753 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 467 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 754 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Congratulations…\p"
# 755 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You have snatched victory from the\n"
# 756 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "PIKE QUEEN and cleared the event…$"
# 757 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 758 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints::
# 759 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 473 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 760 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "In recognition of your amazing luck,\n"
# 761 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "we award you these Battle Point(s)…$"
# 762 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 763 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal::
# 764 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 478 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 765 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Arrgh! I blew my chance!\n"
# 766 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I was one room away from the goal!\p"
# 767 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "In this place, you'd better watch out\n"
# 768 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for poison, freezing, and so on.$"
# 769 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 770 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer::
# 771 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 485 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 772 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I've completed the challenge 10 times\n"
# 773 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "now, but I've never had to battle\l"
# 774 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "a TRAINER once.$"
# 775 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 776 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere::
# 777 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 491 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 778 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Listen! Listen!\p"
# 779 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Don't you think that the special\n"
# 780 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "abilities of POKéMON will be useful\l"
# 781 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "here?$"
# 782 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 783 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose::
# 784 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 498 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 785 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "What is this weird place?\n"
# 786 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I can't figure it out at all!\p"
# 787 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I've taken the challenge a bunch\n"
# 788 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of times, but all I ever do is run into\l"
# 789 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "TRAINERS whichever path I choose.$"
# 790 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 791 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_RulesAreListed::
# 792 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 506 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 793 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The Battle Choice's rules are listed.$"
# 794 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 795 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading::
# 796 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 510 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 797 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 798 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 799 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules::
# 800 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 801 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The BAG and POKéNAV may not be used\n"
# 802 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "during a Battle Choice challenge.$"
# 803 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 804 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules::
# 805 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 519 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 806 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "During a Battle Choice challenge,\n"
# 807 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "any BERRY or HERB held by POKéMON\l"
# 808 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "will be effective only once.$"
# 809 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 810 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules::
# 811 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 525 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
# 812 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "During a Battle Choice challenge,\n"
# 813 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "the sequence of POKéMON cannot be\l"
# 814 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "changed.\p"
# 815 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The sequence must be set before\n"
# 816 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "starting your challenge.$"
