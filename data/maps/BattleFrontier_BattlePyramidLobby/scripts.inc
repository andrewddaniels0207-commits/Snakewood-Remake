# 1 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 9 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 2 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 3 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 11 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus
# 12 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 4 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving
# 14 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 5 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge
# 16 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 6 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 17 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge
# 18 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 7 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 19 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge
# 20 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.2byte 0
# 21 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 22 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 23 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 12 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 24 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 13 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_OnWarp:
# 27 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 14 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 28 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth
# 29 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 15 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 30 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth::
# 33 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 20 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 35 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 21 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 37 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 39 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 40 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus::
# 41 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 26 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 42 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_getstatus
# 43 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 45 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving::
# 47 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 31 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 49 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 32 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 50 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
# 51 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 33 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 53 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 34 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 54 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 55 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 35 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 57 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 36 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 58 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 59 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 37 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK, 0
# 61 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 38 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 63 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 39 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 65 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 40 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 67 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 41 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 69 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 71 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 72 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge::
# 73 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 46 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 75 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 47 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_isbrain
# 77 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 48 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 79 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_2
# 80 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_1:
# 81 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 51 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid, MSGBOX_DEFAULT
# 83 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 52 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints
# 85 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 86 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 87 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_2:
# 88 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 49 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 89 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing
# 90 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_1
# 91 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 92 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 93 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing::
# 94 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 56 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing, MSGBOX_DEFAULT
# 96 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 97 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 98 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 99 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints::
# 100 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 60 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 102 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 61 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 104 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints_2
# 105 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints_1:
# 106 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 64 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	clearflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 108 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 65 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 110 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 66 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 111 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 112 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 67 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 113 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 114 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 68 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 116 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 69 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 117 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 118 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 70 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
# 120 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 71 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 122 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 72 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 124 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 73 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 125 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 126 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 74 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 127 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 75 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_givepoints
# 130 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 76 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 132 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 77 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 134 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 78 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 136 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 79 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_setprize
# 138 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 80 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 140 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 81 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 141 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 142 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 82 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 143 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 144 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 83 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 84 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 148 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 85 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 150 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 86 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 152 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 153 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 154 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints_2:
# 155 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 62 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 156 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag
# 157 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints_1
# 158 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 159 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 160 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge::
# 161 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 91 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 162 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 163 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 92 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 164 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 165 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 93 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 166 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 167 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 94 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 168 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 169 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 95 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 171 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 96 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 172 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 173 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 97 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 98 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 177 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 99 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 178 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 179 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 100 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 180 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 181 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 101 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 182 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 183 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 102 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 185 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 103 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 187 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 104 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 189 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 105 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 190 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 106 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 192 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 107 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 194 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 195 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 108 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 196 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 197 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 109 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 198 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 199 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 110 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 201 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 202 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 204 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge::
# 205 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 115 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge
# 207 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 208 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 210 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_Attendant::
# 211 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 119 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 212 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lock
# 213 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 120 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 214 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	faceplayer
# 215 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 121 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PYRAMID
# 217 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 122 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 218 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 219 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 123 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 220 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 221 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 124 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 222 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid, MSGBOX_DEFAULT
# 223 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 224 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 225 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 226 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge::
# 227 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 128 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 228 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
# 229 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 129 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 230 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 231 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 130 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 233 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 131 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 234 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 132 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 236 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_2
# 237 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 134 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_3
# 239 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 136 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 240 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_4
# 241 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 138 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 242 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_5
# 243 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 244 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 245 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_2:
# 246 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 133 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 247 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge
# 248 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 249 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 250 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_3:
# 251 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 135 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 252 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge
# 253 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 254 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 255 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_4:
# 256 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 137 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 257 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 258 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 259 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 260 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_5:
# 261 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 139 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 263 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 266 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge::
# 267 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 144 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 268 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
# 269 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 145 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 270 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 271 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 146 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 272 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 273 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 147 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 274 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 275 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 148 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 276 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_3
# 277 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 150 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 278 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_4
# 279 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_1:
# 280 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 153 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkineligible
# 282 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 154 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 283 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 284 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_6
# 285 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_5:
# 286 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 157 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 287 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 288 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 158 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 289 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 290 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 159 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 291 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 292 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 160 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 293 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 294 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 161 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 296 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 162 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 297 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 298 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 163 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 299 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 300 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 164 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 301 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 302 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 165 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 304 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 166 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 305 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, 0
# 306 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_9
# 307 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_8:
# 308 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 169 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 309 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 310 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 170 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 311 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 312 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 171 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 313 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case NO, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_12
# 314 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 173 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 315 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case YES, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_13
# 316 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 317 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_14
# 318 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 319 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 320 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_3:
# 321 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 149 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 322 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 323 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_1
# 324 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_4:
# 326 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 151 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 327 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 328 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_1
# 329 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 330 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_6:
# 331 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 155 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 332 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons
# 333 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_5
# 334 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 335 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_9:
# 336 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 167 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 338 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_8
# 339 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 340 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_12:
# 341 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 172 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 342 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 343 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 344 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 345 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_13:
# 346 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 174 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 347 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge
# 348 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 349 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 350 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_14:
# 351 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 352 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 353 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 354 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 356 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge::
# 357 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 181 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 358 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 359 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 182 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 360 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 361 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 183 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 362 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_init
# 363 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 184 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 364 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, TRUE
# 365 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 185 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 366 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 367 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 186 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 368 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 369 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 187 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 370 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_seedfloor
# 371 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 188 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 372 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_settrainers
# 373 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 189 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 374 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 375 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 190 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 376 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 377 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 378 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	delay 2
# 379 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 192 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 380 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 381 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 382 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 383 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 194 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 384 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, 0
# 385 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge_1
# 386 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 387 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge_1:
# 389 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 195 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 390 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed
# 391 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 392 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 393 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 394 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge::
# 395 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 200 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 396 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 397 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 201 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 398 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 399 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 202 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 400 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid, MSGBOX_DEFAULT
# 401 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 203 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 402 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 403 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 204 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 404 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag
# 405 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 205 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 406 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 407 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 206 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 408 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 409 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 207 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 410 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 411 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 208 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 412 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 413 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 209 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 414 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 415 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 210 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 416 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 417 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 418 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 420 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge::
# 421 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 215 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 422 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid, MSGBOX_DEFAULT
# 423 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 216 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 424 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge
# 425 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 426 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 427 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 428 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons::
# 429 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 220 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 430 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 431 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 221 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 432 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_2
# 433 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 223 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_3
# 435 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 436 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 437 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_2:
# 438 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 222 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 439 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50
# 440 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 441 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 442 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_3:
# 443 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 224 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen
# 445 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 446 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 447 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 448 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50::
# 449 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 229 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 450 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 451 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 230 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 452 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 453 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 231 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 454 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 455 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 232 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 456 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge
# 457 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 458 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 459 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 460 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen::
# 461 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 236 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 462 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 463 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 237 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 464 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 465 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 238 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 466 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 467 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 239 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 468 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge
# 469 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 470 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 471 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 472 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed::
# 473 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 243 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 474 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 475 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 244 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 476 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 477 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 478 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 479 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 480 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge::
# 481 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 248 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 482 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 483 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 249 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 484 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 485 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 486 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 487 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 488 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge::
# 489 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 253 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 490 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge, MSGBOX_DEFAULT
# 491 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 492 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 493 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 494 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge::
# 495 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 257 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 496 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	release
# 497 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 498 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 499 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 500 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintGiver::
# 501 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 262 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 502 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 503 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 263 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 504 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_HINT_GIVER, Common_Movement_FacePlayer
# 505 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 264 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 506 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 507 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 265 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 508 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait, MSGBOX_DEFAULT
# 509 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 266 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 510 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_GiveHint
# 511 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 267 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 512 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot, MSGBOX_DEFAULT
# 513 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 268 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 515 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 516 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint::
# 519 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 273 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 521 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 274 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 522 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 523 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 275 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 524 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_3
# 525 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 277 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 526 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_4
# 527 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 279 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 528 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_5
# 529 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 281 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 530 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_6
# 531 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_1:
# 532 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 533 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 534 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_3:
# 535 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 276 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 536 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50
# 537 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_1
# 538 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_4:
# 540 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 278 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 541 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen
# 542 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_1
# 543 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 544 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_5:
# 545 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 280 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 546 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_NoHint
# 547 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_1
# 548 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 549 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_6:
# 550 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 282 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 551 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_NoHint
# 552 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHint_1
# 553 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 554 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 555 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NoHint::
# 556 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 557 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 558 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 559 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50::
# 560 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 292 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 561 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 562 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 293 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 563 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_50
# 564 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 294 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 565 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, FALSE
# 566 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50_2
# 567 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50_1:
# 568 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 297 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 569 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 570 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 298 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 571 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 572 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 573 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 574 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50_2:
# 575 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 295 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 576 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak
# 577 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50_1
# 578 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 579 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 580 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak::
# 581 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 303 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 582 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_50
# 583 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 304 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 584 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 585 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 586 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 587 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 588 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen::
# 589 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 309 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 590 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 591 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 310 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 592 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_OPEN
# 593 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 311 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 594 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, FALSE
# 595 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_ne BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen_2
# 596 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen_1:
# 597 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 314 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 598 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 599 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 315 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 600 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 601 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 602 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 603 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen_2:
# 604 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 312 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 605 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak
# 606 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen_1
# 607 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 608 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 609 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak::
# 610 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 320 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 611 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_OPEN
# 612 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 321 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 613 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 614 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 615 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 616 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 617 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment::
# 618 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 326 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 619 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 620 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 327 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 621 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special GetBattlePyramidHint
# 622 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 328 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 623 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 624 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 329 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 625 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_3
# 626 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 331 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 627 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_4
# 628 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 333 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 629 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_5
# 630 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 335 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 631 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_6
# 632 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 337 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 633 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_7
# 634 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 339 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 635 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 5, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_8
# 636 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 341 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 637 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 6, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_9
# 638 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 343 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 639 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 7, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_10
# 640 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 345 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 641 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 8, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_11
# 642 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 347 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 643 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 9, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_12
# 644 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 349 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 645 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 10, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_13
# 646 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 351 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 647 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 11, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_14
# 648 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 353 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 649 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 12, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_15
# 650 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 355 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 651 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 13, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_16
# 652 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 357 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 653 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 14, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_17
# 654 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 359 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 655 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 15, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_18
# 656 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 361 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 657 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 16, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_19
# 658 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 363 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 659 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 17, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_20
# 660 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 365 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 661 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 18, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_21
# 662 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 367 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 663 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 19, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_22
# 664 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1:
# 665 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 666 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 667 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_3:
# 668 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 330 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 669 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis
# 670 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 671 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 672 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_4:
# 673 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 332 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 674 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintPoison
# 675 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 676 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 677 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_5:
# 678 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 334 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 679 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintBurn
# 680 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 681 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 682 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_6:
# 683 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 336 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 684 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste
# 685 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 686 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 687 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_7:
# 688 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 338 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 689 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate
# 690 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 691 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 692 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_8:
# 693 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 340 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 694 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility
# 695 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 696 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 697 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_9:
# 698 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 342 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 699 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintIce
# 700 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 701 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 702 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_10:
# 703 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 344 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 704 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion
# 705 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 706 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 707 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_11:
# 708 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 346 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 709 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic
# 710 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 711 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 712 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_12:
# 713 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 348 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 714 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintRock
# 715 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 716 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 717 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_13:
# 718 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 350 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 719 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintFighting
# 720 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 721 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 722 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_14:
# 723 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 352 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 724 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintWeather
# 725 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 726 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 727 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_15:
# 728 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 354 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 729 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintBug
# 730 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 731 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 732 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_16:
# 733 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 356 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 734 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintDark
# 735 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 736 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 737 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_17:
# 738 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 358 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 739 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintWater
# 740 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 741 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 742 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_18:
# 743 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 360 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 744 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintGhost
# 745 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 746 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 747 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_19:
# 748 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 362 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 749 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintSteel
# 750 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 751 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 752 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_20:
# 753 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 364 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 754 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon
# 755 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 756 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 757 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_21:
# 758 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 366 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 759 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve
# 760 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 761 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 762 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_22:
# 763 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 368 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 764 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintNormal
# 765 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1
# 766 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 767 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 768 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis::
# 769 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 374 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 770 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintParalysis, MSGBOX_DEFAULT
# 771 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 772 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 773 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 774 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPoison::
# 775 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 379 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 776 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPoison, MSGBOX_DEFAULT
# 777 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 778 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 779 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 780 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintBurn::
# 781 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 384 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 782 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBurn, MSGBOX_DEFAULT
# 783 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 784 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 785 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 786 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste::
# 787 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 389 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 788 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPPWaste, MSGBOX_DEFAULT
# 789 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 790 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 791 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 792 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate::
# 793 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 394 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 794 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintLevitate, MSGBOX_DEFAULT
# 795 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 796 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 797 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 798 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility::
# 799 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 399 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 800 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility, MSGBOX_DEFAULT
# 801 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 802 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 803 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 804 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintIce::
# 805 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 404 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 806 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintIce, MSGBOX_DEFAULT
# 807 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 808 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 809 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 810 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion::
# 811 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 409 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 812 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintExplosion, MSGBOX_DEFAULT
# 813 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 814 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 815 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 816 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic::
# 817 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 414 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 818 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPsychic, MSGBOX_DEFAULT
# 819 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 820 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 821 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 822 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintRock::
# 823 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 419 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 824 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintRock, MSGBOX_DEFAULT
# 825 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 826 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 827 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 828 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintFighting::
# 829 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 424 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 830 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFighting, MSGBOX_DEFAULT
# 831 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 832 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 833 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 834 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintWeather::
# 835 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 429 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 836 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWeather, MSGBOX_DEFAULT
# 837 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 838 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 839 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 840 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintBug::
# 841 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 434 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 842 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBug, MSGBOX_DEFAULT
# 843 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 844 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 845 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 846 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintDark::
# 847 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 439 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 848 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintDark, MSGBOX_DEFAULT
# 849 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 850 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 851 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 852 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintWater::
# 853 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 444 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 854 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWater, MSGBOX_DEFAULT
# 855 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 856 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 857 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 858 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintGhost::
# 859 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 449 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 860 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintGhost, MSGBOX_DEFAULT
# 861 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 862 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 863 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 864 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintSteel::
# 865 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 454 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 866 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintSteel, MSGBOX_DEFAULT
# 867 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 868 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 869 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 870 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon::
# 871 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 459 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 872 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon, MSGBOX_DEFAULT
# 873 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 874 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 875 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 876 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve::
# 877 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 464 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 878 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve, MSGBOX_DEFAULT
# 879 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 880 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 881 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 882 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintNormal::
# 883 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 469 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 884 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintNormal, MSGBOX_DEFAULT
# 885 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 886 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 887 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 888 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ShowResults::
# 889 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 474 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 890 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 891 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 475 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 892 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PYRAMID
# 893 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 476 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 894 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitbuttonpress
# 895 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 477 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 896 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special RemoveRecordsWindow
# 897 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 478 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 898 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 899 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 900 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 901 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 902 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag::
# 903 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 483 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 904 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel
# 905 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 484 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 906 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel
# 907 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 485 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 908 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 909 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 486 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 910 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping, MSGBOX_DEFAULT
# 911 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 487 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 912 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK
# 913 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 488 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 914 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, 0
# 915 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag_2
# 916 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag_1:
# 917 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 491 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 918 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag, MSGBOX_DEFAULT
# 919 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 492 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 920 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag
# 921 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 922 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 923 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag_2:
# 924 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 489 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 925 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag
# 926 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag_1
# 927 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 928 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 929 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag::
# 930 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 496 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 931 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag, MSGBOX_DEFAULT
# 932 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 933 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 934 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 935 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag::
# 936 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 500 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 937 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
# 938 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 501 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 939 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 940 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 502 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 941 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 942 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 503 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 943 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 944 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 504 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 945 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel, MSGBOX_DEFAULT
# 946 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 505 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 947 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 948 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 506 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 949 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside
# 950 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 507 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 951 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 952 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 508 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 953 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel
# 954 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 509 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 955 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 956 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 957 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 958 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 959 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 513 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 960 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel:
# 961 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 514 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 962 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 963 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 515 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 964 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 965 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 516 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 966 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 967 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 517 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 968 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 969 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 518 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 970 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 971 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 519 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 972 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 973 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 520 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 974 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 975 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 521 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 976 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_down
# 977 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 522 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 978 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 979 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 980 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 525 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 981 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel:
# 982 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 526 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 983 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 984 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 527 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 985 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 986 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 528 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 987 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 988 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 529 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 989 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 990 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 530 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 991 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 992 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 531 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 993 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 994 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 532 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 995 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 996 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 533 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 997 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 998 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 999 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 536 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1000 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside:
# 1001 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 537 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1002 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_right
# 1003 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 538 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1004 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_left
# 1005 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 539 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1006 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 1007 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1008 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 542 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1009 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel:
# 1010 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 543 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1011 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 1012 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 544 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1013 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 1014 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 545 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1015 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 1016 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1017 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag::
# 1018 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 549 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1019 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake, MSGBOX_DEFAULT
# 1020 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 550 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1021 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 1022 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 551 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1023 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special TryStoreHeldItemsInPyramidBag
# 1024 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 552 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1025 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, 0
# 1026 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag_2
# 1027 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag_1:
# 1028 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 555 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1029 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
# 1030 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 556 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 1032 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 557 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1033 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 1034 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1035 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1036 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag_2:
# 1037 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 553 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1038 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag
# 1039 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag_1
# 1040 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1041 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1042 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag::
# 1043 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 562 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1044 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag, MSGBOX_DEFAULT
# 1045 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 1046 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1047 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1048 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep::
# 1049 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 567 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1050 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_FRONTIER_ITEM_CHOOSE, FALSE
# 1051 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 568 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1052 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 1053 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 569 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1054 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_3
# 1055 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 571 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1056 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_4
# 1057 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 573 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1058 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_5
# 1059 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 575 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1060 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_6
# 1061 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1:
# 1062 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1063 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1064 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_3:
# 1065 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 570 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1066 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag
# 1067 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1
# 1068 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1069 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_4:
# 1070 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 572 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1071 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty
# 1072 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1
# 1073 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1074 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_5:
# 1075 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 574 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1076 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
# 1077 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1
# 1078 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1079 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_6:
# 1080 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 576 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1081 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
# 1082 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1
# 1083 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1084 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1085 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag::
# 1086 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 582 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1087 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChooseItemsToTossFromPyramidBag
# 1088 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 583 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1089 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 1090 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 584 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1091 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 1092 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 585 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1093 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 1094 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 586 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1095 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 1096 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1097 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1098 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1099 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty::
# 1100 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 591 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1101 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special BattlePyramidChooseMonHeldItems
# 1102 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 592 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1103 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 1104 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 593 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1105 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 1106 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 594 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 1108 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 595 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1109 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 1110 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1111 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1112 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1113 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems::
# 1114 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 600 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1115 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 1116 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 601 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1117 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 1118 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_2
# 1119 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_1:
# 1120 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 1121 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1122 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_2:
# 1123 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 602 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1124 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems
# 1125 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_1
# 1126 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1127 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1128 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems::
# 1129 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 608 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1130 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem, MSGBOX_DEFAULT
# 1131 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 609 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1132 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 1133 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 610 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1134 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 1135 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 611 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1136 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 1137 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1138 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1139 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1140 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_Woman::
# 1141 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 616 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1142 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning, MSGBOX_NPC
# 1143 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1144 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1145 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1146 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_FatMan::
# 1147 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 621 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1148 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems, MSGBOX_NPC
# 1149 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1150 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1151 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1152 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesBoard::
# 1153 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 626 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1154 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 1155 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 627 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1156 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 1157 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 628 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1158 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 1159 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1160 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1161 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1162 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard::
# 1163 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 633 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1164 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading
# 1165 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 634 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1166 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 1167 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 635 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1168 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 15, 2, MULTI_BATTLE_PYRAMID_RULES, FALSE
# 1169 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 636 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1170 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 1171 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 637 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1172 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_3
# 1173 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 639 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1174 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_4
# 1175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 641 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_5
# 1177 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 643 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1178 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_6
# 1179 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 645 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1180 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_7
# 1181 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 647 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1182 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_8
# 1183 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1:
# 1184 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1185 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1186 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_3:
# 1187 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 638 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1188 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon
# 1189 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1
# 1190 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_4:
# 1192 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 640 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers
# 1194 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1
# 1195 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1196 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_5:
# 1197 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 642 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1198 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze
# 1199 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1
# 1200 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1201 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_6:
# 1202 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 644 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1203 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_RulesBag
# 1204 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1
# 1205 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1206 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_7:
# 1207 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 646 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1208 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
# 1209 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1
# 1210 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1211 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_8:
# 1212 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 648 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1213 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
# 1214 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1
# 1215 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1216 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1217 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon::
# 1218 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 654 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1219 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 1220 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 655 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1221 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 1222 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1223 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1224 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1225 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers::
# 1226 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 660 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1227 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules, MSGBOX_DEFAULT
# 1228 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 661 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1229 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 1230 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1231 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1232 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1233 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze::
# 1234 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 666 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1235 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules, MSGBOX_DEFAULT
# 1236 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 667 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1237 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 1238 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1239 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1240 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1241 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesBag::
# 1242 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 672 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1243 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules, MSGBOX_DEFAULT
# 1244 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 673 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1245 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 1246 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1247 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1248 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1249 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitRules::
# 1250 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 678 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1251 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 1252 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 1253 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1254 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1255 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid::
# 1256 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 682 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1257 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Where the courage of TRAINERS\n"
# 1258 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "is put to the test!\p"
# 1259 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Welcome to the BATTLE PYRAMID!\p"
# 1260 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I am your guide to\n"
# 1261 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the Battle Quest.$"
# 1262 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1263 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge::
# 1264 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 690 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1265 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Have you the courage to embark on\n"
# 1266 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the Battle Quest challenge?$"
# 1267 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1268 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge::
# 1269 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 695 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1270 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We await your challenge in the future!$"
# 1271 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1272 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid::
# 1273 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 699 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1274 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The Battle Quest is a battling\n"
# 1275 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "event in which you must explore\l"
# 1276 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the PYRAMID and try to reach the top.\p"
# 1277 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In the PYRAMID are seven floors of\n"
# 1278 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "mazes, all of them filled with not only\l"
# 1279 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "skilled TRAINERS but also wild POKéMON.\p"
# 1280 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You must enter with three POKéMON,\n"
# 1281 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "none of them holding an item.\p"
# 1282 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "On your ascent, you will be provided\n"
# 1283 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "with a BATTLE BAG for items.\p"
# 1284 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "If you fail in your challenge, any item\n"
# 1285 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "placed in the BATTLE BAG disappears.\p"
# 1286 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 1287 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "challenge, you must select “REST”\l"
# 1288 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and save the game.\p"
# 1289 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 1290 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "you will be disqualified.$"
# 1291 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1292 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode::
# 1293 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 719 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1294 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The PYRAMID offers two courses,\n"
# 1295 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Level 50 and Open Level.\l"
# 1296 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Which will you enter?$"
# 1297 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1298 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons::
# 1299 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 725 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1300 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Very good. Now, please select the three\n"
# 1301 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "POKéMON you wish to accompany you.$"
# 1302 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1303 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen::
# 1304 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 730 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1305 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A slight problem, adventurer!\p"
# 1306 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You seem to not have the three\n"
# 1307 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "POKéMON qualified for the challenge.\p"
# 1308 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please also remember to take all\n"
# 1309 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "items from your POKéMON.\p"
# 1310 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 1311 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1312 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50::
# 1313 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 739 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1314 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A slight problem, adventurer!\p"
# 1315 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You seem to not have the three\n"
# 1316 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "POKéMON qualified for the challenge.\p"
# 1317 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The three POKéMON must be different\n"
# 1318 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and each no higher than Level 50.\p"
# 1319 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please also remember to take all\n"
# 1320 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "items from your POKéMON.\p"
# 1321 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "EGGS{STR_VAR_1}.$"
# 1322 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1323 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd::
# 1324 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 750 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1325 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you are ready, please have\n"
# 1326 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "a word with me.$"
# 1327 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1328 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge::
# 1329 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 755 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1330 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Before you enter the BATTLE PYRAMID,\n"
# 1331 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the game must be saved. Is that okay?$"
# 1332 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1333 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid::
# 1334 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 760 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1335 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Very good. I will now show you into\n"
# 1336 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the BATTLE PYRAMID.$"
# 1337 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1338 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping::
# 1339 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 765 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1340 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We will hold your BAG for safekeeping,\n"
# 1341 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER}, while you are exploring.$"
# 1342 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1343 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag::
# 1344 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 770 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1345 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In exchange, please take this BATTLE\n"
# 1346 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "BAG, the one you used previously.$"
# 1347 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1348 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag::
# 1349 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 775 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1350 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In exchange, please take this\n"
# 1351 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "BATTLE BAG.$"
# 1352 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1353 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag::
# 1354 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 780 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1355 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} exchanged the BAG for\n"
# 1356 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the BATTLE BAG.$"
# 1357 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1358 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel::
# 1359 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 785 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1360 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you step on this floor panel,\n"
# 1361 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "you will be transported to a higher\l"
# 1362 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "floor in the PYRAMID.\p"
# 1363 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I hope for your sake that your\n"
# 1364 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "quest goes safely!$"
# 1365 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1366 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag::
# 1367 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 793 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1368 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A major problem, explorer!\p"
# 1369 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You did not save before ending\n"
# 1370 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "your challenge the last time.\p"
# 1371 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Consequently, your challenge has\n"
# 1372 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "been disqualified, I'm sorry to say.\p"
# 1373 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Here is the BAG we've been holding\n"
# 1374 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "for you.\p"
# 1375 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} got the BAG back.$"
# 1376 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1377 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid::
# 1378 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 804 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1379 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Excellent to see you back!\p"
# 1380 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You've conquered the PYRAMID!\n"
# 1381 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "How splendid!$"
# 1382 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1383 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake::
# 1384 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 810 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1385 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ah, a slight problem.\p"
# 1386 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "At least one POKéMON is holding\n"
# 1387 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "an item.\p"
# 1388 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I'm sorry to say, items obtained in\n"
# 1389 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the PYRAMID cannot be taken away.$"
# 1390 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1391 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag::
# 1392 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 818 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1393 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "All items held by your POKéMON will be\n"
# 1394 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "moved to your BATTLE BAG, {PLAYER}.$"
# 1395 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1396 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep::
# 1397 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 823 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1398 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG cannot hold all your\n"
# 1399 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "items, I'm sorry to say.\p"
# 1400 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please pick the items you'll keep in the\n"
# 1401 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "BATTLE BAG, and with your POKéMON.$"
# 1402 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1403 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem::
# 1404 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 830 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1405 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "At least one POKéMON is still\n"
# 1406 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "holding an item.$"
# 1407 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1408 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep::
# 1409 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 835 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1410 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please pick the items you'll keep in the\n"
# 1411 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "BATTLE BAG, and with your POKéMON.$"
# 1412 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1413 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld::
# 1414 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 840 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1415 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} returned everything that\n"
# 1416 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the POKéMON held.$"
# 1417 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1418 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept::
# 1419 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 845 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1420 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG you used will be kept\n"
# 1421 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "in readiness for your next challenge.\p"
# 1422 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} turned the BATTLE BAG over\n"
# 1423 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "for the BAG's return.$"
# 1424 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1425 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait::
# 1426 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 852 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1427 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I must record your results.\n"
# 1428 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please wait.$"
# 1429 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1430 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis::
# 1431 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 857 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1432 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "As a memento for conquering\n"
# 1433 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the BATTLE PYRAMID, please take this.$"
# 1434 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1435 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReceivedPrizeItem::
# 1436 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 862 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1437 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 1438 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 1439 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1440 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BagIsFull::
# 1441 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 867 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1442 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…Ah…\n"
# 1443 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Your BAG appears to be filled.\p"
# 1444 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please return after you've organized\n"
# 1445 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "your BAG's contents.$"
# 1446 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1447 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag::
# 1448 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 874 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1449 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "How disappointing for you…\p"
# 1450 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Here is the BAG we've been holding\n"
# 1451 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "for you.\p"
# 1452 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} got the BAG back.$"
# 1453 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1454 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge::
# 1455 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 881 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1456 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We look forward to your\n"
# 1457 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "next challenge!$"
# 1458 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1459 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HereIsPrize::
# 1460 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 886 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1461 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We have been looking forward to\n"
# 1462 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "your arrival!\p"
# 1463 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Here is your prize for conquering\n"
# 1464 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the PYRAMID.$"
# 1465 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1466 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait::
# 1467 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 893 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1468 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Welcome…\p"
# 1469 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I shall be pleased to tell you what\n"
# 1470 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "misfortunes await in the PYRAMID…$"
# 1471 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1472 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_Aah::
# 1473 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 899 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1474 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
# 1475 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\p"
# 1476 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
# 1477 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Aah!$"
# 1478 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1479 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintParalysis::
# 1480 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 906 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1481 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see a shower of sparks…\p"
# 1482 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And in it, I see your POKéMON\n"
# 1483 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "struggling with paralysis…$"
# 1484 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1485 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPoison::
# 1486 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 912 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1487 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see poison…\p"
# 1488 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1489 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from the effects of poison…$"
# 1490 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1491 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintBurn::
# 1492 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 918 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1493 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see bright red flames…\p"
# 1494 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1495 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from burns…$"
# 1496 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1497 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPPWaste::
# 1498 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 924 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1499 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I sense the tremendous pressure of\n"
# 1500 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "unrequited anger…\p"
# 1501 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "It is a curse…\p"
# 1502 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON drained of\n"
# 1503 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Power Points and having no recourse\l"
# 1504 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "but to use STRUGGLE…$"
# 1505 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1506 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintLevitate::
# 1507 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 933 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1508 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see POKéMON loftily airborne…\p"
# 1509 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON frustrated\n"
# 1510 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "by powerless GROUND-type moves…$"
# 1511 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1512 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility::
# 1513 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 939 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1514 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I sense terrific energy rising from\n"
# 1515 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the ground below…\p"
# 1516 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON unable to\n"
# 1517 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "escape the power's clutches…$"
# 1518 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1519 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintIce::
# 1520 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 946 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1521 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see ICE-type POKéMON…\p"
# 1522 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON fighting\n"
# 1523 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the freezing effects of ice…$"
# 1524 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1525 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintExplosion::
# 1526 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 952 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1527 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see a flurry of moves that imperil\n"
# 1528 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the user…\p"
# 1529 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON falling\n"
# 1530 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "to them…$"
# 1531 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1532 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPsychic::
# 1533 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 959 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1534 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see PSYCHIC-type POKéMON…\p"
# 1535 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON in torment\n"
# 1536 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from PSYCHIC moves…$"
# 1537 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1538 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintRock::
# 1539 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 965 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1540 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see ROCK-type POKéMON…\p"
# 1541 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1542 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from ROCK moves…$"
# 1543 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1544 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintFighting::
# 1545 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 971 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1546 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see FIGHTING-type POKéMON…\p"
# 1547 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON pummeled\n"
# 1548 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "by FIGHTING moves…$"
# 1549 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1550 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintWeather::
# 1551 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 977 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1552 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "RAIN DANCE… SUNNY DAY…\n"
# 1553 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "SANDSTORM… HAIL…\p"
# 1554 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see POKéMON that become stronger\n"
# 1555 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "with the weather…\p"
# 1556 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON confounded\n"
# 1557 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "by different types of moves…$"
# 1558 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1559 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintBug::
# 1560 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 986 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1561 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see BUG-type POKéMON…\p"
# 1562 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1563 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from different kinds of attacks…$"
# 1564 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1565 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintDark::
# 1566 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 992 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1567 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see DARK-type POKéMON…\p"
# 1568 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1569 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from DARK-type moves…$"
# 1570 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1571 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintWater::
# 1572 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 998 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1573 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see WATER-type POKéMON…\p"
# 1574 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1575 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from WATER-type moves…$"
# 1576 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1577 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintGhost::
# 1578 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1004 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1579 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see GHOST-type POKéMON…\p"
# 1580 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1581 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from GHOST-type moves…$"
# 1582 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1583 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintSteel::
# 1584 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1010 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1585 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see STEEL-type POKéMON…\p"
# 1586 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1587 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from enormously powerful moves…$"
# 1588 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1589 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon::
# 1590 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1016 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1591 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see flying POKéMON…\p"
# 1592 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1593 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from enormously powerful moves…$"
# 1594 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1595 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve::
# 1596 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1022 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1597 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see those that have evolved from\n"
# 1598 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the power of stones…\p"
# 1599 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I also sense fire, water,\n"
# 1600 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and electricity…\p"
# 1601 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1602 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from those three powers…$"
# 1603 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1604 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintNormal::
# 1605 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1031 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1606 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see NORMAL-type POKéMON…\p"
# 1607 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…And, I see your POKéMON suffering\n"
# 1608 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "from enormously powerful moves…$"
# 1609 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1610 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot::
# 1611 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1037 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1612 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Whether you believe my fortunes\n"
# 1613 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "or not, the choice is yours…\p"
# 1614 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The future can be changed anytime…\n"
# 1615 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I wish you safe passage…$"
# 1616 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1617 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning::
# 1618 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1044 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1619 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Did you know?\p"
# 1620 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "If you run fast, TRAINERS may notice\n"
# 1621 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and come after you for a battle.\p"
# 1622 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "So, if you want to avoid TRAINERS,\n"
# 1623 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "don't catch their eyes, but sneak\l"
# 1624 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "cautiously and quietly past them.$"
# 1625 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1626 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems::
# 1627 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1053 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1628 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Awaaaaaaarrrrgh!\p"
# 1629 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I had a whole lot of items, but I lost\n"
# 1630 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "them all when I lost!\p"
# 1631 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Awaaaaaaarrrrgh!$"
# 1632 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1633 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing::
# 1634 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1060 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1635 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Welcome back!\n"
# 1636 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You've done the unthinkable!\p"
# 1637 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You've defeated the PYRAMID KING\n"
# 1638 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "and conquered the BATTLE PYRAMID!$"
# 1639 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1640 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints::
# 1641 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1067 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1642 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Young explorer!\n"
# 1643 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In commendation of your courage,\l"
# 1644 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "we give you these Battle Point(s)!$"
# 1645 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1646 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_RulesAreListed::
# 1647 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1073 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1648 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The Battle Quest rules are listed.$"
# 1649 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1650 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading::
# 1651 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1077 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1652 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 1653 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1654 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules::
# 1655 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1081 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1656 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When the PYRAMID is conquered,\n"
# 1657 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "the wild POKéMON that appear in it\l"
# 1658 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "are replaced by different kinds.\p"
# 1659 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Explore, observe, and learn what kinds\n"
# 1660 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "of wild POKéMON you may encounter.$"
# 1661 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1662 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules::
# 1663 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1089 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1664 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "TRAINERS are lying in wait for you\n"
# 1665 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "inside the PYRAMID.\p"
# 1666 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "On each floor, there are up to\n"
# 1667 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "eight TRAINERS.\p"
# 1668 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you defeat a TRAINER, you will\n"
# 1669 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "get a helpful hint for your adventure.$"
# 1670 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1671 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules::
# 1672 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1098 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1673 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The mazes in the PYRAMID rearrange\n"
# 1674 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "themselves every time you enter it.\p"
# 1675 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The mazes are poorly lit.\n"
# 1676 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "You must advance with caution.\p"
# 1677 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The light grows brighter whenever you\n"
# 1678 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "defeat a wild POKéMON or a TRAINER.$"
# 1679 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 1680 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules::
# 1681 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1107 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
# 1682 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG serves as your BAG\n"
# 1683 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "while in the PYRAMID.\p"
# 1684 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "There are two separate BATTLE BAGS--\n"
# 1685 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "one each for the Level 50 and\l"
# 1686 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Open Level adventures.\p"
# 1687 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "They each can hold up to 99 pieces\n"
# 1688 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "of ten kinds of items.\p"
# 1689 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The contents of the BATTLE BAG are\n"
# 1690 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "lost if you fail in your quest.$"
