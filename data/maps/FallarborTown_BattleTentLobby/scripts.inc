# 1 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 2 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_MapScripts::
# 3 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 9 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 4 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FallarborTown_BattleTentLobby_OnWarp
# 5 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 2 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 6 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.byte 0
# 8 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 9 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 3 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 11 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, FallarborTown_BattleTentLobby_EventScript_GetChallengeStatus
# 12 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 4 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 13 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, FallarborTown_BattleTentLobby_EventScript_QuitWithoutSaving
# 14 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 5 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 15 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, FallarborTown_BattleTentLobby_EventScript_ResumeChallenge
# 16 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 6 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 17 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, FallarborTown_BattleTentLobby_EventScript_WonChallenge
# 18 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 7 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 19 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, FallarborTown_BattleTentLobby_EventScript_LostChallenge
# 20 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 21 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 22 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 23 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 12 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 24 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 25 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 13 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 26 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_OnWarp:
# 27 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 14 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 28 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FallarborTown_BattleTentLobby_EventScript_TurnPlayerNorth
# 29 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 15 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 30 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 32 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TurnPlayerNorth::
# 33 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 20 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 34 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 21 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 36 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 37 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 38 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 39 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 40 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_GetChallengeStatus::
# 41 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 26 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 42 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 43 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 44 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 45 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 46 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_QuitWithoutSaving::
# 47 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 31 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 48 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 49 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 32 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 50 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 51 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 33 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 52 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 53 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 34 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 54 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 55 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 35 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 56 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 57 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 36 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 58 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 59 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 37 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 60 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 61 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 62 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 63 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 64 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_WonChallenge::
# 65 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 42 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 66 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 67 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 43 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 68 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BeatThreeTrainers, MSGBOX_DEFAULT
# 69 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 44 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 70 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame
# 71 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 45 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 72 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 73 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 46 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 74 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_setrandomprize
# 75 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 47 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 76 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 77 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 48 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 78 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save 0
# 79 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 49 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 80 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 81 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 50 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 82 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
# 83 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 84 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 85 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 86 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_GivePrize::
# 87 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 54 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 88 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 89 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 55 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 90 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_giveprize
# 91 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 56 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 92 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 57 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 94 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case FALSE, FallarborTown_BattleTentLobby_EventScript_GivePrize_3
# 95 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_GivePrize_1:
# 96 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 60 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 97 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 98 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 61 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 99 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_ReceivedPrize
# 100 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 62 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 101 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 102 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 63 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 103 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 64 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 105 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitfanfare
# 106 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 65 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 107 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 108 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 66 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 109 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 110 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 67 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 111 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 112 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 68 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 113 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 114 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 115 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 116 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_GivePrize_3:
# 117 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 58 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 118 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_NoRoomForPrize
# 119 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_GivePrize_1
# 120 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 121 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 122 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NoRoomForPrize::
# 123 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 73 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 124 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BagFullReturnForPrize, MSGBOX_DEFAULT
# 125 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 74 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 126 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 127 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 75 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 128 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 129 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 76 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 130 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 131 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 77 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 132 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 133 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 134 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 135 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 136 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_PrizeWaiting::
# 137 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 82 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 138 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 139 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 83 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 140 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BeatThreeTrainers, MSGBOX_DEFAULT
# 141 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 84 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 142 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_GivePrize
# 143 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 144 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 145 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 146 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_LostChallenge::
# 147 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 89 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 148 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 149 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 90 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 150 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving
# 151 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 91 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 152 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 153 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 92 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 154 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 155 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 93 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 156 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save 0
# 157 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 94 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 158 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 159 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 95 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 160 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
# 161 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 96 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 162 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 163 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 97 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 164 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 165 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 98 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 166 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 167 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 99 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 168 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 169 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 170 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 171 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 172 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ResumeChallenge::
# 173 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 104 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 174 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 175 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 105 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 176 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_LookingForwardToArrival
# 177 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 106 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 178 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 179 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 107 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 180 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save CHALLENGE_STATUS_SAVING
# 181 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 108 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 182 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 183 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 109 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 184 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
# 185 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 110 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 186 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 187 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 111 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 188 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 189 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 112 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 190 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_EnterChallenge
# 191 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 192 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 193 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 194 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Attendant::
# 195 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 116 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 196 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lock
# 197 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 117 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 198 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	faceplayer
# 199 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 118 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 200 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_getprize
# 201 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 119 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 202 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
# 203 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_ne FallarborTown_BattleTentLobby_EventScript_Attendant_2
# 204 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Attendant_1:
# 205 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 122 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 206 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 207 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 123 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 208 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 209 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 210 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 211 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Attendant_2:
# 212 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 120 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 213 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_PrizeWaiting
# 214 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_Attendant_1
# 215 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 216 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 217 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge::
# 218 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 127 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 219 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_TakeChallenge
# 220 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 128 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 221 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 222 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 129 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 223 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 224 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 130 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 225 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 131 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 227 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 0, FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_2
# 228 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 133 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 229 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 1, FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_3
# 230 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 135 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 231 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 2, FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_4
# 232 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 137 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 233 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_5
# 234 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 235 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 236 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_2:
# 237 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 132 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 238 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge
# 239 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 240 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 241 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_3:
# 242 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 134 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 243 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ExplainChallenge
# 244 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 245 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 246 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_4:
# 247 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 136 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 248 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_CancelChallenge
# 249 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 250 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 251 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_5:
# 252 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 138 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 253 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_CancelChallenge
# 254 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 255 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 256 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 257 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge::
# 258 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 143 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 259 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 260 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 144 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 261 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 262 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 145 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 263 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 264 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 146 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 265 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_checkineligible
# 266 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 147 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 267 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 268 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_eq FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_2
# 269 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_1:
# 270 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 150 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 271 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 272 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 151 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 273 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 274 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 152 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 275 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 276 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 153 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 277 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, 2
# 278 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 154 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 279 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 280 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 155 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 281 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 282 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 156 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 283 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitstate
# 284 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 157 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 285 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 286 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_eq FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_5
# 287 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_4:
# 288 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 160 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 289 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 290 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 161 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 291 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 292 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 162 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 293 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case NO, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_8
# 294 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 164 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 295 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case YES, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_9
# 296 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 166 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 297 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_10
# 298 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 299 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 300 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_2:
# 301 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 148 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 302 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMons
# 303 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_1
# 304 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 305 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_5:
# 306 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 158 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 307 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 308 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_4
# 309 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 310 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_8:
# 311 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 163 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 312 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 313 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 314 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 315 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_9:
# 316 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 165 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 317 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge
# 318 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 319 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 320 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_10:
# 321 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 167 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 322 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 323 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 324 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 325 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 326 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 327 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 172 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 328 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 329 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 173 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 330 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 331 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 174 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 332 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_init
# 333 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 175 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 334 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 335 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 176 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 336 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 337 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 177 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 338 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 339 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 178 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 340 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 341 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 179 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 342 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	delay 2
# 343 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 180 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 344 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 345 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 181 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 346 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 347 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 182 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 348 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 349 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_eq FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge_1
# 350 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 351 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 352 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge_1:
# 353 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 183 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 354 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 355 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 356 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 357 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 358 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_EnterChallenge::
# 359 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 188 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 360 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 361 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 189 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 362 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 363 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 190 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 364 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent, MSGBOX_DEFAULT
# 365 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 191 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 366 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 367 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 192 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 368 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	call FallarborTown_BattleTentLobby_EventScript_WalkToDoor
# 369 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 193 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 370 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_CORRIDOR, 2, 7
# 371 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 194 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 372 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 373 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 195 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 374 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitstate
# 375 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 376 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 377 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 378 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ExplainChallenge::
# 379 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 200 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 380 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ExplainFallarborTent, MSGBOX_DEFAULT
# 381 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 201 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 382 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge
# 383 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 384 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 385 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 386 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMons::
# 387 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 205 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 388 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 389 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 206 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 390 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_50, FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMons_2
# 391 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 208 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 392 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMons_3
# 393 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 394 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 395 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMons_2:
# 396 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 207 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 397 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50
# 398 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 399 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 400 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMons_3:
# 401 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 209 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 402 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen
# 403 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 404 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 405 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 406 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50::
# 407 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 214 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 408 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 409 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 215 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 410 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_EndCancelChallenge
# 411 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 412 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 413 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 414 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen::
# 415 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 219 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 416 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 417 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 220 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 418 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_EndCancelChallenge
# 419 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 420 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 421 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 422 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
# 423 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 224 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 424 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 425 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 225 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 426 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_CancelChallenge
# 427 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 428 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 429 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 430 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 431 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 229 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 432 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 433 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 434 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 435 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 436 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_CancelChallenge::
# 437 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 233 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 438 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 439 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 440 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 441 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 442 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_EndCancelChallenge::
# 443 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 237 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 444 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	release
# 445 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 446 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 447 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 448 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_WalkToDoor::
# 449 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 242 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 450 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_ATTENDANT, FallarborTown_BattleTentLobby_Movement_AttendantWalkToDoor
# 451 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 243 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 452 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentLobby_Movement_PlayerWalkToDoor
# 453 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 244 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 454 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 455 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 245 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 456 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 457 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 246 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 458 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 459 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 247 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 460 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_ATTENDANT, FallarborTown_BattleTentLobby_Movement_AttendantEnterDoor
# 461 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 248 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 462 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentLobby_Movement_PlayerEnterDoor
# 463 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 249 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 464 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 465 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 250 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 466 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 467 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 251 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 468 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 469 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	return
# 470 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 471 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 472 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 255 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 473 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Movement_AttendantWalkToDoor:
# 474 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 256 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 475 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 476 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 257 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 477 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 478 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 258 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 479 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 480 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 259 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 481 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	step_end
# 482 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 483 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 262 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 484 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Movement_AttendantEnterDoor:
# 485 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 263 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 486 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 487 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 264 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 488 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	set_invisible
# 489 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 265 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 490 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	step_end
# 491 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 492 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 268 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 493 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Movement_PlayerWalkToDoor:
# 494 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 269 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 495 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 496 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 270 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 497 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 498 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 271 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 499 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 500 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 272 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 501 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	step_end
# 502 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 503 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 275 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 504 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Movement_PlayerEnterDoor:
# 505 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 276 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 506 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 507 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 277 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 508 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 509 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 278 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 510 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	set_invisible
# 511 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 279 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 512 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	step_end
# 513 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 514 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Hiker::
# 515 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 283 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 516 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_CameToCampOut, MSGBOX_NPC
# 517 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 518 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 519 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 520 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_LittleBoy::
# 521 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 288 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 522 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_MakeThinkImJustKid, MSGBOX_NPC
# 523 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 524 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 525 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 526 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Lass::
# 527 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 293 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 528 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_FallarborTentMyFavorite, MSGBOX_NPC
# 529 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 530 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 531 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 532 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Scott::
# 533 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 298 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 534 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lock
# 535 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 299 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 536 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	faceplayer
# 537 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 300 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 538 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_FALLARBOR, FallarborTown_BattleTentLobby_EventScript_Scott_2
# 539 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Scott_1:
# 540 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 303 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 541 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ScottLookingForSomeone, MSGBOX_DEFAULT
# 542 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 304 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 543 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 544 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 305 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 545 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_FALLARBOR
# 546 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 306 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 547 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	release
# 548 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 549 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 550 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_Scott_2:
# 551 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 301 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 552 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo
# 553 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_Scott_1
# 554 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 555 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 556 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo::
# 557 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 311 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 558 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ScottMakeChallenge, MSGBOX_DEFAULT
# 559 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 312 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 560 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	release
# 561 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 562 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 563 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 564 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesBoard::
# 565 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 317 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 566 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 567 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 318 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 568 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 569 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 319 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 570 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 571 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 572 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 573 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 574 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard::
# 575 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 324 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 576 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 577 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 325 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 578 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 579 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 326 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 580 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	multichoice 17, 0, MULTI_FALLARBOR_TENT_RULES, FALSE
# 581 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 327 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 582 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 583 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 328 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 584 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 0, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_3
# 585 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 330 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 586 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 1, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_4
# 587 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 332 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 588 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 2, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_5
# 589 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 334 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 590 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 3, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_6
# 591 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 336 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 592 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 4, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_7
# 593 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 338 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 594 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 5, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_8
# 595 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 340 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 596 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_9
# 597 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1:
# 598 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 599 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 600 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_3:
# 601 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 329 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 602 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_RulesLevel
# 603 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 604 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 605 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_4:
# 606 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 331 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 607 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_RulesBattle
# 608 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 609 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 610 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_5:
# 611 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 333 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 612 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_RulesMind
# 613 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 614 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 615 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_6:
# 616 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 335 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 617 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_RulesSkill
# 618 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 619 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 620 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_7:
# 621 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 337 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 622 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_RulesBody
# 623 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 624 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 625 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_8:
# 626 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 339 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 627 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ExitRules
# 628 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 629 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 630 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_9:
# 631 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 341 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 632 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ExitRules
# 633 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1
# 634 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 635 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 636 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesLevel::
# 637 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 347 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 638 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
# 639 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 348 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 640 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 641 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 642 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 643 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 644 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesBattle::
# 645 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 353 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 646 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 647 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 354 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 648 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 649 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 650 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 651 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 652 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesMind::
# 653 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 359 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 654 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 655 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 360 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 656 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 657 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 658 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 659 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 660 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesSkill::
# 661 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 365 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 662 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 663 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 366 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 664 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 665 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 666 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 667 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 668 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_RulesBody::
# 669 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 371 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 670 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 671 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 372 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 672 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
# 673 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 674 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 675 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 676 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_ExitRules::
# 677 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 377 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 678 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
# 679 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	end
# 680 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 681 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 682 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Text_MakeThinkImJustKid::
# 683 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 381 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 684 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Fufufufufu.\p"
# 685 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I'm going to make everyone think\n"
# 686 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I'm just a kid and let them play down.\p"
# 687 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Then, I'll shock them and grab\n"
# 688 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "the title!$"
# 689 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 690 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Text_FallarborTentMyFavorite::
# 691 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 389 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 692 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "You know how BATTLE TENTS offer\n"
# 693 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "different events in different towns?\p"
# 694 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "My favorite is definitely the BATTLE\n"
# 695 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "TENT in FALLARBOR TOWN.\p"
# 696 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I think it's fantastic how TRAINERS\n"
# 697 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "try to win with all their faith in\l"
# 698 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "their POKéMON.$"
# 699 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 700 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Text_CameToCampOut::
# 701 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 399 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 702 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I heard something about some tent,\n"
# 703 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "so I came to camp out.\p"
# 704 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I didn't know that tents these days\n"
# 705 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "are so luxurious!\p"
# 706 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Since I'm here, I may as well try\n"
# 707 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "my hand at battling!$"
# 708 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 709 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Text_ScottLookingForSomeone::
# 710 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 408 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 711 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: Hi, {PLAYER}{KUN}!\n"
# 712 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "So you came out to this BATTLE TENT!\p"
# 713 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "The people in these parts tend to be\n"
# 714 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "easygoing and laid-back.\p"
# 715 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "But, you see, what I'm looking for are\n"
# 716 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "people with…\p"
# 717 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "How should I say this?\p"
# 718 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Someone bursting with the desire\n"
# 719 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "and the drive to win.\p"
# 720 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "If there were a TRAINER like that,\n"
# 721 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I'd immediately…\p"
# 722 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Whoops! Never mind!\n"
# 723 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Keep working at it!$"
# 724 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"

# 725 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_Text_ScottMakeChallenge::
# 726 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 424 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
# 727 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: Instead of wasting your\n"
# 728 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "time with the likes of me, why not\l"
# 729 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "make a challenge?$"
