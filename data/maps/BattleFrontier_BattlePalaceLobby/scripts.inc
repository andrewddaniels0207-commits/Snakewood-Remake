# 1 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 9 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus
# 12 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving
# 14 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge
# 16 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 18 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 7 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge
# 20 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 21 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 22 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 23 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnWarp:
# 27 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 28 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth
# 29 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth::
# 33 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 20 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 37 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 39 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 40 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus::
# 41 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_getstatus
# 43 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 45 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving::
# 47 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 49 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 53 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 54 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK, 0
# 55 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 57 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 59 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 61 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 63 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 64 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 65 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 66 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge::
# 67 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 43 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 69 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 44 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_isbrain
# 71 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 45 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 73 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_2
# 74 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_1:
# 75 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints
# 79 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 80 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 81 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_2:
# 82 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 83 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven
# 84 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_1
# 85 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 86 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 87 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven::
# 88 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 53 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 89 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers, MSGBOX_DEFAULT
# 90 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 91 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 92 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 93 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints::
# 94 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 57 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints, MSGBOX_DEFAULT
# 96 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_givepoints
# 98 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 59 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 100 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded
# 102 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 104 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 106 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 63 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 108 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 110 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 112 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 114 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 116 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 117 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge::
# 118 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded
# 122 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 73 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 124 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 126 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 75 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 128 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 77 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 132 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 79 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 136 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 137 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 138 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 139 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge::
# 140 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkairshow
# 142 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 85 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 144 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special HealPlayerParty
# 146 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 87 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 148 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 88 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save 0
# 150 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 89 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 152 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 90 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 156 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 158 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_2
# 159 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_1:
# 160 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 161 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch
# 162 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 96 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 163 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 164 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 166 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 98 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 167 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 169 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_5
# 170 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 171 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_6
# 172 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_7
# 174 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 175 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 176 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_2:
# 177 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 179 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_1
# 180 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 181 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_5:
# 182 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 100 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 183 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 184 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 185 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 186 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_6:
# 187 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 102 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch
# 189 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 190 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 191 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge_7:
# 192 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 104 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 194 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 195 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 196 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch::
# 198 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 201 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 202 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge::
# 204 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 205 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 207 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge::
# 208 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 209 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 118 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 212 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 216 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 217 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save CHALLENGE_STATUS_SAVING
# 218 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 122 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 219 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 220 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 222 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 124 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 224 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 225 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 226 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 126 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 227 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge
# 228 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 229 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 230 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 231 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SinglesAttendant::
# 232 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 130 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 233 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 234 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 235 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 236 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 132 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 237 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 238 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 239 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 240 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 241 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 242 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 244 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 245 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DoublesAttendant::
# 246 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 247 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 248 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 140 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 249 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 250 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 251 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 252 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 142 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 253 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 254 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 255 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 256 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 257 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 258 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 259 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant::
# 260 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 148 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 261 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_get PALACE_DATA_PRIZE
# 262 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
# 264 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_ne BattleFrontier_BattlePalaceLobby_EventScript_Attendant_2
# 265 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant_1:
# 266 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 152 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 267 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 268 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 269 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 270 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_Attendant_5
# 271 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant_4:
# 272 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 156 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 274 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_Attendant_7
# 275 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 276 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant_2:
# 278 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 150 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 279 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 280 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant_1
# 281 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 282 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant_5:
# 283 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 284 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle
# 285 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant_4
# 286 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 287 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant_7:
# 288 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 289 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle
# 290 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 291 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 292 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge::
# 294 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 162 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 296 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_2
# 297 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_1:
# 298 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 299 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 300 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_5
# 301 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_4:
# 302 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 168 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 304 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 169 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 305 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 306 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 307 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 308 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 171 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 309 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_8
# 310 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 311 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_9
# 312 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_10
# 314 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 177 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 315 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_11
# 316 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 317 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 318 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_2:
# 319 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 163 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 320 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge
# 321 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_1
# 322 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 323 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_5:
# 324 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 166 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 325 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge
# 326 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_4
# 327 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 328 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_8:
# 329 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 172 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 330 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge
# 331 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 332 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_9:
# 334 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 335 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge
# 336 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 337 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 338 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_10:
# 339 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 340 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 341 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 342 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 343 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_11:
# 344 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 345 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 346 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 347 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge::
# 350 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 183 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 351 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_WhichChallenge
# 352 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 353 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 354 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 355 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 356 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 357 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 358 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 359 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_3
# 360 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 361 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_4
# 362 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_1:
# 363 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 192 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 364 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkineligible
# 365 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 366 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 367 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_6
# 368 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_5:
# 369 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 196 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 370 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 371 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 197 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 372 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons, MSGBOX_DEFAULT
# 373 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 198 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 374 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 375 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 376 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 377 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 378 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 379 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 380 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 381 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 382 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 383 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 203 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 384 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 385 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 386 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 387 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 388 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, 0
# 389 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_9
# 390 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_8:
# 391 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 208 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 392 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2, MSGBOX_YESNO
# 393 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 209 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 394 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 395 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 396 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case NO, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_12
# 397 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 212 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 398 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case YES, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_13
# 399 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 400 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_14
# 401 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 402 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 403 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_3:
# 404 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 405 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 406 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_1
# 407 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 408 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_4:
# 409 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 190 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 410 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 411 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_1
# 412 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 413 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_6:
# 414 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 194 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 415 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons
# 416 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_5
# 417 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 418 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_9:
# 419 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 421 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_8
# 422 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 423 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_12:
# 424 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 425 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 426 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 427 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 428 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_13:
# 429 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 213 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 430 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge
# 431 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 432 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 433 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_14:
# 434 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 435 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 436 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 437 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 438 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 439 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge::
# 440 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 220 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 441 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 442 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 443 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 444 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 222 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 445 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_init
# 446 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 447 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, TRUE
# 448 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 224 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 449 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 450 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 225 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 451 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 452 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 226 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 453 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 454 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 227 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 455 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 456 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 457 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	delay 2
# 458 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 229 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 459 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 460 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 230 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 461 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 462 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 463 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, 0
# 464 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge_1
# 465 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 466 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 467 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge_1:
# 468 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 469 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed
# 470 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 471 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 472 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 473 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge::
# 474 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 237 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 475 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 476 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 477 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 478 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 239 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 479 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FollowMe, MSGBOX_DEFAULT
# 480 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 240 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 481 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 482 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 241 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 483 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor
# 484 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 242 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 485 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 8, 13
# 486 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 243 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 487 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 488 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 489 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 490 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 491 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 492 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 493 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge::
# 494 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 249 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 495 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 496 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_2
# 497 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_1:
# 498 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 252 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 499 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge, MSGBOX_DEFAULT
# 500 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 253 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 501 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 502 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 503 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 504 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_2:
# 505 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 250 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 506 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge
# 507 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_1
# 508 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 509 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 510 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge::
# 511 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 257 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge, MSGBOX_DEFAULT
# 513 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 258 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 515 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 516 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons::
# 519 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 521 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 522 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_2
# 523 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 524 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_3
# 525 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 526 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 527 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_2:
# 528 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 264 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 529 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50
# 530 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 531 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 532 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons_3:
# 533 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 534 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen
# 535 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 536 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 537 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50::
# 539 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 271 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 540 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 541 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 542 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 543 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 544 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 545 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 274 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 546 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 547 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 548 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 549 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 550 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen::
# 551 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 278 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 552 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 553 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 279 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 554 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 555 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 280 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 556 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 557 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 558 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 559 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 560 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 561 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 562 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed::
# 563 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 285 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 564 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 565 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 286 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 566 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 567 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 568 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 569 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 570 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge::
# 571 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 290 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 572 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 573 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 291 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 574 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative LoadPlayerParty
# 575 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 576 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 577 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 578 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge::
# 579 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 580 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 581 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 582 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 583 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 584 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge::
# 585 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 299 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 586 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	release
# 587 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 588 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 589 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 590 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle::
# 591 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 592 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 593 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 594 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 595 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 596 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle::
# 597 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 309 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 598 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 599 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 600 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 601 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 602 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge::
# 603 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 314 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 604 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge
# 605 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 606 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 607 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 608 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge::
# 609 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 319 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 610 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge
# 611 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 612 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 613 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 614 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor::
# 615 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 324 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 616 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 617 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_2
# 618 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_1:
# 619 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 327 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 620 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 621 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_5
# 622 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_4:
# 623 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 330 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 624 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 625 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 331 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 626 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 627 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 332 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 628 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 629 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 333 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 630 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 631 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_8
# 632 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_7:
# 633 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 336 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 634 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 635 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_11
# 636 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_10:
# 637 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 339 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 638 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 639 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 340 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 640 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor
# 641 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 341 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 642 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor
# 643 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 342 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 644 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 645 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 646 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 647 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_14
# 648 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_13:
# 649 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 346 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 650 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 651 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_17
# 652 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_16:
# 653 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 349 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 654 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 655 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 656 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 657 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_2:
# 658 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 325 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 659 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant
# 660 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_1
# 661 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 662 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_5:
# 663 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 328 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 664 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant
# 665 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_4
# 666 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 667 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_8:
# 668 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 334 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 669 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor
# 670 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_7
# 671 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 672 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_11:
# 673 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 674 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor
# 675 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_10
# 676 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 677 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_14:
# 678 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 344 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 679 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor
# 680 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_13
# 681 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 682 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_17:
# 683 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 347 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 684 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor
# 685 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor_16
# 686 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 687 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 688 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant::
# 689 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 354 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 690 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_SINGLES
# 691 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 692 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 693 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 694 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant::
# 695 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 359 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 696 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_DOUBLES
# 697 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 698 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 699 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 700 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor::
# 701 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 364 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 702 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 5, 4
# 703 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 704 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 705 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 706 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor::
# 707 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 369 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 708 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 19, 4
# 709 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 710 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 711 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 712 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor::
# 713 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 374 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 714 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 5, 4
# 715 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 716 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 717 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 718 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor::
# 719 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 379 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 720 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 19, 4
# 721 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 722 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 723 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 724 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 383 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 725 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor:
# 726 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 384 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 727 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 728 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 385 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 729 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 730 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 731 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 388 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 732 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor:
# 733 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 389 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 734 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 735 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 390 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 736 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 737 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 391 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 738 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 739 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 740 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 394 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 741 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor:
# 742 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 395 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 743 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 744 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 396 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 745 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 746 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 397 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 747 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 748 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 398 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 749 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 750 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 751 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowSinglesResults::
# 752 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 402 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 753 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 754 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 403 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 755 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_SINGLES
# 756 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 404 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 757 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 758 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 405 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 759 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 760 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 406 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 761 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 762 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 763 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 764 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 765 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowDoublesResults::
# 766 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 411 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 767 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 768 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 412 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 769 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_DOUBLES
# 770 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 413 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 771 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 772 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 414 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 773 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 774 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 415 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 775 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 776 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 777 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 778 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 779 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_BlackBelt::
# 780 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 781 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink, MSGBOX_NPC
# 782 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 783 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 784 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 785 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Man::
# 786 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 425 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 787 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere, MSGBOX_NPC
# 788 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 789 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 790 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 791 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Beauty::
# 792 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 430 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 793 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms, MSGBOX_NPC
# 794 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 795 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 796 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 797 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Maniac::
# 798 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 435 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 799 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway, MSGBOX_NPC
# 800 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 801 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 802 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 803 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBoard::
# 804 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 440 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 805 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 806 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 441 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 807 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 808 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 442 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 809 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 810 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 811 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 812 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 813 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard::
# 814 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 447 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 815 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 816 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 448 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 817 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 818 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 449 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 819 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 16, 0, MULTI_BATTLE_PALACE_RULES, FALSE
# 820 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 450 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 821 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 822 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 451 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 823 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_3
# 824 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 453 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 825 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_4
# 826 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 455 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 827 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_5
# 828 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 457 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 829 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_6
# 830 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 459 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 831 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_7
# 832 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 461 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 833 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_8
# 834 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 463 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 835 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_9
# 836 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1:
# 837 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 838 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 839 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_3:
# 840 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 452 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 841 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics
# 842 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1
# 843 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 844 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_4:
# 845 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 454 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 846 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_RulesNature
# 847 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1
# 848 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 849 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_5:
# 850 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 456 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 851 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves
# 852 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1
# 853 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 854 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_6:
# 855 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 458 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 856 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered
# 857 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1
# 858 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 859 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_7:
# 860 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 460 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 861 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger
# 862 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1
# 863 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 864 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_8:
# 865 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 462 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 866 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 867 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1
# 868 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 869 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_9:
# 870 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 464 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 871 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 872 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1
# 873 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 874 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 875 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics::
# 876 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 470 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 877 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 878 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 471 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 879 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 880 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 881 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 882 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 883 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesNature::
# 884 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 476 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 885 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 886 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 477 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 887 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 888 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 889 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 890 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 891 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves::
# 892 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 482 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 893 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 894 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 483 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 895 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 896 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 897 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 898 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 899 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered::
# 900 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 488 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 901 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 902 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 489 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 903 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 904 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 905 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 906 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 907 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger::
# 908 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 494 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 909 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 910 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 495 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 911 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 912 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 913 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 914 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 915 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExitRules::
# 916 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 500 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 917 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 918 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 919 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 920 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 921 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle::
# 922 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 504 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 923 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Where the hearts of TRAINERS\n"
# 924 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "are put to the test.\p"
# 925 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I welcome you to the BATTLE PALACE.\p"
# 926 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I accept challenges to the SINGLE\n"
# 927 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "BATTLE HALLS.$"
# 928 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 929 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge::
# 930 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 931 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Do you wish to take\n"
# 932 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the SINGLE BATTLE HALL challenge?$"
# 933 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 934 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge::
# 935 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 517 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 936 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In the BATTLE PALACE, there are\n"
# 937 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "several auditoriums for SINGLE BATTLES\l"
# 938 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "that are named SINGLE BATTLE HALLS.\p"
# 939 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The SINGLE BATTLES are conducted in\n"
# 940 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the usual way, except with one crucial\l"
# 941 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "rule that must be obeyed.\p"
# 942 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TRAINERS are permitted only to switch\n"
# 943 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "their POKéMON in and out.\p"
# 944 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TRAINERS are otherwise forbidden to\n"
# 945 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "command their POKéMON.\p"
# 946 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The POKéMON are to behave according\n"
# 947 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "to their nature and battle on their own.\p"
# 948 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You must put your trust in your\n"
# 949 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "POKéMON and watch over them.\p"
# 950 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you achieve the honor of beating\n"
# 951 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "seven TRAINERS in succession,\l"
# 952 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "we will present you with Battle Points.\p"
# 953 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 954 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "challenge, you must save the game.\p"
# 955 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 956 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "you will be disqualified.$"
# 957 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 958 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified::
# 959 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 541 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 960 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "When you have fortified your heart\n"
# 961 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "and POKéMON, you must return.$"
# 962 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 963 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhichChallenge::
# 964 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 546 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 965 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are two BATTLE HALLS,\n"
# 966 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Level 50 and Open Level.\l"
# 967 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Which is your choice of a challenge?$"
# 968 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 969 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50::
# 970 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 552 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 971 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
# 972 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You do not have the three POKéMON\n"
# 973 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "required for the challenge.\p"
# 974 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To enter, you must provide three\n"
# 975 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "different kinds of POKéMON.\p"
# 976 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "These POKéMON must all be of\n"
# 977 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Level 50 or lower.\p"
# 978 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "They also must not be holding\n"
# 979 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the same kinds of items.\p"
# 980 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 981 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 982 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd::
# 983 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 565 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 984 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Come back when you have made\n"
# 985 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your preparations.$"
# 986 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 987 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen::
# 988 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 570 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 989 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
# 990 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You do not have the three POKéMON\n"
# 991 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "required for the challenge.\p"
# 992 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To enter, you must provide three\n"
# 993 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "different kinds of POKéMON.\p"
# 994 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "They also must not be holding\n"
# 995 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the same kinds of items.\p"
# 996 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 997 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 998 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons::
# 999 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 581 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Good. Now, you must select your\n"
# 1001 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "three POKéMON.$"
# 1002 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1003 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2::
# 1004 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 586 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1005 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must save before I show you to\n"
# 1006 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the BATTLE HALL. Is that okay?$"
# 1007 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1008 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FollowMe::
# 1009 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 591 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1010 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Good.\n"
# 1011 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Now, follow me.$"
# 1012 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1013 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded::
# 1014 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 596 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1015 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I feel privileged for having seen\n"
# 1016 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your POKéMON's exploits.\p"
# 1017 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The results will be recorded.\n"
# 1018 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must ask you to briefly wait.$"
# 1019 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1020 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak::
# 1021 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 603 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1022 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To achieve a 7-win streak…\p"
# 1023 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The bonds that bind your heart with\n"
# 1024 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your POKéMON seem firm and true.$"
# 1025 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1026 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded::
# 1027 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 609 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1028 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Your feat will be recorded.\n"
# 1029 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must ask you to briefly wait.$"
# 1030 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1031 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_BattlePointsFor7WinStreak::
# 1032 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 614 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1033 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "For the feat of your 7-win streak,\n"
# 1034 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "we present you with Battle Point(s).$"
# 1035 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1036 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize::
# 1037 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 619 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1038 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You seem to have no space for\n"
# 1039 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "our prize.\p"
# 1040 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You should return when you have\n"
# 1041 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "organized your BAG.$"
# 1042 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1043 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting::
# 1044 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 626 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1045 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "We have been waiting for you…$"
# 1046 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1047 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge::
# 1048 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 630 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1049 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must save before I show you to\n"
# 1050 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the BATTLE HALL. Is that okay?$"
# 1051 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1052 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge::
# 1053 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 635 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1054 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
# 1055 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You failed to save before you ended\n"
# 1056 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your challenge the last time.\p"
# 1057 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "As a result, your challenge has been\n"
# 1058 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "disqualified. It is most unfortunate.$"
# 1059 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1060 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReceivedPrize::
# 1061 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 643 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1062 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 1063 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 1064 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1065 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink::
# 1066 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 648 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1067 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "For a hardy fellow like me,\n"
# 1068 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "hardy POKéMON are the best.\p"
# 1069 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Offense is the best defense!\n"
# 1070 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "A relentless attack is the ultimate!\p"
# 1071 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "But that's not what I wanted to chat\n"
# 1072 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "about.\p"
# 1073 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Every so often a really cute lady\n"
# 1074 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "swings by here.\p"
# 1075 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "She says that she can tell what\n"
# 1076 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "POKéMON are thinking.\p"
# 1077 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I don't know about that part,\n"
# 1078 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "but she is really cute.\p"
# 1079 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Huh?\n"
# 1080 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Why are you looking at me like that?$"
# 1081 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1082 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere::
# 1083 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 665 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1084 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hmm…\p"
# 1085 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "It appears that the nature of POKéMON\n"
# 1086 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "and the moves that they have been\l"
# 1087 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "taught are the keys to battle here.\p"
# 1088 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To be more precise, it's how well\n"
# 1089 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the moves match the nature of\l"
# 1090 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the POKéMON.\p"
# 1091 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If your POKéMON is in trouble and\n"
# 1092 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "unable to live up to its potential,\l"
# 1093 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "you may need to examine how well\l"
# 1094 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "its moves match its nature.$"
# 1095 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1096 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms::
# 1097 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 679 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1098 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "My POKéMON is usually very docile.\p"
# 1099 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "But when it's in a BATTLE HALL,\n"
# 1100 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "it sometimes seems to become\l"
# 1101 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "transformed into something wicked!\p"
# 1102 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "It becomes totally intimidating.\n"
# 1103 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "It's shocking, even.$"
# 1104 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1105 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway::
# 1106 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 688 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I wonder what sort of nature a POKéMON\n"
# 1108 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "would have if it favored enfeebling its\l"
# 1109 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "opponents and chipping away slowly.\p"
# 1110 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I'd be surprised if it was a LAX nature.\p"
# 1111 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "But, nah, that can't be right.$"
# 1112 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1113 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle::
# 1114 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 696 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1115 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Where the hearts of TRAINERS\n"
# 1116 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "are put to the test.\p"
# 1117 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I welcome you to the BATTLE PALACE.\p"
# 1118 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I accept challenges to the DOUBLE\n"
# 1119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "BATTLE HALLS.$"
# 1120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1121 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge::
# 1122 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 704 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1123 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Do you wish to take\n"
# 1124 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the DOUBLE BATTLE HALL challenge?$"
# 1125 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1126 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge::
# 1127 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 709 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1128 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In the BATTLE PALACE, there are\n"
# 1129 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "several auditoriums for DOUBLE BATTLES\l"
# 1130 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "that are named DOUBLE BATTLE HALLS.\p"
# 1131 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The DOUBLE BATTLES are conducted in\n"
# 1132 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "the usual way, except with one crucial\l"
# 1133 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "rule that must be obeyed.\p"
# 1134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TRAINERS are permitted only to switch\n"
# 1135 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "their POKéMON in and out.\p"
# 1136 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "TRAINERS are otherwise forbidden to\n"
# 1137 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "command their POKéMON.\p"
# 1138 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The POKéMON are to behave according\n"
# 1139 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "to their nature and battle on their own.\p"
# 1140 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You must put your trust in your\n"
# 1141 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "POKéMON and watch over them.\p"
# 1142 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you achieve the honor of beating\n"
# 1143 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "seven TRAINERS in succession,\l"
# 1144 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "we will present you with Battle Points.\p"
# 1145 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1146 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 1147 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1148 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1149 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1150 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers::
# 1151 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 733 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1152 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To defeat the PALACE MAVEN\n"
# 1153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "and seven TRAINERS in a row…$"
# 1154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1155 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints::
# 1156 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 738 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1157 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In honor of the bond you share with\n"
# 1158 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "your POKéMON, we present you with\l"
# 1159 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "these Battle Point(s).$"
# 1160 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1161 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch::
# 1162 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 744 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1163 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Would you like to record your latest\n"
# 1164 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "BATTLE PALACE match on your\l"
# 1165 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "FRONTIER PASS?$"
# 1166 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1167 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_RulesAreListed::
# 1168 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 750 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1169 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The BATTLE HALL rules are listed.$"
# 1170 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1171 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading::
# 1172 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 754 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1173 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 1174 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1175 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics::
# 1176 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 758 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1177 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Here, POKéMON are required to think\n"
# 1178 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "and battle by themselves.\p"
# 1179 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Unlike in the wild, POKéMON that live\n"
# 1180 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "with people behave differently\l"
# 1181 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "depending on their nature.$"
# 1182 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1183 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature::
# 1184 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 766 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1185 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Depending on its nature, a POKéMON\n"
# 1186 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "may prefer to attack no matter what.\p"
# 1187 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Another POKéMON may prefer to protect\n"
# 1188 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "itself from any harm.\p"
# 1189 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Yet another may enjoy vexing or\n"
# 1190 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "confounding its foes.\p"
# 1191 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Due to its nature, a POKéMON\n"
# 1192 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "will have favorite moves that it is good\l"
# 1193 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "at using.\p"
# 1194 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "It may also dislike certain moves that\n"
# 1195 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "it has trouble using.$"
# 1196 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1197 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves::
# 1198 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 780 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are offensive moves that inflict\n"
# 1200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "direct damage on the foe.\p"
# 1201 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are defensive moves that are\n"
# 1202 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "used to prepare for enemy attacks or\l"
# 1203 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "used to heal HP and so on.\p"
# 1204 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are also other somewhat-odd\n"
# 1205 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "moves that may enfeeble the foes with\l"
# 1206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "stat problems including poison and \l"
# 1207 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "paralysis.\p"
# 1208 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "POKéMON will consider using moves in\n"
# 1209 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "these three categories.$"
# 1210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered::
# 1212 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 794 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "When not under command by its TRAINER,\n"
# 1214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "a POKéMON may be unable to effectively\l"
# 1215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "use certain moves.\p"
# 1216 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "A POKéMON is not good at using any\n"
# 1217 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "move that it dislikes.\p"
# 1218 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If a POKéMON only knows moves that\n"
# 1219 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "do not match its nature, it will often\l"
# 1220 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "be unable to live up to its potential.$"
# 1221 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 1222 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger::
# 1223 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 805 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
# 1224 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Depending on its nature, a POKéMON may\n"
# 1225 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "start using moves that don't match its\l"
# 1226 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "nature when it is in trouble.\p"
# 1227 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "If a POKéMON begins behaving oddly\n"
# 1228 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "in a pinch, watch it carefully.$"
