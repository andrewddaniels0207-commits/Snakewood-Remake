# 1 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 2 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_MapScripts::
# 3 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 9 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 4 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentLobby_OnWarp
# 5 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 2 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 6 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 9 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 3 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 11 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, SlateportCity_BattleTentLobby_EventScript_GetChallengeStatus
# 12 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 4 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 13 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving
# 14 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 5 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 15 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, SlateportCity_BattleTentLobby_EventScript_ResumeChallenge
# 16 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 6 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 17 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, SlateportCity_BattleTentLobby_EventScript_WonChallenge
# 18 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 7 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 19 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, SlateportCity_BattleTentLobby_EventScript_LostChallenge
# 20 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.2byte 0
# 21 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 22 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 23 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 12 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 24 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 25 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 13 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 26 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_OnWarp:
# 27 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 14 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 28 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentLobby_EventScript_TurnPlayerNorth
# 29 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 15 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 30 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 32 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TurnPlayerNorth::
# 33 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 20 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 34 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 21 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 36 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 37 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 38 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 39 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 40 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_GetChallengeStatus::
# 41 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 26 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 42 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 43 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 44 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 45 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 46 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving::
# 47 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 31 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 48 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 49 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 32 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 50 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 51 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 33 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 52 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 53 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 34 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 54 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 55 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 35 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 56 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 57 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 36 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 58 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 59 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 37 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 60 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 61 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 62 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 63 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 64 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_WonChallenge::
# 65 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 42 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 66 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 67 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 43 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 68 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
# 69 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 44 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 70 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 71 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 45 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 72 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_setrandomprize
# 73 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 46 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 74 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 75 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 47 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 76 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save 0
# 77 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 48 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 78 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 79 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 49 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 80 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 81 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 82 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 83 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 84 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_GivePrize::
# 85 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 53 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 86 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_AwardYouThisPrize, MSGBOX_DEFAULT
# 87 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 54 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 88 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_giveprize
# 89 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 55 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 90 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 56 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 92 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case FALSE, SlateportCity_BattleTentLobby_EventScript_GivePrize_3
# 93 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_GivePrize_1:
# 94 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 59 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 95 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 96 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 60 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 97 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReceivedPrize
# 98 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 61 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 99 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 100 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 62 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 101 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 63 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 103 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitfanfare
# 104 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 64 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 105 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
# 106 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 107 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 108 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_GivePrize_3:
# 109 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 57 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 110 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize
# 111 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_GivePrize_1
# 112 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 113 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 114 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_NoRoomForPrize::
# 115 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 68 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 116 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom, MSGBOX_DEFAULT
# 117 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 69 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 118 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EndGivePrize
# 119 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 120 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 121 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 122 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_LostChallenge::
# 123 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 73 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 124 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 125 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 74 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 126 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
# 127 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 75 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 128 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 129 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 76 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 130 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 131 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 77 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 132 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save 0
# 133 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 78 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 134 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 135 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 79 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 136 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 137 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 138 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 139 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 140 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EndGivePrize::
# 141 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 83 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 142 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 143 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 84 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 144 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 145 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 85 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 146 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 147 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 86 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 148 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 149 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 150 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 151 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 152 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ResumeChallenge::
# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 91 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 154 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 155 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 92 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 156 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_BeenWaitingForYou
# 157 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 93 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 158 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 159 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 94 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 160 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save CHALLENGE_STATUS_SAVING
# 161 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 95 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 162 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 163 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 96 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 164 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 165 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 97 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 166 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 167 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 98 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 168 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 169 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 99 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 170 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 171 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 100 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 172 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EnterChallenge
# 173 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 174 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 175 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 176 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Attendant::
# 177 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 104 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 178 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lock
# 179 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 105 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 180 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	faceplayer
# 181 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 106 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 182 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_getprize
# 183 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 107 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 184 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
# 185 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_ne SlateportCity_BattleTentLobby_EventScript_Attendant_2
# 186 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Attendant_1:
# 187 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 110 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 188 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 189 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 111 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 190 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 191 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 192 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 193 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Attendant_2:
# 194 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 108 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 195 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_GivePrize
# 196 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_Attendant_1
# 197 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 198 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 199 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge::
# 200 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 115 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 201 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_TakeChallenge
# 202 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 116 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 203 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 204 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 117 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 205 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 206 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 118 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 207 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 119 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 209 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 0, SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_2
# 210 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 121 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 211 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 1, SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_3
# 212 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 123 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 213 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 2, SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_4
# 214 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 125 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 215 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_5
# 216 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 217 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 218 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_2:
# 219 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 120 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 220 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge
# 221 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 222 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 223 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_3:
# 224 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 122 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 225 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ExplainChallenge
# 226 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 227 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 228 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_4:
# 229 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 124 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 230 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 231 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 232 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 233 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_5:
# 234 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 126 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 235 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 236 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 237 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 238 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 239 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge::
# 240 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 131 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 241 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 242 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 132 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 243 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 244 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 133 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 245 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 246 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 134 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 247 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 248 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 135 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 249 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 250 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 136 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 251 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case NO, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_2
# 252 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 138 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 253 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case YES, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_3
# 254 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 140 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 255 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_4
# 256 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 257 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 258 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_2:
# 259 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 137 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 260 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 261 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 262 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 263 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_3:
# 264 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 139 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 265 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge
# 266 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 267 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 268 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_4:
# 269 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 141 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 270 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 271 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 272 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 273 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 274 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 275 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 146 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 276 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 277 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 147 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 278 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 279 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 148 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 280 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_init
# 281 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 149 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 282 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 283 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 150 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 284 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 285 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 151 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 286 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 287 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 152 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 288 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	delay 2
# 289 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 290 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 291 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 154 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 292 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 293 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 155 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 294 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 295 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_eq SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge_2
# 296 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge_1:
# 297 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 158 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 298 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 299 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 300 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 301 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge_2:
# 302 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 156 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 303 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 304 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge_1
# 305 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 306 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 307 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EnterChallenge::
# 308 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 162 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 309 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 310 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 163 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 311 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 312 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 164 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 313 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	call SlateportCity_BattleTentLobby_EventScript_WalkToDoor
# 314 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 165 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 315 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 2, 7
# 316 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 166 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 317 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 318 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 167 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 319 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitstate
# 320 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 321 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 322 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 323 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_WalkToDoor::
# 324 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 172 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 325 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_ATTENDANT, SlateportCity_BattleTentLobby_Movement_AttendantWalkToDoor
# 326 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 173 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 327 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentLobby_Movement_PlayerWalkToDoor
# 328 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 174 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 329 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmovement 0
# 330 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 175 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 331 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 332 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 176 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 333 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitdooranim
# 334 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 177 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 335 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_ATTENDANT, SlateportCity_BattleTentLobby_Movement_AttendantEnterDoor
# 336 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 178 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 337 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentLobby_Movement_PlayerEnterDoor
# 338 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 179 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 339 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmovement 0
# 340 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 180 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 341 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 342 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 181 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 343 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitdooranim
# 344 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 345 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 346 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 347 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 185 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 348 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_AttendantWalkToDoor:
# 349 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 186 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 350 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 351 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 187 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 352 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 353 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 188 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 354 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 355 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 189 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 356 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 357 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 358 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 192 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 359 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_AttendantEnterDoor:
# 360 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 193 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 361 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 362 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 194 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 363 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 364 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 195 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 365 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 366 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 367 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 198 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 368 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_PlayerWalkToDoor:
# 369 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 199 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 370 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 371 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 200 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 372 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 373 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 201 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 374 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 375 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 202 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 376 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 377 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 378 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 205 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 379 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_PlayerEnterDoor:
# 380 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 206 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 381 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 382 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 207 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 383 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 384 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 208 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 385 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 386 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 209 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 387 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 388 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 389 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ExplainChallenge::
# 390 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 213 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 391 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSlateportTent, MSGBOX_DEFAULT
# 392 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 214 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 393 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge
# 394 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 395 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 396 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 397 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_CancelChallengeSaveFailed::
# 398 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 218 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 399 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 400 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 219 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 401 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge
# 402 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 403 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 404 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 405 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 406 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 223 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 407 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 408 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	return
# 409 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 410 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 411 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_CancelChallenge::
# 412 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 227 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 413 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 414 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 228 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 415 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 416 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 417 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 418 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 419 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 232 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 420 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_UnusedEnterDoor:
# 421 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 233 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 422 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 423 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 234 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 424 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 425 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 235 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 426 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 427 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 236 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 428 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
# 429 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 237 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 430 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	step_end
# 431 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 432 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TormentGiver::
# 433 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 241 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 434 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lock
# 435 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 242 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 436 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	faceplayer
# 437 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 243 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 438 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_TORMENT, SlateportCity_BattleTentLobby_EventScript_TormentGiver_2
# 439 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TormentGiver_1:
# 440 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 246 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 441 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe, MSGBOX_DEFAULT
# 442 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 247 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 443 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	giveitem ITEM_TM_TORMENT
# 444 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 248 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 445 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, FALSE
# 446 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_eq SlateportCity_BattleTentLobby_EventScript_TormentGiver_5
# 447 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TormentGiver_4:
# 448 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 251 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 449 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_TORMENT
# 450 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 252 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 451 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainTorment, MSGBOX_DEFAULT
# 452 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 253 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 453 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 454 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 455 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 456 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TormentGiver_2:
# 457 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 244 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 458 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReceivedTorment
# 459 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_TormentGiver_1
# 460 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 461 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_TormentGiver_5:
# 462 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 249 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 463 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 464 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_TormentGiver_4
# 465 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 466 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 467 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReceivedTorment::
# 468 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 258 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 469 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainTorment, MSGBOX_DEFAULT
# 470 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 259 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 471 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	release
# 472 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 473 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 474 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 475 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Man::
# 476 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 264 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 477 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons, MSGBOX_NPC
# 478 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 479 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 480 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 481 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Girl::
# 482 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 269 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 483 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons, MSGBOX_NPC
# 484 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 485 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 486 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 487 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_Woman::
# 488 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 274 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 489 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection, MSGBOX_NPC
# 490 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 491 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 492 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 493 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesBoard::
# 494 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 279 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 495 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 496 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 280 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 497 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 498 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 281 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 499 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 500 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 501 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 502 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 503 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard::
# 504 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 286 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 505 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 506 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 287 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 507 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 508 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 288 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 509 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	multichoice 17, 0, MULTI_SLATEPORT_TENT_RULES, FALSE
# 510 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 289 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 511 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 512 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 290 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 513 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 0, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_3
# 514 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 292 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 515 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 1, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_4
# 516 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 294 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 517 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 2, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_5
# 518 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 296 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 519 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 3, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_6
# 520 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 298 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 521 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 4, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_7
# 522 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 300 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 523 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 5, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_8
# 524 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 302 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 525 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_9
# 526 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1:
# 527 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 528 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 529 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_3:
# 530 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 291 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 531 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_RulesBasics
# 532 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1
# 533 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 534 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_4:
# 535 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 293 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 536 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_RulesSwapPartner
# 537 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1
# 538 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 539 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_5:
# 540 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 295 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 541 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_RulesSwapNumber
# 542 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1
# 543 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 544 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_6:
# 545 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 297 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 546 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_RulesSwapNotes
# 547 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1
# 548 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 549 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_7:
# 550 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 299 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 551 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_RulesMons
# 552 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1
# 553 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 554 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_8:
# 555 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 301 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 556 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ExitRules
# 557 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1
# 558 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 559 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_9:
# 560 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 303 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 561 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ExitRules
# 562 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1
# 563 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 564 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 565 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesBasics::
# 566 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 309 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 567 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 568 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 310 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 569 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 570 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 571 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 572 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 573 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapPartner::
# 574 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 315 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 575 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 576 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 316 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 577 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 578 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 579 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 580 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 581 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapNumber::
# 582 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 321 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 583 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 584 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 322 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 585 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 586 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 587 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 588 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 589 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesSwapNotes::
# 590 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 327 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 591 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNotes, MSGBOX_DEFAULT
# 592 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 328 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 593 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 594 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 595 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 596 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 597 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_RulesMons::
# 598 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 333 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 599 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 600 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 334 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 601 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
# 602 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 603 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 604 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 605 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_ExitRules::
# 606 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 339 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 607 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
# 608 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	end
# 609 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 610 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 611 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe::
# 612 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 343 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 613 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "So, like, I couldn't find myself any\n"
# 614 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "POKéMON that were, like, for me.\p"
# 615 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "So, I figured, like, hey, I should file\n"
# 616 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "a complaint to the guy there?\p"
# 617 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "And he wouldn't hear me out, like, hey!\n"
# 618 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "So, like, total bummer, man!\p"
# 619 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Hey, like, you! Zip it, you know?\n"
# 620 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Just, you know, take this!$"
# 621 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 622 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_ExplainTorment::
# 623 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 354 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 624 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "That's, like, TM41, you know?\n"
# 625 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Hey, it's TORMENT, you hearing me?\p"
# 626 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Like, it won't let the other guy\n"
# 627 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "use the same move twice in a row, see?\p"
# 628 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Hey, now, you listen here, like,\n"
# 629 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "I'm not laying a torment on you!$"
# 630 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 631 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons::
# 632 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 363 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 633 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "I don't really like BUG POKéMON,\n"
# 634 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "but maybe I'll try using some for\l"
# 635 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "a change of pace.\p"
# 636 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Who knows, I might even get to like\n"
# 637 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "them!$"
# 638 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 639 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons::
# 640 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 371 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 641 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "You can battle all you want here even\n"
# 642 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "if you don't have any tough POKéMON.$"
# 643 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"

# 644 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection::
# 645 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 376 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
# 646 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Wouldn't it be nice if they had more of\n"
# 647 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "a selection?$"
