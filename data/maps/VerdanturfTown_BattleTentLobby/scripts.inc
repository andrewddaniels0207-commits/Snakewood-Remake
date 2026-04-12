# 1 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 2 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_MapScripts::
# 3 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 9 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 4 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, VerdanturfTown_BattleTentLobby_OnWarp
# 5 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 2 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 6 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.byte 0
# 8 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 9 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 3 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 11 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, VerdanturfTown_BattleTentLobby_EventScript_GetChallengeStatus
# 12 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 4 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 13 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving
# 14 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 5 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 15 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge
# 16 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 6 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 17 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, VerdanturfTown_BattleTentLobby_EventScript_WonChallenge
# 18 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 7 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 19 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, VerdanturfTown_BattleTentLobby_EventScript_LostChallenge
# 20 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 21 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 22 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 23 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 12 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 24 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 25 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 13 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 26 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_OnWarp:
# 27 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 14 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 28 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, VerdanturfTown_BattleTentLobby_EventScript_TurnPlayerNorth
# 29 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 15 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 30 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 32 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TurnPlayerNorth::
# 33 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 20 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 34 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 21 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 36 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 37 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 38 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 39 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 40 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GetChallengeStatus::
# 41 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 26 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 42 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 43 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 44 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 45 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 46 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving::
# 47 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 31 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 48 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 49 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 32 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 50 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 51 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 33 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 52 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 53 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 34 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 54 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 55 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 35 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 56 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 57 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 36 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 58 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 59 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 37 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 60 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 61 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 62 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 63 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 64 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_WonChallenge::
# 65 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 42 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 66 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 67 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 43 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 68 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 69 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 44 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 70 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
# 71 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 45 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 72 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 73 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 46 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 74 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_setrandomprize
# 75 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 47 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 76 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 77 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 48 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 78 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 79 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 49 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 80 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 81 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 50 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 82 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 83 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 84 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 85 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 86 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GivePrize::
# 87 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 54 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 88 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 89 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 55 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 90 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_giveprize
# 91 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 56 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 92 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 57 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 94 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FALSE, VerdanturfTown_BattleTentLobby_EventScript_GivePrize_3
# 95 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GivePrize_1:
# 96 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 60 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 97 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 98 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 61 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 99 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReceivedPrize
# 100 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 62 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 101 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 102 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 63 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 103 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 64 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 105 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitfanfare
# 106 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 65 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 107 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 108 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 66 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 109 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 110 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 67 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 111 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 112 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 68 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 113 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 114 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 115 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 116 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GivePrize_3:
# 117 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 58 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 118 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_NoRoomForPrize
# 119 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_GivePrize_1
# 120 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 121 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 122 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NoRoomForPrize::
# 123 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 73 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 124 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize, MSGBOX_DEFAULT
# 125 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 74 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 126 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 127 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 75 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 128 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 129 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 76 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 130 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 131 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 77 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 132 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 133 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 134 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 135 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 136 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_PrizeWaiting::
# 137 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 82 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 138 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 139 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 83 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 140 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 141 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 84 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 142 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_GivePrize
# 143 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 144 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 145 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 146 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LostChallenge::
# 147 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 89 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 148 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 149 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 90 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 150 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_ResultsWillBeRecorded
# 151 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 91 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 152 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 153 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 92 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 154 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 155 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 93 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 156 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 157 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 94 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 158 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 159 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 95 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 160 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 161 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 96 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 162 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 163 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 97 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 164 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 165 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 98 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 166 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 167 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 99 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 168 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 169 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 170 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 171 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 172 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge::
# 173 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 104 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 174 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 175 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 105 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 176 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 177 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 106 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 179 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 107 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 180 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 181 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 108 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 182 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save CHALLENGE_STATUS_SAVING
# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 109 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 185 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 110 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 186 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 187 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 111 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 188 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 189 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 112 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 190 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 191 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 113 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 192 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge
# 193 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 194 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 195 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 196 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Attendant::
# 197 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 117 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 198 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 199 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 118 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 200 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 201 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 119 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 202 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_getprize
# 203 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 120 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 204 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
# 205 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_ne VerdanturfTown_BattleTentLobby_EventScript_Attendant_2
# 206 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Attendant_1:
# 207 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 123 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 208 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 209 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 124 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 210 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 211 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 212 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 213 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Attendant_2:
# 214 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 121 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 215 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_PrizeWaiting
# 216 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_Attendant_1
# 217 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 218 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 219 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge::
# 220 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 128 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 221 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_TakeChallenge
# 222 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 129 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 223 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 224 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 130 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 225 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 226 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 131 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 227 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 228 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 132 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 229 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_2
# 230 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 134 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 231 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_3
# 232 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 136 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 233 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_4
# 234 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 138 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 235 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_5
# 236 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 237 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 238 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_2:
# 239 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 133 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 240 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge
# 241 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 242 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 243 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_3:
# 244 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 135 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 245 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ExplainChallenge
# 246 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 247 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 248 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_4:
# 249 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 137 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 250 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 251 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 252 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 253 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_5:
# 254 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 139 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 255 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 256 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 257 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 258 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 259 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge::
# 260 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 144 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 261 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 262 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 145 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 263 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 264 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 146 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 265 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 266 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 147 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 267 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_checkineligible
# 268 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 148 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 269 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 270 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_2
# 271 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_1:
# 272 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 151 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 273 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 274 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 152 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 275 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 276 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 153 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 277 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 278 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 154 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 279 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, 1
# 280 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 155 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 281 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 282 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 156 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 283 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 284 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 157 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 285 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 286 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 158 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 287 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 288 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_5
# 289 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_4:
# 290 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 161 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 291 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 292 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 162 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 293 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 294 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 163 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 295 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case NO, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_8
# 296 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 165 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 297 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case YES, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_9
# 298 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 167 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 299 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_10
# 300 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 301 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 302 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_2:
# 303 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 149 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 304 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons
# 305 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_1
# 306 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 307 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_5:
# 308 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 159 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 309 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 310 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_4
# 311 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 312 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_8:
# 313 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 164 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 314 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 315 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 316 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 317 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_9:
# 318 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 166 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 319 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge
# 320 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 321 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 322 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_10:
# 323 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 168 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 324 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 325 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 326 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 327 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 328 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 329 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 173 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 330 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 331 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 174 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 332 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 333 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 175 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 334 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_init
# 335 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 176 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 336 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 337 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 177 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 338 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 339 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 340 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 341 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 179 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 342 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 343 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 180 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 344 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	delay 2
# 345 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 181 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 346 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 347 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 182 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 348 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 349 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 350 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 351 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge_1
# 352 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 353 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 354 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge_1:
# 355 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 356 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 357 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 358 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 359 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 360 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge::
# 361 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 189 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 362 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 363 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 190 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 364 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 365 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 191 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 366 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NowFollowMe, MSGBOX_DEFAULT
# 367 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 192 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 368 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 369 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 193 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 370 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call VerdanturfTown_BattleTentLobby_EventScript_WalkToDoor
# 371 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 194 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 372 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_CORRIDOR, 2, 7
# 373 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 195 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 374 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 375 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 196 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 376 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 377 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 378 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 379 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 380 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ExplainChallenge::
# 381 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 201 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 382 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent, MSGBOX_DEFAULT
# 383 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 202 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 384 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge
# 385 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 386 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 387 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 388 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons::
# 389 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 206 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 390 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 391 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 207 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 392 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_50, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons_2
# 393 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 209 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 394 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons_3
# 395 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 396 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 397 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons_2:
# 398 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 208 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 399 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50
# 400 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 401 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 402 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons_3:
# 403 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 210 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 404 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen
# 405 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 406 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 407 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 408 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50::
# 409 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 215 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 410 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 411 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 216 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 412 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge
# 413 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 414 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 415 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 416 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen::
# 417 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 220 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 418 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 419 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 221 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 420 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge
# 421 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 422 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 423 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 424 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
# 425 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 225 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 426 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 427 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 226 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 428 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 429 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 430 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 431 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 432 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 433 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 230 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 434 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 435 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 436 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 437 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 438 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge::
# 439 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 234 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 440 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 441 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 442 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 443 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 444 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge::
# 445 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 238 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 446 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 447 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 448 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 449 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 450 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_WalkToDoor::
# 451 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 243 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 452 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_ATTENDANT, VerdanturfTown_BattleTentLobby_Movement_WalkToDoor
# 453 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 244 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 454 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentLobby_Movement_WalkToDoor
# 455 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 245 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 456 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 457 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 246 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 458 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 459 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 247 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 460 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 461 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 248 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 462 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_ATTENDANT, VerdanturfTown_BattleTentLobby_Movement_AttendantEnterDoor
# 463 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 249 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 464 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentLobby_Movement_PlayerEnterDoor
# 465 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 250 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 466 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 467 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 251 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 468 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 469 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 252 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 470 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 471 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 472 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 473 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 474 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 256 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 475 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_WalkToDoor:
# 476 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 257 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 477 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 478 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 258 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 479 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 480 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 259 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 481 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 482 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 260 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 483 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 484 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 485 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 263 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 486 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_AttendantEnterDoor:
# 487 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 264 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 488 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 489 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 265 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 490 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
# 491 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 266 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 492 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 493 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 494 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 269 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 495 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_PlayerEnterDoor:
# 496 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 270 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 497 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 498 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 271 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 499 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 500 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 272 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 501 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
# 502 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 273 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 503 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 504 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 505 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver::
# 506 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 277 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 507 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 508 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 278 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 509 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 510 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 279 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 511 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ATTRACT, VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_2
# 512 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_1:
# 513 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 282 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 514 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep, MSGBOX_DEFAULT
# 515 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 283 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 516 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	giveitem ITEM_TM_ATTRACT
# 517 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 284 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 518 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 519 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_5
# 520 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_4:
# 521 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 287 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 522 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_ATTRACT
# 523 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 288 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 524 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
# 525 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 289 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 526 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 527 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 528 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 529 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_2:
# 530 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 280 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 531 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReceivedAttract
# 532 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_1
# 533 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 534 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_5:
# 535 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 285 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 536 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 537 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_4
# 538 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 539 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 540 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReceivedAttract::
# 541 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 294 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 542 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
# 543 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 295 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 544 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 545 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 546 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 547 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 548 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Boy1::
# 549 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 300 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 550 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves, MSGBOX_NPC
# 551 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 552 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 553 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 554 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Boy2::
# 555 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 305 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 556 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 557 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 306 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 558 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves, MSGBOX_DEFAULT
# 559 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 307 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 560 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 561 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 562 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 563 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 564 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Scott::
# 565 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 312 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 566 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 567 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 313 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 568 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 569 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 314 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 570 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_VERDANTURF, VerdanturfTown_BattleTentLobby_EventScript_Scott_2
# 571 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Scott_1:
# 572 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 317 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 573 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers, MSGBOX_DEFAULT
# 574 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 318 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 575 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 576 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 319 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 577 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_VERDANTURF
# 578 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 320 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 579 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 580 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 581 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 582 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Scott_2:
# 583 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 315 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 584 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo
# 585 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_Scott_1
# 586 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 587 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 588 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo::
# 589 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 325 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 590 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly, MSGBOX_DEFAULT
# 591 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 326 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 592 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 593 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 594 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 595 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 596 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LittleBoy::
# 597 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 331 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 598 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 599 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 332 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 600 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry, MSGBOX_DEFAULT
# 601 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 333 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 602 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 603 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 604 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 605 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 606 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesBoard::
# 607 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 338 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 608 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 609 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 339 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 610 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 611 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 340 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 612 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 613 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 614 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 615 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 616 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard::
# 617 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 345 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 618 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 619 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 346 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 620 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 621 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 347 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 622 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BATTLE_TENT_RULES
# 623 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 348 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 624 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ShowScrollableMultichoice
# 625 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 349 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 626 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 627 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 350 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 628 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 629 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 351 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 630 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_3
# 631 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 353 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 632 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_4
# 633 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 355 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 634 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_5
# 635 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 357 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 636 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 3, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_6
# 637 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 359 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 638 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 4, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_7
# 639 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 361 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 640 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 5, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_8
# 641 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 363 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 642 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 6, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_9
# 643 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 365 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 644 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_10
# 645 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1:
# 646 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 647 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 648 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_3:
# 649 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 352 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 650 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_RulesLevel
# 651 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 652 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 653 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_4:
# 654 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 354 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 655 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_RulesBasics
# 656 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 657 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 658 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_5:
# 659 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 356 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 660 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_RulesNature
# 661 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 662 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 663 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_6:
# 664 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 358 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 665 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_RulesMoves
# 666 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 667 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 668 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_7:
# 669 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 360 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 670 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_RulesUnderpowered
# 671 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 672 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 673 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_8:
# 674 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 362 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 675 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_RulesWhenInDanger
# 676 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 677 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 678 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_9:
# 679 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 364 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 680 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ExitRules
# 681 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 682 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 683 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_10:
# 684 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 366 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 685 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ExitRules
# 686 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 687 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 688 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 689 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesLevel::
# 690 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 372 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 691 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
# 692 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 373 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 693 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 694 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 695 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 696 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 697 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesBasics::
# 698 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 378 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 699 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 700 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 379 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 701 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 702 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 703 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 704 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 705 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesNature::
# 706 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 384 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 707 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 708 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 385 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 709 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 710 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 711 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 712 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 713 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesMoves::
# 714 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 390 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 715 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 716 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 391 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 717 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 718 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 719 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 720 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 721 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesUnderpowered::
# 722 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 396 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 723 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 724 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 397 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 725 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 726 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 727 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 728 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 729 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesWhenInDanger::
# 730 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 402 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 731 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 732 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 403 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 733 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 734 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 735 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 736 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 737 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ExitRules::
# 738 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 408 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 739 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 740 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 741 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 742 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 743 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves::
# 744 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 412 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 745 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it doesn't like a certain move,\n"
# 746 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "a POKéMON will be reluctant to use it.\p"
# 747 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "It doesn't matter how strong it is,\n"
# 748 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "either.\p"
# 749 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "For example, a POKéMON with a GENTLE\n"
# 750 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "nature probably won't enjoy hurting\l"
# 751 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "its opponents.\p"
# 752 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it can't seem to live up to its\n"
# 753 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "potential, it's probably failing at\l"
# 754 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "using a disliked move against its will.$"
# 755 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 756 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry::
# 757 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 425 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 758 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My big sister is gentle usually.\n"
# 759 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "But when she gets angry,\l"
# 760 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "she's really, really scary!\p"
# 761 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I bet a gentle POKéMON will be scary\n"
# 762 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "if it gets angry!$"
# 763 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 764 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep::
# 765 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 433 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 766 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my POKéMON…\n"
# 767 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "The attraction runs deep…\p"
# 768 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Oh, hi, you didn't see that, did you?\n"
# 769 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Well, it doesn't matter.\p"
# 770 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "How would you like this TM for\n"
# 771 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "your POKéMON?$"
# 772 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 773 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_AttractionMutual::
# 774 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 442 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 775 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my POKéMON…\n"
# 776 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I'm sure the attraction is mutual!\p"
# 777 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "They battle exactly the way I want\n"
# 778 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "them to!$"
# 779 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 780 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves::
# 781 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 449 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 782 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "What kind of moves have you taught\n"
# 783 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "your POKéMON?\p"
# 784 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I think you would give yourself\n"
# 785 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "an advantage if they knew how to\l"
# 786 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "heal or protect themselves.$"
# 787 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 788 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers::
# 789 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 457 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 790 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: Hey there, {PLAYER}{KUN}!\n"
# 791 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I thought I might see you here.\p"
# 792 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "A BATTLE TENT's a place where\n"
# 793 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "you can meet tough TRAINERS.\p"
# 794 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "It doesn't matter what the rules are,\n"
# 795 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "or how battles are waged, either.\p"
# 796 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "{PLAYER}{KUN}, I expect you to do\n"
# 797 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "the best you can!$"
# 798 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 799 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly::
# 800 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 468 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
# 801 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: I visit here regularly in hopes\n"
# 802 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "of seeing tough TRAINERS in action\l"
# 803 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "in whatever the situation.$"
