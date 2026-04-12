# 1 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 2 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 3 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 11 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
# 12 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 5 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
# 16 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 7 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
# 18 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 8 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 19 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
# 20 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0
# 21 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 22 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 23 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 12 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 24 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 25 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnWarp:
# 27 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 28 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 29 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 30 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
# 31 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 16 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 33 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0
# 35 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 36 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth::
# 37 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 23 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 38 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 25 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 40 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 41 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 43 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus::
# 45 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 31 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_getstatus
# 47 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 49 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 50 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
# 51 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 37 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 52 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 53 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 39 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 54 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 41 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 56 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 57 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 43 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 58 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_setswapped
# 59 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 45 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
# 61 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 47 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, 0
# 63 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 49 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 65 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 51 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 67 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 53 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 68 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 69 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 55 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 70 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 71 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 73 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 74 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
# 75 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 61 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 77 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 63 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_isbrain
# 79 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 65 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 80 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 81 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_2
# 83 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 84 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 85 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 86 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_1::
# 87 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 71 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 88 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 73 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 90 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 91 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 75 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 92 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints
# 93 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 94 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 95 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_2::
# 97 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 81 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 98 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead
# 99 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 100 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_1
# 101 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 102 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 103 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 104 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead::
# 105 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 87 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 106 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
# 107 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 89 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 108 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 109 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 110 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 111 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 112 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
# 113 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 95 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 114 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
# 115 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 97 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 116 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_givepoints
# 117 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 99 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 118 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 119 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 101 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 120 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
# 121 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 103 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 122 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 123 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 105 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 124 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 125 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 107 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 126 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 127 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 109 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 128 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 129 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 111 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 130 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 131 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 113 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 132 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 133 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 115 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 134 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 135 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 117 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 136 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 138 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 139 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 140 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
# 141 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 123 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 142 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 143 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 125 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 144 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
# 145 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 127 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 146 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 129 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 148 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 149 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 131 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 151 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 152 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 153 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 135 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 154 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 155 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 156 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 157 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 139 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 158 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 159 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 141 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 160 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 161 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 162 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 163 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 164 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle::
# 165 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 147 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 166 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 167 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 168 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 169 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 150 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_2
# 171 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 172 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 173 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 174 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_1::
# 175 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 155 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 176 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
# 177 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 179 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 159 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 180 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 181 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 182 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 183 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_2::
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 172 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 187 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 173 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_1
# 189 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 190 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 191 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 192 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_5::
# 193 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 194 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 195 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 198 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_6::
# 199 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 200 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle
# 201 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 202 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle_7::
# 205 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 190 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 207 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 208 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 209 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 210 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle::
# 211 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 212 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 213 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 214 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 215 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle::
# 217 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 202 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 219 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 204 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 221 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 223 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 208 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 225 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 226 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 227 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 228 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
# 229 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 214 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 231 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 216 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
# 233 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 218 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 234 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 235 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 220 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 236 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save CHALLENGE_STATUS_SAVING
# 237 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 222 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 239 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 224 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 241 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 226 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 243 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 245 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 230 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 247 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 248 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge
# 249 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 250 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 251 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 252 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
# 253 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 255 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 240 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	faceplayer
# 257 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 242 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 258 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 259 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 260 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 261 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 246 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
# 263 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 264 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 266 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
# 267 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 252 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 268 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 269 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 254 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 271 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 256 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 272 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
# 273 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 274 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 275 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 276 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
# 277 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 279 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 264 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 280 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 281 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 265 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 282 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_Attendant_2
# 283 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 286 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1::
# 287 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 270 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 288 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 289 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 271 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_Attendant_4
# 291 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 292 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 294 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Attendant_2::
# 295 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 277 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle
# 297 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 278 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 298 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1
# 299 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 302 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Attendant_4::
# 303 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 283 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle
# 305 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 306 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 307 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 308 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
# 309 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 289 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 310 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 311 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 290 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 312 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_2
# 313 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 314 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 315 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 316 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1::
# 317 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 295 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 319 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 296 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 320 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5
# 321 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 322 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 323 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 324 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_4::
# 325 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 301 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 326 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 327 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 328 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 329 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 330 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 331 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 332 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_2::
# 333 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 318 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 334 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge
# 335 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 319 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 336 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1
# 337 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 338 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 339 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 340 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5::
# 341 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 324 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge
# 343 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 325 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 344 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_4
# 345 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 346 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 347 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 348 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_8::
# 349 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 330 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 350 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
# 351 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 352 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 354 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_9::
# 355 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 336 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
# 357 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 358 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_10::
# 361 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 342 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 362 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 363 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 364 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 366 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_11::
# 367 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 348 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 368 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 369 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 370 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 371 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 372 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
# 373 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 354 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 374 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
# 375 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 356 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 376 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 377 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 358 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 378 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 379 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 380 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 381 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 382 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1::
# 383 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 368 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 385 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 370 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 386 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 387 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 388 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 389 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 390 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_3::
# 391 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 383 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 392 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 393 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 384 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 394 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1
# 395 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 396 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 397 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_4::
# 399 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 389 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 400 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 401 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 390 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 402 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1
# 403 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 404 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 406 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_6::
# 407 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 395 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 408 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
# 409 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 410 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 411 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 412 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_7::
# 413 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 401 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 414 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge
# 415 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 416 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 417 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 418 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_8::
# 419 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 407 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 420 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
# 421 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 422 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 423 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 424 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge::
# 425 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 413 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 426 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 427 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 415 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 428 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_init
# 429 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 417 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 430 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 431 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 419 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
# 433 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 421 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 435 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 423 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 436 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 437 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 425 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 438 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	delay 2
# 439 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 427 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 440 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 441 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 429 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 442 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 443 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 431 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, 0
# 445 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 432 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 446 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_2
# 447 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 448 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 449 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 450 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_1::
# 451 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 437 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 452 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 453 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 454 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 456 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_2::
# 457 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 443 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 458 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed
# 459 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 460 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge_1
# 461 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 462 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 463 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 464 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
# 465 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 449 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 466 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 467 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 451 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 468 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 469 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 453 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 470 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 471 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 455 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 472 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 473 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 456 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 474 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_2
# 475 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 476 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 478 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1::
# 479 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 461 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 480 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 481 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 462 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 482 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_5
# 483 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 484 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_4::
# 487 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 467 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 488 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor
# 489 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 469 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 490 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor
# 491 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 471 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 492 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmovement 0
# 493 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 473 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 494 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
# 495 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 475 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 496 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 497 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 477 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 498 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitstate
# 499 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 500 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 501 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 502 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_2::
# 503 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 483 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 504 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant
# 505 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 484 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 506 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1
# 507 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 508 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 509 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_5::
# 511 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 489 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant
# 513 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 490 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_4
# 515 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 516 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant::
# 519 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 495 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_SINGLES
# 521 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 522 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 523 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 524 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant::
# 525 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 501 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_DOUBLES
# 527 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 528 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 529 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 530 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
# 531 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 507 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 533 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 508 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 534 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_2
# 535 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 536 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 537 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1::
# 539 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 513 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 540 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 541 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 542 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_5
# 543 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 544 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 545 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 546 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_4::
# 547 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 519 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 548 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge
# 549 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 550 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 552 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_2::
# 553 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 525 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 554 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge
# 555 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 526 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 556 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1
# 557 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 558 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 559 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_5::
# 561 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 531 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge
# 563 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 532 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_4
# 565 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 566 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 567 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 568 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed::
# 569 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 537 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 571 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 539 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 572 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 573 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 574 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 575 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 576 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge::
# 577 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 545 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 579 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 547 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 581 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 582 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 583 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 584 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
# 585 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 553 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 586 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 587 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 555 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 588 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
# 589 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 590 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 591 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 592 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor::
# 593 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 562 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 594 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 595 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 564 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 596 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 597 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 566 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 598 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 599 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 568 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 600 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	set_invisible
# 601 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 570 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 602 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
# 603 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 604 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 605 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 606 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor::
# 607 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 576 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 608 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 609 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 578 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 610 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 611 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 580 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 612 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 613 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 582 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 614 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 615 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 584 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 616 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
# 617 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 618 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 619 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 620 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle::
# 621 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 589 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 622 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 623 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 624 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 625 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 626 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle::
# 627 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 595 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 628 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 629 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 630 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 631 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 632 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge::
# 633 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 601 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 634 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
# 635 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 636 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 637 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 638 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge::
# 639 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 607 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 640 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
# 641 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 642 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 643 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 644 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge::
# 645 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 613 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 646 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 647 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 648 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 649 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 650 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge::
# 651 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 619 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 652 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 653 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 654 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 655 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 656 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
# 657 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 625 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 658 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 659 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 627 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 660 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
# 661 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 629 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 662 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 663 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 631 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 664 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 665 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 633 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 666 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 667 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 668 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 669 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 670 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
# 671 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 639 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 672 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 673 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 641 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 674 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
# 675 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 643 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 676 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 677 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 645 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 678 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 679 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 647 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 680 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 681 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 682 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 683 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 684 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Woman::
# 685 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 653 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 686 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
# 687 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 688 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 689 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 690 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Camper::
# 691 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 659 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 692 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
# 693 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 694 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 695 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 696 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
# 697 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 665 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 698 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 699 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 667 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 700 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
# 701 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 669 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 702 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
# 703 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 704 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 705 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 706 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
# 707 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 675 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 708 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
# 709 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 710 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 711 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 712 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
# 713 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 681 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 714 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 715 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 683 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 716 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 717 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 685 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 718 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 719 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 720 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 721 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 722 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
# 723 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 691 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 724 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 725 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 693 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 726 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 727 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 695 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 728 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
# 729 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 730 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 731 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 732 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1::
# 733 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 734 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 735 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 736 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_3::
# 737 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 719 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 738 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics
# 739 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 720 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 740 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
# 741 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 742 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 743 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 744 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_4::
# 745 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 725 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 746 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner
# 747 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 726 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 748 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
# 749 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 750 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 751 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 752 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_5::
# 753 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 731 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 754 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber
# 755 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 732 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 756 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
# 757 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 758 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 759 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 760 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_6::
# 761 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 737 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 762 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes
# 763 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 738 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 764 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
# 765 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 766 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 767 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 768 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_7::
# 769 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 743 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 770 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv
# 771 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 744 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 772 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
# 773 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 774 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 775 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 776 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_8::
# 777 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 749 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 778 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 779 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 750 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 780 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
# 781 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 782 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 783 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 784 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_9::
# 785 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 755 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 786 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 787 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 756 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 788 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1
# 789 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 790 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 791 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 792 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics::
# 793 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 761 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 794 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 795 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 763 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 796 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 797 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 798 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 799 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 800 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner::
# 801 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 769 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 802 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 803 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 771 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 804 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 805 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 806 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 807 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 808 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber::
# 809 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 777 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 810 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 811 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 779 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 812 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 813 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 814 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 815 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 816 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes::
# 817 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 785 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 818 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
# 819 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 787 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 820 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 821 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 822 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 823 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 824 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv::
# 825 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 793 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 826 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
# 827 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 795 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 828 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 829 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 830 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 831 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 832 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExitRules::
# 833 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 801 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 834 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 835 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 836 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 837 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 838 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle::
# 839 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 805 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 840 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of TRAINERS\n"
# 841 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "is put to the test!\p"
# 842 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Welcome to the BATTLE FACTORY!\p"
# 843 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I am your guide to the Battle Swap\n"
# 844 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Single Tournament.$"
# 845 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 846 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge::
# 847 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 813 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 848 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
# 849 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Swap Single challenge?$"
# 850 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 851 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge::
# 852 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 818 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 853 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap Single Tournament\n"
# 854 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "is a SINGLE BATTLE competition using\l"
# 855 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "only rental POKéMON.\p"
# 856 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "First, you will be loaned three\n"
# 857 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "POKéMON specifically for this event.\p"
# 858 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Using the supplied rental POKéMON,\n"
# 859 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "you must conduct a SINGLE BATTLE.\p"
# 860 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you win, you are permitted to trade\n"
# 861 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "one of your rental POKéMON.\p"
# 862 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Repeat this cycle of battling and\n"
# 863 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "trading--if you win seven times in\l"
# 864 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "a row, you will earn Battle Points.\p"
# 865 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 866 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 867 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you don't save, you will be\n"
# 868 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "disqualified from your challenge.$"
# 869 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 870 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit::
# 871 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 837 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 872 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We look forward to your next visit.$"
# 873 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 874 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode::
# 875 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 841 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 876 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which level do you wish to challenge?\n"
# 877 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Level 50 or Open Level?$"
# 878 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 879 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge::
# 880 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 846 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 881 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Before you begin your challenge,\n"
# 882 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I need to save the game. Is that okay?$"
# 883 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 884 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping::
# 885 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 851 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 886 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Okay, I will hold your POKéMON for\n"
# 887 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "safekeeping while you compete.$"
# 888 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 889 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_StepThisWay::
# 890 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 856 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 891 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please step this way.$"
# 892 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 893 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults::
# 894 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 860 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 895 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Thank you for participating!\p"
# 896 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I will return your POKéMON in exchange\n"
# 897 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "for our rental POKéMON.\p"
# 898 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I must also save the event results.\n"
# 899 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please wait.$"
# 900 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 901 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReturnMons::
# 902 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 868 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 903 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I will return your POKéMON in exchange\n"
# 904 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "for our rental POKéMON.$"
# 905 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 906 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins::
# 907 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 873 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 908 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations! You've won seven\n"
# 909 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "straight Battle Swap matches!$"
# 910 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 911 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak::
# 912 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 878 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 913 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your 7-win streak,\n"
# 914 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "we award you these Battle Point(s).$"
# 915 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 916 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints::
# 917 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 883 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 918 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Oh, oh, oh!\p"
# 919 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Your Battle Points are maxed.\p"
# 920 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please come back after using\n"
# 921 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "some Battle Points.$"
# 922 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 923 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume::
# 924 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 890 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 925 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We've been waiting for you!\p"
# 926 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Before we resume your challenge,\n"
# 927 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I must save the game.$"
# 928 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 929 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting::
# 930 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 896 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 931 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I'm sorry to say this, but you didn't\n"
# 932 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "save before you quit playing last time.\p"
# 933 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "As a result, you have been disqualified\n"
# 934 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "from your challenge.$"
# 935 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 936 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WellReturnMons::
# 937 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 903 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 938 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We'll return your personal POKéMON.$"
# 939 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 940 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReceivedPrizeItem::
# 941 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 907 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 942 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 943 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 944 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 945 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle::
# 946 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 912 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 947 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of TRAINERS\n"
# 948 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "is put to the test!\p"
# 949 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Welcome to the BATTLE FACTORY!\p"
# 950 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I am your guide to the Battle Swap\n"
# 951 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Double Tournament.$"
# 952 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 953 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge::
# 954 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 920 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 955 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
# 956 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Swap Double challenge?$"
# 957 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 958 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge::
# 959 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 925 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 960 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap Double Tournament\n"
# 961 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "is a DOUBLE BATTLE competition using\l"
# 962 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "only rental POKéMON.\p"
# 963 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "First, you will be loaned three\n"
# 964 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "POKéMON specifically for this event.\p"
# 965 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Using the supplied rental POKéMON,\n"
# 966 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "you must conduct a DOUBLE BATTLE.\p"
# 967 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you win, you are permitted to trade\n"
# 968 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "one of your rental POKéMON.\p"
# 969 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Repeat this cycle of battling and\n"
# 970 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "trading--if you win seven times in\l"
# 971 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "a row, you will earn Battle Points.\p"
# 972 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 973 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "challenge, please save the game.\p"
# 974 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 975 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "you will be disqualified.$"
# 976 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 977 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead::
# 978 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 944 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 979 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations for defeating\n"
# 980 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "the FACTORY HEAD and winning\l"
# 981 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "seven matches in a row!$"
# 982 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 983 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints::
# 984 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 950 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 985 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your wealth of\n"
# 986 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "knowledge and keen intelligence,\l"
# 987 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "we award you these Battle Point(s).$"
# 988 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 989 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave::
# 990 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 956 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 991 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Let me exchange your POKéMON\n"
# 992 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "for our rental POKéMON.\p"
# 993 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I need to save the battle data,\n"
# 994 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "so please wait.$"
# 995 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 996 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch::
# 997 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 963 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 998 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to record your last\n"
# 999 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "BATTLE FACTORY match on your\l"
# 1000 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "FRONTIER PASS?$"
# 1001 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1002 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves::
# 1003 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 969 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1004 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Hi!\n"
# 1005 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You, there!\p"
# 1006 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Are you thinking that the events here\n"
# 1007 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "are easy since you don't need to have\l"
# 1008 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "a raised team of POKéMON?\p"
# 1009 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I wouldn't be too sure about winning\n"
# 1010 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "that easily.\p"
# 1011 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "If you don't have thorough knowledge\n"
# 1012 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "about POKéMON and their moves,\l"
# 1013 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "it will be tough to keep winning.$"
# 1014 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1015 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon::
# 1016 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 982 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1017 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I swapped for a weak POKéMON…\n"
# 1018 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I thought it was a good kind to have…\p"
# 1019 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "They wiped the floor with us…$"
# 1020 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1021 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons::
# 1022 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 988 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1023 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Things haven't been going my way\n"
# 1024 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "at all.\p"
# 1025 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You need to check your opponent's\n"
# 1026 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "POKéMON during battle to see if\l"
# 1027 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "they're any good.$"
# 1028 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1029 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints::
# 1030 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 996 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You know how the staff here give you\n"
# 1032 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "a few hints about your next opponent?\p"
# 1033 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Well, I'm a full-grown man, but I have\n"
# 1034 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "trouble figuring out their hints.$"
# 1035 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1036 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried::
# 1037 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1003 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1038 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Like, I'm really tough, but I get bored\n"
# 1039 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "really easily, so I just kept swapping\l"
# 1040 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "and battling over and over.\p"
# 1041 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "So anyway, when I kept entering\n"
# 1042 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Battle Swap events, I noticed they\l"
# 1043 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "varied the rental POKéMON.$"
# 1044 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1045 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RulesAreListed::
# 1046 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1012 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1047 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap rules are listed.$"
# 1048 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1049 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading::
# 1050 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1051 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 1052 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1053 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules::
# 1054 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1020 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1055 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In a Battle Swap event, you may use\n"
# 1056 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "only three POKéMON.\p"
# 1057 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Whether you are renting or swapping,\n"
# 1058 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "your team may not have two or more\l"
# 1059 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "of the same POKéMON.$"
# 1060 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1061 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules::
# 1062 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1028 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1063 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You may swap POKéMON only with\n"
# 1064 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "the TRAINER you have just defeated.\p"
# 1065 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You may swap for only those POKéMON\n"
# 1066 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "used by the beaten TRAINER.$"
# 1067 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1068 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules::
# 1069 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1035 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1070 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "After every battle you win, you may\n"
# 1071 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "swap for one of your defeated\l"
# 1072 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "opponent's POKéMON.\p"
# 1073 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You will not be able to swap POKéMON\n"
# 1074 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "with the seventh TRAINER in the event.$"
# 1075 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1076 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules::
# 1077 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1043 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1078 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "There are two key points to be aware\n"
# 1079 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "of when swapping POKéMON.\p"
# 1080 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "First, when swapping, you can't check\n"
# 1081 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "the stats of the POKéMON you are\l"
# 1082 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "about to receive.\p"
# 1083 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Second, the POKéMON on your team\n"
# 1084 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "are lined up in sequence, depending on\l"
# 1085 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "the order in which you rented them.\p"
# 1086 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "This sequence remains unchanged\n"
# 1087 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "even when swaps are made.$"
# 1088 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 1089 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules::
# 1090 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1056 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
# 1091 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In the Open Level, the rental POKéMON\n"
# 1092 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "and the opposing TRAINERS' POKéMON\l"
# 1093 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "are all Level 100.$"
